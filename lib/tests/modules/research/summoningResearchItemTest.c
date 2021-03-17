//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/tests/framework/testFixture.c";
#include "/lib/include/inventory.h"

object User;
object Target;
object Room;

/////////////////////////////////////////////////////////////////////////////
void Setup()
{
    User = clone_object("/lib/tests/support/services/mockPlayer.c");
    User->Name("Bob");
    User->addAlias("bob");
    User->Str(20);
    User->Int(20);
    User->Dex(20);
    User->Con(20);
    User->Wis(20);
    User->Chr(20);
    User->hitPoints(User->maxHitPoints());
    User->spellPoints(User->maxSpellPoints());
    User->staminaPoints(User->maxStaminaPoints());
    User->addCommands();
    User->addSkillPoints(200);
    User->advanceSkill("long sword", 16);
    User->ToggleMockResearch();
    User->addResearchPoints(50);
    User->initiateResearch("lib/tests/support/research/summoningItem.c");

    Target = clone_object("/lib/realizations/monster.c");
    Target->Name("Frank");
    Target->addAlias("frank");
    Target->Str(20);
    Target->Int(20);
    Target->Dex(20);
    Target->Con(20);
    Target->Wis(20);
    Target->Chr(20);
    Target->hitPoints(Target->maxHitPoints());
    Target->spellPoints(Target->maxSpellPoints());
    Target->staminaPoints(Target->maxStaminaPoints());

    Room = clone_object("/lib/environment/environment");
    move_object(User, Room);
    move_object(Target, Room);
}

/////////////////////////////////////////////////////////////////////////////
void CleanUp()
{
    destruct(User->getParty());
    destruct(Target);
    destruct(User);
    destruct(Room);
}

/////////////////////////////////////////////////////////////////////////////
void SummoningWithUnResearchedModifierDoesNotApplyModifier()
{
//    User->initiateResearch("lib/tests/support/research/weaselBuff.c");

    ExpectEq(2, sizeof(all_inventory(Room)));

    command("summon weasel", User);
    ExpectEq(3, sizeof(all_inventory(Room)));

    object weasel = (all_inventory(Room) - ({ User, Target }))[0];
    ExpectEq(10, weasel->Str());
    ExpectEq(10, weasel->Int());
    ExpectEq(10, weasel->Wis());
    ExpectEq(10, weasel->Dex());
    ExpectEq(10, weasel->Con());
    ExpectEq(10, weasel->Chr());
    ExpectEq(110, weasel->hitPoints());
    ExpectEq(310, weasel->staminaPoints());
    ExpectEq("You scream, `Let there be weasels!'\n", User->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void SummoningWithResearchedModifierAppliesModifier()
{
    User->initiateResearch("lib/tests/support/research/weaselBuff.c");

    ExpectEq(2, sizeof(all_inventory(Room)));

    command("summon weasel", User);
    ExpectEq(3, sizeof(all_inventory(Room)));

    object weasel = (all_inventory(Room) - ({ User, Target }))[0];
    ExpectEq(13, weasel->Str());
    ExpectEq(10, weasel->Int());
    ExpectEq(13, weasel->Wis());
    ExpectEq(10, weasel->Dex());
    ExpectEq(10, weasel->Con());
    ExpectEq(9, weasel->Chr());
    ExpectEq(160, weasel->hitPoints());
    ExpectEq(269, weasel->staminaPoints());
    ExpectEq("You scream, `Let there be weasels!'\n", User->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void CanDisplayResearchInfo()
{
    object effect = clone_object("lib/tests/support/research/weaselBuff.c");

    set_this_player(User);
    User->colorConfiguration("none");

    ExpectEq("Research Name   : Weasel Buff\n"
        "Weasel buffing is where it's at.\n"
        "\n"
        "Learning this costs 1 research point.\n"
        "Research Type   : Knowledge\n"
        "Scope           : Self\n"
        "Effect          : Strategic\n"
        "Effects for Summon Weasel :\n"
        "                  (+50) Bonus hit points\n"
        "                  (+3) Bonus strength\n"
        "                  (+3) Bonus wisdom\n"
        "                  (-50) Penalty to stamina points\n"
        "                  (-1) Penalty to charisma\n"
        "                  Fortified is applied to summoned creature\n",
        effect->researchDetails());
}
