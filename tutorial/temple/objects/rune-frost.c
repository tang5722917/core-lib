//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/treasure.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        set("name", "rune of frost");
        set("short", "Rune of Frost");
        set("aliases", ({ "rune", "rune of frost", "frost" }));
        set("long", "A fist-sized slab of amethyst has some intricately carved "
            "runes on it. You can distinguish the Khazdic symbol for the word "
            "'frost' and see the words, \x1b[0;35;3mFreezing\x1b[0m "
            "next to it.\n");
    }
}

/////////////////////////////////////////////////////////////////////////////
public int isObedienceRune()
{
    return 1;
}

/////////////////////////////////////////////////////////////////////////////
public string getRuneType()
{
    return "frost";
}
