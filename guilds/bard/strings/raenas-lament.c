//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Raena's Lament");
    addSpecification("source", "bard");
    addSpecification("composite research",
        "/guilds/bard/compositions/root.c");
    addSpecification("composite type", "instrumental solo");
    addSpecification("composite class", "strings");
    addSpecification("default composite description",
        "riff going from Cm7 to Abm7b3");

    addSpecification("description", "This research provides the user "
        "knowledge of creating searing riffs that cause sonic "
        "damage to all nearby enemies.");

    addSpecification("scope", "area");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
            
    addPrerequisite("level", 
        (["type": "level", 
          "guild": "bard",
          "value": 45 ]));

    addSpecification("limited by", ([
        "equipment":({ "instrument: plucked", "instrument: bowed" }),
    ]));

    addPrerequisite("/guilds/bard/strings/raenas-rhythm.c",
        (["type":"research"]));

    addSpecification("spell point cost", 450);
    addSpecification("damage hit points", ({ ([
            "probability": 90,
            "base damage": 150,
            "range": 250
        ]),
        ([
            "probability": 10,
            "base damage": 250,
            "range": 600
        ])
    }));
    addSpecification("damage spell points", ({ ([
            "probability":90,
            "base damage": 100,
            "range": 100
        ]),
        ([
            "probability": 10,
            "base damage": 200,
            "range": 200
        ])
    }));

    addSpecification("modifiers", ({ 
        ([
            "type": "research",
            "research item": "/guilds/bard/strings/vibrato.c",
            "name": "Vibrato",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/bard/strings/staccato.c",
            "name": "Staccato",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/bard/strings/legato.c",
            "name": "Legato",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/bard/strings/ghost-notes.c",
            "name": "Ghost Notes",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/bard/strings/tremolo.c",
            "name": "Tremolo",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/bard/strings/octave-course.c",
            "name": "Octave Course",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/bard/strings/poly-rhythms.c",
            "name": "Poly Rhythms",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]), 
        ([
            "type": "research",
            "research item": "/guilds/bard/strings/two-handed-tapping.c",
            "name": "Two-handed Tapping",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/bard/strings/fluid-arpeggios.c",
            "name": "Fluid Arpeggios",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/bard/strings/palm-muting.c",
            "name": "Palm Muting",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/bard/strings/mixed-mode-playing.c",
            "name": "Mixed-mode Playing",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/bard/strings/chromatic-movement.c",
            "name": "Chromatic Movement",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.25
        ]),
        ([
            "type": "research",
            "research item": "/guilds/bard/compositions/freeform.c",
            "name": "Freeform",
            "formula": "multiplicative",
            "base value": 1,
            "rate": 1.1
        ]),
        ([
            "type": "weapon damage",
            "name" : "strings",
            "types" : ({ "instrument: plucked", "instrument: bowed" }),
            "formula" : "additive",
            "rate" : 1.0
        ]),
        ([
            "type": "highest skill",
            "name" : "instrument skills",
            "skills": ({ "instrument: plucked", "instrument: bowed" }),
            "formula" : "additive",
            "rate" : 0.5
        ]),
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "additive",
            "rate": 0.10
        ]), 
        ([
            "type": "skill",
            "name": "senses",
            "formula": "additive",
            "rate": 0.05
        ]), 
        ([
            "type": "skill",
            "name": "magical essence",
            "formula": "logarithmic",
            "rate": 1.25
        ]), 
        ([
            "type": "skill",
            "name": "dancing",
            "formula": "additive",
            "rate": 0.05
        ]), 
        ([
            "type":"attribute",
            "name": "charisma",
            "formula": "additive",
            "rate": 0.05
        ]), 
        ([
            "type":"attribute",
            "name": "dexterity",
            "formula": "additive",
            "rate": 0.05
        ]),
    }));

    addSpecification("damage type", "energy");
    addSpecification("event handler", "requiemOfReleaseEvent");
    addSpecification("use composite message", "##InitiatorName## "
        "serenly ##Infinitive::strum## ##InitiatorPossessive## "
        "##InitiatorWeapon## in a ##CompositeSegment##.");
}
