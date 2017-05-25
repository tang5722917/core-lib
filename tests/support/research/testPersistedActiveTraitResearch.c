//*****************************************************************************
// Copyright (c) 2017 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/persistedActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void init()
{
    persistedActiveResearchItem::init();
    addSpecification("name", "Temp Trait research");
    addSpecification("scope", "targeted");
    addSpecification("research type", "granted");
    addSpecification("cooldown", 4);
    addSpecification("command template", "throw turnip at ##Target##");
    addSpecification("trait", "lib/tests/support/traits/testTraitWithDuration.c");
}

