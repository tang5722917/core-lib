//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setInterior("/lib/environment/interiors/wood-interior-shop.c");
    addShop("/lib/environment/shopInventories/herbalist.c");
    addItem("/lib/environment/items/lighting/lit-sconce.c", "east");
    addItem("/lib/environment/items/lighting/window.c", "west");
    addItem("/lib/environment/items/lighting/window.c", "south");
    addItem("/lib/environment/items/lighting/window.c", "north");

    addDecorator("1x1 building herbalist");
    addExitWithDoor("east", "/areas/eledhel/southern-city/12x4.c");
}
