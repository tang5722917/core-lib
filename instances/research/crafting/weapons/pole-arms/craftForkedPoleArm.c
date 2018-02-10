//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        knowledgeResearchItem::reset(arg);
        addSpecification("name", "Craft Forked Pole Arm");
        addSpecification("source", "crafting");
        addSpecification("description", "This skill provides the user with the "
            "knowledge required to craft basic pole arms like the trident or war fork.");
        addSpecification("research type", "granted");
        addPrerequisite("lib/instances/research/crafting/weapons/pole-arms/craftBasicPoleArm.c", (["type":"research"]));
    }
}
