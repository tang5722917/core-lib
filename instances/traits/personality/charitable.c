//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/traits/baseTrait.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        addSpecification("type", "personality");
        addSpecification("name", "charitable");
        addSpecification("description", "You give freely of yourself - "
            "be it monetarily or of your time - to those in need.");
        addSpecification("root", "generous");
        addSpecification("opposing root", "miserly");
        addSpecification("opinion", 20);
        addSpecification("opposing opinion", -5);
        addSpecification("bonus persuasion", 1);
        addSpecification("bonus diplomacy", 1);
        "baseTrait"::reset(arg);
    }
}
