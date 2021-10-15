//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/water/ravine-waterfall.c", "south");

    addExit("north", "/players/maeglin/regstuff/3x2.c");
    addFeature("/lib/environment/features/paths/path.c", "north");
    addExit("east", "/players/maeglin/regstuff/4x1.c");
    addFeature("/lib/environment/features/paths/path.c", "east");
}

