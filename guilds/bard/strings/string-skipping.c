//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "String Skipping");
    addSpecification("source", "bard");
    addSpecification("description", "This research increases the "
        "effectiveness of the various strumming techniques.");

    addSpecification("limited by", ([
        "equipment": ({ "instrument: plucked", "instrument: bowed" }) ]));

    addPrerequisite("level", ([  
        "type":"level",
        "guild": "bard",
        "value": 25
    ]));

    addPrerequisite("/guilds/bard/strings/slide-techniques.c",
        (["type":"research"]));

    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("affected research", ([
        "Riff of Report": 25,
        "Coronach of Capitulation": 25,
        "Requiem of Release": 25,
        "Dirge of the Damned": 25,
    ]));
    addSpecification("affected research type", "percentage");
}
