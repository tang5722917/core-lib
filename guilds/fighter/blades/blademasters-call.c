//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        knowledgeResearchItem::reset(arg);
        addSpecification("name", "Blademaster's Call");
        addSpecification("source", "fighter");
        addSpecification("description", "This skill provides the user with the "
            "knowledge to decrease the stamina cost for which they can use their "
            "blade attack abilities.");

        addPrerequisite("level",
            (["type":"level",
                "guild": "fighter",
                "value": 21
            ]));
        addPrerequisite("guilds/fighter/blades/blademasters-reserve.c",
            (["type":"research"]));

        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addSpecification("affected research", ([
            "Slash": 5,
            "Thrust": 5,
            "Whirlwind": 10,
            "Cleave": 10,
            "Piercing Strike": 10,
        ]));
        addSpecification("affected research type", "decrease cost");
    }
}
