//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/trees/cottonwood-stand.c", "northeast");

    addExit("east", "/players/maeglin/regstuff/20x7.c");
    addFeature("/lib/environment/features/paths/path.c", "east");
    addExit("north", "/players/maeglin/regstuff/19x8.c");
    addFeature("/lib/environment/features/paths/path.c", "north");
}

