//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/guilds/scion/common/ice/call-of-winter.c";

/////////////////////////////////////////////////////////////////////////////
protected void SetupResearch()
{
    WeaponType = "hammer";
    WeaponSkill = "hammer";
    ValidWeaponTypes = ({ "hammer" });

    addSpecification("limited by", (["equipment": ValidWeaponTypes]));
}
