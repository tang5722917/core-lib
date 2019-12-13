//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setInterior("/lib/environment/interiors/limestone-interior-shop.c");
    addItem("/lib/environment/items/lighting/sconce.c", "west");
    addItem("/lib/environment/items/lighting/window.c", "north");

    addExit("south", "/lib/tutorial/eledhel/southern-city/swordsmith/1x1.c");
    addExitWithDoor("east", "/lib/tutorial/eledhel/southern-city/swordsmith/2x2.c");
}
