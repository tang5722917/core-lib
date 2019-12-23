//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    cloneEnvironment();
    setInterior("/tutorial/temple/environment/interiors/pedestal-chamber.c");
    addFeature("tutorial/temple/environment/features/amethyst-floor.c");
    addFeature("tutorial/temple/environment/features/amethyst-ceiling.c");
    addFeature("tutorial/temple/environment/features/purple-liquid.c");

    // Third test
    addExit("west", "/tutorial/temple/environment/rooms/pedestal-1x3.c", "third test");
    addExit("south", "/tutorial/temple/environment/rooms/pedestal-2x4.c", "third test");

    // Fourth test
    addExit("west", "/tutorial/temple/environment/rooms/pedestal-1x3.c", "fourth test");
    addExit("east", "/tutorial/temple/environment/rooms/pedestal-1x5.c", "fourth test");

    // Seventh test
    addExit("east", "/tutorial/temple/environment/rooms/pedestal-1x5.c", "seventh test");
    addExit("south", "/tutorial/temple/environment/rooms/pedestal-2x4.c", "seventh test");

    setStateMachine("/tutorial/temple/stateMachine/obedienceStateMachine.c");
}
