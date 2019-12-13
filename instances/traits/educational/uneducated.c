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
        addSpecification("type", "educational");
        addSpecification("name", "uneducated");
        addSpecification("description", "You never really thought much of your studies and it shows. You lack an understanding of the various erudite pursuits.");
        addSpecification("root", "uneducated");
        addSpecification("opposing root", "educated");
        addSpecification("opinion", 5);
        addSpecification("opposing opinion", -5);
        addSpecification("penalty to intelligence", 1);
        addSpecification("penalty to wisdom", 1);
        addSpecification("penalty to ancient history", 1);
        addSpecification("penalty to local history", 1);
        addSpecification("penalty to astronomy", 1);
        addSpecification("penalty to chemistry", 1);
        addSpecification("penalty to engineering", 1);
        addSpecification("penalty to geology", 1);
        addSpecification("penalty to mathematics", 1);
        addSpecification("penalty to linguistics", 1);
        addSpecification("penalty to philosophy", 1);
        addSpecification("penalty to physics", 1);
        addSpecification("penalty to reading", 1);
        addSpecification("penalty to writing", 1);
        addSpecification("cost", -1);
        "baseTrait"::reset(arg);
    }
}

