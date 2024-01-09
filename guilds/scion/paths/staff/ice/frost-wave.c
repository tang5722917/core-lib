//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/guilds/scion/common/ice/frost-wave.c";

/////////////////////////////////////////////////////////////////////////////
protected void SetupResearch()
{
    WeaponType = "staff";
    WeaponSkill = "staff";
    ValidWeaponTypes = ({ "staff" });

    addSpecification("limited by", (["equipment": ValidWeaponTypes]));
}
