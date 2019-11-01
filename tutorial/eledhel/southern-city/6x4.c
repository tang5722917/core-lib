//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/city.c");
    addBuilding("/lib/environment/buildings/guilds/scion-of-dhuras.c",
        "east", "/lib/tutorial/eledhel/southern-city/scion-of-dhuras/0x4.c");

    addExit("north", "/lib/tutorial/eledhel/southern-city/6x5.c");
    addExit("south", "/lib/tutorial/eledhel/southern-city/6x3.c");
}
