//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/region.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setRegionName("Tol-Dhurath Forest 1");
    setRegionType("forest");
    setDimensions(25, 10);

    setCoordinate(0, 3,
        "/areas/tol-dhurath/forest-1/0x3.c", "path");
    setCoordinate(0, 4,
        "/areas/tol-dhurath/forest-1/0x4.c", "room");
    setCoordinate(0, 5,
        "/areas/tol-dhurath/forest-1/0x5.c", "path");
    setCoordinate(0, 6,
        "/areas/tol-dhurath/forest-1/0x6.c", "entry");
    setCoordinate(10, 0,
        "/areas/tol-dhurath/forest-1/10x0.c", "path");
    setCoordinate(10, 1,
        "/areas/tol-dhurath/forest-1/10x1.c", "path");
    setCoordinate(10, 2,
        "/areas/tol-dhurath/forest-1/10x2.c", "path");
    setCoordinate(10, 3,
        "/areas/tol-dhurath/forest-1/10x3.c", "room");
    setCoordinate(10, 8,
        "/areas/tol-dhurath/forest-1/10x8.c", "room");
    setCoordinate(10, 9,
        "/areas/tol-dhurath/forest-1/10x9.c", "path");
    setCoordinate(11, 0,
        "/areas/tol-dhurath/forest-1/11x0.c", "room");
    setCoordinate(11, 1,
        "/areas/tol-dhurath/forest-1/11x1.c", "path");
    setCoordinate(11, 2,
        "/areas/tol-dhurath/forest-1/11x2.c", "path");
    setCoordinate(11, 3,
        "/areas/tol-dhurath/forest-1/11x3.c", "path");
    setCoordinate(11, 4,
        "/areas/tol-dhurath/forest-1/11x4.c", "path");
    setCoordinate(11, 5,
        "/areas/tol-dhurath/forest-1/11x5.c", "path");
    setCoordinate(11, 6,
        "/areas/tol-dhurath/forest-1/11x6.c", "path");
    setCoordinate(11, 7,
        "/areas/tol-dhurath/forest-1/11x7.c", "room");
    setCoordinate(11, 8,
        "/areas/tol-dhurath/forest-1/11x8.c", "path");
    setCoordinate(11, 9,
        "/areas/tol-dhurath/forest-1/11x9.c", "path");
    setCoordinate(12, 1,
        "/areas/tol-dhurath/forest-1/12x1.c", "path");
    setCoordinate(12, 2,
        "/areas/tol-dhurath/forest-1/12x2.c", "path");
    setCoordinate(12, 4,
        "/areas/tol-dhurath/forest-1/12x4.c", "path");
    setCoordinate(12, 5,
        "/areas/tol-dhurath/forest-1/12x5.c", "path");
    setCoordinate(12, 9,
        "/areas/tol-dhurath/forest-1/12x9.c", "room");
    setCoordinate(13, 0,
        "/areas/tol-dhurath/forest-1/13x0.c", "room");
    setCoordinate(13, 2,
        "/areas/tol-dhurath/forest-1/13x2.c", "path");
    setCoordinate(14, 0,
        "/areas/tol-dhurath/forest-1/14x0.c", "path");
    setCoordinate(14, 2,
        "/areas/tol-dhurath/forest-1/14x2.c", "path");
    setCoordinate(14, 7,
        "/areas/tol-dhurath/forest-1/14x7.c", "room");
    setCoordinate(14, 8,
        "/areas/tol-dhurath/forest-1/14x8.c", "path");
    setCoordinate(14, 9,
        "/areas/tol-dhurath/forest-1/14x9.c", "path");
    setCoordinate(15, 0,
        "/areas/tol-dhurath/forest-1/15x0.c", "path");
    setCoordinate(15, 2,
        "/areas/tol-dhurath/forest-1/15x2.c", "path");
    setCoordinate(15, 3,
        "/areas/tol-dhurath/forest-1/15x3.c", "path");
    setCoordinate(15, 4,
        "/areas/tol-dhurath/forest-1/15x4.c", "path");
    setCoordinate(15, 5,
        "/areas/tol-dhurath/forest-1/15x5.c", "path");
    setCoordinate(15, 7,
        "/areas/tol-dhurath/forest-1/15x7.c", "path");
    setCoordinate(15, 8,
        "/areas/tol-dhurath/forest-1/15x8.c", "path");
    setCoordinate(15, 9,
        "/areas/tol-dhurath/forest-1/15x9.c", "path");
    setCoordinate(16, 0,
        "/areas/tol-dhurath/forest-1/16x0.c", "path");
    setCoordinate(16, 1,
        "/areas/tol-dhurath/forest-1/16x1.c", "path");
    setCoordinate(16, 2,
        "/areas/tol-dhurath/forest-1/16x2.c", "room");
    setCoordinate(16, 3,
        "/areas/tol-dhurath/forest-1/16x3.c", "path");
    setCoordinate(16, 4,
        "/areas/tol-dhurath/forest-1/16x4.c", "room");
    setCoordinate(16, 5,
        "/areas/tol-dhurath/forest-1/16x5.c", "path");
    setCoordinate(16, 6,
        "/areas/tol-dhurath/forest-1/16x6.c", "room");
    setCoordinate(16, 7,
        "/areas/tol-dhurath/forest-1/16x7.c", "path");
    setCoordinate(16, 8,
        "/areas/tol-dhurath/forest-1/16x8.c", "path");
    setCoordinate(16, 9,
        "/areas/tol-dhurath/forest-1/16x9.c", "path");
    setCoordinate(17, 1,
        "/areas/tol-dhurath/forest-1/17x1.c", "path");
    setCoordinate(17, 2,
        "/areas/tol-dhurath/forest-1/17x2.c", "room");
    setCoordinate(17, 3,
        "/areas/tol-dhurath/forest-1/17x3.c", "path");
    setCoordinate(17, 4,
        "/areas/tol-dhurath/forest-1/17x4.c", "path");
    setCoordinate(17, 5,
        "/areas/tol-dhurath/forest-1/17x5.c", "path");
    setCoordinate(17, 6,
        "/areas/tol-dhurath/forest-1/17x6.c", "path");
    setCoordinate(17, 8,
        "/areas/tol-dhurath/forest-1/17x8.c", "path");
    setCoordinate(17, 9,
        "/areas/tol-dhurath/forest-1/17x9.c", "room");
    setCoordinate(18, 2,
        "/areas/tol-dhurath/forest-1/18x2.c", "path");
    setCoordinate(18, 3,
        "/areas/tol-dhurath/forest-1/18x3.c", "room");
    setCoordinate(18, 5,
        "/areas/tol-dhurath/forest-1/18x5.c", "path");
    setCoordinate(18, 6,
        "/areas/tol-dhurath/forest-1/18x6.c", "path");
    setCoordinate(18, 7,
        "/areas/tol-dhurath/forest-1/18x7.c", "path");
    setCoordinate(18, 8,
        "/areas/tol-dhurath/forest-1/18x8.c", "path");
    setCoordinate(18, 9,
        "/areas/tol-dhurath/forest-1/18x9.c", "path");
    setCoordinate(19, 7,
        "/areas/tol-dhurath/forest-1/19x7.c", "path");
    setCoordinate(19, 8,
        "/areas/tol-dhurath/forest-1/19x8.c", "path");
    setCoordinate(1, 0,
        "/areas/tol-dhurath/forest-1/1x0.c", "path");
    setCoordinate(1, 1,
        "/areas/tol-dhurath/forest-1/1x1.c", "room");
    setCoordinate(1, 3,
        "/areas/tol-dhurath/forest-1/1x3.c", "path");
    setCoordinate(1, 4,
        "/areas/tol-dhurath/forest-1/1x4.c", "path");
    setCoordinate(1, 5,
        "/areas/tol-dhurath/forest-1/1x5.c", "room");
    setCoordinate(20, 8,
        "/areas/tol-dhurath/forest-1/20x8.c", "path");
    setCoordinate(21, 3,
        "/areas/tol-dhurath/forest-1/21x3.c", "room");
    setCoordinate(21, 4,
        "/areas/tol-dhurath/forest-1/21x4.c", "room");
    setCoordinate(21, 5,
        "/areas/tol-dhurath/forest-1/21x5.c", "path");
    setCoordinate(21, 8,
        "/areas/tol-dhurath/forest-1/21x8.c", "path");
    setCoordinate(22, 3,
        "/areas/tol-dhurath/forest-1/22x3.c", "room");
    setCoordinate(22, 5,
        "/areas/tol-dhurath/forest-1/22x5.c", "path");
    setCoordinate(22, 6,
        "/areas/tol-dhurath/forest-1/22x6.c", "path");
    setCoordinate(22, 7,
        "/areas/tol-dhurath/forest-1/22x7.c", "room");
    setCoordinate(22, 8,
        "/areas/tol-dhurath/forest-1/22x8.c", "path");
    setCoordinate(23, 1,
        "/areas/tol-dhurath/forest-1/23x1.c", "path");
    setCoordinate(23, 2,
        "/areas/tol-dhurath/forest-1/23x2.c", "room");
    setCoordinate(23, 3,
        "/areas/tol-dhurath/forest-1/23x3.c", "path");
    setCoordinate(23, 4,
        "/areas/tol-dhurath/forest-1/23x4.c", "path");
    setCoordinate(23, 5,
        "/areas/tol-dhurath/forest-1/23x5.c", "path");
    setCoordinate(23, 6,
        "/areas/tol-dhurath/forest-1/23x6.c", "path");
    setCoordinate(24, 1,
        "/areas/tol-dhurath/forest-1/24x1.c", "path");
    setCoordinate(24, 2,
        "/areas/tol-dhurath/forest-1/24x2.c", "path");
    setCoordinate(24, 3,
        "/areas/tol-dhurath/forest-1/24x3.c", "path");
    setCoordinate(24, 5,
        "/areas/tol-dhurath/forest-1/24x5.c", "path");
    setCoordinate(24, 6,
        "/areas/tol-dhurath/forest-1/24x6.c", "path");
    setCoordinate(2, 0,
        "/areas/tol-dhurath/forest-1/2x0.c", "path");
    setCoordinate(2, 1,
        "/areas/tol-dhurath/forest-1/2x1.c", "path");
    setCoordinate(2, 3,
        "/areas/tol-dhurath/forest-1/2x3.c", "room");
    setCoordinate(2, 4,
        "/areas/tol-dhurath/forest-1/2x4.c", "path");
    setCoordinate(2, 5,
        "/areas/tol-dhurath/forest-1/2x5.c", "path");
    setCoordinate(3, 1,
        "/areas/tol-dhurath/forest-1/3x1.c", "path");
    setCoordinate(3, 2,
        "/areas/tol-dhurath/forest-1/3x2.c", "path");
    setCoordinate(3, 3,
        "/areas/tol-dhurath/forest-1/3x3.c", "path");
    setCoordinate(3, 4,
        "/areas/tol-dhurath/forest-1/3x4.c", "room");
    setCoordinate(3, 5,
        "/areas/tol-dhurath/forest-1/3x5.c", "path");
    setCoordinate(4, 1,
        "/areas/tol-dhurath/forest-1/4x1.c", "path");
    setCoordinate(4, 2,
        "/areas/tol-dhurath/forest-1/4x2.c", "room");
    setCoordinate(4, 5,
        "/areas/tol-dhurath/forest-1/4x5.c", "path");
    setCoordinate(4, 6,
        "/areas/tol-dhurath/forest-1/4x6.c", "path");
    setCoordinate(5, 1,
        "/areas/tol-dhurath/forest-1/5x1.c", "path");
    setCoordinate(5, 6,
        "/areas/tol-dhurath/forest-1/5x6.c", "path");
    setCoordinate(5, 7,
        "/areas/tol-dhurath/forest-1/5x7.c", "room");
    setCoordinate(5, 8,
        "/areas/tol-dhurath/forest-1/5x8.c", "path");
    setCoordinate(6, 1,
        "/areas/tol-dhurath/forest-1/6x1.c", "room");
    setCoordinate(6, 2,
        "/areas/tol-dhurath/forest-1/6x2.c", "path");
    setCoordinate(6, 4,
        "/areas/tol-dhurath/forest-1/6x4.c", "path");
    setCoordinate(6, 5,
        "/areas/tol-dhurath/forest-1/6x5.c", "room");
    setCoordinate(6, 6,
        "/areas/tol-dhurath/forest-1/6x6.c", "room");
    setCoordinate(6, 7,
        "/areas/tol-dhurath/forest-1/6x7.c", "path");
    setCoordinate(6, 8,
        "/areas/tol-dhurath/forest-1/6x8.c", "path");
    setCoordinate(7, 0,
        "/areas/tol-dhurath/forest-1/7x0.c", "exit");
    setCoordinate(7, 1,
        "/areas/tol-dhurath/forest-1/7x1.c", "path");
    setCoordinate(7, 2,
        "/areas/tol-dhurath/forest-1/7x2.c", "path");
    setCoordinate(7, 3,
        "/areas/tol-dhurath/forest-1/7x3.c", "path");
    setCoordinate(7, 4,
        "/areas/tol-dhurath/forest-1/7x4.c", "path");
    setCoordinate(7, 5,
        "/areas/tol-dhurath/forest-1/7x5.c", "path");
    setCoordinate(7, 6,
        "/areas/tol-dhurath/forest-1/7x6.c", "path");
    setCoordinate(7, 7,
        "/areas/tol-dhurath/forest-1/7x7.c", "room");
    setCoordinate(7, 8,
        "/areas/tol-dhurath/forest-1/7x8.c", "room");
    setCoordinate(8, 1,
        "/areas/tol-dhurath/forest-1/8x1.c", "path");
    setCoordinate(8, 2,
        "/areas/tol-dhurath/forest-1/8x2.c", "path");
    setCoordinate(8, 7,
        "/areas/tol-dhurath/forest-1/8x7.c", "path");
    setCoordinate(8, 8,
        "/areas/tol-dhurath/forest-1/8x8.c", "room");
    setCoordinate(8, 9,
        "/areas/tol-dhurath/forest-1/8x9.c", "path");
    setCoordinate(9, 0,
        "/areas/tol-dhurath/forest-1/9x0.c", "room");
    setCoordinate(9, 1,
        "/areas/tol-dhurath/forest-1/9x1.c", "path");
    setCoordinate(9, 9,
        "/areas/tol-dhurath/forest-1/9x9.c", "path");

    // MapIcons
}
