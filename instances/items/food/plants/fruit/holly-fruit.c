//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/food.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Holly Fruit");
        set("short", "Holly Fruit");
        set("aliases", ({ "holly fruit", "holly" }));
        set("blueprint", "holly fruit");
    }
}
