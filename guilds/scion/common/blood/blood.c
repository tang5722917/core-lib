//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

protected string WeaponType;

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
}

/////////////////////////////////////////////////////////////////////////////
protected void AdditionalResearch()
{
}

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/soulspike.c", WeaponType));
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/soulstrike.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/soulspike.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/root.c", WeaponType));
    addChild(sprintf("lib/guilds/scion/paths/%s/blood/soulstrike.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/root.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/sweeping-torment.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/sweeping-torment.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/soulstrike.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/choking-tendrils.c", WeaponType));
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/parasitic-charge.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/choking-tendrils.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/soulstrike.c", WeaponType));
    addChild(sprintf("lib/guilds/scion/paths/%s/blood/parasitic-charge.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/soulspike.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void SeventhLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/soul-brand.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/soul-brand.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/sweeping-torment.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void NinthLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/soul-shear.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/soul-shear.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/soulspike.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void EleventhLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/scourge-strike.c", WeaponType));
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/malefic-barrier.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/scourge-strike.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/soul-brand.c", WeaponType));
    addChild(sprintf("lib/guilds/scion/paths/%s/blood/malefic-barrier.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/choking-tendrils.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void ThirteenthLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/enervating-barrier.c", WeaponType));
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/leechs-promise.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/enervating-barrier.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/choking-tendrils.c", WeaponType));
    addChild(sprintf("lib/guilds/scion/paths/%s/blood/leechs-promise.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/parasitic-charge.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void FifteenthLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/wicked-edge.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/wicked-edge.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/scourge-strike.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void SeventeenthLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/sanguine-blast.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/sanguine-blast.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/soul-shear.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void NineteenthLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/enervation.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/enervation.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/leechs-promise.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFirstLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/tortured-curse.c", WeaponType));
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/corrupting-barrier.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/tortured-curse.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/wicked-edge.c", WeaponType));
    addChild(sprintf("lib/guilds/scion/paths/%s/blood/corrupting-barrier.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/malefic-barrier.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyThirdLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/sanguine-shroud.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/sanguine-shroud.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/root.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyFifthLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/malefic-strike.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/malefic-strike.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/soulstrike.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void TwentySeventhLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/malefic-discharge.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/malefic-discharge.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/enervation.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void TwentyNinthLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/carnage.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/carnage.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/soul-shear.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFirstLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/soul-shield.c", WeaponType));
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/nefarious-barrier.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/soul-shield.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/sanguine-shroud.c", WeaponType));
    addChild(sprintf("lib/guilds/scion/paths/%s/blood/nefarious-barrier.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/corrupting-barrier.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyThirdLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/bloodswarm.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/bloodswarm.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/enervating-barrier.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyFifthLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/shield-of-corruption.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/shield-of-corruption.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/soul-shield.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtySeventhLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/destruction.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/destruction.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/sanguine-blast.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
private void ThirtyNinthLevel()
{
    addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/crimson-eruption.c", WeaponType));

    addChild(sprintf("lib/guilds/scion/paths/%s/blood/crimson-eruption.c", WeaponType),
        sprintf("lib/guilds/scion/paths/%s/blood/malefic-discharge.c", WeaponType));
}

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        researchTree::reset(arg);
        Name("Path of Blood");
        Source("Scion of Dhuras Guild");
        Description("This skill provides the user with the knowledge to "
            "express their raw magical energy as blood magic.");
        Setup();

        if (WeaponType)
        {
            addResearchElement(sprintf("lib/guilds/scion/paths/%s/blood/root.c", WeaponType));
            TreeRoot(sprintf("lib/guilds/scion/paths/%s/blood/root.c", WeaponType));

            FirstLevel();
            ThirdLevel();
            FifthLevel();
            SeventhLevel();
            NinthLevel();
            EleventhLevel();
            ThirteenthLevel();
            FifteenthLevel();
            SeventeenthLevel();
            NineteenthLevel();
            TwentyFirstLevel();
            TwentyThirdLevel();
            TwentyFifthLevel();
            TwentySeventhLevel();
            TwentyNinthLevel();
            ThirtyFirstLevel();
            ThirtyThirdLevel();
            ThirtyFifthLevel();
            ThirtySeventhLevel();
            ThirtyNinthLevel();
            AdditionalResearch();

        }
    }
}
