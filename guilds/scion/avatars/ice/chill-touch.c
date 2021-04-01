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
        addSpecification("name", "Chill Touch");
        addSpecification("source", "Scion of Dhuras Guild");
        addSpecification("description", "This research gives your "
            "avatar the `Chill Touch' spell.");

        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addSpecification("related research", ({
            "guilds/scion/avatars/ice/root.c",
        }));
    }
}
