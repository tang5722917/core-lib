//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Flux Condenser");
    addSpecification("source", "aeromancer");
    addSpecification("description", "This skill provides the user with "
        "knowledge that enhances the aeromancer's electricity-based "
        "abilities.");

    addPrerequisite("level",
        (["type":"level",
            "guild": "aeromancer",
            "value": 63
        ]));

    addPrerequisite("/guilds/aeromancer/lightning/plasma-eruption.c",
        (["type":"research"]));

    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("affected research", ([
        "Ball Lightning": 25,
        "Electric Whip": 25,
        "Lightning Bolt": 25,
        "Lightning Blades": 25,
        "Shock": 25,
        "Shocking Lash": 25,
        "Shocking Mist": 25,
        "Shocking Wave": 25,
        "Static Discharge": 25,
        "Raging Tempest": 25,
        "Thunderclap": 25,
        "Thundering Swarm": 25,
    ]));
    addSpecification("affected research type", "percentage");
}
