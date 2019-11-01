//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setInterior("/lib/environment/interiors/brick-interior-shop.c");
    addShop("/lib/environment/shopInventories/medium-armorer.c");
    addItem("/lib/environment/items/lighting/window.c", "west");
    addItem("/lib/environment/items/lighting/window.c", "east");
    addItem("/lib/environment/items/lighting/sconce.c", "south");

    addDecorator("1x1 building armorer");

    addExitWithDoor("west", "/lib/tutorial/eledhel/southern-city/17x7.c");
}
