//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/guilds/scion/common/evocation/magical-edge.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    WeaponType = "dagger";

    addSpecification("limited by", (["equipment":({ "dagger", "short sword" })]));
}
