//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

protected string WeaponType = "ERROR";
protected string WeaponSkill = "unarmed";
protected string *ValidWeaponTypes = ({ });

/////////////////////////////////////////////////////////////////////////////
protected void SetupResearch()
{
}

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Fireball");
    addSpecification("source", "Scion of Dhuras Guild");
    addSpecification("description", "This research provides the user with the "
        "knowledge of the fireball technique. By means of this, the "
        "Scion is able to use their weapon as a conduit for emitting a ball "
        "of flame at all foes in the area.");
    SetupResearch();

    addPrerequisite(sprintf("/guilds/scion/paths/%s/root.c", WeaponType),
        (["type":"research"]));
    addPrerequisite(sprintf("/guilds/scion/paths/%s/flame/fire-bolt.c", WeaponType),
        (["type":"research"]));
    addPrerequisite("level",
        (["type":"level",
            "guild": "Scion of Dhuras",
            "value": 17
        ]));

    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 150);
    addSpecification("spell point cost modifiers", ([
        sprintf("/guilds/scion/paths/%s/flame/scions-reserve.c", WeaponType): 10,
        sprintf("/guilds/scion/paths/%s/flame/scions-call.c", WeaponType): 10,
        sprintf("/guilds/scion/paths/%s/flame/scions-might.c", WeaponType): 10,
        sprintf("/guilds/scion/paths/%s/flame/scions-fury.c", WeaponType): 10,
    ]));

     addSpecification("damage hit points", ({ ([
            "probability": 90,
            "base damage": 40,
            "range": 80
        ]),
        ([
            "probability": 10,
            "base damage": 80,
            "range": 160
        ])
    }));
    addSpecification("damage stamina points", ({ ([
            "probability": 90,
            "base damage": 20,
            "range": 40
        ]),
        ([
            "probability": 10,
            "base damage": 40,
            "range": 80
        ])
    }));

    addSpecification("damage type", "fire");

    addSpecification("modifiers", ({ 
        ([
            "type":"research",
            "research item": sprintf("/guilds/scion/paths/%s/flame/fuel-the-flames.c", WeaponType),
            "name" : "Fuel the Flames",
            "formula" : "multiplicative",
            "base value" : 1,
            "rate": 1.25
        ]),
        ([
            "type":"research",
            "research item": sprintf("/guilds/scion/paths/%s/flame/scorching-mark.c", WeaponType),
            "name" : "Scorching Mark",
            "formula" : "multiplicative",
            "base value" : 1,
            "rate": 1.25
        ]),
        ([
            "type":"research",
            "research item": sprintf("/guilds/scion/paths/%s/flame/stoking-rage.c", WeaponType),
            "name" : "Stoking Rage",
            "formula" : "multiplicative",
            "base value" : 1,
            "rate": 1.25
        ]),
        ([
            "type":"research",
            "research item": sprintf("/guilds/scion/paths/%s/flame/enhanced-blaze.c", WeaponType),
            "name" : "Enhanced Blaze",
            "formula" : "multiplicative",
            "base value" : 1,
            "rate": 1.35
        ]),
        ([
            "type":"research",
            "research item": sprintf("/guilds/scion/paths/%s/flame/inferno-mark.c", WeaponType),
            "name" : "Inferno Mark",
            "formula" : "multiplicative",
            "base value" : 1,
            "rate": 1.4
        ]),
        ([
            "type":"research",
            "research item": sprintf("/guilds/scion/paths/%s/flame/enhanced-flames.c", WeaponType),
            "name" : "Enhanced Flames",
            "formula" : "multiplicative",
            "base value" : 1,
            "rate": 1.25
        ]),
        ([
            "type":"research",
            "research item": sprintf("/guilds/scion/paths/%s/flame/raging-inferno.c", WeaponType),
            "name" : "Raging Inferno",
            "formula" : "multiplicative",
            "base value" : 1,
            "rate": 1.25
        ]),
        ([
            "type":"research",
            "research item": sprintf("/guilds/scion/paths/%s/flame/scorching-blast.c", WeaponType),
            "name" : "Scorching Blast",
            "formula" : "multiplicative",
            "base value" : 1,
            "rate": 1.25
        ]),
        ([
            "type":"research",
            "research item": sprintf("/guilds/scion/paths/%s/flame/incinerating-strike.c", WeaponType),
            "name" : "Incinerating Strike",
            "formula" : "multiplicative",
            "base value" : 1,
            "rate": 1.5
        ]),
        ([
            "type": "weapon damage",
            "name": WeaponSkill,
            "types": ValidWeaponTypes,
            "formula": "additive",
            "rate": 1.0
        ]),
        ([
            "type":"skill",
            "name" : WeaponSkill,
            "formula" : "additive",
            "rate" : 0.05
        ]),
        ([
            "type":"skill",
            "name" : "elemental fire",
            "formula" : "additive",
            "rate" : 0.10
        ]),
        ([
            "type": "level",
            "name": "level",
            "formula": "logarithmic",
            "rate": 1.05
        ]),
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "logarithmic",
            "rate": 1.25
        ]),
        ([
            "type":"skill",
            "name": "magical essence",
            "formula": "logarithmic",
            "rate": 1.25
        ]),
        ([
            "type":"skill",
            "name" : "physics",
            "formula" : "additive",
            "rate" : 0.10
        ]),
        ([
            "type": "skill",
            "name": "mathematics",
            "formula": "additive",
            "rate": 0.05
        ]),
        ([
            "type": "skill",
            "name": "chemistry",
            "formula": "additive",
            "rate": 0.05
        ]),
        ([
            "type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 0.05
        ]), 
        ([
            "type": "attribute",
            "name": "dexterity",
            "formula": "additive",
            "rate": 0.025
        ]), 
        ([
            "type": "attribute",
            "name": "wisdom",
            "formula": "additive",
            "rate": 0.025
        ]), 
    }));

    addSpecification("cooldown", 100);
    addSpecification("cooldown modifiers", ([
        sprintf("/guilds/scion/paths/%s/flame/scions-boon.c", WeaponType): 10,
        sprintf("/guilds/scion/paths/%s/flame/scions-finess.c", WeaponType): 10,
        sprintf("/guilds/scion/paths/%s/flame/scions-endurance.c", WeaponType): 10,
        sprintf("/guilds/scion/paths/%s/flame/scions-strength.c", WeaponType): 10,
    ]));

    addSpecification("event handler", "fireballEvent");
    addSpecification("command template", "fireball");
    addSpecification("use ability message",  "An intense ball of churning fire "
        "erupts from ##InitiatorPossessive::Name## ##InitiatorWeapon##.");
}
