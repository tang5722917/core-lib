//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/guilds/scion/common/flame/flame-bolt.c";

/////////////////////////////////////////////////////////////////////////////
protected void SetupResearch()
{
    WeaponType = "axe";
    WeaponSkill = "axe";
    ValidWeaponTypes = ({ "axe" });

    addSpecification("limited by", (["equipment": ValidWeaponTypes]));
}
