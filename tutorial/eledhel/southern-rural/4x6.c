//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/farmland.c");

    addExit("west", "/lib/tutorial/eledhel/southern-rural/3x6.c");
    addFeature("/lib/environment/features/paths/road.c", "west");
    addExit("north", "/lib/tutorial/eledhel/southern-rural/4x7.c");
    addFeature("/lib/environment/features/paths/road.c", "north");
}

