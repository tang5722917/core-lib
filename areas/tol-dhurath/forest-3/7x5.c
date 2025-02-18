//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/water/gorge-creek.c", "west");
    addFeature("/lib/environment/features/water/brook.c", "northwest");

    addExit("south", "/areas/tol-dhurath/forest-3/7x4.c");
    addFeature("/lib/environment/features/paths/path.c", "south");

    addRandomCreature(({"boar","timber wolf","coyote"}));
}
