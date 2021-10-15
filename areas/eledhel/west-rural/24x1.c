//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/trees/hemlock-stand.c", "east");
    addFeature("/lib/environment/features/landforms/dell.c", "east");

    addExit("south", "/players/maeglin/regstuff/24x0.c");
    addFeature("/lib/environment/features/paths/path.c", "south");
    addExit("north", "/players/maeglin/regstuff/24x2.c");
    addFeature("/lib/environment/features/paths/path.c", "north");
}

