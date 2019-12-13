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
        addSpecification("name", "Khazurath's Way");
        addSpecification("source", "crafting");
        addSpecification("description", "This skill provides the user with the "
            "advanced techniques mastered by the great smiths of Khazurath.");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addPrerequisite("armorer", (["type":"skill", "value" : 37]));
        addPrerequisite("spellcraft", (["type":"skill", "value" : 37]));
        addPrerequisite("metal crafting", (["type":"skill", "value" : 28]));
        addPrerequisite("gem crafting", (["type":"skill", "value" : 28]));

        addPrerequisite("lib/instances/research/crafting/armor/chainmail/khazuraths-tradition.c", 
            (["type":"research"]));

        addSpecification("limited by", (["crafting type":"chainmail"]));

        addSpecification("bonus crafting value multiplier", 20);
        addSpecification("bonus gem crafting", 5);
        addSpecification("bonus spellcraft", 5);
        addSpecification("bonus armorer", 5);
    }
}
