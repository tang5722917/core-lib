//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/farmland.c");

    addExit("south", "/lib/tutorial/eledhel/southwest-rural-one/13x1.c");
    addFeature("/lib/environment/features/paths/road.c", "south");
    addExit("east", "/lib/tutorial/eledhel/southwest-rural-one/14x2.c");
    addFeature("/lib/environment/features/paths/road.c", "east");
    addExit("west", "/lib/tutorial/eledhel/southwest-rural-one/12x2.c");
    addFeature("/lib/environment/features/paths/road.c", "west");
}

