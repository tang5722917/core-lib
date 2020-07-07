//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setInterior("/lib/environment/interiors/ruin.c");
    addDecorator("ruined interior 4-way hallway");

    addExit("east",
        "/areas/tol-dhurath/temple-interior/4x1.c");
    addExit("west",
        "/areas/tol-dhurath/temple-interior/2x1.c");
    addExitWithDoor("north",
        "/areas/tol-dhurath/temple-interior/3x2.c");
    addExit("south",
        "/areas/tol-dhurath/temple-interior/3x0.c");
}
