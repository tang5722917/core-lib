//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/farmland.c");

    addExit("south", "/areas/eledhel/southwest-rural-one/6x3.c");
    addFeature("/lib/environment/features/paths/road.c", "south");
    addExit("east", "/areas/eledhel/southwest-rural-one/7x4.c");
    addFeature("/lib/environment/features/paths/road.c", "east");
}
