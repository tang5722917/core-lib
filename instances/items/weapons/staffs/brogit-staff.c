//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/weapon.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Brogit staff");
        set("short", "Brogit staff");
        set("aliases", ({ "staff", "brogit staff" }));
        set("blueprint", "brogit staff");
    }
}
