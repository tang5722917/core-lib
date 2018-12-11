//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/combat/attacks/baseAttack.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        ::reset(arg);
        setDamageType("air");
        addHitDictionary(({
            "blast", "whip", "slice", "concuss", "flatten", "crush", "slam",
            "crash", "buffet" }));

        addSimileDictionary(({
            "against ##TargetPossessive## ##BodyPart##", "with a whip-like force",
            "with an ear-piercing whistle" }));

        addMissMessage("A pleasant breeze wafts in from ##AttackerPossessive::Name## "
            "direction.");

        addHitMessage("##AttackerName## ##HitDictionary## ##TargetName## "
            "##SimileDictionary## that leaves a scent of ozone in the air.",
            "1-50");
        addHitMessage("##AttackerName## ##Infinitive::slam## ##TargetName## "
            "backwards with a violent blast of wind.",
            "51-150");
    }
}



