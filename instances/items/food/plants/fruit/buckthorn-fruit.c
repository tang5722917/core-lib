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
        set("name", "Buckthorn Fruit");
        set("short", "Buckthorn Fruit");
        set("aliases", ({ "buckthorn fruit", "buckthorn" }));
        set("blueprint", "buckthorn fruit");
    }
}
