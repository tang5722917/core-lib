//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/city.c");

    addBuilding("/lib/environment/buildings/military/city-wall.c", "south");
    addFeature("/lib/environment/features/paths/cobblestone-road.c", "north");

    addDecorator("inner east-west wall");
    addExit("north", "/lib/tutorial/eledhel/southern-city/16x2.c");
    addExit("east", "/lib/tutorial/eledhel/southern-city/17x1.c");
    addExit("west", "/lib/tutorial/eledhel/southern-city/15x1.c");
}
