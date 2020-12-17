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
        addSpecification("name", "Angannon");
        addSpecification("source", "Aegis Guard");
        addSpecification("description", "This skill provides the user with the "
            "knowledge of a defensive maneuver where the dominant foot is "
            "forward, the pommel held just inside the knee with the tip "
            "pointed at the foe's face.");
        addSpecification("limited by", (["equipment":({"dagger", "short sword",
            "long sword", "hand and a half sword", "two-handed sword" })]));

        addPrerequisite("level", 
            (["type":"level", 
              "guild": "Aegis Guard",
              "value": 6 ]));

        addPrerequisite("guilds/aegis-guard/forms/sword-guarding/an-craban.c",
            (["type":"research"]));

        addSpecification("affected research", ([
            "Athra": 10,
            "Celeg": 10
        ]));
        addSpecification("affected research type", "percentage");

        addSpecification("scope", "self");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addSpecification("bonus defense", 2);
        addSpecification("bonus parry", 2);
        addSpecification("equivalence", "eisenport");
    }
}
