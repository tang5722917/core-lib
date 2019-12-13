//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/farmland.c");

    addExit("west", "/lib/tutorial/eledhel/southwest-rural-two/23x4.c");
    addFeature("/lib/environment/features/paths/road.c", "west");
    addExit("south", "/lib/tutorial/eledhel/southwest-rural-two/24x3.c");
    addFeature("/lib/environment/features/paths/road.c", "south");
}

