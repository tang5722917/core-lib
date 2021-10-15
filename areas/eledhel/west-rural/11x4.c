//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/landforms/butte.c", "east");
    addFeature("/lib/environment/features/trees/birch-stand.c", "east");

    addExit("south", "/players/maeglin/regstuff/11x3.c");
    addFeature("/lib/environment/features/paths/path.c", "south");
    addExit("west", "/players/maeglin/regstuff/10x4.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
}

