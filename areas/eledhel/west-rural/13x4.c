//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/trees/pine-stand.c", "southwest");
    addFeature("/lib/environment/features/landforms/glen.c", "southwest");

    addExit("south", "/players/maeglin/regstuff/13x3.c");
    addFeature("/lib/environment/features/paths/path.c", "south");
    addExit("north", "/players/maeglin/regstuff/13x5.c");
    addFeature("/lib/environment/features/paths/path.c", "north");
    addExit("east", "/players/maeglin/regstuff/14x4.c");
    addFeature("/lib/environment/features/paths/path.c", "east");
}

