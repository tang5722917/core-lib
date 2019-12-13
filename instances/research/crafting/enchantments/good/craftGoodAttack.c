//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        knowledgeResearchItem::reset(arg);
        addSpecification("name", "Good Attack");
        addSpecification("source", "enchanting");
        addSpecification("description", "This skill provides the user with the "
            "knowledge required to convert the attack form for a weapon into a good attack.");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);

        addSpecification("limited by", (["crafting type":"staff"]));

        addPrerequisite("lib/instances/research/crafting/enchantments/craftAttackEnchantments.c", (["type":"research"]));
    }
}
