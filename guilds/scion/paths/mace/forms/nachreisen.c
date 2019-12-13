//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        passiveResearchItem::reset(arg);
        addSpecification("name", "Nachreisen");
        addSpecification("source", "Scion of Dhuras Guild");
        addSpecification("description", "This skill provides the user with the "
            "knowledge of a maneuver wherein a counter-attack is placed "
            "after an opponent has pulled back from an attack, missed on "
            "an attack, or has attempted another action in place of an attack.");
        addSpecification("limited by", (["equipment":({ "mace", "flail" })]));

        addPrerequisite("level", 
            (["type":"level", 
              "guild": "Scion of Dhuras",
              "value": 16 ]));

        addPrerequisite("lib/guilds/scion/paths/mace/forms/striking.c",
            (["type":"research"]));

        addSpecification("scope", "self");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addSpecification("bonus mace", 1);
        addSpecification("bonus flail", 1);
        addSpecification("bonus attack", 2);
    }
}
