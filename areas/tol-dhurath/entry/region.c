//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/region.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setRegionName("Tol-Dhurath Entry");
    setRegionType("forest");
    setDimensions(25, 10);

    setCoordinate(0, 0,
        "/areas/tol-dhurath/entry/0x0.c", "path");
    setCoordinate(0, 1,
        "/areas/tol-dhurath/entry/0x1.c", "path");
    setCoordinate(0, 2,
        "/areas/tol-dhurath/entry/0x2.c", "room");
    setCoordinate(0, 3,
        "/areas/tol-dhurath/entry/0x3.c", "path");
    setCoordinate(0, 4,
        "/areas/tol-dhurath/entry/0x4.c", "path");
    setCoordinate(0, 5,
        "/areas/tol-dhurath/entry/0x5.c", "path");
    setCoordinate(0, 6,
        "/areas/tol-dhurath/entry/0x6.c", "room");
    setCoordinate(0, 7,
        "/areas/tol-dhurath/entry/0x7.c", "room");
    setCoordinate(10, 0,
        "/areas/tol-dhurath/entry/10x0.c", "path");
    setCoordinate(10, 1,
        "/areas/tol-dhurath/entry/10x1.c", "path");
    setCoordinate(10, 2,
        "/areas/tol-dhurath/entry/10x2.c", "path");
    setCoordinate(10, 3,
        "/areas/tol-dhurath/entry/10x3.c", "path");
    setCoordinate(10, 4,
        "/areas/tol-dhurath/entry/10x4.c", "path");
    setCoordinate(10, 5,
        "/areas/tol-dhurath/entry/10x5.c", "path");
    setCoordinate(10, 8,
        "/areas/tol-dhurath/entry/10x8.c", "path");
    setCoordinate(10, 9,
        "/areas/tol-dhurath/entry/10x9.c", "path");
    setCoordinate(11, 0,
        "/areas/tol-dhurath/entry/11x0.c", "path");
    setCoordinate(11, 1,
        "/areas/tol-dhurath/entry/11x1.c", "path");
    setCoordinate(11, 3,
        "/areas/tol-dhurath/entry/11x3.c", "path");
    setCoordinate(11, 5,
        "/areas/tol-dhurath/entry/11x5.c", "path");
    setCoordinate(11, 7,
        "/areas/tol-dhurath/entry/11x7.c", "room");
    setCoordinate(11, 8,
        "/areas/tol-dhurath/entry/11x8.c", "path");
    setCoordinate(11, 9,
        "/areas/tol-dhurath/entry/11x9.c", "path");
    setCoordinate(12, 0,
        "/areas/tol-dhurath/entry/12x0.c", "path");
    setCoordinate(12, 3,
        "/areas/tol-dhurath/entry/12x3.c", "path");
    setCoordinate(12, 4,
        "/areas/tol-dhurath/entry/12x4.c", "room");
    setCoordinate(12, 5,
        "/areas/tol-dhurath/entry/12x5.c", "path");
    setCoordinate(12, 6,
        "/areas/tol-dhurath/entry/12x6.c", "path");
    setCoordinate(12, 7,
        "/areas/tol-dhurath/entry/12x7.c", "path");
    setCoordinate(12, 8,
        "/areas/tol-dhurath/entry/12x8.c", "path");
    setCoordinate(13, 0,
        "/areas/tol-dhurath/entry/13x0.c", "path");
    setCoordinate(13, 1,
        "/areas/tol-dhurath/entry/13x1.c", "path");
    setCoordinate(13, 2,
        "/areas/tol-dhurath/entry/13x2.c", "path");
    setCoordinate(13, 5,
        "/areas/tol-dhurath/entry/13x5.c", "room");
    setCoordinate(13, 6,
        "/areas/tol-dhurath/entry/13x6.c", "room");
    setCoordinate(13, 7,
        "/areas/tol-dhurath/entry/13x7.c", "room");
    setCoordinate(13, 8,
        "/areas/tol-dhurath/entry/13x8.c", "path");
    setCoordinate(14, 1,
        "/areas/tol-dhurath/entry/14x1.c", "path");
    setCoordinate(14, 2,
        "/areas/tol-dhurath/entry/14x2.c", "room");
    setCoordinate(14, 8,
        "/areas/tol-dhurath/entry/14x8.c", "path");
    setCoordinate(14, 9,
        "/areas/tol-dhurath/entry/14x9.c", "path");
    setCoordinate(15, 1,
        "/areas/tol-dhurath/entry/15x1.c", "path");
    setCoordinate(15, 2,
        "/areas/tol-dhurath/entry/15x2.c", "path");
    setCoordinate(15, 5,
        "/areas/tol-dhurath/entry/15x5.c", "path");
    setCoordinate(15, 6,
        "/areas/tol-dhurath/entry/15x6.c", "path");
    setCoordinate(15, 7,
        "/areas/tol-dhurath/entry/15x7.c", "path");
    setCoordinate(15, 8,
        "/areas/tol-dhurath/entry/15x8.c", "path");
    setCoordinate(15, 9,
        "/areas/tol-dhurath/entry/15x9.c", "path");
    setCoordinate(16, 1,
        "/areas/tol-dhurath/entry/16x1.c", "path");
    setCoordinate(16, 2,
        "/areas/tol-dhurath/entry/16x2.c", "path");
    setCoordinate(16, 3,
        "/areas/tol-dhurath/entry/16x3.c", "path");
    setCoordinate(16, 5,
        "/areas/tol-dhurath/entry/16x5.c", "path");
    setCoordinate(17, 0,
        "/areas/tol-dhurath/entry/17x0.c", "exit");
    setCoordinate(17, 1,
        "/areas/tol-dhurath/entry/17x1.c", "path");
    setCoordinate(17, 3,
        "/areas/tol-dhurath/entry/17x3.c", "path");
    setCoordinate(17, 5,
        "/areas/tol-dhurath/entry/17x5.c", "room");
    setCoordinate(18, 0,
        "/areas/tol-dhurath/entry/18x0.c", "room");
    setCoordinate(18, 1,
        "/areas/tol-dhurath/entry/18x1.c", "path");
    setCoordinate(18, 3,
        "/areas/tol-dhurath/entry/18x3.c", "path");
    setCoordinate(18, 4,
        "/areas/tol-dhurath/entry/18x4.c", "path");
    setCoordinate(18, 5,
        "/areas/tol-dhurath/entry/18x5.c", "path");
    setCoordinate(19, 0,
        "/areas/tol-dhurath/entry/19x0.c", "path");
    setCoordinate(19, 1,
        "/areas/tol-dhurath/entry/19x1.c", "room");
    setCoordinate(19, 2,
        "/areas/tol-dhurath/entry/19x2.c", "path");
    setCoordinate(19, 3,
        "/areas/tol-dhurath/entry/19x3.c", "room");
    setCoordinate(19, 4,
        "/areas/tol-dhurath/entry/19x4.c", "path");
    setCoordinate(19, 5,
        "/areas/tol-dhurath/entry/19x5.c", "path");
    setCoordinate(1, 0,
        "/areas/tol-dhurath/entry/1x0.c", "path");
    setCoordinate(1, 1,
        "/areas/tol-dhurath/entry/1x1.c", "path");
    setCoordinate(1, 4,
        "/areas/tol-dhurath/entry/1x4.c", "path");
    setCoordinate(1, 5,
        "/areas/tol-dhurath/entry/1x5.c", "room");
    setCoordinate(1, 6,
        "/areas/tol-dhurath/entry/1x6.c", "path");
    setCoordinate(1, 7,
        "/areas/tol-dhurath/entry/1x7.c", "path");
    setCoordinate(1, 8,
        "/areas/tol-dhurath/entry/1x8.c", "path");
    setCoordinate(20, 0,
        "/areas/tol-dhurath/entry/20x0.c", "path");
    setCoordinate(20, 2,
        "/areas/tol-dhurath/entry/20x2.c", "path");
    setCoordinate(20, 4,
        "/areas/tol-dhurath/entry/20x4.c", "path");
    setCoordinate(20, 5,
        "/areas/tol-dhurath/entry/20x5.c", "room");
    setCoordinate(21, 0,
        "/areas/tol-dhurath/entry/21x0.c", "path");
    setCoordinate(21, 1,
        "/areas/tol-dhurath/entry/21x1.c", "path");
    setCoordinate(21, 2,
        "/areas/tol-dhurath/entry/21x2.c", "path");
    setCoordinate(21, 3,
        "/areas/tol-dhurath/entry/21x3.c", "path");
    setCoordinate(21, 4,
        "/areas/tol-dhurath/entry/21x4.c", "path");
    setCoordinate(21, 5,
        "/areas/tol-dhurath/entry/21x5.c", "room");
    setCoordinate(22, 1,
        "/areas/tol-dhurath/entry/22x1.c", "path");
    setCoordinate(22, 3,
        "/areas/tol-dhurath/entry/22x3.c", "path");
    setCoordinate(22, 4,
        "/areas/tol-dhurath/entry/22x4.c", "path");
    setCoordinate(23, 1,
        "/areas/tol-dhurath/entry/23x1.c", "room");
    setCoordinate(23, 2,
        "/areas/tol-dhurath/entry/23x2.c", "room");
    setCoordinate(23, 3,
        "/areas/tol-dhurath/entry/23x3.c", "path");
    setCoordinate(23, 4,
        "/areas/tol-dhurath/entry/23x4.c", "path");
    setCoordinate(23, 7,
        "/areas/tol-dhurath/entry/23x7.c", "room");
    setCoordinate(23, 8,
        "/areas/tol-dhurath/entry/23x8.c", "room");
    setCoordinate(24, 2,
        "/areas/tol-dhurath/entry/24x2.c", "path");
    setCoordinate(24, 3,
        "/areas/tol-dhurath/entry/24x3.c", "path");
    setCoordinate(24, 4,
        "/areas/tol-dhurath/entry/24x4.c", "path");
    setCoordinate(24, 5,
        "/areas/tol-dhurath/entry/24x5.c", "path");
    setCoordinate(24, 6,
        "/areas/tol-dhurath/entry/24x6.c", "path");
    setCoordinate(24, 7,
        "/areas/tol-dhurath/entry/24x7.c", "path");
    setCoordinate(2, 1,
        "/areas/tol-dhurath/entry/2x1.c", "path");
    setCoordinate(2, 2,
        "/areas/tol-dhurath/entry/2x2.c", "room");
    setCoordinate(2, 3,
        "/areas/tol-dhurath/entry/2x3.c", "path");
    setCoordinate(2, 4,
        "/areas/tol-dhurath/entry/2x4.c", "path");
    setCoordinate(2, 7,
        "/areas/tol-dhurath/entry/2x7.c", "room");
    setCoordinate(2, 8,
        "/areas/tol-dhurath/entry/2x8.c", "path");
    setCoordinate(3, 1,
        "/areas/tol-dhurath/entry/3x1.c", "path");
    setCoordinate(3, 2,
        "/areas/tol-dhurath/entry/3x2.c", "room");
    setCoordinate(3, 3,
        "/areas/tol-dhurath/entry/3x3.c", "room");
    setCoordinate(3, 8,
        "/areas/tol-dhurath/entry/3x8.c", "path");
    setCoordinate(4, 0,
        "/areas/tol-dhurath/entry/4x0.c", "room");
    setCoordinate(4, 1,
        "/areas/tol-dhurath/entry/4x1.c", "room");
    setCoordinate(4, 2,
        "/areas/tol-dhurath/entry/4x2.c", "path");
    setCoordinate(4, 7,
        "/areas/tol-dhurath/entry/4x7.c", "path");
    setCoordinate(4, 8,
        "/areas/tol-dhurath/entry/4x8.c", "path");
    setCoordinate(4, 9,
        "/areas/tol-dhurath/entry/4x9.c", "path");
    setCoordinate(5, 2,
        "/areas/tol-dhurath/entry/5x2.c", "room");
    setCoordinate(5, 5,
        "/areas/tol-dhurath/entry/5x5.c", "room");
    setCoordinate(5, 7,
        "/areas/tol-dhurath/entry/5x7.c", "room");
    setCoordinate(5, 8,
        "/areas/tol-dhurath/entry/5x8.c", "path");
    setCoordinate(5, 9,
        "/areas/tol-dhurath/entry/5x9.c", "path");
    setCoordinate(6, 2,
        "/areas/tol-dhurath/entry/6x2.c", "path");
    setCoordinate(6, 3,
        "/areas/tol-dhurath/entry/6x3.c", "path");
    setCoordinate(6, 4,
        "/areas/tol-dhurath/entry/6x4.c", "path");
    setCoordinate(6, 5,
        "/areas/tol-dhurath/entry/6x5.c", "path");
    setCoordinate(6, 8,
        "/areas/tol-dhurath/entry/6x8.c", "path");
    setCoordinate(7, 0,
        "/areas/tol-dhurath/entry/7x0.c", "room");
    setCoordinate(7, 1,
        "/areas/tol-dhurath/entry/7x1.c", "room");
    setCoordinate(7, 2,
        "/areas/tol-dhurath/entry/7x2.c", "path");
    setCoordinate(7, 3,
        "/areas/tol-dhurath/entry/7x3.c", "path");
    setCoordinate(7, 4,
        "/areas/tol-dhurath/entry/7x4.c", "path");
    setCoordinate(7, 7,
        "/areas/tol-dhurath/entry/7x7.c", "path");
    setCoordinate(7, 8,
        "/areas/tol-dhurath/entry/7x8.c", "room");
    setCoordinate(7, 9,
        "/areas/tol-dhurath/entry/7x9.c", "entry");
    setCoordinate(8, 0,
        "/areas/tol-dhurath/entry/8x0.c", "path");
    setCoordinate(8, 1,
        "/areas/tol-dhurath/entry/8x1.c", "room");
    setCoordinate(8, 4,
        "/areas/tol-dhurath/entry/8x4.c", "path");
    setCoordinate(8, 5,
        "/areas/tol-dhurath/entry/8x5.c", "room");
    setCoordinate(8, 6,
        "/areas/tol-dhurath/entry/8x6.c", "path");
    setCoordinate(8, 7,
        "/areas/tol-dhurath/entry/8x7.c", "path");
    setCoordinate(8, 8,
        "/areas/tol-dhurath/entry/8x8.c", "path");
    setCoordinate(8, 9,
        "/areas/tol-dhurath/entry/8x9.c", "path");
    setCoordinate(9, 0,
        "/areas/tol-dhurath/entry/9x0.c", "path");
    setCoordinate(9, 4,
        "/areas/tol-dhurath/entry/9x4.c", "path");
    setCoordinate(9, 5,
        "/areas/tol-dhurath/entry/9x5.c", "path");
    setCoordinate(9, 8,
        "/areas/tol-dhurath/entry/9x8.c", "path");
    setCoordinate(9, 9,
        "/areas/tol-dhurath/entry/9x9.c", "room");

    // MapIcons
}
