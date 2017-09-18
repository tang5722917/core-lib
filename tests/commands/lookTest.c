//*****************************************************************************
// Copyright (c) 2017 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/tests/framework/testFixture.c";
#include "/lib/include/inventory.h"
#include "/lib/include/itemFormatters.h"

object Player;
object Environment;

string *Slots = ({ "Primary Weapon", "Equipped Offhand", "Worn Armor", "Worn Helmet",
    "Worn Gloves", "Worn Boots", "Worn Cloak", "Worn Amulet", "Worn Belt",
    "Worn Arm Greaves", "Worn Leg Greaves", "Worn Bracers", "Worn First Ring",
    "Worn Second Ring" });

string Bar = "[0;31m+-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n[0m";
string EquippedItem = "[0;31m| [0m[0;36m%s:%s[0m[0;%sm%s[0m%s\n";
string nothingEquipped = "[0;31m| [0m[0;36m%s:%s[0m[0;30;1mnothing[0m\n";
string UnequippedItem = "[0;31m| [0m[0;37;1m%s[0m%s\n";

/////////////////////////////////////////////////////////////////////////////
varargs string BuildInventoryString(mapping equipped, string *unequipped, int verbose)
{
    string ret = "";
    
    string showVerbose = verbose ? "   (blarg)" : "";

    if(sizeof(equipped))
    {
        ret += Bar;
        foreach(string slot in Slots)
        {
            string spacing = (strlen(slot) >= 14) ? "\t" : "\t\t";

            if(member(equipped, slot))
            {
                ret += sprintf(EquippedItem, slot, spacing, equipped[slot]["type"], equipped[slot]["data"], showVerbose);
            }
            else
            {
                ret += sprintf(nothingEquipped, slot, spacing);
            }

            if(slot == "Equipped Offhand")
            {
                ret += Bar;
            }
        }
        ret += Bar;
    }

    if(sizeof(unequipped))
    {
        foreach(string item in unequipped)
        {
            ret += sprintf(UnequippedItem, item, showVerbose);
        }

        ret += Bar;
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
string PrepPlayerWithInventory()
{
    Player->Race("elf");
    Player->Gender(1);
    Player->hitPoints(Player->maxHitPoints());

    object weapon = clone_object("/lib/items/weapon");
    weapon->set("name", "blah");
    weapon->set("short", "Sword of Blah");
    weapon->set("user description", "##UserName## has a shiny blah!");
    weapon->set("equipment locations", OnehandedWeapon);
    move_object(weapon, Player);
    weapon->equip("blah");
    mapping items = (["Primary Weapon":(["type":"37;1", "data" : "Sword of Blah"])]);

    object armor = clone_object("/lib/items/armor");
    armor->set("name", "blarg");
    armor->set("short", "Equipment of equippedness");
    armor->set("equipment locations", Gloves | Armor | ArmGreaves | LegGreaves | Boots);
    move_object(armor, Player);
    armor->equip("blarg");
    items["Worn Armor"] = (["type":"37;1", "data" : "Equipment of equippedness"]);
    items["Worn Gloves"] = (["type":"37;1", "data" : "Equipment of equippedness"]);
    items["Worn Boots"] = (["type":"37;1", "data" : "Equipment of equippedness"]);
    items["Worn Arm Greaves"] = (["type":"37;1", "data" : "Equipment of equippedness"]);
    items["Worn Leg Greaves"] = (["type":"37;1", "data" : "Equipment of equippedness"]);

    armor = clone_object("/lib/items/armor");
    armor->set("name", "f");
    armor->set("short", "Some junk");
    armor->set("equipment locations", Gloves | Armor | ArmGreaves | LegGreaves | Boots);
    move_object(armor, Player);
    string *unequipped = ({ "Some junk" });

    return BuildInventoryString(items, unequipped);
}

/////////////////////////////////////////////////////////////////////////////
void Init()
{
    ignoreList += ({ "BuildInventoryString", "PrepPlayerWithInventory" });
}

/////////////////////////////////////////////////////////////////////////////
void Setup()
{
    Player = clone_object("/lib/tests/support/services/mockPlayer.c");
    Player->Name("bob");
    Player->addCommands();
    Player->Str(10);
    Player->Dex(10);
    Player->Con(10);
    Player->Int(10);
    Player->Wis(10);
    Player->hitPoints(30);

    Environment = clone_object("/lib/tests/support/environment/testEnvironment.c");
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    move_object(Player, Environment);
}

/////////////////////////////////////////////////////////////////////////////
void CleanUp()
{
    destruct(Player);
    destruct(Environment);
}

/////////////////////////////////////////////////////////////////////////////
void ExecuteRegexpIsNotGreedy()
{
    ExpectFalse(Player->executeCommand("exam"));
    ExpectFalse(Player->executeCommand("lo"));
    ExpectFalse(Player->executeCommand("lookat"));
}

/////////////////////////////////////////////////////////////////////////////
void ExecuteRegexpFailsIfInvalidFlagsPassed()
{
    ExpectFalse(Player->executeCommand("look -t bob"));
}

/////////////////////////////////////////////////////////////////////////////
void LookAtLivingShowsInventory()
{
    string expectedInventory = PrepPlayerWithInventory();

    ExpectTrue(Player->executeCommand("look at bob"));
    ExpectEq("Bob the title-less (male) (elf)\nHe is in good shape.\nBob has a shiny blah!\n\tCarrying:\n" + 
        expectedInventory, Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void LookAtLivingWithBriefDoesNotShowInventory()
{
    PrepPlayerWithInventory();

    ExpectTrue(Player->executeCommand("look -b at bob"));
    ExpectEq("Bob the title-less (male) (elf)\nHe is in good shape.\nBob has a shiny blah!\n",
        Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void LookInLivingShowsInventory()
{
    string expectedInventory = PrepPlayerWithInventory();

    ExpectTrue(Player->executeCommand("look in bob"));
    ExpectEq("Bob the title-less (male) (elf)\nHe is in good shape.\nBob has a shiny blah!\n\tCarrying:\n" +
        expectedInventory, Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void LookInLivingWithBriefDoesNotShowInventory()
{
    PrepPlayerWithInventory();

    ExpectTrue(Player->executeCommand("look -b in bob"));
    ExpectEq("Bob the title-less (male) (elf)\nHe is in good shape.\nBob has a shiny blah!\n",
        Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void LAtLivingShowsInventory()
{
    string expectedInventory = PrepPlayerWithInventory();

    ExpectTrue(Player->executeCommand("l at bob"));
    ExpectEq("Bob the title-less (male) (elf)\nHe is in good shape.\nBob has a shiny blah!\n\tCarrying:\n" +
        expectedInventory, Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void LAtLivingWithBriefDoesNotShowInventory()
{
    PrepPlayerWithInventory();

    ExpectTrue(Player->executeCommand("l -b at bob"));
    ExpectEq("Bob the title-less (male) (elf)\nHe is in good shape.\nBob has a shiny blah!\n",
        Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void LInLivingShowsInventory()
{
    string expectedInventory = PrepPlayerWithInventory();

    ExpectTrue(Player->executeCommand("l in bob"));
    ExpectEq("Bob the title-less (male) (elf)\nHe is in good shape.\nBob has a shiny blah!\n\tCarrying:\n" +
        expectedInventory, Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void LInLivingWithBriefDoesNotShowInventory()
{
    PrepPlayerWithInventory();

    ExpectTrue(Player->executeCommand("l -b in bob"));
    ExpectEq("Bob the title-less (male) (elf)\nHe is in good shape.\nBob has a shiny blah!\n",
        Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void ExaLivingShowsInventory()
{
    string expectedInventory = PrepPlayerWithInventory();

    ExpectTrue(Player->executeCommand("exa bob"));
    ExpectEq("Bob the title-less (male) (elf)\nHe is in good shape.\nBob has a shiny blah!\n\tCarrying:\n" +
        expectedInventory, Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void ExaLivingWithBriefDoesNotShowInventory()
{
    PrepPlayerWithInventory();

    ExpectTrue(Player->executeCommand("exa -b bob"));
    ExpectEq("Bob the title-less (male) (elf)\nHe is in good shape.\nBob has a shiny blah!\n",
        Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void ExamineLivingShowsInventory()
{
    string expectedInventory = PrepPlayerWithInventory();

    ExpectTrue(Player->executeCommand("examine bob"));
    ExpectEq("Bob the title-less (male) (elf)\nHe is in good shape.\nBob has a shiny blah!\n\tCarrying:\n" +
        expectedInventory, Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void ExamineLivingWithBriefDoesNotShowInventory()
{
    PrepPlayerWithInventory();

    ExpectTrue(Player->executeCommand("examine -b bob"));
    ExpectEq("Bob the title-less (male) (elf)\nHe is in good shape.\nBob has a shiny blah!\n",
        Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void GlanceAtDoesNotShowInventory()
{
    PrepPlayerWithInventory();

    ExpectTrue(Player->executeCommand("glance at bob"));
    ExpectEq("Bob the title-less (male) (elf)\nHe is in good shape.\nBob has a shiny blah!\n",
        Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void GlanceInDoesNotShowInventory()
{
    PrepPlayerWithInventory();

    ExpectTrue(Player->executeCommand("glance in bob"));
    ExpectEq("Bob the title-less (male) (elf)\nHe is in good shape.\nBob has a shiny blah!\n",
        Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void LookAtItemShowsDetails()
{
    object weapon = clone_object("/lib/items/weapon");
    weapon->set("name", "blah");
    weapon->set("weapon type", "long sword");
    weapon->set("short", "Sword of Blah");
    move_object(weapon, Player);
    weapon->equip("blah");

    Player->addSkillPoints(100);
    Player->advanceSkill("long sword", 6);

    ExpectTrue(Player->executeCommand("look at blah"));
    ExpectEq("Sword of Blah\n" + 
        sprintf(NormalEquipment, "This long sword is typical for its type.\n") + 
        sprintf(Unidentified, "This item has not been identified.\n") + "\n",
        Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void LookAtNonexistentThingReturnsFailureMessage()
{
    ExpectTrue(Player->executeCommand("look at llama"));
    ExpectSubStringMatch("There is no 'llama' here.",
        Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void LookWithoutArgsShowsEnvironment()
{
    ExpectTrue(Player->executeCommand("look"));
    ExpectSubStringMatch("a forest. To the north you see a stand of majestic oak trees with branches laden with acorns.",
        Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void CanLookAtEnvironmentElements()
{
    ExpectTrue(Player->executeCommand("look at oak"));
    ExpectSubStringMatch("many majestic oaks with branches laden with acorns",
        Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void CanOnlyLookAtEnvironmentElementsWhenInCorrectState()
{
    ExpectTrue(Player->executeCommand("look at charred stumps"));
    ExpectSubStringMatch("There is no 'charred stumps' here.",
        Player->caughtMessage());

    Environment->currentState("deadified");
    ExpectTrue(Player->executeCommand("look at charred stumps"));
    ExpectSubStringMatch("You see many charred tree stumps.",
        Player->caughtMessage());
}