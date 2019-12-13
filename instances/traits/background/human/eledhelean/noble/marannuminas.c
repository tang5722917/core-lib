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
        addSpecification("type", "racial");
        addSpecification("name", "House Marannuminas");
        addSpecification("description", "");
        addSpecification("root", "human");
        addSpecification("opposing root", "orc");
        addSpecification("opinion", 5);
        addSpecification("opposing opinion", -5);
        "baseTrait"::reset(arg);
    }
}
