//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/armor.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "Leather jacket");
    set("short", "Leather jacket");
    set("aliases", ({ "leather", "jacket", "leather jacket" }));
    set("blueprint", "leather jacket");
}
