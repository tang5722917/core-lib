//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/trees/spruce-stand.c", "southeast");
    addFeature("/lib/environment/features/landforms/hill.c", "southeast");

    addExit("west", "/areas/tol-dhurath/forest-5/9x8.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
    addExit("south", "/areas/tol-dhurath/forest-5/10x7.c");
    addFeature("/lib/environment/features/paths/path.c", "south");

    addRandomCreature(({"gopher","muskrat","coyote","otter","gray squirrel"}));
}
