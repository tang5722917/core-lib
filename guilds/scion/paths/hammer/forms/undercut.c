//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Undercut");
    addSpecification("source", "Scion of Dhuras");
    addSpecification("description", "This skill provides the user with the "
        "knowledge of how to attack with a pounding undercut.");
    addSpecification("limited by", (["equipment":({ "hammer" })]));

    addPrerequisite("level", 
        (["type":"level", 
          "guild": "Scion of Dhuras",
          "value": 3 ]));

    addPrerequisite("/guilds/scion/paths/hammer/root.c",
        (["type":"research"]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus hammer", 1);
    addSpecification("bonus attack", 1);
}
