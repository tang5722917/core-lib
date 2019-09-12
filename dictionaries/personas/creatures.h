//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************

private nosave mapping creatureBlueprints = ([
    "basilisk":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 15,
        "attacks": ([
            "fangs": 15,
        ]),
        "special attacks": ([
            "poison": 25,
            "paralysis": 10,
        ]),
        "base hit points": 150,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "bat":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 1,
        "maximum level": 5,
        "attacks": ([
            "claw": 3,
            "claw": 3,
            "fangs": 5,
        ]),
        "base hit points": 10,
        "base spell points" : 0,
        "base stamina points" : 50
    ]),
    "bear":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "maximum level": 25,
        "attacks": ([
            "claw": 10,
            "claw": 10,
            "fangs": 15,
        ]),
        "base hit points": 150,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "boar":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "maximum level": 15,
        "attacks": ([
            "tusk": 10,
            "fangs": 5,
        ]),
        "base hit points": 100,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "cat":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 1,
        "maximum level": 8,
        "attacks": ([
            "claw": 3,
            "claw": 3,
            "fangs": 5,
        ]),
        "base hit points": 10,
        "base spell points" : 0,
        "base stamina points" : 50
    ]),
    "panther":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 6,
        "maximum level": 15,
        "attacks": ([
            "claw": 10,
            "claw": 10,
            "fangs": 10,
        ]),
        "base hit points": 50,
        "base spell points" : 0,
        "base stamina points" : 50
    ]),
    "mountain lion":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 6,
        "maximum level": 15,
        "attacks": ([
            "claw": 10,
            "claw": 10,
            "fangs": 10,
        ]),
        "base hit points": 50,
        "base spell points" : 0,
        "base stamina points" : 50
    ]),
    "chimera":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 25,
        "attacks": ([
            "claw": 10,
            "fangs": 15,
        ]),
        "research": ([
            "fire breath": 25,
            "electricity breath": 25,
            "acid breath": 25,
            "cold breath": 25,
        ]),
        "base hit points": 250,
        "base spell points" : 200,
        "base stamina points" : 100
    ]),
    "cockatrice":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "claw": 10,
            "beak": 15,
        ]),
        "special attacks": ([
            "paralysis": 15,
        ]),
        "base hit points": 150,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "dog":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 1,
        "maximum level": 8,
        "attacks": ([
            "claw": 3,
            "fangs": 5,
        ]),
        "base hit points": 10,
        "base spell points" : 0,
        "base stamina points" : 50
    ]),
    "coyote":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 1,
        "maximum level": 9,
        "attacks": ([
            "claw": 3,
            "fangs": 5,
        ]),
        "base hit points": 15,
        "base spell points" : 0,
        "base stamina points" : 50
    ]),
    "deer":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor", "listen" }),
        "secondary skills" : ({ "perception", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 1,
        "maximum level": 5,
        "attacks": ([
            "hoof": 3,
            "horn": 3,
        ]),
        "base hit points": 10,
        "base spell points" : 0,
        "base stamina points" : 50
    ]),

    "eagle":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 3,
        "maximum level": 15,
        "attacks": ([
            "talon": 5,
            "beak": 10,
        ]),
        "base hit points": 20,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "raven":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 2,
        "maximum level": 8,
        "attacks": ([
            "talon": 3,
            "beak": 5,
        ]),
        "base hit points": 10,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "gargoyle":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "talon": 10,
            "talon": 10,
            "fangs": 15,
        ]),
        "base hit points": 100,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "ghoul":([
        "category": "undead",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({ "lib/instances/traits/effects/ethereal" }),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 10,
            "undead": 10,
        ]),
        "special attacks": ([
            "paralysis": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 35,
        "base stamina points" : 35
    ]),
    "ghast":([
        "category": "undead",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 8,
        "attacks": ([
            "claw": 10,
            "undead": 15,
        ]),
        "special attacks": ([
            "disease": 25,
        ]),
        "base hit points": 35,
        "base spell points" : 35,
        "base stamina points" : 35
    ]),
    "gorgon":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "claw": 10,
            "fangs": 15,
            "fire": 20
        ]),
        "base hit points": 150,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "fire elemental":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "fire": 10,
        ]),
        "base hit points": 40,
        "base spell points" : 40,
        "base stamina points" : 50
    ]),
    "air elemental":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "electricity": 10,
        ]),
        "base hit points": 40,
        "base spell points" : 40,
        "base stamina points" : 50
    ]),
    "earth elemental":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "earth": 10,
        ]),
        "base hit points": 40,
        "base spell points" : 40,
        "base stamina points" : 50
    ]),
    "water elemental":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "water": 10,
            "cold": 5,
        ]),
        "base hit points": 40,
        "base spell points" : 40,
        "base stamina points" : 50
    ]),
    "chaos wisp":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "chaos": 10,
        ]),
        "base hit points": 40,
        "base spell points" : 40,
        "base stamina points" : 50
    ]),
    "ice wisp":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "cold": 10,
        ]),
        "base hit points": 40,
        "base spell points" : 40,
        "base stamina points" : 50
    ]),
    "will-o-wisp":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "energy": 10,
        ]),
        "base hit points": 40,
        "base spell points" : 40,
        "base stamina points" : 50
    ]),
    "aura wisp":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "magical": 10,
        ]),
        "base hit points": 40,
        "base spell points" : 40,
        "base stamina points" : 50
    ]),
    "griffon":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 15,
        "attacks": ([
            "claw": 10,
            "claw": 10,
            "beak": 15,
            "wing": 10,
        ]),
        "base hit points": 175,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "harpy":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "claw": 10,
            "claw": 10,
            "wing": 10,
        ]),
        "base hit points": 125,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "hell hound":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 7,
        "attacks": ([
            "claw": 5,
            "fangs": 5,
            "fire": 5,
        ]),
        "base hit points": 100,
        "base spell points" : 50,
        "base stamina points" : 100
    ]),
    "homunculus":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 5,
            "fangs": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 20,
        "base stamina points" : 20
    ]),
    "hydra":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 20,
        "attacks": ([
            "claw": 10,
            "fangs": 10,
            "fangs" : 10,
            "fangs" : 10,
        ]),
        "base hit points": 250,
        "base spell points" : 100,
        "base stamina points" : 100
    ]),
    "kraken":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 15,
        "attacks": ([
            "tentacle": 10,
            "tentacle": 10,
            "fangs": 15,
        ]),
        "base hit points": 150,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "lich":([
        "category": "undead",
        "is humanoid": 1,
        "primary skills":({ "parry", "dodge", "no armor", "staff" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "equipment": ([ 
            "weapons":({ "staffs" }),
            "armor/accessories": ({ "ring", "bracers" })
        ]),
        "minimum level": 25,
        "attacks": ([
            "undead": 25,
            "undead": 25,
            "cold": 35,
            "evil": 15
        ]),
        "research": ([
            "gift of xyris": 1,
            "hand of xyris": 10,
            "soul scourge": 15,
        ]),
        "base hit points": 150,
        "base spell points" : 250,
        "base stamina points" : 100
    ]),
    "manticore":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 12,
        "attacks": ([
            "claw": 10,
            "fangs": 10,
            "wing" : 10,
            "tail" : 10,
        ]),
        "base hit points": 150,
        "base spell points" : 100,
        "base stamina points" : 100
    ]),
    "air mephit":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 5,
            "air": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 20,
        "base stamina points" : 20
    ]),
    "earth mephit":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 5,
            "earth": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 20,
        "base stamina points" : 20
    ]),
    "chaos mephit":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 5,
            "chaos": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 20,
        "base stamina points" : 20
    ]),
    "ice mephit":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 5,
            "cold": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 20,
        "base stamina points" : 20
    ]),
    "storm mephit":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 5,
            "electricity": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 20,
        "base stamina points" : 20
    ]),
    "blast mephit":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 5,
            "energy": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 20,
        "base stamina points" : 20
    ]),
    "flame mephit":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 5,
            "fire": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 20,
        "base stamina points" : 20
    ]),
    "aether mephit":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 5,
            "magical": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 20,
        "base stamina points" : 20
    ]),
    "psy mephit":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 5,
            "psionic": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 20,
        "base stamina points" : 20
    ]),
    "sonic mephit":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 5,
            "sonic": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 20,
        "base stamina points" : 20
    ]),
    "water mephit":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 5,
            "water": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 20,
        "base stamina points" : 20
    ]),
    "sear mephit":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 5,
            "acid": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 20,
        "base stamina points" : 20
    ]),
    "mohrg":([
        "category": "undead",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "claw": 10,
            "undead": 20,
        ]),
        "special attacks": ([
            "paralysis": 5,
        ]),
        "base hit points": 50,
        "base spell points" : 35,
        "base stamina points" : 35
    ]),
    "mummy":([
        "category": "undead",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 12,
        "attacks": ([
            "undead": 15,
            "undead": 15,
        ]),
        "special attacks": ([
            "disease": 35,
        ]),
        "base hit points": 100,
        "base spell points" : 35,
        "base stamina points" : 35
    ]),
    "naga":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "claw": 15,
            "claw": 15,
        ]),
        "special attacks": ([
            "poison": 15,
        ]),
        "base hit points": 150,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "night hag":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "claw": 10,
            "fangs": 15,
        ]),
        "special attacks": ([
            "disease": 15,
        ]),
        "base hit points": 100,
        "base spell points" : 50,
        "base stamina points" : 100
    ]),
    "marsh hag":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "claw": 10,
            "fangs": 15,
        ]),
        "special attacks": ([
            "enfeebled": 15,
        ]),
        "base hit points": 100,
        "base spell points" : 50,
        "base stamina points" : 100
    ]),
    "sea hag":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "claw": 10,
            "fangs": 15,
        ]),
        "special attacks": ([
            "slow": 15,
        ]),
        "base hit points": 100,
        "base spell points" : 50,
        "base stamina points" : 100
    ]),
    "horse":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "maximum level": 15,
        "attacks": ([
            "hoof": 10,
        ]),
        "base hit points": 50,
        "base spell points" : 0,
        "base stamina points" : 150
    ]),
    "nightmare":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 8,
        "attacks": ([
            "hoof": 10,
            "fire": 10,
        ]),
        "base hit points": 60,
        "base spell points" : 0,
        "base stamina points" : 150
    ]),
    "nukulevee":([
        "category": "undead",
        "primary skills":({ "parry", "dodge", "no armor", "pole arm" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "hoof": 10,
            "undead": 10,
            "evil": 10,
        ]),
        "equipment": ([ 
            "weapons/pole-arms":({ "spear" })
        ]),
        "base hit points": 100,
        "base spell points" : 0,
        "base stamina points" : 150
    ]),
    "owlbear":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 15,
        "attacks": ([
            "claw": 10,
            "claw": 10,
            "beak": 20,
        ]),
        "base hit points": 175,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "pegasus":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "hoof": 10,
            "wing": 10,
            "magical": 10
        ]),
        "base hit points": 150,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "phoenix":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "beak": 10,
            "claw": 10,
            "fire": 10,
        ]),
        "base hit points": 150,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "rat":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 1,
        "maximum level": 5,
        "attacks": ([
            "claw": 2,
            "claw": 2,
            "fangs": 2,
        ]),
        "special attacks": ([
            "disease": 1,
        ]),
        "base hit points": 150,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "sea serpent":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "fangs": 25,
            "tail" : 10,
        ]),
        "base hit points": 250,
        "base spell points" : 100,
        "base stamina points" : 100
    ]),
    "shadow":([
        "category": "undead",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({ "lib/instances/traits/effects/ethereal" }),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "claw": 10,
            "undead": 10,
            "undead": 10,
        ]),
        "special attacks": ([
            "enfeebled": 1,
        ]),
        "base hit points": 150,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "skeleton":([
        "category": "undead",
        "is humanoid": 1,
        "primary skills":({ "parry", "dodge", "shield", "long sword",
            "hand and a half sword", "short sword", "dagger",
            "two-handed sword", "plate armor", "splint armor",
            "chainmail", "scalemail", "hard leather", "soft leather",
            "no armor", "axe", "mace", "hammer", "flail", "staff",
            "pole arm", "archer" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "equipment": ([ 
            "weapons":({ "swords", "axes", "maces", "hammers",
                "flails", "bows", "daggers", "staffs",
                "pole-arms" }),
            "armor": ({ "light-armor", "medium-armor", "heavy-armor" }),
            "armor/accessories": ({ "belt", "boots", "coif", "gloves", 
                "helmet", "ring" })
        ]),
        "minimum level": 3,
        "attacks": ([
            "undead": 5,
        ]),
        "base hit points": 25,
        "base spell points" : 0,
        "base stamina points" : 25
    ]),
    "spectre":([
        "category": "undead",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({ "lib/instances/traits/effects/ethereal" }),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "undead": 10,
            "undead": 10,
        ]),
        "base hit points": 35,
        "base spell points" : 0,
        "base stamina points" : 35
    ]),
    "giant spider":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "claw": 10,
            "fangs": 25,
        ]),
        "special attacks": ([
            "poison": 20,
        ]),
        "base hit points": 100,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "tarrasque":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 20,
        "attacks": ([
            "claw": 10,
            "claw": 10,
            "fangs": 25,
            "tail": 15,
        ]),
        "base hit points": 250,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "terlang":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "shield", "long sword",
            "hand and a half sword", "short sword", "dagger",
            "two-handed sword", "chainmail", "scalemail", 
            "hard leather", "soft leather", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "equipment": ([ 
            "weapons":({ "swords" }),
            "armor": ({ "light-armor", "medium-armor" }),
        ]),
        "minimum level": 5,
        "attacks": ([
            "talon": 10,
        ]),
        "base hit points": 30,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "treant":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 20,
        "attacks": ([
            "unarmed": 35,
            "unarmed": 35,
        ]),
        "base hit points": 150,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "troglodyte":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 10,
        "attacks": ([
            "unarmed": 15,
            "unarmed": 15,
        ]),
        "base hit points": 70,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
    "unicorn":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 15,
        "attacks": ([
            "hoof": 10,
            "horn": 20,
            "magical": 15,
        ]),
        "base hit points": 150,
        "base spell points" : 200,
        "base stamina points" : 100
    ]),
    "wolf":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 3,
        "maximum level": 20,
        "attacks": ([
            "claw": 6,
            "fangs": 10,
        ]),
        "base hit points": 30,
        "base spell points" : 0,
        "base stamina points" : 50
    ]),
    "wolverine":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 2,
        "maximum level": 12,
        "attacks": ([
            "claw": 5,
            "claw": 5,
            "fangs": 7,
        ]),
        "base hit points": 20,
        "base spell points" : 0,
        "base stamina points" : 50
    ]),
    "weasel":([
        "category": "animal",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 1,
        "maximum level": 8,
        "attacks": ([
            "claw": 3,
            "claw": 3,
            "fangs": 5,
        ]),
        "base hit points": 10,
        "base spell points" : 0,
        "base stamina points" : 50
    ]),
    "warg":([
        "category": "creatures",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "minimum level": 5,
        "attacks": ([
            "claw": 10,
            "fangs": 15,
        ]),
        "base hit points": 30,
        "base spell points" : 0,
        "base stamina points" : 50
    ]),
    "vampire":([
        "category": "undead",
        "is humanoid": 1,
        "primary skills":({ "parry", "dodge", "shield", "long sword",
            "hand and a half sword", "short sword", "dagger",
            "two-handed sword", "plate armor", "splint armor",
            "chainmail", "scalemail", "hard leather", "soft leather",
            "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "equipment": ([ 
            "weapons":({ "swords" }),
        ]),
        "minimum level": 15,
        "attacks": ([
            "undead": 10,
            "undead": 10,
            "cold": 10,
        ]),
        "base hit points": 150,
        "base spell points" : 250,
        "base stamina points" : 100
    ]),
    "wight":([
        "category": "undead",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({ "lib/instances/traits/effects/ethereal" }),
        "potential traits" : ({}),
        "minimum level": 6,
        "attacks": ([
            "claw": 10,
            "undead": 12,
        ]),
        "special attacks": ([
            "paralysis": 5,
        ]),
        "base hit points": 35,
        "base spell points" : 35,
        "base stamina points" : 35
    ]),
    "zombie":([
        "category": "undead",
        "is humanoid": 1,
        "primary skills":({ "parry", "dodge", "shield", "long sword",
            "hand and a half sword", "short sword", "dagger",
            "two-handed sword", "plate armor", "splint armor",
            "chainmail", "scalemail", "hard leather", "soft leather",
            "no armor", "axe", "mace", "hammer", "flail", "staff",
            "pole arm", "archer" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({}),
        "potential traits" : ({}),
        "equipment": ([ 
            "weapons":({ "swords", "axes", "maces", "hammers",
                "flails", "bows", "daggers", "staffs",
                "pole-arms" }),
            "armor": ({ "light-armor", "medium-armor", "heavy-armor" }),
            "armor/accessories": ({ "belt", "boots", "coif", "gloves", 
                "helmet", "ring" })
        ]),
        "minimum level": 2,
        "attacks": ([
            "undead": 5,
        ]),
        "base hit points": 25,
        "base spell points" : 0,
        "base stamina points" : 25
    ]),
    "wraith":([
        "category": "undead",
        "primary skills":({ "parry", "dodge", "no armor" }),
        "secondary skills" : ({ "perception", "listen", "spot" }),
        "traits" : ({ "lib/instances/traits/effects/ethereal" }),
        "potential traits" : ({}),
        "minimum level": 12,
        "attacks": ([
            "claw": 10,
            "undead": 15,
            "undead": 15,
        ]),
        "special attacks": ([
            "paralysis": 5,
        ]),
        "base hit points": 150,
        "base spell points" : 0,
        "base stamina points" : 100
    ]),
]);
