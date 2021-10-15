//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/landforms/glen.c", "southeast");
    addFeature("/lib/environment/features/trees/buckthorn-stand.c", "southeast");

    addExit("east", "/areas/eledhel/west-rural-two/9x5.c");
    addFeature("/lib/environment/features/paths/path.c", "east");
    addExit("west", "/areas/eledhel/west-rural-two/7x5.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
}
