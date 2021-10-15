//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/trees/hemlock-stand.c", "west");

    addExit("west", "/players/maeglin/regstuff/3x3.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
    addExit("south", "/players/maeglin/regstuff/4x2.c");
    addFeature("/lib/environment/features/paths/path.c", "south");
}

