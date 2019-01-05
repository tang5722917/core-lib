//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        passiveResearchItem::reset(arg);
        addSpecification("name", "Mystic Wrapping - Weapons");
        addSpecification("source", "crafting");
        addSpecification("description", "This skill provides the user with the "
            "knowledge of mystic wrapping metal - a treatment wherein multiple "
            "different metals are hammered thin and folded in alternating "
            "layers - typically with a thin dusting of a powdered "
            "strengthening agent such as carbon or saltpeter placed between "
            "the layers. The resultant lamellar metal is extremely hard, yet "
            "quite pliable.");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);

        addPrerequisite("lib/instances/research/crafting/weapons/common/mystic-folding.c",
            (["type":"research"]));
        addSpecification("limited by", (["crafting type":({ "sword", "dagger",
            "pole arm", "staff", "axe", "hammer", "mace", "flail", "crossbow",
            "bow", "sling", "thrown", "shield" })]));

        addSpecification("bonus crafting weapon class", 1);
        addSpecification("bonus crafting value multiplier", 25);
        addSpecification("bonus crafting encumberance reduction", 10);
        addSpecification("bonus crafting weight reduction", 5);
        addSpecification("bonus crafting attack", 1);
    }
}
