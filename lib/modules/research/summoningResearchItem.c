//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/modules/research/activeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected nomask int addSpecification(string type, mixed value)
{
    int ret = 0;
    switch(type)
    {
        case "number to summon":
        case "persona level":
        case "maximum number to summon":
        {
            if(intp(value) && (value > 0))
            {
                specificationData[type] = value;
                ret = 1;
            }
            else
            {
                raise_error(sprintf("ERROR - summoningResearchItem: the '%s'"
                    " specification must be an integer greater than 0.\n",
                    type));
            }
            break;
        }
        case "persona":
        {
            if(stringp(value) && getDictionary("persona")->isValidPersona(value))
            {
                specificationData[type] = value;
                ret = 1;
            }
            else
            {
                raise_error("ERROR - summoningResearchItem: the 'persona'"
                    " specification must be a valid persona.\n");
            }
            break;
        }
        case "modifiers":
        {
            if(mappingp(value) && (sizeof(value) == sizeof(filter(value,
                (: { 
                       int isOk = (getDictionary("research")->researchObject($1) &&
                           pointerp($2));

                       if (sizeof($2))
                       {
                           foreach(mapping entry in $2)
                           {
                               isOk &&= member(entry, "modifier") &&
                                   member(entry, "value") &&
                                   getDictionary("bonuses")->isValidBonus(
                                       regreplace(entry["modifier"], 
                                           "(bonus|penalty to|apply) ", "", 1));
                           }
                       }
                       else
                       {
                           isOk = 0;
                       }
                       return isOk;
                   } :)))))
            {
                specificationData[type] = value;
                ret = 1;
            }
            else
            {
                raise_error(sprintf("ERROR - summoningResearchItem: the '%s'"
                    " specification must be a valid modifier mapping.\n",
                    type));
            }
            break;
        }
        default:
        {
            ret = "activeResearchItem"::addSpecification(type, value);
        }
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
private nomask object modifierObject(object summoning, object modifier)
{
    object ret = modifier;
    if (!ret)
    {
        ret = clone_object("/lib/items/modifierObject.c");

        string fullyQualifiedName = program_name(this_object()) + "#" +
            summoning->RealName();

        ret->set("fully qualified name", fullyQualifiedName);
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
private nomask void setSummoningModifier(object modifierObj, object summoning, 
    mapping modifier)
{
    string key = regreplace(modifier["modifier"], "apply ", "", 1);

    int currentValue = modifierObj->query(key);
    modifierObj->set(key, modifier["value"] + currentValue);
}

/////////////////////////////////////////////////////////////////////////////
protected nomask int executeOnSelf(string unparsedCommand, object owner,
    string researchName)
{
    int ret = 0;

    if (member(specificationData, "persona"))
    {
        ret = 1;
        object summoning = clone_object("/lib/realizations/summoning.c");

        int personaLevel = member(specificationData, "persona level") ?
            specificationData["persona level"] : 0;

        summoning->SetUpPersonaOfLevel(specificationData["persona"], 
            personaLevel);
        summoning->setLeader(owner);
        summoning->registerEvent(owner);

        if (member(specificationData, "modifiers"))
        {
            object dictionary = getDictionary("research");
            object modifierObj = 0;
            foreach(string research in specificationData["modifiers"])
            {
                if (owner->isResearched(research))
                {
                    foreach(mapping modifier in
                        specificationData["modifiers"][research])
                    {
                        modifierObj = modifierObject(summoning, modifierObj);
                        setSummoningModifier(modifierObj, summoning, modifier);
                    }
                }
            }
            if (modifierObj)
            {
                modifierObj->registerModifierWithTargetList(({ summoning }));
                summoning->hitPoints(summoning->maxHitPoints());
                summoning->spellPoints(summoning->maxSpellPoints());
                summoning->staminaPoints(summoning->maxStaminaPoints());
            }
        }
        move_object(summoning, environment(owner));
    }

    if (ret && member(specificationData, "use ability message") &&
        stringp(specificationData["use ability message"]))
    {
        displayMessage(specificationData["use ability message"],
            owner, owner);
    }
    else
    {
        displayMessageToSelf("Unable to summon a creature. This is a bug.\n", 
            owner);
    }

    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        activeResearchItem::reset(arg);
        addSpecification("scope", "self");
        addSpecification("effect", "summoning");
    }
}

/////////////////////////////////////////////////////////////////////////////
private nomask string getRelatedBonuses(mapping modifiers,
    string colorConfiguration, object configuration)
{
    string ret = "";
    string *bonuses =
        sort_array(filter(modifiers,
            (: (sizeof(regexp(({ $1["modifier"] }), "bonus")) &&
                ($1["value"] > 0)) :)), (: $1["modifier"] > $2["modifier"] :));

    if (sizeof(bonuses))
    {
        foreach(mapping bonus in bonuses)
        {
            ret += configuration->decorate(sprintf("%18s(+%d) ", "", 
                bonus["value"]), "bonus modifier", "research",
                colorConfiguration) +
                configuration->decorate(capitalize(
                    regreplace(bonus["modifier"], "bonus (.+)", "Bonus \\1\n", 1)),
                    "bonus text", "research", colorConfiguration);
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
private nomask string getRelatedPenalties(mapping modifiers,
    string colorConfiguration, object configuration)
{
    string ret = "";
    string *penalties =
        sort_array(filter(modifiers,
            (: (sizeof(regexp(({ $1["modifier"] }), "penalty to")) &&
                ($1["value"] > 0)) || (sizeof(regexp(({ $1["modifier"] }), "bonus")) &&
                    ($1["value"] < 0)) :)), (: $1["modifier"] > $2["modifier"] :));

    if (sizeof(penalties))
    {
        foreach(mapping penalty in penalties)
        {
            ret += configuration->decorate(sprintf("%18s(-%d) ", "", 
                abs(penalty["value"])), "penalty modifier", "research",
                colorConfiguration) +
                configuration->decorate(capitalize(
                    regreplace(penalty["modifier"], 
                        "(bonus|penalty to) (.+)", "Penalty to \\2\n", 1)),
                    "penalty text", "research", colorConfiguration);
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
private nomask string getRelatedApplies(mapping modifiers,
    string colorConfiguration, object configuration)
{
    string ret = "";

    string *applies =
        sort_array(filter(modifiers,
            (: (sizeof(regexp(({ $1["modifier"] }), "apply")) &&
                ($1["value"] > 0)) :)), (: $1["modifier"] > $2["modifier"] :));

    if (sizeof(applies))
    {
        foreach(mapping apply in applies)
        {
            ret += configuration->decorate(sprintf("%18s%s", "",
                capitalize(regreplace(apply["modifier"], "apply (.+)", 
                    "\\1 is applied to summoned creature\n"))),
                "apply modifier", "research", colorConfiguration); 
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask string getRelatedResearchEffects(object caller,
    string colorConfiguration, object configuration)
{
    string ret = "";

    if (member(specificationData, "modifiers") &&
        member(specificationData["modifiers"], program_name(caller)))
    {
        ret += configuration->decorate(sprintf("%-15s :\n", "Effects for " +
            query("name")), "bonus modifier", "research", colorConfiguration);

        ret += getRelatedBonuses(
                specificationData["modifiers"][program_name(caller)],
                colorConfiguration, configuration) +
            getRelatedPenalties(
                specificationData["modifiers"][program_name(caller)],
                colorConfiguration, configuration) +
            getRelatedApplies(
                specificationData["modifiers"][program_name(caller)],
                colorConfiguration, configuration);
    }

    return ret;
}
