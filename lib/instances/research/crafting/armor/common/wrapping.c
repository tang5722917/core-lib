//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Wrapping - Armor");
    addSpecification("source", "crafting");
    addSpecification("description", "This skill provides the user with the "
        "knowledge of wrapping metal - a treatment wherein multiple "
        "different metals are hammered thin and folded in alternating "
        "layers - typically with a thin dusting of a powdered "
        "strengthening agent such as carbon or saltpeter placed between "
        "the layers. The resultant lamellar metal is extremely hard, yet "
        "quite pliable.");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);

    addPrerequisite("/lib/instances/research/crafting/armor/common/folding.c",
        (["type":"research"]));
    addPrerequisite("metal crafting", (["type":"skill", "value" : 8]));
    addPrerequisite("blacksmithing", (["type":"skill", "value" : 8]));
    addPrerequisite("chemistry", (["type":"skill", "value" : 5]));
    addPrerequisite("physics", (["type":"skill", "value" : 6]));
    addPrerequisite("mathematics", (["type":"skill", "value" : 4]));

    addSpecification("limited by", (["crafting type":({ "chainmail",
        "plate armor", "splint armor", "scale armor", "helmet" })]));

    addSpecification("bonus crafting value multiplier", 25);
    addSpecification("bonus crafting encumberance reduction", 10);
    addSpecification("bonus crafting weight reduction", 5);
    addSpecification("bonus crafting armor class", 1);
}
