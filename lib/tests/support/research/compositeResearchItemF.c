//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        persistedActiveResearchItem::reset(arg);
        addSpecification("name", "Gittern shredding");
        addSpecification("scope", "targeted");
        addSpecification("research type", "granted");
        addSpecification("composite research",
            "lib/tests/support/research/compositeRoot.c");
        addSpecification("composite type", "instrumental solo");
        addSpecification("default composite description",
            "Shreddifying for fun.");

        addSpecification("penalty to attack", 5);
        addSpecification("duration", 12);
    }
}
