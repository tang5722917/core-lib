//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/region.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setRegionName("Eledhel-southern-city");
    setRegionType("city");
    setDimensions(25, 10);
    // EntryCoordinate

    setCoordinate(0, 0,
        "/lib/tutorial/eledhel/southern-city/0x0.c", "room");
    setCoordinate(0, 1,
        "/lib/tutorial/eledhel/southern-city/0x1.c", "room");

    setCoordinate(1, 0,
        "/lib/tutorial/eledhel/southern-city/1x0.c", "room");
    setCoordinate(1, 1,
        "/lib/tutorial/eledhel/southern-city/1x1.c", "room");
    setCoordinate(1, 2,
        "/lib/tutorial/eledhel/southern-city/1x2.c", "room");
    setCoordinate(1, 3,
        "/lib/tutorial/eledhel/southern-city/1x3.c", "room");
    setCoordinate(1, 4,
        "/lib/tutorial/eledhel/southern-city/1x4.c", "room");
    setCoordinate(1, 5,
        "/lib/tutorial/eledhel/southern-city/1x5.c", "room");
    setCoordinate(1, 6,
        "/lib/tutorial/eledhel/southern-city/1x6.c", "room");
    setCoordinate(1, 7,
        "/lib/tutorial/eledhel/southern-city/1x7.c", "room");
    setCoordinate(1, 8,
        "/lib/tutorial/eledhel/southern-city/1x8.c", "room");
    setCoordinate(1, 9,
        "/lib/tutorial/eledhel/southern-city/1x9.c", "room");

    setCoordinate(2, 1,
        "/lib/tutorial/eledhel/southern-city/2x1.c", "path");
    setCoordinate(2, 2,
        "/lib/tutorial/eledhel/southern-city/2x2.c", "path");
    setCoordinate(2, 3,
        "/lib/tutorial/eledhel/southern-city/2x3.c", "room");
    setCoordinate(2, 4,
        "/lib/tutorial/eledhel/southern-city/2x4.c", "room");
    setCoordinate(2, 5,
        "/lib/tutorial/eledhel/southern-city/2x5.c", "room");
    setCoordinate(2, 6,
        "/lib/tutorial/eledhel/southern-city/2x6.c", "room");
    setCoordinate(2, 7,
        "/lib/tutorial/eledhel/southern-city/2x7.c", "room");
    setCoordinate(2, 8,
        "/lib/tutorial/eledhel/southern-city/2x8.c", "room");
    setCoordinate(2, 9,
        "/lib/tutorial/eledhel/southern-city/2x9.c", "room");

    setCoordinate(3, 1,
        "/lib/tutorial/eledhel/southern-city/3x1.c", "room");
    setCoordinate(3, 2,
        "/lib/tutorial/eledhel/southern-city/3x2.c", "path");
    setCoordinate(3, 3,
        "/lib/tutorial/eledhel/southern-city/3x3.c", "room");
    setCoordinate(3, 4,
        "/lib/tutorial/eledhel/southern-city/3x4.c", "room");
    setCoordinate(3, 5,
        "/lib/tutorial/eledhel/southern-city/3x5.c", "room");
    setCoordinate(3, 6,
        "/lib/tutorial/eledhel/southern-city/3x6.c", "room");
    setCoordinate(3, 7,
        "/lib/tutorial/eledhel/southern-city/3x7.c", "room");
    setCoordinate(3, 8,
        "/lib/tutorial/eledhel/southern-city/3x8.c", "room");
    setCoordinate(3, 9,
        "/lib/tutorial/eledhel/southern-city/3x9.c", "room");

    setCoordinate(4, 1,
        "/lib/tutorial/eledhel/southern-city/4x1.c", "room");
    setCoordinate(4, 2,
        "/lib/tutorial/eledhel/southern-city/4x2.c", "path");
    setCoordinate(4, 3,
        "/lib/tutorial/eledhel/southern-city/4x3.c", "room");
    setCoordinate(4, 4,
        "/lib/tutorial/eledhel/southern-city/4x4.c", "room");
    setCoordinate(4, 5,
        "/lib/tutorial/eledhel/southern-city/4x5.c", "room");
    setCoordinate(4, 6,
        "/lib/tutorial/eledhel/southern-city/4x6.c", "room");
    setCoordinate(4, 7,
        "/lib/tutorial/eledhel/southern-city/4x7.c", "room");
    setCoordinate(4, 8,
        "/lib/tutorial/eledhel/southern-city/4x8.c", "room");
    setCoordinate(4, 9,
        "/lib/tutorial/eledhel/southern-city/4x9.c", "room");

    setCoordinate(5, 1,
        "/lib/tutorial/eledhel/southern-city/5x1.c", "room");
    setCoordinate(5, 2,
        "/lib/tutorial/eledhel/southern-city/5x2.c", "path");
    setCoordinate(5, 3,
        "/lib/tutorial/eledhel/southern-city/5x3.c", "room");
    setCoordinate(5, 4,
        "/lib/tutorial/eledhel/southern-city/5x4.c", "room");
    setCoordinate(5, 5,
        "/lib/tutorial/eledhel/southern-city/5x5.c", "room");
    setCoordinate(5, 6,
        "/lib/tutorial/eledhel/southern-city/5x6.c", "room");
    setCoordinate(5, 7,
        "/lib/tutorial/eledhel/southern-city/5x7.c", "room");
    setCoordinate(5, 8,
        "/lib/tutorial/eledhel/southern-city/5x8.c", "room");
    setCoordinate(5, 9,
        "/lib/tutorial/eledhel/southern-city/5x9.c", "room");

    setCoordinate(6, 1,
        "/lib/tutorial/eledhel/southern-city/6x1.c", "room");
    setCoordinate(6, 2,
        "/lib/tutorial/eledhel/southern-city/6x2.c", "path");
    setCoordinate(6, 3,
        "/lib/tutorial/eledhel/southern-city/6x3.c", "room");
    setCoordinate(6, 4,
        "/lib/tutorial/eledhel/southern-city/6x4.c", "room");
    setCoordinate(6, 5,
        "/lib/tutorial/eledhel/southern-city/6x5.c", "room");
    setCoordinate(6, 6,
        "/lib/tutorial/eledhel/southern-city/6x6.c", "room");
    setCoordinate(6, 7,
        "/lib/tutorial/eledhel/southern-city/6x7.c", "room");
    setCoordinate(6, 8,
        "/lib/tutorial/eledhel/southern-city/6x8.c", "room");
    setCoordinate(6, 9,
        "/lib/tutorial/eledhel/southern-city/6x9.c", "room");

    setCoordinate(7, 1,
        "/lib/tutorial/eledhel/southern-city/7x1.c", "room");
    setCoordinate(7, 2,
        "/lib/tutorial/eledhel/southern-city/7x2.c", "path");
    setCoordinate(7, 3,
        "/lib/tutorial/eledhel/southern-city/7x3.c", "room");
    setCoordinate(7, 4,
        "/lib/tutorial/eledhel/southern-city/7x4.c", "room");
    setCoordinate(7, 5,
        "/lib/tutorial/eledhel/southern-city/7x5.c", "room");
    setCoordinate(7, 6,
        "/lib/tutorial/eledhel/southern-city/7x6.c", "room");
    setCoordinate(7, 7,
        "/lib/tutorial/eledhel/southern-city/7x7.c", "room");
    setCoordinate(7, 8,
        "/lib/tutorial/eledhel/southern-city/7x8.c", "room");
    setCoordinate(7, 9,
        "/lib/tutorial/eledhel/southern-city/7x9.c", "room");

    setCoordinate(8, 1,
        "/lib/tutorial/eledhel/southern-city/8x1.c", "room");
    setCoordinate(8, 2,
        "/lib/tutorial/eledhel/southern-city/8x2.c", "path");
    setCoordinate(8, 3,
        "/lib/tutorial/eledhel/southern-city/8x3.c", "room");
    setCoordinate(8, 4,
        "/lib/tutorial/eledhel/southern-city/8x4.c", "room");
    setCoordinate(8, 5,
        "/lib/tutorial/eledhel/southern-city/8x5.c", "room");
    setCoordinate(8, 6,
        "/lib/tutorial/eledhel/southern-city/8x6.c", "room");
    setCoordinate(8, 7,
        "/lib/tutorial/eledhel/southern-city/8x7.c", "room");
    setCoordinate(8, 8,
        "/lib/tutorial/eledhel/southern-city/8x8.c", "room");
    setCoordinate(8, 9,
        "/lib/tutorial/eledhel/southern-city/8x9.c", "room");

    setCoordinate(9, 1,
        "/lib/tutorial/eledhel/southern-city/9x1.c", "room");
    setCoordinate(9, 2,
        "/lib/tutorial/eledhel/southern-city/9x2.c", "path");
    setCoordinate(9, 3,
        "/lib/tutorial/eledhel/southern-city/9x3.c", "room");
    setCoordinate(9, 4,
        "/lib/tutorial/eledhel/southern-city/9x4.c", "room");
    setCoordinate(9, 5,
        "/lib/tutorial/eledhel/southern-city/9x5.c", "room");
    setCoordinate(9, 6,
        "/lib/tutorial/eledhel/southern-city/9x6.c", "room");
    setCoordinate(9, 7,
        "/lib/tutorial/eledhel/southern-city/9x7.c", "room");
    setCoordinate(9, 8,
        "/lib/tutorial/eledhel/southern-city/9x8.c", "room");
    setCoordinate(9, 9,
        "/lib/tutorial/eledhel/southern-city/9x9.c", "room");

    setCoordinate(10, 0,
        "/lib/tutorial/eledhel/southern-city/10x0.c", "room");
    setCoordinate(10, 1,
        "/lib/tutorial/eledhel/southern-city/10x1.c", "room");
    setCoordinate(10, 2,
        "/lib/tutorial/eledhel/southern-city/10x2.c", "path");
    setCoordinate(10, 3,
        "/lib/tutorial/eledhel/southern-city/10x3.c", "room");
    setCoordinate(10, 4,
        "/lib/tutorial/eledhel/southern-city/10x4.c", "room");
    setCoordinate(10, 5,
        "/lib/tutorial/eledhel/southern-city/10x5.c", "room");
    setCoordinate(10, 6,
        "/lib/tutorial/eledhel/southern-city/10x6.c", "room");
    setCoordinate(10, 7,
        "/lib/tutorial/eledhel/southern-city/10x7.c", "room");
    setCoordinate(10, 8,
        "/lib/tutorial/eledhel/southern-city/10x8.c", "room");
    setCoordinate(10, 9,
        "/lib/tutorial/eledhel/southern-city/10x9.c", "room");

    setCoordinate(11, 0,
        "/lib/tutorial/eledhel/southern-city/11x0.c", "room");
    setCoordinate(11, 1,
        "/lib/tutorial/eledhel/southern-city/11x1.c", "room");
    setCoordinate(11, 2,
        "/lib/tutorial/eledhel/southern-city/11x2.c", "path");
    setCoordinate(11, 3,
        "/lib/tutorial/eledhel/southern-city/11x3.c", "room");
    setCoordinate(11, 4,
        "/lib/tutorial/eledhel/southern-city/11x4.c", "room");
    setCoordinate(11, 5,
        "/lib/tutorial/eledhel/southern-city/11x5.c", "room");
    setCoordinate(11, 6,
        "/lib/tutorial/eledhel/southern-city/11x6.c", "room");
    setCoordinate(11, 7,
        "/lib/tutorial/eledhel/southern-city/11x7.c", "room");
    setCoordinate(11, 8,
        "/lib/tutorial/eledhel/southern-city/11x8.c", "room");
    setCoordinate(11, 9,
        "/lib/tutorial/eledhel/southern-city/11x9.c", "room");

    setCoordinate(12, 0,
        "/lib/tutorial/eledhel/southern-city/12x0.c", "path");
    setCoordinate(12, 1,
        "/lib/tutorial/eledhel/southern-city/12x1.c", "path");
    setCoordinate(12, 2,
        "/lib/tutorial/eledhel/southern-city/12x2.c", "path");
    setCoordinate(12, 3,
        "/lib/tutorial/eledhel/southern-city/12x3.c", "path");
    setCoordinate(12, 4,
        "/lib/tutorial/eledhel/southern-city/12x4.c", "path");
    setCoordinate(12, 5,
        "/lib/tutorial/eledhel/southern-city/12x5.c", "path");
    setCoordinate(12, 6,
        "/lib/tutorial/eledhel/southern-city/12x6.c", "path");
    setCoordinate(12, 7,
        "/lib/tutorial/eledhel/southern-city/12x7.c", "path");
    setCoordinate(12, 8,
        "/lib/tutorial/eledhel/southern-city/12x8.c", "path");
    setCoordinate(12, 9,
        "/lib/tutorial/eledhel/southern-city/12x9.c", "path");

    setCoordinate(13, 0,
        "/lib/tutorial/eledhel/southern-city/13x0.c", "room");
    setCoordinate(13, 1,
        "/lib/tutorial/eledhel/southern-city/13x1.c", "room");
    setCoordinate(13, 2,
        "/lib/tutorial/eledhel/southern-city/13x2.c", "path");
    setCoordinate(13, 3,
        "/lib/tutorial/eledhel/southern-city/13x3.c", "none");
    setCoordinate(13, 4,
        "/lib/tutorial/eledhel/southern-city/13x4.c", "shop");
    setCoordinate(13, 5,
        "/lib/tutorial/eledhel/southern-city/13x5.c", "none");
    setCoordinate(13, 6,
        "/lib/tutorial/eledhel/southern-city/13x6.c", "none");
    setCoordinate(13, 7,
        "/lib/tutorial/eledhel/southern-city/13x7.c", "none");
    setCoordinate(13, 8,
        "/lib/tutorial/eledhel/southern-city/13x8.c", "none");
    setCoordinate(13, 9,
        "/lib/tutorial/eledhel/southern-city/13x9.c", "none");

    setCoordinate(14, 0,
        "/lib/tutorial/eledhel/southern-city/14x0.c", "room");
    setCoordinate(14, 1,
        "/lib/tutorial/eledhel/southern-city/14x1.c", "room");
    setCoordinate(14, 2,
        "/lib/tutorial/eledhel/southern-city/14x2.c", "path");
    setCoordinate(14, 3,
        "/lib/tutorial/eledhel/southern-city/14x3.c", "none");
    setCoordinate(14, 4,
        "/lib/tutorial/eledhel/southern-city/14x4.c", "none");
    setCoordinate(14, 5,
        "/lib/tutorial/eledhel/southern-city/14x5.c", "path");
    setCoordinate(14, 6,
        "/lib/tutorial/eledhel/southern-city/14x6.c", "path");
    setCoordinate(14, 7,
        "/lib/tutorial/eledhel/southern-city/14x7.c", "path");
    setCoordinate(14, 8,
        "/lib/tutorial/eledhel/southern-city/14x8.c", "path");
    setCoordinate(14, 9,
        "/lib/tutorial/eledhel/southern-city/14x9.c", "path");

    setCoordinate(15, 1,
        "/lib/tutorial/eledhel/southern-city/15x1.c", "room");
    setCoordinate(15, 2,
        "/lib/tutorial/eledhel/southern-city/15x2.c", "path");
    setCoordinate(15, 3,
        "/lib/tutorial/eledhel/southern-city/15x3.c", "none");
    setCoordinate(15, 4,
        "/lib/tutorial/eledhel/southern-city/15x4.c", "none");
    setCoordinate(15, 5,
        "/lib/tutorial/eledhel/southern-city/15x5.c", "path");
    setCoordinate(15, 6,
        "/lib/tutorial/eledhel/southern-city/15x6.c", "room");
    setCoordinate(15, 7,
        "/lib/tutorial/eledhel/southern-city/15x7.c", "room");
    setCoordinate(15, 8,
        "/lib/tutorial/eledhel/southern-city/15x8.c", "room");
    setCoordinate(15, 9,
        "/lib/tutorial/eledhel/southern-city/15x9.c", "room");

    setCoordinate(16, 1,
        "/lib/tutorial/eledhel/southern-city/16x1.c", "room");
    setCoordinate(16, 2,
        "/lib/tutorial/eledhel/southern-city/16x2.c", "path");
    setCoordinate(16, 3,
        "/lib/tutorial/eledhel/southern-city/16x3.c", "path");
    setCoordinate(16, 4,
        "/lib/tutorial/eledhel/southern-city/16x4.c", "path");
    setCoordinate(16, 5,
        "/lib/tutorial/eledhel/southern-city/16x5.c", "path");
    setCoordinate(16, 6,
        "/lib/tutorial/eledhel/southern-city/16x6.c", "room");
    setCoordinate(16, 7,
        "/lib/tutorial/eledhel/southern-city/16x7.c", "room");
    setCoordinate(16, 8,
        "/lib/tutorial/eledhel/southern-city/16x8.c", "room");
    setCoordinate(16, 9,
        "/lib/tutorial/eledhel/southern-city/16x9.c", "room");

    setCoordinate(17, 1,
        "/lib/tutorial/eledhel/southern-city/17x1.c", "room");
    setCoordinate(17, 2,
        "/lib/tutorial/eledhel/southern-city/17x2.c", "path");
    setCoordinate(17, 3,
        "/lib/tutorial/eledhel/southern-city/17x3.c", "room");
    setCoordinate(17, 4,
        "/lib/tutorial/eledhel/southern-city/17x4.c", "room");
    setCoordinate(17, 5,
        "/lib/tutorial/eledhel/southern-city/17x5.c", "room");
    setCoordinate(17, 6,
        "/lib/tutorial/eledhel/southern-city/17x6.c", "room");
    setCoordinate(17, 7,
        "/lib/tutorial/eledhel/southern-city/17x7.c", "room");
    setCoordinate(17, 8,
        "/lib/tutorial/eledhel/southern-city/17x8.c", "room");
    setCoordinate(17, 9,
        "/lib/tutorial/eledhel/southern-city/17x9.c", "room");

    setCoordinate(18, 1,
        "/lib/tutorial/eledhel/southern-city/18x1.c", "room");
    setCoordinate(18, 2,
        "/lib/tutorial/eledhel/southern-city/18x2.c", "path");
    setCoordinate(18, 3,
        "/lib/tutorial/eledhel/southern-city/18x3.c", "room");
    setCoordinate(18, 4,
        "/lib/tutorial/eledhel/southern-city/18x4.c", "room");
    setCoordinate(18, 5,
        "/lib/tutorial/eledhel/southern-city/18x5.c", "room");
    setCoordinate(18, 6,
        "/lib/tutorial/eledhel/southern-city/18x6.c", "room");
    setCoordinate(18, 7,
        "/lib/tutorial/eledhel/southern-city/18x7.c", "room");
    setCoordinate(18, 8,
        "/lib/tutorial/eledhel/southern-city/18x8.c", "room");
    setCoordinate(18, 9,
        "/lib/tutorial/eledhel/southern-city/18x9.c", "room");

    setCoordinate(19, 1,
        "/lib/tutorial/eledhel/southern-city/19x1.c", "path");
    setCoordinate(19, 2,
        "/lib/tutorial/eledhel/southern-city/19x2.c", "path");
    setCoordinate(19, 3,
        "/lib/tutorial/eledhel/southern-city/19x3.c", "path");
    setCoordinate(19, 4,
        "/lib/tutorial/eledhel/southern-city/19x4.c", "room");
    setCoordinate(19, 5,
        "/lib/tutorial/eledhel/southern-city/19x5.c", "room");
    setCoordinate(19, 6,
        "/lib/tutorial/eledhel/southern-city/19x6.c", "room");
    setCoordinate(19, 7,
        "/lib/tutorial/eledhel/southern-city/19x7.c", "room");
    setCoordinate(19, 8,
        "/lib/tutorial/eledhel/southern-city/19x8.c", "room");
    setCoordinate(19, 9,
        "/lib/tutorial/eledhel/southern-city/19x9.c", "room");

    setCoordinate(20, 0,
        "/lib/tutorial/eledhel/southern-city/20x0.c", "room");
    setCoordinate(20, 1,
        "/lib/tutorial/eledhel/southern-city/20x1.c", "room");
    setCoordinate(20, 2,
        "/lib/tutorial/eledhel/southern-city/20x2.c", "room");
    setCoordinate(20, 3,
        "/lib/tutorial/eledhel/southern-city/20x3.c", "room");
    setCoordinate(20, 4,
        "/lib/tutorial/eledhel/southern-city/20x4.c", "room");
    setCoordinate(20, 5,
        "/lib/tutorial/eledhel/southern-city/20x5.c", "room");
    setCoordinate(20, 6,
        "/lib/tutorial/eledhel/southern-city/20x6.c", "room");
    setCoordinate(20, 7,
        "/lib/tutorial/eledhel/southern-city/20x7.c", "room");
    setCoordinate(20, 8,
        "/lib/tutorial/eledhel/southern-city/20x8.c", "room");
    setCoordinate(20, 9,
        "/lib/tutorial/eledhel/southern-city/20x9.c", "room");

    setCoordinate(21, 0,
        "/lib/tutorial/eledhel/southern-city/21x0.c", "room");
    setCoordinate(21, 1,
        "/lib/tutorial/eledhel/southern-city/21x1.c", "room");
    setCoordinate(21, 2,
        "/lib/tutorial/eledhel/southern-city/21x2.c", "room");
    setCoordinate(21, 3,
        "/lib/tutorial/eledhel/southern-city/21x3.c", "room");
    setCoordinate(21, 4,
        "/lib/tutorial/eledhel/southern-city/21x4.c", "room");
    setCoordinate(21, 5,
        "/lib/tutorial/eledhel/southern-city/21x5.c", "room");
    setCoordinate(21, 6,
        "/lib/tutorial/eledhel/southern-city/21x6.c", "room");
    setCoordinate(21, 7,
        "/lib/tutorial/eledhel/southern-city/21x7.c", "room");
    setCoordinate(21, 8,
        "/lib/tutorial/eledhel/southern-city/21x8.c", "room");
    setCoordinate(21, 9,
        "/lib/tutorial/eledhel/southern-city/21x9.c", "room");

    setCoordinate(22, 1,
        "/lib/tutorial/eledhel/southern-city/22x1.c", "room");
    setCoordinate(22, 2,
        "/lib/tutorial/eledhel/southern-city/22x2.c", "room");
    setCoordinate(22, 3,
        "/lib/tutorial/eledhel/southern-city/22x3.c", "room");
    setCoordinate(22, 4,
        "/lib/tutorial/eledhel/southern-city/22x4.c", "room");
    setCoordinate(22, 5,
        "/lib/tutorial/eledhel/southern-city/22x5.c", "room");
    setCoordinate(22, 6,
        "/lib/tutorial/eledhel/southern-city/22x6.c", "room");
    setCoordinate(22, 7,
        "/lib/tutorial/eledhel/southern-city/22x7.c", "room");
    setCoordinate(22, 8,
        "/lib/tutorial/eledhel/southern-city/22x8.c", "room");
    setCoordinate(22, 9,
        "/lib/tutorial/eledhel/southern-city/22x9.c", "room");

    setCoordinate(23, 1,
        "/lib/tutorial/eledhel/southern-city/23x1.c", "room");
    setCoordinate(23, 2,
        "/lib/tutorial/eledhel/southern-city/23x2.c", "room");
    setCoordinate(23, 3,
        "/lib/tutorial/eledhel/southern-city/23x3.c", "room");
    setCoordinate(23, 4,
        "/lib/tutorial/eledhel/southern-city/23x4.c", "room");
    setCoordinate(23, 5,
        "/lib/tutorial/eledhel/southern-city/23x5.c", "room");
    setCoordinate(23, 6,
        "/lib/tutorial/eledhel/southern-city/23x6.c", "room");
    setCoordinate(23, 7,
        "/lib/tutorial/eledhel/southern-city/23x7.c", "room");
    setCoordinate(23, 8,
        "/lib/tutorial/eledhel/southern-city/23x8.c", "room");
    setCoordinate(23, 9,
        "/lib/tutorial/eledhel/southern-city/23x9.c", "room");

    setCoordinate(24, 1,
        "/lib/tutorial/eledhel/southern-city/24x1.c", "room");
    setCoordinate(24, 2,
        "/lib/tutorial/eledhel/southern-city/24x2.c", "room");
    setCoordinate(24, 3,
        "/lib/tutorial/eledhel/southern-city/24x3.c", "room");
    setCoordinate(24, 4,
        "/lib/tutorial/eledhel/southern-city/24x4.c", "room");
    setCoordinate(24, 5,
        "/lib/tutorial/eledhel/southern-city/24x5.c", "room");
    setCoordinate(24, 6,
        "/lib/tutorial/eledhel/southern-city/24x6.c", "room");
    setCoordinate(24, 7,
        "/lib/tutorial/eledhel/southern-city/24x7.c", "room");
    setCoordinate(24, 8,
        "/lib/tutorial/eledhel/southern-city/24x8.c", "room");
    setCoordinate(24, 9,
        "/lib/tutorial/eledhel/southern-city/24x9.c", "room");

    // MapIcons
}

