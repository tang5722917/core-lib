//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/trees/beech-stand.c", "southwest");
    addFeature("/lib/environment/features/water/brook.c", "southwest");
    addFeature("/lib/environment/features/trees/winesap-apple-stand.c", "southwest");

    addExit("west", "/players/maeglin/regstuff/10x1.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
    addExit("north", "/players/maeglin/regstuff/11x2.c");
    addFeature("/lib/environment/features/paths/path.c", "north");
}

