//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest-clearing.c");

    addExit("west", "/areas/eledhel/southwest-rural-two/16x1.c");
    addFeature("/lib/environment/features/paths/road.c", "west");
    addExit("east", "/areas/eledhel/southwest-rural-two/18x1.c");
    addFeature("/lib/environment/features/paths/road.c", "east");
}

