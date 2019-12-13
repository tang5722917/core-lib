//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/city.c");
    addBuilding("/lib/environment/buildings/military/tall-wall-tower.c",
        "east", "/lib/tutorial/eledhel/southern-city/southeast-tower/0x1.c");
    addBuilding("/lib/environment/buildings/military/military-training-ground.c",
        "west");
    addBuilding("/lib/environment/buildings/military/city-wall.c", "south");
    addFeature("/lib/environment/features/paths/cobblestone-road.c", "north");

    addDecorator("inner east-west wall");
    addExit("north", "/lib/tutorial/eledhel/southern-city/19x2.c");
    addExit("west", "/lib/tutorial/eledhel/southern-city/18x1.c");
}
