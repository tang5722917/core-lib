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
        addSpecification("name", "Wechsel");
        addSpecification("source", "Scion of Dhuras Guild");
        addSpecification("description", "This skill provides the user with the "
            "knowledge of a defensive maneuver where the shaft is "
            "held to the side of the wielder's head, the staff's head pointed "
            "gently toward the ground and perpendicular to one's foe.");
        addSpecification("limited by", (["equipment":({ "staff" })]));

        addPrerequisite("level", 
            (["type":"level", 
              "guild": "Scion of Dhuras",
              "value": 3 ]));

        addPrerequisite("lib/guilds/scion/paths/staff/forms/from-the-roof.c",
            (["type":"research"]));

        addSpecification("scope", "self");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addSpecification("bonus defense", 1);
        addSpecification("bonus parry", 2);
    }
}
