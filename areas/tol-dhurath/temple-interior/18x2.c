//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    cloneEnvironment();
    setStateMachine("/areas/tol-dhurath/state-machine/tol-dhurath-quest.c");

    setInterior("/lib/environment/interiors/ruin.c");
    addDecorator("ruined interior floor");
}

/////////////////////////////////////////////////////////////////////////////
public string **customIcon(string **baseIcon, string color, string charset)
{
    string baseColor = getDictionary("region")->iconColor(
        decoratorType(), color);

    baseIcon[2][0] = sprintf("%s%s%s", baseColor,
        (charset == "unicode") ? "\u2550" : "=",
        (baseColor != "") ? "\x1b[0m" : baseColor);
    baseIcon[2][1] = sprintf("%s%s%s", baseColor,
        (charset == "unicode") ? "\u2550" : "=",
        (baseColor != "") ? "\x1b[0m" : baseColor);
    baseIcon[2][2] = sprintf("%s%s%s", baseColor,
        (charset == "unicode") ? "\u2550" : "=",
        (baseColor != "") ? "\x1b[0m" : baseColor);

    return baseIcon;
}
