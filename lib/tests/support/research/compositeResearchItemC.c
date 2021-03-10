//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        instantaneousActiveResearchItem::reset(arg);
        addSpecification("name", "Singy blast");
        addSpecification("source", "blarg");
        addSpecification("composite research", 
            "lib/tests/support/research/compositeRoot.c");
        addSpecification("composite type", "lyric");
        addSpecification("default composite description",
            "Sing me a singy blast");

        addSpecification("description", "This is limited active research");
        addSpecification("usage summary", "This lyrically blargifies stuff.");
        addSpecification("scope", "targeted");
        addSpecification("research type", "granted");
        addSpecification("research cost", 1);
        addSpecification("damage spell points", ({ ([
            "probability": 100,
            "base damage": 25,
            "range": 0
        ]) }));
        addSpecification("damage type", "sonic");
        addSpecification("event handler", "usedResearchEvent");
        addSpecification("use ability message", "##InitiatorName## ##Infinitive::strum## a bit.");
    }
}
