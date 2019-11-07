//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/region.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setRegionName("Anguleith-home");
    setRegionType("wooden building");
    setDimensions(5, 5);

    setCoordinate(3, 0,
        "/lib/tutorial/eledhel/southern-city/anguleith/3x0.c", "room");
}
