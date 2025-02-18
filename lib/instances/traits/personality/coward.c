//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/traits/baseTrait.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("type", "personality");
    addSpecification("name", "coward");
    addSpecification("description", "You are a craven - when strife "
        "comes calling, you flee to your safe place.");
    addSpecification("root", "coward");
    addSpecification("opposing root", "brave");
    addSpecification("opinion", 5);
    addSpecification("opposing opinion", -10);
}
