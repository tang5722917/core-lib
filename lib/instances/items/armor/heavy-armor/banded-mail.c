//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/armor.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "Banded mail");
    set("short", "Banded mail");
    set("aliases", ({ "armor", "mail", "banded mail" }));
    set("blueprint", "banded mail");
}
