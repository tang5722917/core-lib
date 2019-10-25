//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/region.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setRegionName("Eledhel-southern-blacksmith");
    setRegionType("limestone building");
    setDimensions(5, 5);

    setCoordinate(0, 1,
        "/lib/tutorial/eledhel/southern-city/blacksmith/0x1.c", "room");
}
