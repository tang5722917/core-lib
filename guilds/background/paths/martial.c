//*****************************************************************************
// Copyright (c) 2024 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/researchTree.c";

/////////////////////////////////////////////////////////////////////////////
private void FirstLevel()
{

}

/////////////////////////////////////////////////////////////////////////////
private void SecondLevel()
{

}

/////////////////////////////////////////////////////////////////////////////
private void ThirdLevel()
{

}

/////////////////////////////////////////////////////////////////////////////
private void FourthLevel()
{

}

/////////////////////////////////////////////////////////////////////////////
private void FifthLevel()
{

}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    Name("A Childhood of Structured Military Learning");
    Description("");
    Source("background");
    addResearchElement("/guilds/background/paths/martial/root.c");
    TreeRoot("/guilds/background/paths/martial/root.c");

    FirstLevel();
    SecondLevel();
    ThirdLevel();
    FourthLevel();
    FifthLevel();
}
