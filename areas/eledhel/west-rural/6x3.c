//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/landforms/hill.c", "southeast");

    addExit("east", "/players/maeglin/regstuff/7x3.c");
    addFeature("/lib/environment/features/paths/path.c", "east");
    addExit("west", "/players/maeglin/regstuff/5x3.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
}

