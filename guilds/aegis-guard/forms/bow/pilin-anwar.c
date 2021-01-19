//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        knowledgeResearchItem::reset(arg);
        addSpecification("name", "Pilin Anwar");
        addSpecification("source", "Aegis Guard");
        addSpecification("description", "This skill provides the user with "
            "mystic knowledge that enhances magical archery attacks.");

        addPrerequisite("level",
            (["type":"level",
                "guild": "Aegis Guard",
                "value": 15
            ]));
        addPrerequisite("guilds/aegis-guard/forms/bow/root.c",
            (["type":"research"]));

        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addSpecification("affected research", ([
            "Pilin ai Ambar": 15,
            "Pilin ai Naurtho": 15,
            "Pilin ai Heleg": 15,
            "Pilin ai Glauro": 15,
            "Pilin ai Guruthos": 15,
            "Pilin ai Lhutha": 15,
            "Pilin ai Angolo": 15,
        ]));
        addSpecification("affected research type", "percentage");
    }
}
