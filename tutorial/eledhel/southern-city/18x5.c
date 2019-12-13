//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/city.c");
    addBuilding("/lib/environment/buildings/shops/inn.c", "south");

    addExit("east", "/lib/tutorial/eledhel/southern-city/19x5.c");
    addExit("west", "/lib/tutorial/eledhel/southern-city/17x5.c");
}
