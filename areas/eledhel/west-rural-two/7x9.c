//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/landforms/dell.c", "southeast");
    addFeature("/lib/environment/features/water/ravine-creek.c", "southeast");
    addFeature("/lib/environment/features/landforms/ridge.c", "southeast");

    addExit("west", "/areas/eledhel/west-rural-two/6x9.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
    addExit("east", "/areas/eledhel/west-rural-two/8x9.c");
    addFeature("/lib/environment/features/paths/path.c", "east");
}
