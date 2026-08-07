@ Japanese Emerald trainer party data.
@ ROM: 0x082DEEBC-0x082E3563.
@ Rebuilt from the raw party block using all 854 non-NULL party pointers
@ from the corrected 0x20-byte gTrainers layout. Coverage is contiguous.

.macro trainer_mon_no_item_default iv:req, level:req, species:req
    .2byte \iv
    .byte \level, 0
    .2byte \species
    .2byte 0 @ ABI padding
.endm

.macro trainer_mon_no_item_custom iv:req, level:req, species:req, move1:req, move2:req, move3:req, move4:req
    .2byte \iv
    .byte \level, 0
    .2byte \species
    .2byte \move1, \move2, \move3, \move4
    .2byte 0 @ ABI padding
.endm

.macro trainer_mon_item_default iv:req, level:req, species:req, item:req
    .2byte \iv
    .byte \level, 0
    .2byte \species
    .2byte \item
.endm

.macro trainer_mon_item_custom iv:req, level:req, species:req, item:req, move1:req, move2:req, move3:req, move4:req
    .2byte \iv
    .byte \level, 0
    .2byte \species
    .2byte \item
    .2byte \move1, \move2, \move3, \move4
.endm

sParty_Trainer001: @ 0x082DEEBC
    @ Trainer 1: マサヒコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 21, SPECIES_GEODUDE

sParty_Trainer002: @ 0x082DEEC4
    @ Trainer 2: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_POOCHYENA

sParty_Trainer003: @ 0x082DEECC
    @ Trainer 3: したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 31, SPECIES_ZUBAT
    trainer_mon_no_item_default 0, 31, SPECIES_CARVANHA

sParty_Trainer004: @ 0x082DEEDC
    @ Trainer 4: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_ZUBAT

sParty_Trainer005: @ 0x082DEEE4
    @ Trainer 5: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_CARVANHA

sParty_Trainer006: @ 0x082DEEEC
    @ Trainer 6: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 36, SPECIES_POOCHYENA

sParty_Trainer007: @ 0x082DEEF4
    @ Trainer 7: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 36, SPECIES_CARVANHA

sParty_Trainer008: @ 0x082DEEFC
    @ Trainer 8: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 36, SPECIES_ZUBAT

sParty_Trainer009: @ 0x082DEF04
    @ Trainer 9: フクミ ; flags=0, partySize=6
    trainer_mon_no_item_default 0, 26, SPECIES_SKITTY
    trainer_mon_no_item_default 0, 26, SPECIES_POOCHYENA
    trainer_mon_no_item_default 0, 26, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 26, SPECIES_LOTAD
    trainer_mon_no_item_default 0, 26, SPECIES_SEEDOT
    trainer_mon_no_item_default 0, 26, SPECIES_TAILLOW

sParty_Trainer010: @ 0x082DEF34
    @ Trainer 10: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 9, SPECIES_POOCHYENA

sParty_Trainer011: @ 0x082DEF3C
    @ Trainer 11: セツオ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 29, SPECIES_MANECTRIC
    trainer_mon_no_item_default 100, 29, SPECIES_SHIFTRY

sParty_Trainer012: @ 0x082DEF4C
    @ Trainer 12: ヨウスケ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 30, SPECIES_PELIPPER
    trainer_mon_no_item_default 0, 30, SPECIES_XATU

sParty_Trainer013: @ 0x082DEF5C
    @ Trainer 13: スグル ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 30, SPECIES_ZANGOOSE
    trainer_mon_no_item_default 0, 30, SPECIES_SEVIPER

sParty_Trainer014: @ 0x082DEF6C
    @ Trainer 14: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 36, SPECIES_CARVANHA

sParty_Trainer015: @ 0x082DEF74
    @ Trainer 15: イッペイ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_GYARADOS

sParty_Trainer016: @ 0x082DEF7C
    @ Trainer 16: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 11, SPECIES_POOCHYENA

sParty_Trainer017: @ 0x082DEF84
    @ Trainer 17: したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 27, SPECIES_ZUBAT
    trainer_mon_no_item_default 0, 27, SPECIES_POOCHYENA

sParty_Trainer018: @ 0x082DEF94
    @ Trainer 18: したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 27, SPECIES_POOCHYENA
    trainer_mon_no_item_default 0, 27, SPECIES_CARVANHA

sParty_Trainer019: @ 0x082DEFA4
    @ Trainer 19: したっぱ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 26, SPECIES_POOCHYENA
    trainer_mon_no_item_default 0, 26, SPECIES_ZUBAT
    trainer_mon_no_item_default 0, 26, SPECIES_CARVANHA

sParty_Trainer020: @ 0x082DEFBC
    @ Trainer 20: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 15, SPECIES_CARVANHA

sParty_Trainer021: @ 0x082DEFC4
    @ Trainer 21: したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 14, SPECIES_ZUBAT
    trainer_mon_no_item_default 0, 14, SPECIES_CARVANHA

sParty_Trainer022: @ 0x082DEFD4
    @ Trainer 22: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_NUMEL

sParty_Trainer023: @ 0x082DEFDC
    @ Trainer 23: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_ZUBAT

sParty_Trainer024: @ 0x082DEFE4
    @ Trainer 24: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_CARVANHA

sParty_Trainer025: @ 0x082DEFEC
    @ Trainer 25: したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 30, SPECIES_POOCHYENA
    trainer_mon_no_item_default 0, 30, SPECIES_CARVANHA

sParty_Trainer026: @ 0x082DEFFC
    @ Trainer 26: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 28, SPECIES_CARVANHA

sParty_Trainer027: @ 0x082DF004
    @ Trainer 27: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_CARVANHA

sParty_Trainer028: @ 0x082DF00C
    @ Trainer 28: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_ZUBAT

sParty_Trainer029: @ 0x082DF014
    @ Trainer 29: トシシゲ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 30, SPECIES_MAKUHITA
    trainer_mon_no_item_default 100, 30, SPECIES_MACHOKE

sParty_Trainer030: @ 0x082DF024
    @ Trainer 30: ウシオ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 34, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 50, 34, SPECIES_GOLBAT

sParty_Trainer031: @ 0x082DF034
    @ Trainer 31: リョウジ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 31, SPECIES_HARIYAMA

sParty_Trainer032: @ 0x082DF03C
    @ Trainer 32: イズミ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 28, SPECIES_CARVANHA
    trainer_mon_no_item_default 50, 28, SPECIES_MIGHTYENA

sParty_Trainer033: @ 0x082DF04C
    @ Trainer 33: イズミ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 37, SPECIES_SHARPEDO
    trainer_mon_no_item_default 100, 37, SPECIES_MIGHTYENA

sParty_Trainer034: @ 0x082DF05C
    @ Trainer 34: アオギリ ; flags=0, partySize=3
    trainer_mon_no_item_default 150, 41, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 150, 41, SPECIES_CROBAT
    trainer_mon_no_item_default 150, 43, SPECIES_SHARPEDO

sParty_Trainer035: @ 0x082DF074
    @ Trainer 35: エミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 31, SPECIES_SPOINK

sParty_Trainer036: @ 0x082DF07C
    @ Trainer 36: ミドリ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 14, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 14, SPECIES_ROSELIA

sParty_Trainer037: @ 0x082DF08C
    @ Trainer 37: ヤヨイ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 14, SPECIES_ROSELIA
    trainer_mon_no_item_default 0, 14, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 14, SPECIES_ROSELIA

sParty_Trainer038: @ 0x082DF0A4
    @ Trainer 38: コウジロウ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 43, SPECIES_MEDICHAM, MOVE_PSYCHIC, MOVE_NONE, MOVE_NONE, MOVE_NONE
    trainer_mon_no_item_custom 0, 43, SPECIES_CLAYDOL, MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE

sParty_Trainer039: @ 0x082DF0C4
    @ Trainer 39: チヅル ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_ROSELIA
    trainer_mon_no_item_default 0, 26, SPECIES_GLOOM

sParty_Trainer040: @ 0x082DF0D4
    @ Trainer 40: ヤヨイ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 26, SPECIES_SHROOMISH
    trainer_mon_no_item_default 10, 26, SPECIES_ROSELIA

sParty_Trainer041: @ 0x082DF0E4
    @ Trainer 41: ヤヨイ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 28, SPECIES_SHROOMISH
    trainer_mon_no_item_default 20, 28, SPECIES_GLOOM
    trainer_mon_no_item_default 20, 28, SPECIES_ROSELIA

sParty_Trainer042: @ 0x082DF0FC
    @ Trainer 42: ヤヨイ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 31, SPECIES_SHROOMISH
    trainer_mon_no_item_default 30, 31, SPECIES_GLOOM
    trainer_mon_no_item_default 30, 31, SPECIES_ROSELIA

sParty_Trainer043: @ 0x082DF114
    @ Trainer 43: ヤヨイ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 34, SPECIES_BRELOOM
    trainer_mon_no_item_default 40, 34, SPECIES_GLOOM
    trainer_mon_no_item_default 40, 34, SPECIES_ROSELIA

sParty_Trainer044: @ 0x082DF12C
    @ Trainer 44: ノブオ ; flags=1, partySize=1
    trainer_mon_no_item_custom 50, 23, SPECIES_SANDSLASH, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING

sParty_Trainer045: @ 0x082DF13C
    @ Trainer 45: ケイイチ ; flags=1, partySize=3
    trainer_mon_no_item_custom 50, 27, SPECIES_BALTOY, MOVE_PSYBEAM, MOVE_SELF_DESTRUCT, MOVE_SANDSTORM, MOVE_ANCIENT_POWER
    trainer_mon_no_item_custom 50, 27, SPECIES_SANDSHREW, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING
    trainer_mon_no_item_custom 50, 27, SPECIES_SANDSLASH, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING

sParty_Trainer046: @ 0x082DF16C
    @ Trainer 46: アキヒト ; flags=1, partySize=2
    trainer_mon_no_item_custom 100, 25, SPECIES_SANDSHREW, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING
    trainer_mon_no_item_custom 100, 25, SPECIES_SANDSLASH, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING

sParty_Trainer047: @ 0x082DF18C
    @ Trainer 47: ノブオ ; flags=1, partySize=1
    trainer_mon_no_item_custom 60, 27, SPECIES_SANDSLASH, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING

sParty_Trainer048: @ 0x082DF19C
    @ Trainer 48: ノブオ ; flags=1, partySize=1
    trainer_mon_no_item_custom 70, 30, SPECIES_SANDSLASH, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING

sParty_Trainer049: @ 0x082DF1AC
    @ Trainer 49: ノブオ ; flags=1, partySize=1
    trainer_mon_no_item_custom 80, 33, SPECIES_SANDSLASH, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING

sParty_Trainer050: @ 0x082DF1BC
    @ Trainer 50: ノブオ ; flags=1, partySize=1
    trainer_mon_no_item_custom 90, 36, SPECIES_SANDSLASH, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING

sParty_Trainer051: @ 0x082DF1CC
    @ Trainer 51: マリとダイ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 17, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 50, 17, SPECIES_WHISMUR

sParty_Trainer052: @ 0x082DF1DC
    @ Trainer 52: マリとダイ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 27, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 100, 27, SPECIES_LOUDRED

sParty_Trainer053: @ 0x082DF1EC
    @ Trainer 53: マリとダイ ; flags=0, partySize=2
    trainer_mon_no_item_default 150, 30, SPECIES_MAGNETON
    trainer_mon_no_item_default 150, 30, SPECIES_LOUDRED

sParty_Trainer054: @ 0x082DF1FC
    @ Trainer 54: マリとダイ ; flags=0, partySize=2
    trainer_mon_no_item_default 200, 33, SPECIES_MAGNETON
    trainer_mon_no_item_default 200, 33, SPECIES_LOUDRED

sParty_Trainer055: @ 0x082DF20C
    @ Trainer 55: マリとダイ ; flags=0, partySize=2
    trainer_mon_no_item_default 250, 36, SPECIES_MAGNETON
    trainer_mon_no_item_default 250, 36, SPECIES_LOUDRED

sParty_Trainer056: @ 0x082DF21C
    @ Trainer 56: マリとダイ ; flags=1, partySize=2
    trainer_mon_no_item_custom 250, 39, SPECIES_MAGNETON, MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND, MOVE_THUNDERBOLT
    trainer_mon_no_item_custom 250, 39, SPECIES_EXPLOUD, MOVE_ASTONISH, MOVE_STOMP, MOVE_SUPERSONIC, MOVE_HYPER_VOICE

sParty_Trainer057: @ 0x082DF23C
    @ Trainer 57: アユミ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 12, SPECIES_AZURILL
    trainer_mon_no_item_default 10, 12, SPECIES_AZURILL

sParty_Trainer058: @ 0x082DF24C
    @ Trainer 58: ヒロミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_MARILL

sParty_Trainer059: @ 0x082DF254
    @ Trainer 59: ノゾミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_MARILL

sParty_Trainer060: @ 0x082DF25C
    @ Trainer 60: アユミ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 26, SPECIES_MARILL
    trainer_mon_no_item_default 10, 26, SPECIES_MARILL

sParty_Trainer061: @ 0x082DF26C
    @ Trainer 61: アユミ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 29, SPECIES_MARILL
    trainer_mon_no_item_default 20, 29, SPECIES_MARILL

sParty_Trainer062: @ 0x082DF27C
    @ Trainer 62: アユミ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 32, SPECIES_MARILL
    trainer_mon_no_item_default 30, 32, SPECIES_MARILL

sParty_Trainer063: @ 0x082DF28C
    @ Trainer 63: アユミ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 35, SPECIES_AZUMARILL
    trainer_mon_no_item_default 40, 35, SPECIES_AZUMARILL

sParty_Trainer064: @ 0x082DF29C
    @ Trainer 64: ユウタ ; flags=1, partySize=1
    trainer_mon_no_item_custom 10, 13, SPECIES_ZIGZAGOON, MOVE_SAND_ATTACK, MOVE_HEADBUTT, MOVE_TAIL_WHIP, MOVE_SURF

sParty_Trainer065: @ 0x082DF2AC
    @ Trainer 65: ヤスノブ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 12, SPECIES_AZURILL
    trainer_mon_no_item_default 0, 12, SPECIES_MARILL

sParty_Trainer066: @ 0x082DF2BC
    @ Trainer 66: マナブ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_MARILL

sParty_Trainer067: @ 0x082DF2C4
    @ Trainer 67: ユウタ ; flags=1, partySize=1
    trainer_mon_no_item_custom 10, 27, SPECIES_LINOONE, MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF

sParty_Trainer068: @ 0x082DF2D4
    @ Trainer 68: ユウタ ; flags=1, partySize=1
    trainer_mon_no_item_custom 20, 30, SPECIES_LINOONE, MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF

sParty_Trainer069: @ 0x082DF2E4
    @ Trainer 69: ユウタ ; flags=1, partySize=1
    trainer_mon_no_item_custom 30, 33, SPECIES_LINOONE, MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF

sParty_Trainer070: @ 0x082DF2F4
    @ Trainer 70: ユウタ ; flags=1, partySize=1
    trainer_mon_no_item_custom 40, 36, SPECIES_LINOONE, MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF

sParty_Trainer071: @ 0x082DF304
    @ Trainer 71: トシキ ; flags=3, partySize=1
    trainer_mon_item_custom 255, 26, SPECIES_SWELLOW, ITEM_NONE, MOVE_QUICK_ATTACK, MOVE_AGILITY, MOVE_WING_ATTACK, MOVE_NONE

sParty_Trainer072: @ 0x082DF314
    @ Trainer 72: ヒデキ ; flags=3, partySize=1
    trainer_mon_item_custom 255, 26, SPECIES_SPINDA, ITEM_NONE, MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_FOCUS_PUNCH, MOVE_NONE

sParty_Trainer073: @ 0x082DF324
    @ Trainer 73: カズマ ; flags=3, partySize=1
    trainer_mon_item_custom 255, 26, SPECIES_SLAKOTH, ITEM_SITRUS_BERRY, MOVE_SLACK_OFF, MOVE_COUNTER, MOVE_SHADOW_BALL, MOVE_NONE

sParty_Trainer074: @ 0x082DF334
    @ Trainer 74: ナオキ ; flags=3, partySize=1
    trainer_mon_item_custom 255, 26, SPECIES_VIGOROTH, ITEM_NONE, MOVE_FOCUS_ENERGY, MOVE_SLASH, MOVE_NONE, MOVE_NONE

sParty_Trainer075: @ 0x082DF344
    @ Trainer 75: ヨシオ ; flags=1, partySize=5
    trainer_mon_no_item_custom 100, 28, SPECIES_SWELLOW, MOVE_FOCUS_ENERGY, MOVE_QUICK_ATTACK, MOVE_WING_ATTACK, MOVE_ENDEAVOR
    trainer_mon_no_item_custom 100, 28, SPECIES_TRAPINCH, MOVE_BITE, MOVE_DIG, MOVE_FAINT_ATTACK, MOVE_SAND_TOMB
    trainer_mon_no_item_custom 100, 28, SPECIES_WAILMER, MOVE_ROLLOUT, MOVE_WHIRLPOOL, MOVE_ASTONISH, MOVE_WATER_PULSE
    trainer_mon_no_item_custom 100, 28, SPECIES_MAGNETON, MOVE_THUNDERBOLT, MOVE_SUPERSONIC, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM
    trainer_mon_no_item_custom 100, 28, SPECIES_SHIFTRY, MOVE_GIGA_DRAIN, MOVE_FAINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_SWAGGER

sParty_Trainer076: @ 0x082DF394
    @ Trainer 76: ユウト ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 44, SPECIES_SABLEYE
    trainer_mon_no_item_default 100, 44, SPECIES_MEDICHAM
    trainer_mon_no_item_default 100, 44, SPECIES_SHARPEDO

sParty_Trainer077: @ 0x082DF3AC
    @ Trainer 77: マコト ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 46, SPECIES_MAWILE
    trainer_mon_no_item_default 100, 46, SPECIES_STARMIE

sParty_Trainer078: @ 0x082DF3BC
    @ Trainer 78: ユウスケ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 17, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 100, 17, SPECIES_WAILMER
    trainer_mon_no_item_default 100, 17, SPECIES_MAKUHITA

sParty_Trainer079: @ 0x082DF3D4
    @ Trainer 79: コウキ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 43, SPECIES_CACTURNE
    trainer_mon_no_item_default 100, 43, SPECIES_PELIPPER

sParty_Trainer080: @ 0x082DF3E4
    @ Trainer 80: ショウ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 43, SPECIES_MAGNETON
    trainer_mon_no_item_default 100, 43, SPECIES_MUK

sParty_Trainer081: @ 0x082DF3F4
    @ Trainer 81: タクヤ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 42, SPECIES_SWELLOW
    trainer_mon_no_item_default 100, 42, SPECIES_MAWILE
    trainer_mon_no_item_default 100, 42, SPECIES_KADABRA

sParty_Trainer082: @ 0x082DF40C
    @ Trainer 82: リョウヘイ ; flags=0, partySize=4
    trainer_mon_no_item_default 100, 42, SPECIES_DODRIO
    trainer_mon_no_item_default 100, 42, SPECIES_KADABRA
    trainer_mon_no_item_default 100, 42, SPECIES_ELECTRODE
    trainer_mon_no_item_default 100, 42, SPECIES_SHIFTRY

sParty_Trainer083: @ 0x082DF42C
    @ Trainer 83: カケル ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 42, SPECIES_KECLEON
    trainer_mon_no_item_default 100, 42, SPECIES_GRAVELER
    trainer_mon_no_item_default 100, 42, SPECIES_WAILORD

sParty_Trainer084: @ 0x082DF444
    @ Trainer 84: ユウスケ ; flags=0, partySize=3
    trainer_mon_no_item_default 110, 26, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 110, 26, SPECIES_WAILMER
    trainer_mon_no_item_default 110, 26, SPECIES_MAKUHITA

sParty_Trainer085: @ 0x082DF45C
    @ Trainer 85: ユウスケ ; flags=0, partySize=3
    trainer_mon_no_item_default 120, 29, SPECIES_MANECTRIC
    trainer_mon_no_item_default 120, 29, SPECIES_WAILMER
    trainer_mon_no_item_default 120, 29, SPECIES_MAKUHITA

sParty_Trainer086: @ 0x082DF474
    @ Trainer 86: ユウスケ ; flags=0, partySize=3
    trainer_mon_no_item_default 130, 32, SPECIES_MANECTRIC
    trainer_mon_no_item_default 130, 32, SPECIES_WAILMER
    trainer_mon_no_item_default 130, 32, SPECIES_MAKUHITA

sParty_Trainer087: @ 0x082DF48C
    @ Trainer 87: ユウスケ ; flags=0, partySize=3
    trainer_mon_no_item_default 140, 35, SPECIES_MANECTRIC
    trainer_mon_no_item_default 140, 35, SPECIES_WAILMER
    trainer_mon_no_item_default 140, 35, SPECIES_HARIYAMA

sParty_Trainer088: @ 0x082DF4A4
    @ Trainer 88: レイジ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 33, SPECIES_GRAVELER
    trainer_mon_no_item_default 100, 33, SPECIES_LUDICOLO

sParty_Trainer089: @ 0x082DF4B4
    @ Trainer 89: アヤカ ; flags=3, partySize=1
    trainer_mon_item_custom 255, 26, SPECIES_DELCATTY, ITEM_NONE, MOVE_FAINT_ATTACK, MOVE_SHOCK_WAVE, MOVE_NONE, MOVE_NONE

sParty_Trainer090: @ 0x082DF4C4
    @ Trainer 90: ミハル ; flags=3, partySize=1
    trainer_mon_item_custom 255, 26, SPECIES_WIGGLYTUFF, ITEM_NONE, MOVE_DEFENSE_CURL, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_NONE

sParty_Trainer091: @ 0x082DF4D4
    @ Trainer 91: サオリ ; flags=3, partySize=1
    trainer_mon_item_custom 255, 26, SPECIES_ZANGOOSE, ITEM_NONE, MOVE_SWORDS_DANCE, MOVE_SLASH, MOVE_NONE, MOVE_NONE

sParty_Trainer092: @ 0x082DF4E4
    @ Trainer 92: セツナ ; flags=1, partySize=3
    trainer_mon_no_item_custom 100, 29, SPECIES_MAWILE, MOVE_BATON_PASS, MOVE_FAINT_ATTACK, MOVE_FAKE_TEARS, MOVE_BITE
    trainer_mon_no_item_custom 100, 29, SPECIES_ROSELIA, MOVE_MEGA_DRAIN, MOVE_MAGICAL_LEAF, MOVE_GRASS_WHISTLE, MOVE_LEECH_SEED
    trainer_mon_no_item_custom 100, 29, SPECIES_PELIPPER, MOVE_FLY, MOVE_WATER_GUN, MOVE_MIST, MOVE_PROTECT

sParty_Trainer093: @ 0x082DF514
    @ Trainer 93: アイナ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 45, SPECIES_LAIRON
    trainer_mon_no_item_default 100, 45, SPECIES_MANECTRIC

sParty_Trainer094: @ 0x082DF524
    @ Trainer 94: マリア ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 17, SPECIES_WINGULL
    trainer_mon_no_item_default 100, 17, SPECIES_NUMEL
    trainer_mon_no_item_default 100, 17, SPECIES_ROSELIA

sParty_Trainer095: @ 0x082DF53C
    @ Trainer 95: ヤエコ ; flags=0, partySize=1
    trainer_mon_no_item_default 200, 30, SPECIES_SABLEYE

sParty_Trainer096: @ 0x082DF544
    @ Trainer 96: アイリ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 45, SPECIES_ROSELIA

sParty_Trainer097: @ 0x082DF54C
    @ Trainer 97: エリコ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 45, SPECIES_CLAYDOL

sParty_Trainer098: @ 0x082DF554
    @ Trainer 98: カズミ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 42, SPECIES_TORKOAL
    trainer_mon_no_item_default 100, 42, SPECIES_MEDICHAM
    trainer_mon_no_item_default 100, 42, SPECIES_LUDICOLO

sParty_Trainer099: @ 0x082DF56C
    @ Trainer 99: コトミ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 43, SPECIES_SKARMORY
    trainer_mon_no_item_default 100, 43, SPECIES_SABLEYE

sParty_Trainer100: @ 0x082DF57C
    @ Trainer 100: ヒヅキ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 42, SPECIES_SANDSLASH
    trainer_mon_no_item_default 100, 42, SPECIES_NINETALES
    trainer_mon_no_item_default 100, 42, SPECIES_TROPIUS

sParty_Trainer101: @ 0x082DF594
    @ Trainer 101: マリア ; flags=0, partySize=3
    trainer_mon_no_item_default 110, 26, SPECIES_WINGULL
    trainer_mon_no_item_default 110, 26, SPECIES_NUMEL
    trainer_mon_no_item_default 110, 26, SPECIES_ROSELIA

sParty_Trainer102: @ 0x082DF5AC
    @ Trainer 102: マリア ; flags=0, partySize=3
    trainer_mon_no_item_default 120, 29, SPECIES_PELIPPER
    trainer_mon_no_item_default 120, 29, SPECIES_NUMEL
    trainer_mon_no_item_default 120, 29, SPECIES_ROSELIA

sParty_Trainer103: @ 0x082DF5C4
    @ Trainer 103: マリア ; flags=0, partySize=3
    trainer_mon_no_item_default 130, 32, SPECIES_PELIPPER
    trainer_mon_no_item_default 130, 32, SPECIES_NUMEL
    trainer_mon_no_item_default 130, 32, SPECIES_ROSELIA

sParty_Trainer104: @ 0x082DF5DC
    @ Trainer 104: マリア ; flags=0, partySize=3
    trainer_mon_no_item_default 140, 34, SPECIES_PELIPPER
    trainer_mon_no_item_default 140, 34, SPECIES_CAMERUPT
    trainer_mon_no_item_default 140, 34, SPECIES_ROSELIA

sParty_Trainer105: @ 0x082DF5F4
    @ Trainer 105: コトネ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 41, SPECIES_BANETTE
    trainer_mon_no_item_default 0, 41, SPECIES_LUNATONE

sParty_Trainer106: @ 0x082DF604
    @ Trainer 106: サチコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 30, SPECIES_DUSKULL
    trainer_mon_no_item_default 0, 30, SPECIES_SHUPPET

sParty_Trainer107: @ 0x082DF614
    @ Trainer 107: ミコト ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 29, SPECIES_DUSKULL
    trainer_mon_no_item_default 0, 29, SPECIES_SHUPPET

sParty_Trainer108: @ 0x082DF624
    @ Trainer 108: ホノカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_SABLEYE

sParty_Trainer109: @ 0x082DF62C
    @ Trainer 109: ホタル ; flags=0, partySize=1
    trainer_mon_no_item_default 50, 32, SPECIES_SHUPPET

sParty_Trainer110: @ 0x082DF634
    @ Trainer 110: ホノカ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 31, SPECIES_SABLEYE
    trainer_mon_no_item_default 10, 31, SPECIES_SPOINK

sParty_Trainer111: @ 0x082DF644
    @ Trainer 111: ホノカ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 35, SPECIES_SPOINK
    trainer_mon_no_item_default 20, 35, SPECIES_SABLEYE

sParty_Trainer112: @ 0x082DF654
    @ Trainer 112: ホノカ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 40, SPECIES_SPOINK
    trainer_mon_no_item_default 30, 40, SPECIES_SABLEYE

sParty_Trainer113: @ 0x082DF664
    @ Trainer 113: ホノカ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 42, SPECIES_DUSKULL
    trainer_mon_no_item_default 40, 42, SPECIES_SABLEYE
    trainer_mon_no_item_default 40, 42, SPECIES_GRUMPIG

sParty_Trainer114: @ 0x082DF67C
    @ Trainer 114: レイカ ; flags=2, partySize=1
    trainer_mon_item_default 0, 7, SPECIES_ZIGZAGOON, ITEM_NUGGET

sParty_Trainer115: @ 0x082DF684
    @ Trainer 115: エイカ ; flags=3, partySize=2
    trainer_mon_item_custom 100, 39, SPECIES_LUVDISC, ITEM_NUGGET, MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL, MOVE_WATER_PULSE
    trainer_mon_item_custom 100, 39, SPECIES_LUVDISC, ITEM_NUGGET, MOVE_ATTRACT, MOVE_SAFEGUARD, MOVE_TAKE_DOWN, MOVE_WATER_PULSE

sParty_Trainer116: @ 0x082DF6A4
    @ Trainer 116: したっぱ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 26, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 0, 28, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 0, 30, SPECIES_NUMEL

sParty_Trainer117: @ 0x082DF6BC
    @ Trainer 117: レイカ ; flags=3, partySize=1
    trainer_mon_item_custom 0, 11, SPECIES_ZIGZAGOON, ITEM_NUGGET, MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE

sParty_Trainer118: @ 0x082DF6CC
    @ Trainer 118: シオリ ; flags=2, partySize=1
    trainer_mon_item_default 150, 40, SPECIES_SEAKING, ITEM_NUGGET

sParty_Trainer119: @ 0x082DF6D4
    @ Trainer 119: カナコ ; flags=2, partySize=1
    trainer_mon_item_default 100, 45, SPECIES_ROSELIA, ITEM_NUGGET

sParty_Trainer120: @ 0x082DF6DC
    @ Trainer 120: レイカ ; flags=2, partySize=1
    trainer_mon_item_default 10, 27, SPECIES_LINOONE, ITEM_NUGGET

sParty_Trainer121: @ 0x082DF6E4
    @ Trainer 121: レイカ ; flags=2, partySize=1
    trainer_mon_item_default 20, 30, SPECIES_LINOONE, ITEM_NUGGET

sParty_Trainer122: @ 0x082DF6EC
    @ Trainer 122: レイカ ; flags=2, partySize=1
    trainer_mon_item_default 30, 33, SPECIES_LINOONE, ITEM_NUGGET

sParty_Trainer123: @ 0x082DF6F4
    @ Trainer 123: レイカ ; flags=3, partySize=1
    trainer_mon_item_custom 40, 36, SPECIES_LINOONE, ITEM_NUGGET, MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK

sParty_Trainer124: @ 0x082DF704
    @ Trainer 124: メグミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 21, SPECIES_MARILL

sParty_Trainer125: @ 0x082DF70C
    @ Trainer 125: クニミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 21, SPECIES_SHROOMISH

sParty_Trainer126: @ 0x082DF714
    @ Trainer 126: アサミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 21, SPECIES_NUMEL

sParty_Trainer127: @ 0x082DF71C
    @ Trainer 127: ヨリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 29, SPECIES_KECLEON, MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 0, 29, SPECIES_SEVIPER, MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH

sParty_Trainer128: @ 0x082DF73C
    @ Trainer 128: マユコ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 40, SPECIES_GOLDEEN

sParty_Trainer129: @ 0x082DF744
    @ Trainer 129: セイコ ; flags=0, partySize=1
    trainer_mon_no_item_default 150, 40, SPECIES_AZUMARILL

sParty_Trainer130: @ 0x082DF74C
    @ Trainer 130: ナオコ ; flags=1, partySize=3
    trainer_mon_no_item_custom 100, 35, SPECIES_CLAMPERL, MOVE_IRON_DEFENSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_WATER_PULSE
    trainer_mon_no_item_custom 100, 37, SPECIES_CORPHISH, MOVE_TAUNT, MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_NONE
    trainer_mon_no_item_custom 100, 39, SPECIES_LOMBRE, MOVE_UPROAR, MOVE_FURY_SWIPES, MOVE_FAKE_OUT, MOVE_WATER_PULSE

sParty_Trainer131: @ 0x082DF77C
    @ Trainer 131: ハルコ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 39, SPECIES_CARVANHA
    trainer_mon_no_item_default 100, 39, SPECIES_SHARPEDO

sParty_Trainer132: @ 0x082DF78C
    @ Trainer 132: ヨリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 10, 35, SPECIES_KECLEON, MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 10, 35, SPECIES_SEVIPER, MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH

sParty_Trainer133: @ 0x082DF7AC
    @ Trainer 133: ヨリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 20, 38, SPECIES_KECLEON, MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 20, 38, SPECIES_SEVIPER, MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH

sParty_Trainer134: @ 0x082DF7CC
    @ Trainer 134: ヨリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 30, 41, SPECIES_KECLEON, MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 30, 41, SPECIES_SEVIPER, MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH

sParty_Trainer135: @ 0x082DF7EC
    @ Trainer 135: ヨリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 40, 44, SPECIES_KECLEON, MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 40, 44, SPECIES_SEVIPER, MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH

sParty_Trainer136: @ 0x082DF80C
    @ Trainer 136: ミツグ ; flags=2, partySize=1
    trainer_mon_item_default 0, 7, SPECIES_ZIGZAGOON, ITEM_NUGGET

sParty_Trainer137: @ 0x082DF814
    @ Trainer 137: ナエ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_WHISCASH
    trainer_mon_no_item_default 200, 33, SPECIES_MEDITITE

sParty_Trainer138: @ 0x082DF824
    @ Trainer 138: ショウイチ ; flags=2, partySize=1
    trainer_mon_item_default 0, 45, SPECIES_AZUMARILL, ITEM_NUGGET

sParty_Trainer139: @ 0x082DF82C
    @ Trainer 139: ミツグ ; flags=2, partySize=1
    trainer_mon_item_default 0, 27, SPECIES_LINOONE, ITEM_NUGGET

sParty_Trainer140: @ 0x082DF834
    @ Trainer 140: ミツグ ; flags=2, partySize=1
    trainer_mon_item_default 0, 30, SPECIES_LINOONE, ITEM_NUGGET

sParty_Trainer141: @ 0x082DF83C
    @ Trainer 141: ミツグ ; flags=2, partySize=1
    trainer_mon_item_default 0, 33, SPECIES_LINOONE, ITEM_NUGGET

sParty_Trainer142: @ 0x082DF844
    @ Trainer 142: ミツグ ; flags=3, partySize=1
    trainer_mon_item_custom 0, 36, SPECIES_LINOONE, ITEM_NUGGET, MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK

sParty_Trainer143: @ 0x082DF854
    @ Trainer 143: トシオ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 19, SPECIES_ARON

sParty_Trainer144: @ 0x082DF85C
    @ Trainer 144: ショウ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_WAILMER
    trainer_mon_no_item_default 0, 25, SPECIES_HORSEA

sParty_Trainer145: @ 0x082DF86C
    @ Trainer 145: モトフミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 31, SPECIES_RHYHORN

sParty_Trainer146: @ 0x082DF874
    @ Trainer 146: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 20, SPECIES_NUMEL

sParty_Trainer147: @ 0x082DF87C
    @ Trainer 147: トシオ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 27, SPECIES_LAIRON

sParty_Trainer148: @ 0x082DF884
    @ Trainer 148: トシオ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 29, SPECIES_LAIRON
    trainer_mon_no_item_default 20, 29, SPECIES_RHYHORN

sParty_Trainer149: @ 0x082DF894
    @ Trainer 149: トシオ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 32, SPECIES_LAIRON
    trainer_mon_no_item_default 30, 32, SPECIES_RHYHORN

sParty_Trainer150: @ 0x082DF8A4
    @ Trainer 150: トシオ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 35, SPECIES_AGGRON
    trainer_mon_no_item_default 40, 35, SPECIES_RHYDON

sParty_Trainer151: @ 0x082DF8B4
    @ Trainer 151: ヨウヘイ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_CARVANHA

sParty_Trainer152: @ 0x082DF8BC
    @ Trainer 152: ヒロミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_TENTACOOL

sParty_Trainer153: @ 0x082DF8C4
    @ Trainer 153: タツオ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 24, SPECIES_TENTACOOL
    trainer_mon_no_item_default 10, 24, SPECIES_TENTACOOL

sParty_Trainer154: @ 0x082DF8D4
    @ Trainer 154: テルユキ ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 24, SPECIES_TENTACOOL
    trainer_mon_no_item_default 10, 24, SPECIES_WINGULL
    trainer_mon_no_item_default 10, 24, SPECIES_TENTACOOL

sParty_Trainer155: @ 0x082DF8EC
    @ Trainer 155: エイイチ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_CARVANHA

sParty_Trainer156: @ 0x082DF8F4
    @ Trainer 156: モリオ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_TENTACRUEL

sParty_Trainer157: @ 0x082DF8FC
    @ Trainer 157: クニヒコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_CARVANHA

sParty_Trainer158: @ 0x082DF904
    @ Trainer 158: ケンイチ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 25, SPECIES_CARVANHA

sParty_Trainer159: @ 0x082DF914
    @ Trainer 159: トシヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 33, SPECIES_WINGULL

sParty_Trainer160: @ 0x082DF924
    @ Trainer 160: マサトシ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_CARVANHA

sParty_Trainer161: @ 0x082DF92C
    @ Trainer 161: シノブ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_TENTACRUEL

sParty_Trainer162: @ 0x082DF934
    @ Trainer 162: ケイシ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_HORSEA

sParty_Trainer163: @ 0x082DF93C
    @ Trainer 163: ガクジ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_GYARADOS

sParty_Trainer164: @ 0x082DF944
    @ Trainer 164: レツジ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 31, SPECIES_CARVANHA
    trainer_mon_no_item_default 0, 31, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 31, SPECIES_CARVANHA

sParty_Trainer165: @ 0x082DF95C
    @ Trainer 165: マサヒロ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_GYARADOS

sParty_Trainer166: @ 0x082DF964
    @ Trainer 166: ハルキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_PELIPPER

sParty_Trainer167: @ 0x082DF96C
    @ Trainer 167: ダイスケ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 33, SPECIES_TENTACRUEL

sParty_Trainer168: @ 0x082DF97C
    @ Trainer 168: シンジ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_TENTACRUEL
    trainer_mon_no_item_default 0, 33, SPECIES_WAILMER

sParty_Trainer169: @ 0x082DF98C
    @ Trainer 169: ゴウ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_SHARPEDO

sParty_Trainer170: @ 0x082DF994
    @ Trainer 170: シゲオ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_SEALEO

sParty_Trainer171: @ 0x082DF99C
    @ Trainer 171: ツトム ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_SPHEAL

sParty_Trainer172: @ 0x082DF9A4
    @ Trainer 172: ヒデノリ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_GYARADOS

sParty_Trainer173: @ 0x082DF9AC
    @ Trainer 173: トクオ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 33, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 33, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 33, SPECIES_TENTACRUEL

sParty_Trainer174: @ 0x082DF9C4
    @ Trainer 174: カツユキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 33, SPECIES_WAILMER

sParty_Trainer175: @ 0x082DF9D4
    @ Trainer 175: エイイチ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 30, SPECIES_SHARPEDO

sParty_Trainer176: @ 0x082DF9DC
    @ Trainer 176: エイイチ ; flags=0, partySize=1
    trainer_mon_no_item_default 20, 33, SPECIES_SHARPEDO

sParty_Trainer177: @ 0x082DF9E4
    @ Trainer 177: エイイチ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 34, SPECIES_STARYU
    trainer_mon_no_item_default 30, 36, SPECIES_SHARPEDO

sParty_Trainer178: @ 0x082DF9F4
    @ Trainer 178: エイイチ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 37, SPECIES_STARMIE
    trainer_mon_no_item_default 40, 39, SPECIES_SHARPEDO

sParty_Trainer179: @ 0x082DFA04
    @ Trainer 179: タイケイ ; flags=0, partySize=1
    trainer_mon_no_item_default 127, 13, SPECIES_MACHOP

sParty_Trainer180: @ 0x082DFA0C
    @ Trainer 180: イワオ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 32, SPECIES_MACHOP
    trainer_mon_no_item_default 200, 32, SPECIES_MACHOKE

sParty_Trainer181: @ 0x082DFA1C
    @ Trainer 181: タクマ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 34, SPECIES_HARIYAMA

sParty_Trainer182: @ 0x082DFA24
    @ Trainer 182: タケノリ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 24, SPECIES_MACHOP
    trainer_mon_no_item_default 150, 28, SPECIES_MACHOKE

sParty_Trainer183: @ 0x082DFA34
    @ Trainer 183: ゴロウ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 19, SPECIES_MACHOP

sParty_Trainer184: @ 0x082DFA3C
    @ Trainer 184: ゴロウ ; flags=0, partySize=1
    trainer_mon_no_item_default 110, 27, SPECIES_MACHOKE

sParty_Trainer185: @ 0x082DFA44
    @ Trainer 185: ゴロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 120, 29, SPECIES_MACHOP
    trainer_mon_no_item_default 120, 29, SPECIES_MACHOKE

sParty_Trainer186: @ 0x082DFA54
    @ Trainer 186: ゴロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 130, 31, SPECIES_MACHOP
    trainer_mon_no_item_default 130, 31, SPECIES_MACHOKE
    trainer_mon_no_item_default 130, 31, SPECIES_MACHOKE

sParty_Trainer187: @ 0x082DFA6C
    @ Trainer 187: ゴロウ ; flags=2, partySize=4
    trainer_mon_item_default 140, 33, SPECIES_MACHOP, ITEM_NONE
    trainer_mon_item_default 140, 33, SPECIES_MACHOKE, ITEM_NONE
    trainer_mon_item_default 140, 33, SPECIES_MACHOKE, ITEM_NONE
    trainer_mon_item_default 140, 33, SPECIES_MACHAMP, ITEM_BLACK_BELT

sParty_Trainer188: @ 0x082DFA8C
    @ Trainer 188: カズシ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 26, SPECIES_MAKUHITA
    trainer_mon_no_item_default 100, 26, SPECIES_MACHOKE

sParty_Trainer189: @ 0x082DFA9C
    @ Trainer 189: タダシ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 19, SPECIES_MACHOP

sParty_Trainer190: @ 0x082DFAA4
    @ Trainer 190: テツヒサ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 32, SPECIES_HARIYAMA

sParty_Trainer191: @ 0x082DFAAC
    @ Trainer 191: ジョージ ; flags=1, partySize=2
    trainer_mon_no_item_custom 100, 17, SPECIES_ELECTRIKE, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_SPARK, MOVE_LEER
    trainer_mon_no_item_custom 100, 17, SPECIES_VOLTORB, MOVE_CHARGE, MOVE_SHOCK_WAVE, MOVE_SCREECH, MOVE_NONE

sParty_Trainer192: @ 0x082DFACC
    @ Trainer 192: したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 31, SPECIES_POOCHYENA
    trainer_mon_no_item_default 0, 31, SPECIES_ZUBAT

sParty_Trainer193: @ 0x082DFADC
    @ Trainer 193: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_CARVANHA

sParty_Trainer194: @ 0x082DFAE4
    @ Trainer 194: マイク ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 17, SPECIES_VOLTORB
    trainer_mon_no_item_default 100, 17, SPECIES_MAGNEMITE

sParty_Trainer195: @ 0x082DFAF4
    @ Trainer 195: ジョー ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 30, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 0, 30, SPECIES_LOUDRED

sParty_Trainer196: @ 0x082DFB04
    @ Trainer 196: テリー ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 15, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 0, 15, SPECIES_WHISMUR

sParty_Trainer197: @ 0x082DFB14
    @ Trainer 197: テリー ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 25, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 10, 25, SPECIES_WHISMUR
    trainer_mon_no_item_default 10, 25, SPECIES_MAGNEMITE

sParty_Trainer198: @ 0x082DFB2C
    @ Trainer 198: テリー ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 28, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 20, 28, SPECIES_LOUDRED
    trainer_mon_no_item_default 20, 28, SPECIES_MAGNEMITE

sParty_Trainer199: @ 0x082DFB44
    @ Trainer 199: テリー ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 31, SPECIES_MAGNETON
    trainer_mon_no_item_default 30, 31, SPECIES_LOUDRED
    trainer_mon_no_item_default 30, 31, SPECIES_MAGNETON

sParty_Trainer200: @ 0x082DFB5C
    @ Trainer 200: テリー ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 34, SPECIES_MAGNETON
    trainer_mon_no_item_default 40, 34, SPECIES_EXPLOUD
    trainer_mon_no_item_default 40, 34, SPECIES_MAGNETON

sParty_Trainer201: @ 0x082DFB74
    @ Trainer 201: アキラ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 23, SPECIES_NUMEL

sParty_Trainer202: @ 0x082DFB7C
    @ Trainer 202: コウタ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 22, SPECIES_SLUGMA
    trainer_mon_no_item_default 100, 22, SPECIES_SLUGMA

sParty_Trainer203: @ 0x082DFB8C
    @ Trainer 203: タモツ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 23, SPECIES_NUMEL

sParty_Trainer204: @ 0x082DFB94
    @ Trainer 204: ジュンジ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 23, SPECIES_SLUGMA

sParty_Trainer205: @ 0x082DFB9C
    @ Trainer 205: タカハル ; flags=0, partySize=1
    trainer_mon_no_item_default 120, 23, SPECIES_SLUGMA

sParty_Trainer206: @ 0x082DFBA4
    @ Trainer 206: ノブヒコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_SLUGMA
    trainer_mon_no_item_default 0, 18, SPECIES_WINGULL

sParty_Trainer207: @ 0x082DFBB4
    @ Trainer 207: ノブヒコ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 26, SPECIES_SLUGMA
    trainer_mon_no_item_default 10, 26, SPECIES_WINGULL

sParty_Trainer208: @ 0x082DFBC4
    @ Trainer 208: ノブヒコ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 29, SPECIES_SLUGMA
    trainer_mon_no_item_default 20, 29, SPECIES_PELIPPER

sParty_Trainer209: @ 0x082DFBD4
    @ Trainer 209: ノブヒコ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 32, SPECIES_SLUGMA
    trainer_mon_no_item_default 30, 32, SPECIES_PELIPPER

sParty_Trainer210: @ 0x082DFBE4
    @ Trainer 210: ノブヒコ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 35, SPECIES_MAGCARGO
    trainer_mon_no_item_default 40, 35, SPECIES_PELIPPER

sParty_Trainer211: @ 0x082DFBF4
    @ Trainer 211: ノリヒロ ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 23, SPECIES_SANDSHREW, MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH

sParty_Trainer212: @ 0x082DFC04
    @ Trainer 212: カズユキ ; flags=1, partySize=3
    trainer_mon_no_item_custom 0, 21, SPECIES_BALTOY, MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB
    trainer_mon_no_item_custom 0, 21, SPECIES_SANDSHREW, MOVE_POISON_STING, MOVE_SAND_ATTACK, MOVE_SCRATCH, MOVE_DIG
    trainer_mon_no_item_custom 0, 21, SPECIES_BALTOY, MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB

sParty_Trainer213: @ 0x082DFC34
    @ Trainer 213: キヨフミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 18, SPECIES_NUZLEAF

sParty_Trainer214: @ 0x082DFC3C
    @ Trainer 214: トモヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_SANDSHREW
    trainer_mon_no_item_default 0, 18, SPECIES_NUZLEAF

sParty_Trainer215: @ 0x082DFC4C
    @ Trainer 215: マサミチ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 24, SPECIES_KECLEON

sParty_Trainer216: @ 0x082DFC54
    @ Trainer 216: ヨシハル ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 20, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 20, SPECIES_TAILLOW

sParty_Trainer217: @ 0x082DFC64
    @ Trainer 217: ナツコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 21, SPECIES_SHROOMISH

sParty_Trainer218: @ 0x082DFC6C
    @ Trainer 218: ヨシヤ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 18, SPECIES_SANDSHREW

sParty_Trainer219: @ 0x082DFC74
    @ Trainer 219: ヨシハル ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 26, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 10, 26, SPECIES_TAILLOW

sParty_Trainer220: @ 0x082DFC84
    @ Trainer 220: ヨシハル ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 29, SPECIES_LINOONE
    trainer_mon_no_item_default 20, 29, SPECIES_SWELLOW

sParty_Trainer221: @ 0x082DFC94
    @ Trainer 221: ヨシハル ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 31, SPECIES_SANDSHREW
    trainer_mon_no_item_default 30, 31, SPECIES_SWELLOW
    trainer_mon_no_item_default 30, 31, SPECIES_LINOONE

sParty_Trainer222: @ 0x082DFCAC
    @ Trainer 222: ヨシハル ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 34, SPECIES_SWELLOW
    trainer_mon_no_item_default 40, 34, SPECIES_SANDSLASH
    trainer_mon_no_item_default 40, 34, SPECIES_LINOONE

sParty_Trainer223: @ 0x082DFCC4
    @ Trainer 223: ヨウイチ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 26, SPECIES_SURSKIT

sParty_Trainer224: @ 0x082DFCCC
    @ Trainer 224: イクミ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 24, SPECIES_WURMPLE
    trainer_mon_no_item_default 100, 24, SPECIES_SILCOON
    trainer_mon_no_item_default 100, 24, SPECIES_BEAUTIFLY

sParty_Trainer225: @ 0x082DFCE4
    @ Trainer 225: ソウスケ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 27, SPECIES_WURMPLE
    trainer_mon_no_item_default 100, 27, SPECIES_CASCOON
    trainer_mon_no_item_default 100, 27, SPECIES_DUSTOX

sParty_Trainer226: @ 0x082DFCFC
    @ Trainer 226: ミキオ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 27, SPECIES_SURSKIT
    trainer_mon_no_item_default 0, 27, SPECIES_SURSKIT
    trainer_mon_no_item_default 0, 27, SPECIES_SURSKIT

sParty_Trainer227: @ 0x082DFD14
    @ Trainer 227: ヨシアキ ; flags=0, partySize=2
    trainer_mon_no_item_default 150, 16, SPECIES_DUSTOX
    trainer_mon_no_item_default 150, 16, SPECIES_BEAUTIFLY

sParty_Trainer228: @ 0x082DFD24
    @ Trainer 228: ミキオ ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 31, SPECIES_SURSKIT
    trainer_mon_no_item_default 10, 31, SPECIES_SURSKIT
    trainer_mon_no_item_default 10, 31, SPECIES_SURSKIT

sParty_Trainer229: @ 0x082DFD3C
    @ Trainer 229: ミキオ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 34, SPECIES_SURSKIT
    trainer_mon_no_item_default 20, 34, SPECIES_SURSKIT
    trainer_mon_no_item_default 20, 34, SPECIES_MASQUERAIN

sParty_Trainer230: @ 0x082DFD54
    @ Trainer 230: ミキオ ; flags=0, partySize=4
    trainer_mon_no_item_default 30, 36, SPECIES_SURSKIT
    trainer_mon_no_item_default 30, 36, SPECIES_WURMPLE
    trainer_mon_no_item_default 30, 36, SPECIES_SURSKIT
    trainer_mon_no_item_default 30, 36, SPECIES_MASQUERAIN

sParty_Trainer231: @ 0x082DFD74
    @ Trainer 231: ミキオ ; flags=2, partySize=5
    trainer_mon_item_default 40, 38, SPECIES_SURSKIT, ITEM_NONE
    trainer_mon_item_default 40, 38, SPECIES_DUSTOX, ITEM_NONE
    trainer_mon_item_default 40, 38, SPECIES_SURSKIT, ITEM_NONE
    trainer_mon_item_default 40, 38, SPECIES_MASQUERAIN, ITEM_SILVER_POWDER
    trainer_mon_item_default 40, 38, SPECIES_BEAUTIFLY, ITEM_NONE

sParty_Trainer232: @ 0x082DFD9C
    @ Trainer 232: アキト ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 15, SPECIES_ABRA, MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE

sParty_Trainer233: @ 0x082DFDAC
    @ Trainer 233: ヒロム ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_KIRLIA

sParty_Trainer234: @ 0x082DFDB4
    @ Trainer 234: ユウヤ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_RALTS

sParty_Trainer235: @ 0x082DFDBC
    @ Trainer 235: サトキ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_GIRAFARIG

sParty_Trainer236: @ 0x082DFDC4
    @ Trainer 236: テツヤ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 26, SPECIES_RALTS
    trainer_mon_no_item_default 0, 26, SPECIES_RALTS
    trainer_mon_no_item_default 0, 26, SPECIES_KIRLIA

sParty_Trainer237: @ 0x082DFDDC
    @ Trainer 237: シュウイチ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 41, SPECIES_KADABRA
    trainer_mon_no_item_default 0, 41, SPECIES_SOLROCK

sParty_Trainer238: @ 0x082DFDEC
    @ Trainer 238: カオル ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 31, SPECIES_SOLROCK

sParty_Trainer239: @ 0x082DFDF4
    @ Trainer 239: カオル ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 33, SPECIES_KADABRA
    trainer_mon_no_item_default 10, 33, SPECIES_SOLROCK

sParty_Trainer240: @ 0x082DFE04
    @ Trainer 240: カオル ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 38, SPECIES_KADABRA
    trainer_mon_no_item_default 20, 38, SPECIES_SOLROCK

sParty_Trainer241: @ 0x082DFE14
    @ Trainer 241: カオル ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 41, SPECIES_KADABRA
    trainer_mon_no_item_default 30, 41, SPECIES_SOLROCK

sParty_Trainer242: @ 0x082DFE24
    @ Trainer 242: カオル ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 45, SPECIES_SOLROCK
    trainer_mon_no_item_default 40, 45, SPECIES_ALAKAZAM

sParty_Trainer243: @ 0x082DFE34
    @ Trainer 243: マリコ ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 16, SPECIES_ABRA, MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE

sParty_Trainer244: @ 0x082DFE44
    @ Trainer 244: アスカ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_KIRLIA

sParty_Trainer245: @ 0x082DFE4C
    @ Trainer 245: ミライ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_XATU

sParty_Trainer246: @ 0x082DFE54
    @ Trainer 246: ヒカリ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_KADABRA

sParty_Trainer247: @ 0x082DFE5C
    @ Trainer 247: オリエ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 26, SPECIES_WOBBUFFET
    trainer_mon_no_item_default 0, 26, SPECIES_NATU
    trainer_mon_no_item_default 0, 26, SPECIES_KADABRA

sParty_Trainer248: @ 0x082DFE74
    @ Trainer 248: ナナコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 41, SPECIES_KIRLIA
    trainer_mon_no_item_default 0, 41, SPECIES_XATU

sParty_Trainer249: @ 0x082DFE84
    @ Trainer 249: シホミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 30, SPECIES_KADABRA
    trainer_mon_no_item_default 0, 30, SPECIES_LUNATONE

sParty_Trainer250: @ 0x082DFE94
    @ Trainer 250: シホミ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 34, SPECIES_KADABRA
    trainer_mon_no_item_default 10, 34, SPECIES_LUNATONE

sParty_Trainer251: @ 0x082DFEA4
    @ Trainer 251: シホミ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 37, SPECIES_KADABRA
    trainer_mon_no_item_default 20, 37, SPECIES_LUNATONE

sParty_Trainer252: @ 0x082DFEB4
    @ Trainer 252: シホミ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 40, SPECIES_KADABRA
    trainer_mon_no_item_default 30, 40, SPECIES_LUNATONE

sParty_Trainer253: @ 0x082DFEC4
    @ Trainer 253: シホミ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 43, SPECIES_LUNATONE
    trainer_mon_no_item_default 40, 43, SPECIES_ALAKAZAM

sParty_Trainer254: @ 0x082DFED4
    @ Trainer 254: ロバート ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_MANECTRIC

sParty_Trainer255: @ 0x082DFEDC
    @ Trainer 255: オルソン ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 44, SPECIES_MANECTRIC
    trainer_mon_no_item_default 0, 44, SPECIES_MANECTRIC

sParty_Trainer256: @ 0x082DFEEC
    @ Trainer 256: スコット ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 45, SPECIES_ZANGOOSE

sParty_Trainer257: @ 0x082DFEF4
    @ Trainer 257: ロバート ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 34, SPECIES_MANECTRIC

sParty_Trainer258: @ 0x082DFEFC
    @ Trainer 258: ロバート ; flags=1, partySize=2
    trainer_mon_no_item_custom 20, 36, SPECIES_LINOONE, MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES
    trainer_mon_no_item_custom 20, 36, SPECIES_MANECTRIC, MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR

sParty_Trainer259: @ 0x082DFF1C
    @ Trainer 259: ロバート ; flags=1, partySize=2
    trainer_mon_no_item_custom 30, 39, SPECIES_LINOONE, MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES
    trainer_mon_no_item_custom 30, 39, SPECIES_MANECTRIC, MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_NONE

sParty_Trainer260: @ 0x082DFF3C
    @ Trainer 260: ロバート ; flags=1, partySize=3
    trainer_mon_no_item_custom 40, 41, SPECIES_LINOONE, MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES
    trainer_mon_no_item_custom 40, 41, SPECIES_GOLDUCK, MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP
    trainer_mon_no_item_custom 40, 41, SPECIES_MANECTRIC, MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR

sParty_Trainer261: @ 0x082DFF6C
    @ Trainer 261: カゲツ ; flags=3, partySize=5
    trainer_mon_item_custom 250, 46, SPECIES_MIGHTYENA, ITEM_NONE, MOVE_ROAR, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_CRUNCH
    trainer_mon_item_custom 250, 48, SPECIES_SHIFTRY, ITEM_NONE, MOVE_TORMENT, MOVE_DOUBLE_TEAM, MOVE_SWAGGER, MOVE_EXTRASENSORY
    trainer_mon_item_custom 250, 46, SPECIES_CACTURNE, ITEM_NONE, MOVE_LEECH_SEED, MOVE_FAINT_ATTACK, MOVE_NEEDLE_ARM, MOVE_COTTON_SPORE
    trainer_mon_item_custom 250, 48, SPECIES_CRAWDAUNT, ITEM_NONE, MOVE_SURF, MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_FACADE
    trainer_mon_item_custom 255, 49, SPECIES_ABSOL, ITEM_SITRUS_BERRY, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SLASH

sParty_Trainer262: @ 0x082DFFBC
    @ Trainer 262: フヨウ ; flags=3, partySize=5
    trainer_mon_item_custom 250, 48, SPECIES_DUSCLOPS, ITEM_NONE, MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_PROTECT
    trainer_mon_item_custom 250, 49, SPECIES_BANETTE, ITEM_NONE, MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_WILL_O_WISP, MOVE_FAINT_ATTACK
    trainer_mon_item_custom 250, 50, SPECIES_SABLEYE, ITEM_NONE, MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_NIGHT_SHADE, MOVE_FAINT_ATTACK
    trainer_mon_item_custom 250, 49, SPECIES_BANETTE, ITEM_NONE, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FACADE
    trainer_mon_item_custom 255, 51, SPECIES_DUSCLOPS, ITEM_SITRUS_BERRY, MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE

sParty_Trainer263: @ 0x082E000C
    @ Trainer 263: プリム ; flags=3, partySize=5
    trainer_mon_item_custom 250, 50, SPECIES_SEALEO, ITEM_NONE, MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_HAIL, MOVE_ICE_BALL
    trainer_mon_item_custom 250, 50, SPECIES_GLALIE, ITEM_NONE, MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_ICY_WIND, MOVE_ICE_BEAM
    trainer_mon_item_custom 250, 52, SPECIES_SEALEO, ITEM_NONE, MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_HAIL, MOVE_BLIZZARD
    trainer_mon_item_custom 250, 52, SPECIES_GLALIE, ITEM_NONE, MOVE_SHADOW_BALL, MOVE_EXPLOSION, MOVE_HAIL, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 53, SPECIES_WALREIN, ITEM_SITRUS_BERRY, MOVE_SURF, MOVE_BODY_SLAM, MOVE_ICE_BEAM, MOVE_SHEER_COLD

sParty_Trainer264: @ 0x082E005C
    @ Trainer 264: ゲンジ ; flags=3, partySize=5
    trainer_mon_item_custom 250, 52, SPECIES_SHELGON, ITEM_NONE, MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW, MOVE_PROTECT, MOVE_DOUBLE_EDGE
    trainer_mon_item_custom 250, 54, SPECIES_ALTARIA, ITEM_NONE, MOVE_DOUBLE_EDGE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE
    trainer_mon_item_custom 250, 53, SPECIES_KINGDRA, ITEM_NONE, MOVE_SMOKESCREEN, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_BODY_SLAM
    trainer_mon_item_custom 250, 53, SPECIES_FLYGON, ITEM_NONE, MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE
    trainer_mon_item_custom 255, 55, SPECIES_SALAMENCE, ITEM_SITRUS_BERRY, MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_CRUNCH

sParty_Trainer265: @ 0x082E00AC
    @ Trainer 265: ツツジ ; flags=3, partySize=3
    trainer_mon_item_custom 100, 12, SPECIES_GEODUDE, ITEM_NONE, MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_ROCK_THROW, MOVE_ROCK_TOMB
    trainer_mon_item_custom 100, 12, SPECIES_GEODUDE, ITEM_NONE, MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_ROCK_THROW, MOVE_ROCK_TOMB
    trainer_mon_item_custom 200, 15, SPECIES_NOSEPASS, ITEM_ORAN_BERRY, MOVE_BLOCK, MOVE_HARDEN, MOVE_TACKLE, MOVE_ROCK_TOMB

sParty_Trainer266: @ 0x082E00DC
    @ Trainer 266: トウキ ; flags=3, partySize=3
    trainer_mon_item_custom 100, 16, SPECIES_MACHOP, ITEM_NONE, MOVE_KARATE_CHOP, MOVE_LOW_KICK, MOVE_SEISMIC_TOSS, MOVE_BULK_UP
    trainer_mon_item_custom 100, 16, SPECIES_MEDITITE, ITEM_NONE, MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_BULK_UP
    trainer_mon_item_custom 200, 19, SPECIES_MAKUHITA, ITEM_SITRUS_BERRY, MOVE_ARM_THRUST, MOVE_VITAL_THROW, MOVE_REVERSAL, MOVE_BULK_UP

sParty_Trainer267: @ 0x082E010C
    @ Trainer 267: テッセン ; flags=3, partySize=4
    trainer_mon_item_custom 200, 20, SPECIES_VOLTORB, ITEM_NONE, MOVE_ROLLOUT, MOVE_SPARK, MOVE_SELF_DESTRUCT, MOVE_SHOCK_WAVE
    trainer_mon_item_custom 200, 20, SPECIES_ELECTRIKE, ITEM_NONE, MOVE_SHOCK_WAVE, MOVE_LEER, MOVE_QUICK_ATTACK, MOVE_HOWL
    trainer_mon_item_custom 220, 22, SPECIES_MAGNETON, ITEM_NONE, MOVE_SUPERSONIC, MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM
    trainer_mon_item_custom 250, 24, SPECIES_MANECTRIC, ITEM_SITRUS_BERRY, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_SHOCK_WAVE, MOVE_HOWL

sParty_Trainer268: @ 0x082E014C
    @ Trainer 268: アスナ ; flags=3, partySize=4
    trainer_mon_item_custom 200, 24, SPECIES_NUMEL, ITEM_NONE, MOVE_OVERHEAT, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY
    trainer_mon_item_custom 200, 24, SPECIES_SLUGMA, ITEM_NONE, MOVE_OVERHEAT, MOVE_SMOG, MOVE_LIGHT_SCREEN, MOVE_SUNNY_DAY
    trainer_mon_item_custom 250, 26, SPECIES_CAMERUPT, ITEM_NONE, MOVE_OVERHEAT, MOVE_TACKLE, MOVE_SUNNY_DAY, MOVE_ATTRACT
    trainer_mon_item_custom 250, 29, SPECIES_TORKOAL, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_BODY_SLAM, MOVE_ATTRACT

sParty_Trainer269: @ 0x082E018C
    @ Trainer 269: センリ ; flags=3, partySize=4
    trainer_mon_item_custom 200, 27, SPECIES_SPINDA, ITEM_NONE, MOVE_TEETER_DANCE, MOVE_PSYBEAM, MOVE_FACADE, MOVE_ENCORE
    trainer_mon_item_custom 200, 27, SPECIES_VIGOROTH, ITEM_NONE, MOVE_SLASH, MOVE_FACADE, MOVE_ENCORE, MOVE_FAINT_ATTACK
    trainer_mon_item_custom 200, 29, SPECIES_LINOONE, ITEM_NONE, MOVE_SLASH, MOVE_BELLY_DRUM, MOVE_FACADE, MOVE_HEADBUTT
    trainer_mon_item_custom 250, 31, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_COUNTER, MOVE_YAWN, MOVE_FACADE, MOVE_FAINT_ATTACK

sParty_Trainer270: @ 0x082E01CC
    @ Trainer 270: ナギ ; flags=3, partySize=5
    trainer_mon_item_custom 210, 29, SPECIES_SWABLU, ITEM_NONE, MOVE_PERISH_SONG, MOVE_MIRROR_MOVE, MOVE_SAFEGUARD, MOVE_AERIAL_ACE
    trainer_mon_item_custom 210, 29, SPECIES_TROPIUS, ITEM_NONE, MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_SYNTHESIS
    trainer_mon_item_custom 210, 30, SPECIES_PELIPPER, ITEM_NONE, MOVE_WATER_GUN, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE
    trainer_mon_item_custom 220, 31, SPECIES_SKARMORY, ITEM_NONE, MOVE_SAND_ATTACK, MOVE_FURY_ATTACK, MOVE_STEEL_WING, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 33, SPECIES_ALTARIA, ITEM_ORAN_BERRY, MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE

sParty_Trainer271: @ 0x082E021C
    @ Trainer 271: フウとラン ; flags=3, partySize=4
    trainer_mon_item_custom 250, 41, SPECIES_CLAYDOL, ITEM_NONE, MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 250, 41, SPECIES_XATU, ITEM_NONE, MOVE_PSYCHIC, MOVE_SUNNY_DAY, MOVE_CONFUSE_RAY, MOVE_CALM_MIND
    trainer_mon_item_custom 250, 42, SPECIES_LUNATONE, ITEM_SITRUS_BERRY, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_CALM_MIND
    trainer_mon_item_custom 250, 42, SPECIES_SOLROCK, ITEM_SITRUS_BERRY, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER

sParty_Trainer272: @ 0x082E025C
    @ Trainer 272: アダン ; flags=3, partySize=5
    trainer_mon_item_custom 200, 41, SPECIES_LUVDISC, ITEM_NONE, MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL
    trainer_mon_item_custom 200, 41, SPECIES_WHISCASH, ITEM_NONE, MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_AMNESIA, MOVE_EARTHQUAKE
    trainer_mon_item_custom 200, 43, SPECIES_SEALEO, ITEM_NONE, MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_AURORA_BEAM, MOVE_WATER_PULSE
    trainer_mon_item_custom 200, 43, SPECIES_CRAWDAUNT, ITEM_NONE, MOVE_WATER_PULSE, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_LEER
    trainer_mon_item_custom 250, 46, SPECIES_KINGDRA, ITEM_CHESTO_BERRY, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST

sParty_Trainer273: @ 0x082E02AC
    @ Trainer 273: ヒデオ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 9, SPECIES_RALTS

sParty_Trainer274: @ 0x082E02B4
    @ Trainer 274: ノブヒサ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 17, SPECIES_RALTS

sParty_Trainer275: @ 0x082E02BC
    @ Trainer 275: カツトシ ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 15, SPECIES_NUMEL
    trainer_mon_no_item_default 10, 15, SPECIES_ODDISH
    trainer_mon_no_item_default 10, 15, SPECIES_WINGULL

sParty_Trainer276: @ 0x082E02D4
    @ Trainer 276: ヒデオ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 26, SPECIES_RALTS
    trainer_mon_no_item_default 20, 26, SPECIES_MEDITITE

sParty_Trainer277: @ 0x082E02E4
    @ Trainer 277: ヒデオ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 29, SPECIES_KIRLIA
    trainer_mon_no_item_default 30, 29, SPECIES_MEDITITE

sParty_Trainer278: @ 0x082E02F4
    @ Trainer 278: ヒデオ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 32, SPECIES_KIRLIA
    trainer_mon_no_item_default 40, 32, SPECIES_MEDICHAM

sParty_Trainer279: @ 0x082E0304
    @ Trainer 279: ヒデオ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 34, SPECIES_KIRLIA
    trainer_mon_no_item_default 50, 34, SPECIES_BANETTE
    trainer_mon_no_item_default 50, 34, SPECIES_MEDICHAM

sParty_Trainer280: @ 0x082E031C
    @ Trainer 280: ハツネ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 9, SPECIES_SHROOMISH

sParty_Trainer281: @ 0x082E0324
    @ Trainer 281: ミキエ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 16, SPECIES_SHROOMISH
    trainer_mon_no_item_default 10, 16, SPECIES_BEAUTIFLY

sParty_Trainer282: @ 0x082E0334
    @ Trainer 282: ハツネ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 26, SPECIES_SHROOMISH
    trainer_mon_no_item_default 20, 26, SPECIES_WHISMUR

sParty_Trainer283: @ 0x082E0344
    @ Trainer 283: ハツネ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 29, SPECIES_SHROOMISH
    trainer_mon_no_item_default 30, 29, SPECIES_LOUDRED

sParty_Trainer284: @ 0x082E0354
    @ Trainer 284: ハツネ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 32, SPECIES_BRELOOM
    trainer_mon_no_item_default 40, 32, SPECIES_LOUDRED

sParty_Trainer285: @ 0x082E0364
    @ Trainer 285: ハツネ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 35, SPECIES_BRELOOM
    trainer_mon_no_item_default 50, 35, SPECIES_EXPLOUD

sParty_Trainer286: @ 0x082E0374
    @ Trainer 286: マナとユイ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 30, SPECIES_SPINDA, MOVE_HYPNOSIS, MOVE_PSYBEAM, MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE
    trainer_mon_no_item_custom 0, 32, SPECIES_SLAKING, MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FAINT_ATTACK

sParty_Trainer287: @ 0x082E0394
    @ Trainer 287: ミホとリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 15, SPECIES_ZIGZAGOON, MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH
    trainer_mon_no_item_custom 0, 17, SPECIES_MAKUHITA, MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE

sParty_Trainer288: @ 0x082E03B4
    @ Trainer 288: ミホとリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 10, 28, SPECIES_ZIGZAGOON, MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH
    trainer_mon_no_item_custom 10, 30, SPECIES_MAKUHITA, MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE

sParty_Trainer289: @ 0x082E03D4
    @ Trainer 289: ミホとリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 20, 31, SPECIES_ZIGZAGOON, MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH
    trainer_mon_no_item_custom 20, 33, SPECIES_MAKUHITA, MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE

sParty_Trainer290: @ 0x082E03F4
    @ Trainer 290: ミホとリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 30, 34, SPECIES_LINOONE, MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH
    trainer_mon_no_item_custom 30, 36, SPECIES_MAKUHITA, MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE

sParty_Trainer291: @ 0x082E0414
    @ Trainer 291: ミホとリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 40, 36, SPECIES_LINOONE, MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH
    trainer_mon_no_item_custom 40, 38, SPECIES_HARIYAMA, MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE

sParty_Trainer292: @ 0x082E0434
    @ Trainer 292: ハルヒコ ; flags=2, partySize=2
    trainer_mon_item_default 25, 16, SPECIES_TAILLOW, ITEM_ORAN_BERRY
    trainer_mon_item_default 25, 16, SPECIES_ZIGZAGOON, ITEM_ORAN_BERRY

sParty_Trainer293: @ 0x082E0444
    @ Trainer 293: ミツハル ; flags=2, partySize=1
    trainer_mon_item_default 0, 15, SPECIES_SKITTY, ITEM_ORAN_BERRY

sParty_Trainer294: @ 0x082E044C
    @ Trainer 294: ヒサシ ; flags=3, partySize=6
    trainer_mon_item_custom 0, 22, SPECIES_SKITTY, ITEM_ORAN_BERRY, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL
    trainer_mon_item_custom 0, 36, SPECIES_SKITTY, ITEM_ORAN_BERRY, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL
    trainer_mon_item_custom 0, 40, SPECIES_SKITTY, ITEM_ORAN_BERRY, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL
    trainer_mon_item_custom 0, 12, SPECIES_SKITTY, ITEM_ORAN_BERRY, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL
    trainer_mon_item_custom 0, 30, SPECIES_SKITTY, ITEM_ORAN_BERRY, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL
    trainer_mon_item_custom 0, 42, SPECIES_DELCATTY, ITEM_ORAN_BERRY, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL

sParty_Trainer295: @ 0x082E04AC
    @ Trainer 295: ミツハル ; flags=2, partySize=1
    trainer_mon_item_default 0, 29, SPECIES_SKITTY, ITEM_ORAN_BERRY

sParty_Trainer296: @ 0x082E04B4
    @ Trainer 296: ミツハル ; flags=2, partySize=1
    trainer_mon_item_default 0, 32, SPECIES_SKITTY, ITEM_ORAN_BERRY

sParty_Trainer297: @ 0x082E04BC
    @ Trainer 297: ミツハル ; flags=2, partySize=1
    trainer_mon_item_default 0, 35, SPECIES_DELCATTY, ITEM_ORAN_BERRY

sParty_Trainer298: @ 0x082E04C4
    @ Trainer 298: ミツハル ; flags=2, partySize=1
    trainer_mon_item_default 0, 38, SPECIES_DELCATTY, ITEM_SITRUS_BERRY

sParty_Trainer299: @ 0x082E04CC
    @ Trainer 299: ヤスエ ; flags=2, partySize=1
    trainer_mon_item_default 50, 17, SPECIES_ROSELIA, ITEM_ORAN_BERRY

sParty_Trainer300: @ 0x082E04D4
    @ Trainer 300: ケサコ ; flags=2, partySize=1
    trainer_mon_item_default 0, 30, SPECIES_PIKACHU, ITEM_ORAN_BERRY

sParty_Trainer301: @ 0x082E04DC
    @ Trainer 301: テイコ ; flags=2, partySize=3
    trainer_mon_item_default 100, 35, SPECIES_AZURILL, ITEM_ORAN_BERRY
    trainer_mon_item_default 100, 37, SPECIES_MARILL, ITEM_ORAN_BERRY
    trainer_mon_item_default 100, 39, SPECIES_AZUMARILL, ITEM_ORAN_BERRY

sParty_Trainer302: @ 0x082E04F4
    @ Trainer 302: マサコ ; flags=2, partySize=2
    trainer_mon_item_default 0, 14, SPECIES_PLUSLE, ITEM_ORAN_BERRY
    trainer_mon_item_default 0, 14, SPECIES_MINUN, ITEM_ORAN_BERRY

sParty_Trainer303: @ 0x082E0504
    @ Trainer 303: マサコ ; flags=2, partySize=2
    trainer_mon_item_default 10, 26, SPECIES_PLUSLE, ITEM_ORAN_BERRY
    trainer_mon_item_default 10, 26, SPECIES_MINUN, ITEM_ORAN_BERRY

sParty_Trainer304: @ 0x082E0514
    @ Trainer 304: マサコ ; flags=2, partySize=2
    trainer_mon_item_default 20, 29, SPECIES_PLUSLE, ITEM_ORAN_BERRY
    trainer_mon_item_default 20, 29, SPECIES_MINUN, ITEM_ORAN_BERRY

sParty_Trainer305: @ 0x082E0524
    @ Trainer 305: マサコ ; flags=2, partySize=2
    trainer_mon_item_default 30, 32, SPECIES_PLUSLE, ITEM_ORAN_BERRY
    trainer_mon_item_default 30, 32, SPECIES_MINUN, ITEM_ORAN_BERRY

sParty_Trainer306: @ 0x082E0534
    @ Trainer 306: マサコ ; flags=2, partySize=2
    trainer_mon_item_default 40, 35, SPECIES_PLUSLE, ITEM_SITRUS_BERRY
    trainer_mon_item_default 40, 35, SPECIES_MINUN, ITEM_SITRUS_BERRY

sParty_Trainer307: @ 0x082E0544
    @ Trainer 307: ウンショウ ; flags=0, partySize=1
    trainer_mon_no_item_default 200, 27, SPECIES_HARIYAMA

sParty_Trainer308: @ 0x082E054C
    @ Trainer 308: ウンショウ ; flags=1, partySize=1
    trainer_mon_no_item_custom 210, 33, SPECIES_HARIYAMA, MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG

sParty_Trainer309: @ 0x082E055C
    @ Trainer 309: ウンショウ ; flags=1, partySize=1
    trainer_mon_no_item_custom 220, 36, SPECIES_HARIYAMA, MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG

sParty_Trainer310: @ 0x082E056C
    @ Trainer 310: ウンショウ ; flags=1, partySize=1
    trainer_mon_no_item_custom 230, 39, SPECIES_HARIYAMA, MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG

sParty_Trainer311: @ 0x082E057C
    @ Trainer 311: ウンショウ ; flags=1, partySize=1
    trainer_mon_no_item_custom 240, 42, SPECIES_HARIYAMA, MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG

sParty_Trainer312: @ 0x082E058C
    @ Trainer 312: ミツヨ ; flags=1, partySize=1
    trainer_mon_no_item_custom 200, 18, SPECIES_MEDITITE, MOVE_HI_JUMP_KICK, MOVE_MEDITATE, MOVE_CONFUSION, MOVE_DETECT

sParty_Trainer313: @ 0x082E059C
    @ Trainer 313: ミヤコ ; flags=0, partySize=2
    trainer_mon_no_item_default 200, 21, SPECIES_MEDITITE
    trainer_mon_no_item_default 200, 21, SPECIES_MAKUHITA

sParty_Trainer314: @ 0x082E05AC
    @ Trainer 314: ミヤコ ; flags=0, partySize=2
    trainer_mon_no_item_default 210, 30, SPECIES_MEDITITE
    trainer_mon_no_item_default 210, 30, SPECIES_MAKUHITA

sParty_Trainer315: @ 0x082E05BC
    @ Trainer 315: ミヤコ ; flags=0, partySize=2
    trainer_mon_no_item_default 220, 33, SPECIES_MEDICHAM
    trainer_mon_no_item_default 220, 33, SPECIES_HARIYAMA

sParty_Trainer316: @ 0x082E05CC
    @ Trainer 316: ミヤコ ; flags=0, partySize=2
    trainer_mon_no_item_default 230, 36, SPECIES_MEDICHAM
    trainer_mon_no_item_default 230, 36, SPECIES_HARIYAMA

sParty_Trainer317: @ 0x082E05DC
    @ Trainer 317: ミヤコ ; flags=0, partySize=2
    trainer_mon_no_item_default 240, 39, SPECIES_MEDICHAM
    trainer_mon_no_item_default 240, 39, SPECIES_HARIYAMA

sParty_Trainer318: @ 0x082E05EC
    @ Trainer 318: カズキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_POOCHYENA

sParty_Trainer319: @ 0x082E05F4
    @ Trainer 319: ケイタ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 5, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 7, SPECIES_SEEDOT

sParty_Trainer320: @ 0x082E0604
    @ Trainer 320: タロウ ; flags=1, partySize=1
    trainer_mon_no_item_custom 100, 10, SPECIES_GEODUDE, MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE

sParty_Trainer321: @ 0x082E0614
    @ Trainer 321: カツオ ; flags=0, partySize=2
    trainer_mon_no_item_default 110, 8, SPECIES_GEODUDE
    trainer_mon_no_item_default 120, 8, SPECIES_GEODUDE

sParty_Trainer322: @ 0x082E0624
    @ Trainer 322: タケオ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 9, SPECIES_MACHOP

sParty_Trainer323: @ 0x082E062C
    @ Trainer 323: ヒロト ; flags=1, partySize=2
    trainer_mon_no_item_custom 150, 17, SPECIES_ZIGZAGOON, MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_GROWL, MOVE_THUNDERBOLT
    trainer_mon_no_item_custom 150, 17, SPECIES_GULPIN, MOVE_AMNESIA, MOVE_SLUDGE, MOVE_YAWN, MOVE_POUND

sParty_Trainer324: @ 0x082E064C
    @ Trainer 324: タダトシ ; flags=1, partySize=2
    trainer_mon_no_item_custom 100, 43, SPECIES_SLAKING, MOVE_ATTRACT, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER
    trainer_mon_no_item_custom 100, 43, SPECIES_DUSCLOPS, MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC

sParty_Trainer325: @ 0x082E066C
    @ Trainer 325: スズカ ; flags=1, partySize=2
    trainer_mon_no_item_custom 100, 43, SPECIES_GARDEVOIR, MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND
    trainer_mon_no_item_custom 100, 43, SPECIES_SLAKING, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK

sParty_Trainer326: @ 0x082E068C
    @ Trainer 326: マサユキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 19, SPECIES_TRAPINCH

sParty_Trainer327: @ 0x082E0694
    @ Trainer 327: ヨシト ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 19, SPECIES_ARON

sParty_Trainer328: @ 0x082E069C
    @ Trainer 328: カズキ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 27, SPECIES_MIGHTYENA

sParty_Trainer329: @ 0x082E06A4
    @ Trainer 329: カズキ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 28, SPECIES_SWELLOW
    trainer_mon_no_item_default 20, 30, SPECIES_MIGHTYENA

sParty_Trainer330: @ 0x082E06B4
    @ Trainer 330: カズキ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 31, SPECIES_SWELLOW
    trainer_mon_no_item_default 30, 29, SPECIES_LINOONE
    trainer_mon_no_item_default 30, 33, SPECIES_MIGHTYENA

sParty_Trainer331: @ 0x082E06CC
    @ Trainer 331: カズキ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 34, SPECIES_SWELLOW
    trainer_mon_no_item_default 40, 32, SPECIES_LINOONE
    trainer_mon_no_item_default 40, 36, SPECIES_MIGHTYENA

sParty_Trainer332: @ 0x082E06E4
    @ Trainer 332: ヤスユキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 14, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 16, SPECIES_ZIGZAGOON

sParty_Trainer333: @ 0x082E06F4
    @ Trainer 333: イサム ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 4, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 3, SPECIES_TAILLOW

sParty_Trainer334: @ 0x082E0704
    @ Trainer 334: シンゴ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 15, SPECIES_ARON
    trainer_mon_no_item_default 0, 13, SPECIES_ELECTRIKE

sParty_Trainer335: @ 0x082E0714
    @ Trainer 335: ミクリ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 57, SPECIES_WAILORD, ITEM_NONE, MOVE_RAIN_DANCE, MOVE_WATER_SPOUT, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD
    trainer_mon_item_custom 255, 55, SPECIES_TENTACRUEL, ITEM_NONE, MOVE_TOXIC, MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 56, SPECIES_LUDICOLO, ITEM_NONE, MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM
    trainer_mon_item_custom 255, 56, SPECIES_WHISCASH, ITEM_NONE, MOVE_EARTHQUAKE, MOVE_SURF, MOVE_AMNESIA, MOVE_HYPER_BEAM
    trainer_mon_item_custom 255, 56, SPECIES_GYARADOS, ITEM_NONE, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_SURF
    trainer_mon_item_custom 255, 58, SPECIES_MILOTIC, ITEM_SITRUS_BERRY, MOVE_RECOVER, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC

sParty_Trainer336: @ 0x082E0774
    @ Trainer 336: カツノリ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 5, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 10, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 15, SPECIES_MAGIKARP

sParty_Trainer337: @ 0x082E078C
    @ Trainer 337: ヨシタカ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 5, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 6, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 7, SPECIES_MAGIKARP

sParty_Trainer338: @ 0x082E07A4
    @ Trainer 338: ヒデユキ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 16, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 17, SPECIES_GOLDEEN
    trainer_mon_no_item_default 0, 18, SPECIES_BARBOACH

sParty_Trainer339: @ 0x082E07BC
    @ Trainer 339: アキヒコ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 10, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 7, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 10, SPECIES_MAGIKARP

sParty_Trainer340: @ 0x082E07D4
    @ Trainer 340: トモカズ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 11, SPECIES_TENTACOOL

sParty_Trainer341: @ 0x082E07DC
    @ Trainer 341: タカフミ ; flags=0, partySize=4
    trainer_mon_no_item_default 0, 11, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 14, SPECIES_WAILMER
    trainer_mon_no_item_default 0, 11, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 14, SPECIES_WAILMER

sParty_Trainer342: @ 0x082E07FC
    @ Trainer 342: タカノリ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 19, SPECIES_BARBOACH

sParty_Trainer343: @ 0x082E0804
    @ Trainer 343: カズヒコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 25, SPECIES_CARVANHA

sParty_Trainer344: @ 0x082E0814
    @ Trainer 344: イサオ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 16, SPECIES_TENTACOOL

sParty_Trainer345: @ 0x082E081C
    @ Trainer 345: タカヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 25, SPECIES_WAILMER
    trainer_mon_no_item_default 10, 25, SPECIES_TENTACRUEL

sParty_Trainer346: @ 0x082E082C
    @ Trainer 346: アキヒコ ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 24, SPECIES_TENTACOOL
    trainer_mon_no_item_default 10, 27, SPECIES_GYARADOS
    trainer_mon_no_item_default 10, 27, SPECIES_GYARADOS

sParty_Trainer347: @ 0x082E0844
    @ Trainer 347: アキヒコ ; flags=0, partySize=4
    trainer_mon_no_item_default 20, 29, SPECIES_GYARADOS
    trainer_mon_no_item_default 20, 26, SPECIES_CARVANHA
    trainer_mon_no_item_default 20, 26, SPECIES_TENTACOOL
    trainer_mon_no_item_default 20, 29, SPECIES_GYARADOS

sParty_Trainer348: @ 0x082E0864
    @ Trainer 348: アキヒコ ; flags=0, partySize=4
    trainer_mon_no_item_default 30, 31, SPECIES_GYARADOS
    trainer_mon_no_item_default 30, 30, SPECIES_CARVANHA
    trainer_mon_no_item_default 30, 30, SPECIES_TENTACRUEL
    trainer_mon_no_item_default 31, 31, SPECIES_GYARADOS

sParty_Trainer349: @ 0x082E0884
    @ Trainer 349: アキヒコ ; flags=0, partySize=4
    trainer_mon_no_item_default 40, 33, SPECIES_GYARADOS
    trainer_mon_no_item_default 40, 33, SPECIES_SHARPEDO
    trainer_mon_no_item_default 40, 33, SPECIES_GYARADOS
    trainer_mon_no_item_default 40, 35, SPECIES_TENTACRUEL

sParty_Trainer350: @ 0x082E08A4
    @ Trainer 350: カズオ ; flags=0, partySize=6
    trainer_mon_no_item_default 0, 19, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 21, SPECIES_GYARADOS
    trainer_mon_no_item_default 0, 23, SPECIES_GYARADOS
    trainer_mon_no_item_default 0, 26, SPECIES_GYARADOS
    trainer_mon_no_item_default 0, 30, SPECIES_GYARADOS
    trainer_mon_no_item_default 0, 35, SPECIES_GYARADOS

sParty_Trainer351: @ 0x082E08D4
    @ Trainer 351: ススム ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 6, SPECIES_VOLTORB
    trainer_mon_no_item_default 20, 6, SPECIES_VOLTORB
    trainer_mon_no_item_default 200, 14, SPECIES_MAGNEMITE

sParty_Trainer352: @ 0x082E08EC
    @ Trainer 352: シュンスケ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 14, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 0, 14, SPECIES_MAGNEMITE

sParty_Trainer353: @ 0x082E08FC
    @ Trainer 353: ヒデアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 16, SPECIES_MAGNEMITE

sParty_Trainer354: @ 0x082E0904
    @ Trainer 354: ヒデアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 30, SPECIES_MAGNEMITE

sParty_Trainer355: @ 0x082E090C
    @ Trainer 355: ヒデアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 20, 33, SPECIES_MAGNEMITE

sParty_Trainer356: @ 0x082E0914
    @ Trainer 356: ヒデアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 30, 36, SPECIES_MAGNETON

sParty_Trainer357: @ 0x082E091C
    @ Trainer 357: ヒデアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 40, 39, SPECIES_MAGNETON

sParty_Trainer358: @ 0x082E0924
    @ Trainer 358: ショウコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 16, SPECIES_MAGNEMITE

sParty_Trainer359: @ 0x082E092C
    @ Trainer 359: ヒデミ ; flags=0, partySize=3
    trainer_mon_no_item_default 80, 14, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 80, 14, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 0, 6, SPECIES_VOLTORB

sParty_Trainer360: @ 0x082E0944
    @ Trainer 360: ショウコ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 28, SPECIES_MAGNEMITE

sParty_Trainer361: @ 0x082E094C
    @ Trainer 361: ショウコ ; flags=0, partySize=1
    trainer_mon_no_item_default 20, 31, SPECIES_MAGNEMITE

sParty_Trainer362: @ 0x082E0954
    @ Trainer 362: ショウコ ; flags=0, partySize=1
    trainer_mon_no_item_default 30, 34, SPECIES_MAGNETON

sParty_Trainer363: @ 0x082E095C
    @ Trainer 363: ショウコ ; flags=0, partySize=1
    trainer_mon_no_item_default 40, 37, SPECIES_MAGNETON

sParty_Trainer364: @ 0x082E0964
    @ Trainer 364: ツヨシ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 17, SPECIES_DODUO

sParty_Trainer365: @ 0x082E096C
    @ Trainer 365: ツヨシ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 28, SPECIES_DODUO

sParty_Trainer366: @ 0x082E0974
    @ Trainer 366: ツヨシ ; flags=0, partySize=1
    trainer_mon_no_item_default 20, 31, SPECIES_DODUO

sParty_Trainer367: @ 0x082E097C
    @ Trainer 367: ツヨシ ; flags=0, partySize=1
    trainer_mon_no_item_default 30, 34, SPECIES_DODRIO

sParty_Trainer368: @ 0x082E0984
    @ Trainer 368: ツヨシ ; flags=0, partySize=1
    trainer_mon_no_item_default 40, 37, SPECIES_DODRIO

sParty_Trainer369: @ 0x082E098C
    @ Trainer 369: サエコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 17, SPECIES_DODUO

sParty_Trainer370: @ 0x082E0994
    @ Trainer 370: サエコ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 28, SPECIES_DODUO

sParty_Trainer371: @ 0x082E099C
    @ Trainer 371: サエコ ; flags=0, partySize=1
    trainer_mon_no_item_default 20, 31, SPECIES_DODUO

sParty_Trainer372: @ 0x082E09A4
    @ Trainer 372: サエコ ; flags=0, partySize=1
    trainer_mon_no_item_default 30, 34, SPECIES_DODRIO

sParty_Trainer373: @ 0x082E09AC
    @ Trainer 373: サエコ ; flags=0, partySize=1
    trainer_mon_no_item_default 40, 37, SPECIES_DODRIO

sParty_Trainer374: @ 0x082E09B4
    @ Trainer 374: シゲハル ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_STARYU
    trainer_mon_no_item_default 0, 33, SPECIES_STARYU

sParty_Trainer375: @ 0x082E09C4
    @ Trainer 375: フミタケ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 25, SPECIES_ELECTRIKE

sParty_Trainer376: @ 0x082E09D4
    @ Trainer 376: エイスケ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 35, SPECIES_STARYU

sParty_Trainer377: @ 0x082E09DC
    @ Trainer 377: ヤスヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_STARYU
    trainer_mon_no_item_default 0, 33, SPECIES_STARYU

sParty_Trainer378: @ 0x082E09EC
    @ Trainer 378: ショウゴ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_WINGULL
    trainer_mon_no_item_default 80, 34, SPECIES_STARYU

sParty_Trainer379: @ 0x082E09FC
    @ Trainer 379: エイスケ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 39, SPECIES_STARYU

sParty_Trainer380: @ 0x082E0A04
    @ Trainer 380: エイスケ ; flags=0, partySize=1
    trainer_mon_no_item_default 20, 42, SPECIES_STARYU

sParty_Trainer381: @ 0x082E0A0C
    @ Trainer 381: エイスケ ; flags=0, partySize=1
    trainer_mon_no_item_default 30, 45, SPECIES_STARMIE

sParty_Trainer382: @ 0x082E0A14
    @ Trainer 382: エイスケ ; flags=0, partySize=1
    trainer_mon_no_item_default 40, 48, SPECIES_STARMIE

sParty_Trainer383: @ 0x082E0A1C
    @ Trainer 383: キヌエ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_STARYU

sParty_Trainer384: @ 0x082E0A24
    @ Trainer 384: ユヅル ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_WINGULL
    trainer_mon_no_item_default 160, 34, SPECIES_STARYU

sParty_Trainer385: @ 0x082E0A34
    @ Trainer 385: ミカコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_STARYU

sParty_Trainer386: @ 0x082E0A3C
    @ Trainer 386: ナツミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 35, SPECIES_STARYU

sParty_Trainer387: @ 0x082E0A44
    @ Trainer 387: チサト ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 27, SPECIES_WINGULL
    trainer_mon_no_item_default 240, 33, SPECIES_STARYU

sParty_Trainer388: @ 0x082E0A54
    @ Trainer 388: ナツミ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 39, SPECIES_STARYU

sParty_Trainer389: @ 0x082E0A5C
    @ Trainer 389: ナツミ ; flags=0, partySize=1
    trainer_mon_no_item_default 20, 42, SPECIES_STARYU

sParty_Trainer390: @ 0x082E0A64
    @ Trainer 390: ナツミ ; flags=0, partySize=1
    trainer_mon_no_item_default 30, 45, SPECIES_STARMIE

sParty_Trainer391: @ 0x082E0A6C
    @ Trainer 391: ナツミ ; flags=0, partySize=1
    trainer_mon_no_item_default 40, 48, SPECIES_STARMIE

sParty_Trainer392: @ 0x082E0A74
    @ Trainer 392: タケル ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 37, SPECIES_ALTARIA
    trainer_mon_no_item_default 100, 37, SPECIES_ALTARIA

sParty_Trainer393: @ 0x082E0A84
    @ Trainer 393: タケル ; flags=0, partySize=2
    trainer_mon_no_item_default 110, 41, SPECIES_ALTARIA
    trainer_mon_no_item_default 110, 41, SPECIES_ALTARIA

sParty_Trainer394: @ 0x082E0A94
    @ Trainer 394: タケル ; flags=0, partySize=2
    trainer_mon_no_item_default 120, 44, SPECIES_ALTARIA
    trainer_mon_no_item_default 120, 44, SPECIES_ALTARIA

sParty_Trainer395: @ 0x082E0AA4
    @ Trainer 395: タケル ; flags=0, partySize=3
    trainer_mon_no_item_default 130, 46, SPECIES_BAGON
    trainer_mon_no_item_default 130, 46, SPECIES_ALTARIA
    trainer_mon_no_item_default 130, 46, SPECIES_ALTARIA

sParty_Trainer396: @ 0x082E0ABC
    @ Trainer 396: タケル ; flags=2, partySize=3
    trainer_mon_item_default 140, 49, SPECIES_ALTARIA, ITEM_NONE
    trainer_mon_item_default 140, 49, SPECIES_ALTARIA, ITEM_NONE
    trainer_mon_item_default 140, 49, SPECIES_SHELGON, ITEM_DRAGON_FANG

sParty_Trainer397: @ 0x082E0AD4
    @ Trainer 397: タツマ ; flags=1, partySize=1
    trainer_mon_no_item_custom 255, 34, SPECIES_BAGON, MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_EMBER

sParty_Trainer398: @ 0x082E0AE4
    @ Trainer 398: キヨヒコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_WINGULL

sParty_Trainer399: @ 0x082E0AEC
    @ Trainer 399: タクミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 25, SPECIES_TROPIUS

sParty_Trainer400: @ 0x082E0AFC
    @ Trainer 400: シュンペイ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_SWELLOW

sParty_Trainer401: @ 0x082E0B04
    @ Trainer 401: エイジ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 27, SPECIES_DODUO
    trainer_mon_no_item_default 100, 27, SPECIES_SKARMORY
    trainer_mon_no_item_default 100, 27, SPECIES_TROPIUS

sParty_Trainer402: @ 0x082E0B1C
    @ Trainer 402: ミツアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 250, 30, SPECIES_SKARMORY

sParty_Trainer403: @ 0x082E0B24
    @ Trainer 403: ナオヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_TROPIUS
    trainer_mon_no_item_default 0, 33, SPECIES_XATU

sParty_Trainer404: @ 0x082E0B34
    @ Trainer 404: ジョウタ ; flags=0, partySize=2
    trainer_mon_no_item_default 150, 29, SPECIES_DODUO
    trainer_mon_no_item_default 150, 29, SPECIES_PELIPPER

sParty_Trainer405: @ 0x082E0B44
    @ Trainer 405: モリカズ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 28, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 28, SPECIES_NATU

sParty_Trainer406: @ 0x082E0B54
    @ Trainer 406: ツバサ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_SWABLU

sParty_Trainer407: @ 0x082E0B5C
    @ Trainer 407: アキマサ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 36, SPECIES_SWELLOW
    trainer_mon_no_item_default 0, 36, SPECIES_PELIPPER
    trainer_mon_no_item_default 0, 36, SPECIES_XATU

sParty_Trainer408: @ 0x082E0B74
    @ Trainer 408: タイシ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_TAILLOW
    trainer_mon_no_item_default 0, 25, SPECIES_SWELLOW

sParty_Trainer409: @ 0x082E0B84
    @ Trainer 409: ツバサ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 32, SPECIES_NATU
    trainer_mon_no_item_default 10, 32, SPECIES_SWABLU

sParty_Trainer410: @ 0x082E0B94
    @ Trainer 410: ツバサ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 35, SPECIES_NATU
    trainer_mon_no_item_default 20, 35, SPECIES_ALTARIA

sParty_Trainer411: @ 0x082E0BA4
    @ Trainer 411: ツバサ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 38, SPECIES_NATU
    trainer_mon_no_item_default 30, 38, SPECIES_ALTARIA

sParty_Trainer412: @ 0x082E0BB4
    @ Trainer 412: ツバサ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 41, SPECIES_ALTARIA
    trainer_mon_no_item_default 40, 41, SPECIES_XATU

sParty_Trainer413: @ 0x082E0BC4
    @ Trainer 413: マサツグ ; flags=0, partySize=2
    trainer_mon_no_item_default 150, 33, SPECIES_NATU
    trainer_mon_no_item_default 150, 33, SPECIES_SWELLOW

sParty_Trainer414: @ 0x082E0BD4
    @ Trainer 414: トシアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_TROPIUS

sParty_Trainer415: @ 0x082E0BDC
    @ Trainer 415: ヒロノブ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_NINJASK

sParty_Trainer416: @ 0x082E0BE4
    @ Trainer 416: シロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_NINJASK
    trainer_mon_no_item_default 0, 25, SPECIES_KOFFING

sParty_Trainer417: @ 0x082E0BF4
    @ Trainer 417: ココロ ; flags=3, partySize=2
    trainer_mon_item_custom 0, 43, SPECIES_CLAYDOL, ITEM_NONE, MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE
    trainer_mon_item_custom 0, 43, SPECIES_LANTURN, ITEM_NONE, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE

sParty_Trainer418: @ 0x082E0C14
    @ Trainer 418: マミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_MARILL

sParty_Trainer419: @ 0x082E0C1C
    @ Trainer 419: キンジ ; flags=1, partySize=3
    trainer_mon_no_item_custom 0, 17, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT
    trainer_mon_no_item_custom 0, 17, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT
    trainer_mon_no_item_custom 0, 17, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT

sParty_Trainer420: @ 0x082E0C4C
    @ Trainer 420: ムラマサ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_KOFFING
    trainer_mon_no_item_default 0, 18, SPECIES_NINJASK

sParty_Trainer421: @ 0x082E0C5C
    @ Trainer 421: キンジ ; flags=1, partySize=4
    trainer_mon_no_item_custom 0, 24, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT
    trainer_mon_no_item_custom 0, 24, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE
    trainer_mon_no_item_custom 0, 24, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT
    trainer_mon_no_item_custom 0, 26, SPECIES_KOFFING, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE

sParty_Trainer422: @ 0x082E0C9C
    @ Trainer 422: キンジ ; flags=1, partySize=4
    trainer_mon_no_item_custom 20, 27, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT
    trainer_mon_no_item_custom 20, 27, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT
    trainer_mon_no_item_custom 20, 27, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE
    trainer_mon_no_item_custom 20, 29, SPECIES_KOFFING, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE

sParty_Trainer423: @ 0x082E0CDC
    @ Trainer 423: キンジ ; flags=1, partySize=4
    trainer_mon_no_item_custom 30, 30, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE
    trainer_mon_no_item_custom 30, 30, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE
    trainer_mon_no_item_custom 30, 30, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE
    trainer_mon_no_item_custom 30, 32, SPECIES_KOFFING, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE

sParty_Trainer424: @ 0x082E0D1C
    @ Trainer 424: キンジ ; flags=3, partySize=4
    trainer_mon_item_custom 40, 33, SPECIES_KOFFING, ITEM_NONE, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE
    trainer_mon_item_custom 40, 33, SPECIES_KOFFING, ITEM_NONE, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT
    trainer_mon_item_custom 40, 33, SPECIES_KOFFING, ITEM_NONE, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT
    trainer_mon_item_custom 40, 35, SPECIES_WEEZING, ITEM_SMOKE_BALL, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE

sParty_Trainer425: @ 0x082E0D5C
    @ Trainer 425: シノブ ; flags=0, partySize=1
    trainer_mon_no_item_default 127, 13, SPECIES_MEDITITE

sParty_Trainer426: @ 0x082E0D64
    @ Trainer 426: ミサト ; flags=0, partySize=1
    trainer_mon_no_item_default 150, 13, SPECIES_MEDITITE

sParty_Trainer427: @ 0x082E0D6C
    @ Trainer 427: ユリカ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 18, SPECIES_MEDITITE
    trainer_mon_no_item_default 100, 18, SPECIES_MAKUHITA

sParty_Trainer428: @ 0x082E0D7C
    @ Trainer 428: フウカ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 27, SPECIES_MEDITITE

sParty_Trainer429: @ 0x082E0D84
    @ Trainer 429: ヒイナ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 27, SPECIES_BRELOOM

sParty_Trainer430: @ 0x082E0D8C
    @ Trainer 430: ユリカ ; flags=0, partySize=2
    trainer_mon_no_item_default 110, 26, SPECIES_MEDITITE
    trainer_mon_no_item_default 110, 26, SPECIES_MAKUHITA

sParty_Trainer431: @ 0x082E0D9C
    @ Trainer 431: ユリカ ; flags=0, partySize=2
    trainer_mon_no_item_default 120, 29, SPECIES_MEDITITE
    trainer_mon_no_item_default 120, 29, SPECIES_MAKUHITA

sParty_Trainer432: @ 0x082E0DAC
    @ Trainer 432: ユリカ ; flags=0, partySize=2
    trainer_mon_no_item_default 130, 32, SPECIES_MEDICHAM
    trainer_mon_no_item_default 130, 32, SPECIES_HARIYAMA

sParty_Trainer433: @ 0x082E0DBC
    @ Trainer 433: ユリカ ; flags=0, partySize=2
    trainer_mon_no_item_default 140, 35, SPECIES_MEDICHAM
    trainer_mon_no_item_default 140, 35, SPECIES_HARIYAMA

sParty_Trainer434: @ 0x082E0DCC
    @ Trainer 434: マドカ ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 19, SPECIES_NUMEL, MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY

sParty_Trainer435: @ 0x082E0DDC
    @ Trainer 435: ミカ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 28, SPECIES_ROSELIA
    trainer_mon_no_item_default 0, 28, SPECIES_WAILMER

sParty_Trainer436: @ 0x082E0DEC
    @ Trainer 436: ウキエ ; flags=1, partySize=1
    trainer_mon_no_item_custom 50, 30, SPECIES_CASTFORM_NORMAL, MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE

sParty_Trainer437: @ 0x082E0DFC
    @ Trainer 437: マドカ ; flags=1, partySize=1
    trainer_mon_no_item_custom 10, 29, SPECIES_NUMEL, MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY

sParty_Trainer438: @ 0x082E0E0C
    @ Trainer 438: マドカ ; flags=1, partySize=1
    trainer_mon_no_item_custom 20, 32, SPECIES_NUMEL, MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY

sParty_Trainer439: @ 0x082E0E1C
    @ Trainer 439: マドカ ; flags=1, partySize=2
    trainer_mon_no_item_custom 30, 34, SPECIES_ROSELIA, MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY
    trainer_mon_no_item_custom 30, 34, SPECIES_NUMEL, MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY

sParty_Trainer440: @ 0x082E0E3C
    @ Trainer 440: マドカ ; flags=1, partySize=2
    trainer_mon_no_item_custom 40, 37, SPECIES_ROSELIA, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY
    trainer_mon_no_item_custom 40, 37, SPECIES_CAMERUPT, MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY

sParty_Trainer441: @ 0x082E0E5C
    @ Trainer 441: ナツキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 25, SPECIES_WAILMER

sParty_Trainer442: @ 0x082E0E6C
    @ Trainer 442: マユカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_MARILL

sParty_Trainer443: @ 0x082E0E74
    @ Trainer 443: ミズハ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_WAILMER

sParty_Trainer444: @ 0x082E0E7C
    @ Trainer 444: マサミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 25, SPECIES_GOLDEEN

sParty_Trainer445: @ 0x082E0E8C
    @ Trainer 445: ノリカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_GOLDEEN

sParty_Trainer446: @ 0x082E0E94
    @ Trainer 446: チヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_HORSEA
    trainer_mon_no_item_default 0, 25, SPECIES_MARILL

sParty_Trainer447: @ 0x082E0EA4
    @ Trainer 447: クミコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_GOLDEEN

sParty_Trainer448: @ 0x082E0EAC
    @ Trainer 448: エツコ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 24, SPECIES_GOLDEEN
    trainer_mon_no_item_default 0, 24, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 24, SPECIES_GOLDEEN

sParty_Trainer449: @ 0x082E0EC4
    @ Trainer 449: ナギサ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_WAILMER

sParty_Trainer450: @ 0x082E0ECC
    @ Trainer 450: アキエ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_MARILL

sParty_Trainer451: @ 0x082E0ED4
    @ Trainer 451: ケイコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_LUVDISC

sParty_Trainer452: @ 0x082E0EDC
    @ Trainer 452: サイカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_SEAKING

sParty_Trainer453: @ 0x082E0EE4
    @ Trainer 453: シズエ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_MARILL
    trainer_mon_no_item_default 0, 33, SPECIES_SPHEAL

sParty_Trainer454: @ 0x082E0EF4
    @ Trainer 454: テルミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_GOLDEEN

sParty_Trainer455: @ 0x082E0EFC
    @ Trainer 455: フミエ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_GOLDEEN
    trainer_mon_no_item_default 0, 33, SPECIES_SPHEAL

sParty_Trainer456: @ 0x082E0F0C
    @ Trainer 456: ミサキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_LUVDISC

sParty_Trainer457: @ 0x082E0F14
    @ Trainer 457: マリエ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_SEAKING

sParty_Trainer458: @ 0x082E0F1C
    @ Trainer 458: ミユキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_AZUMARILL

sParty_Trainer459: @ 0x082E0F24
    @ Trainer 459: イクコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_LUVDISC
    trainer_mon_no_item_default 0, 33, SPECIES_LUVDISC

sParty_Trainer460: @ 0x082E0F34
    @ Trainer 460: リカコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_SEAKING

sParty_Trainer461: @ 0x082E0F3C
    @ Trainer 461: ハルミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_HORSEA
    trainer_mon_no_item_default 0, 33, SPECIES_SEADRA

sParty_Trainer462: @ 0x082E0F4C
    @ Trainer 462: タカコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 34, SPECIES_LANTURN
    trainer_mon_no_item_default 0, 34, SPECIES_PELIPPER

sParty_Trainer463: @ 0x082E0F5C
    @ Trainer 463: ソノコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_LUVDISC
    trainer_mon_no_item_default 0, 33, SPECIES_LUVDISC

sParty_Trainer464: @ 0x082E0F6C
    @ Trainer 464: クニコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 35, SPECIES_SEAKING

sParty_Trainer465: @ 0x082E0F74
    @ Trainer 465: ナギサ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 38, SPECIES_WAILMER

sParty_Trainer466: @ 0x082E0F7C
    @ Trainer 466: ナギサ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 41, SPECIES_WAILMER

sParty_Trainer467: @ 0x082E0F84
    @ Trainer 467: ナギサ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 43, SPECIES_STARYU
    trainer_mon_no_item_default 0, 43, SPECIES_WAILMER

sParty_Trainer468: @ 0x082E0F94
    @ Trainer 468: ナギサ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 45, SPECIES_LUVDISC
    trainer_mon_no_item_default 0, 45, SPECIES_WAILMER
    trainer_mon_no_item_default 0, 45, SPECIES_STARMIE

sParty_Trainer469: @ 0x082E0FAC
    @ Trainer 469: チカコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 22, SPECIES_SANDSHREW, MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH
    trainer_mon_no_item_custom 0, 22, SPECIES_BALTOY, MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB

sParty_Trainer470: @ 0x082E0FCC
    @ Trainer 470: アイミ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 22, SPECIES_SANDSHREW, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH, MOVE_DIG
    trainer_mon_no_item_custom 0, 22, SPECIES_MARILL, MOVE_ROLLOUT, MOVE_BUBBLE_BEAM, MOVE_TAIL_WHIP, MOVE_DEFENSE_CURL

sParty_Trainer471: @ 0x082E0FEC
    @ Trainer 471: ヒロコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 17, SPECIES_TAILLOW
    trainer_mon_no_item_default 0, 17, SPECIES_LOMBRE

sParty_Trainer472: @ 0x082E0FFC
    @ Trainer 472: サツキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_MARILL
    trainer_mon_no_item_default 0, 18, SPECIES_LOMBRE

sParty_Trainer473: @ 0x082E100C
    @ Trainer 473: トモコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 23, SPECIES_SKITTY
    trainer_mon_no_item_default 0, 23, SPECIES_SWABLU

sParty_Trainer474: @ 0x082E101C
    @ Trainer 474: コズエ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 19, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 19, SPECIES_ODDISH
    trainer_mon_no_item_default 0, 19, SPECIES_SWABLU

sParty_Trainer475: @ 0x082E1034
    @ Trainer 475: ヨシキヨ ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 32, SPECIES_WOBBUFFET, MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT

sParty_Trainer476: @ 0x082E1044
    @ Trainer 476: ミズキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 17, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 17, SPECIES_MARILL

sParty_Trainer477: @ 0x082E1054
    @ Trainer 477: コズエ ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 25, SPECIES_SHROOMISH
    trainer_mon_no_item_default 10, 25, SPECIES_GLOOM
    trainer_mon_no_item_default 10, 25, SPECIES_SWABLU

sParty_Trainer478: @ 0x082E106C
    @ Trainer 478: コズエ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 28, SPECIES_BRELOOM
    trainer_mon_no_item_default 20, 28, SPECIES_GLOOM
    trainer_mon_no_item_default 20, 28, SPECIES_SWABLU

sParty_Trainer479: @ 0x082E1084
    @ Trainer 479: コズエ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 31, SPECIES_BRELOOM
    trainer_mon_no_item_default 30, 31, SPECIES_GLOOM
    trainer_mon_no_item_default 30, 31, SPECIES_SWABLU

sParty_Trainer480: @ 0x082E109C
    @ Trainer 480: コズエ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 40, SPECIES_BRELOOM
    trainer_mon_no_item_default 40, 40, SPECIES_VILEPLUME
    trainer_mon_no_item_default 40, 40, SPECIES_ALTARIA

sParty_Trainer481: @ 0x082E10B4
    @ Trainer 481: クミとルミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 15, SPECIES_PLUSLE
    trainer_mon_no_item_default 0, 15, SPECIES_MINUN

sParty_Trainer482: @ 0x082E10C4
    @ Trainer 482: クミとルミ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 27, SPECIES_PLUSLE
    trainer_mon_no_item_default 10, 27, SPECIES_MINUN

sParty_Trainer483: @ 0x082E10D4
    @ Trainer 483: ナオとミオ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 6, SPECIES_SEEDOT
    trainer_mon_no_item_default 0, 6, SPECIES_LOTAD

sParty_Trainer484: @ 0x082E10E4
    @ Trainer 484: ミウとユキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_BEAUTIFLY
    trainer_mon_no_item_default 0, 26, SPECIES_DUSTOX

sParty_Trainer485: @ 0x082E10F4
    @ Trainer 485: クミとルミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 9, SPECIES_PLUSLE
    trainer_mon_no_item_default 0, 9, SPECIES_MINUN

sParty_Trainer486: @ 0x082E1104
    @ Trainer 486: ナオとミオ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 10, SPECIES_DUSKULL, MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE
    trainer_mon_no_item_custom 0, 10, SPECIES_SHROOMISH, MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE

sParty_Trainer487: @ 0x082E1124
    @ Trainer 487: クミとルミ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 30, SPECIES_PLUSLE
    trainer_mon_no_item_default 20, 30, SPECIES_MINUN

sParty_Trainer488: @ 0x082E1134
    @ Trainer 488: クミとルミ ; flags=1, partySize=2
    trainer_mon_no_item_custom 30, 33, SPECIES_PLUSLE, MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND
    trainer_mon_no_item_custom 30, 33, SPECIES_MINUN, MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND

sParty_Trainer489: @ 0x082E1154
    @ Trainer 489: クミとルミ ; flags=1, partySize=2
    trainer_mon_no_item_custom 40, 36, SPECIES_PLUSLE, MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND
    trainer_mon_no_item_custom 40, 36, SPECIES_MINUN, MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND

sParty_Trainer490: @ 0x082E1174
    @ Trainer 490: タツロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 12, SPECIES_WINGULL
    trainer_mon_no_item_default 10, 12, SPECIES_MACHOP

sParty_Trainer491: @ 0x082E1184
    @ Trainer 491: カツヤ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 13, SPECIES_WINGULL

sParty_Trainer492: @ 0x082E118C
    @ Trainer 492: ジロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 33, SPECIES_MACHOKE

sParty_Trainer493: @ 0x082E119C
    @ Trainer 493: タツヒコ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 11, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 11, SPECIES_MACHOP
    trainer_mon_no_item_default 0, 11, SPECIES_TENTACOOL

sParty_Trainer494: @ 0x082E11B4
    @ Trainer 494: ユウサク ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 44, SPECIES_TENTACRUEL
    trainer_mon_no_item_default 0, 44, SPECIES_MACHOKE

sParty_Trainer495: @ 0x082E11C4
    @ Trainer 495: ダイキ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 43, SPECIES_MACHOP
    trainer_mon_no_item_default 0, 43, SPECIES_PELIPPER
    trainer_mon_no_item_default 0, 43, SPECIES_MACHOKE

sParty_Trainer496: @ 0x082E11DC
    @ Trainer 496: ヒデフミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_SPHEAL
    trainer_mon_no_item_default 0, 25, SPECIES_MACHOKE

sParty_Trainer497: @ 0x082E11EC
    @ Trainer 497: ジロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 36, SPECIES_WINGULL
    trainer_mon_no_item_default 10, 36, SPECIES_TENTACOOL
    trainer_mon_no_item_default 10, 36, SPECIES_MACHOKE

sParty_Trainer498: @ 0x082E1204
    @ Trainer 498: ジロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 39, SPECIES_PELIPPER
    trainer_mon_no_item_default 20, 39, SPECIES_TENTACOOL
    trainer_mon_no_item_default 20, 39, SPECIES_MACHOKE

sParty_Trainer499: @ 0x082E121C
    @ Trainer 499: ジロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 42, SPECIES_PELIPPER
    trainer_mon_no_item_default 30, 42, SPECIES_TENTACOOL
    trainer_mon_no_item_default 30, 42, SPECIES_MACHOKE

sParty_Trainer500: @ 0x082E1234
    @ Trainer 500: ジロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 45, SPECIES_PELIPPER
    trainer_mon_no_item_default 40, 45, SPECIES_MACHOKE
    trainer_mon_no_item_default 40, 45, SPECIES_TENTACRUEL

sParty_Trainer501: @ 0x082E124C
    @ Trainer 501: テルヨシ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 23, SPECIES_NUMEL

sParty_Trainer502: @ 0x082E1254
    @ Trainer 502: ミネコ ; flags=3, partySize=2
    trainer_mon_item_custom 100, 39, SPECIES_FEEBAS, ITEM_ORAN_BERRY, MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT
    trainer_mon_item_custom 100, 39, SPECIES_FEEBAS, ITEM_ORAN_BERRY, MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT

sParty_Trainer503: @ 0x082E1274
    @ Trainer 503: ミワ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 27, SPECIES_ABSOL

sParty_Trainer504: @ 0x082E127C
    @ Trainer 504: シンスケ ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 31, SPECIES_KOFFING, MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB

sParty_Trainer505: @ 0x082E128C
    @ Trainer 505: カオルコ ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 31, SPECIES_CASTFORM_NORMAL, MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM

sParty_Trainer506: @ 0x082E129C
    @ Trainer 506: イッケイ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_MANECTRIC
    trainer_mon_no_item_default 0, 33, SPECIES_MACHAMP

sParty_Trainer507: @ 0x082E12AC
    @ Trainer 507: ナオヤ ; flags=0, partySize=2
    trainer_mon_no_item_default 150, 33, SPECIES_MACHOKE
    trainer_mon_no_item_default 150, 33, SPECIES_SPHEAL

sParty_Trainer508: @ 0x082E12BC
    @ Trainer 508: リツコ ; flags=3, partySize=1
    trainer_mon_item_custom 255, 34, SPECIES_MANECTRIC, ITEM_NONE, MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT

sParty_Trainer509: @ 0x082E12CC
    @ Trainer 509: タマキ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 33, SPECIES_MEDITITE
    trainer_mon_no_item_default 200, 33, SPECIES_HARIYAMA

sParty_Trainer510: @ 0x082E12DC
    @ Trainer 510: ジュンヤ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_WAILMER

sParty_Trainer511: @ 0x082E12E4
    @ Trainer 511: シゲヨシ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_CHINCHOU
    trainer_mon_no_item_default 200, 33, SPECIES_HARIYAMA

sParty_Trainer512: @ 0x082E12F4
    @ Trainer 512: モトキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 14, SPECIES_LOMBRE
    trainer_mon_no_item_default 0, 14, SPECIES_NUZLEAF

sParty_Trainer513: @ 0x082E1304
    @ Trainer 513: トシノブ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_ZANGOOSE
    trainer_mon_no_item_default 0, 18, SPECIES_SEVIPER

sParty_Trainer514: @ 0x082E1314
    @ Trainer 514: ホムラ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 36, SPECIES_CAMERUPT
    trainer_mon_no_item_default 100, 38, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 100, 40, SPECIES_GOLBAT

sParty_Trainer515: @ 0x082E132C
    @ Trainer 515: モトキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_LOMBRE
    trainer_mon_no_item_default 0, 26, SPECIES_NUZLEAF

sParty_Trainer516: @ 0x082E133C
    @ Trainer 516: モトキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 29, SPECIES_LOMBRE
    trainer_mon_no_item_default 0, 29, SPECIES_NUZLEAF

sParty_Trainer517: @ 0x082E134C
    @ Trainer 517: モトキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 32, SPECIES_LOMBRE
    trainer_mon_no_item_default 0, 32, SPECIES_NUZLEAF

sParty_Trainer518: @ 0x082E135C
    @ Trainer 518: モトキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 35, SPECIES_LUDICOLO
    trainer_mon_no_item_default 0, 35, SPECIES_SHIFTRY

sParty_Trainer519: @ 0x082E136C
    @ Trainer 519: ミツル ; flags=1, partySize=5
    trainer_mon_no_item_custom 150, 44, SPECIES_ALTARIA, MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE
    trainer_mon_no_item_custom 150, 43, SPECIES_DELCATTY, MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 150, 44, SPECIES_ROSELIA, MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC
    trainer_mon_no_item_custom 150, 41, SPECIES_MAGNETON, MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH
    trainer_mon_no_item_custom 250, 45, SPECIES_GARDEVOIR, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT

sParty_SpecialTrainer000: @ 0x082E13BC
    @ 専用トレーナー 0: ユウキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_TREECKO

sParty_SpecialTrainer001: @ 0x082E13C4
    @ 専用トレーナー 1: ユウキ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 18, SPECIES_SLUGMA
    trainer_mon_no_item_default 50, 18, SPECIES_WINGULL
    trainer_mon_no_item_default 100, 20, SPECIES_GROVYLE

sParty_SpecialTrainer002: @ 0x082E13DC
    @ 専用トレーナー 2: ユウキ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 29, SPECIES_SLUGMA
    trainer_mon_no_item_default 100, 29, SPECIES_PELIPPER
    trainer_mon_no_item_default 150, 31, SPECIES_GROVYLE

sParty_SpecialTrainer003: @ 0x082E13F4
    @ 専用トレーナー 3: ユウキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_TORCHIC

sParty_SpecialTrainer004: @ 0x082E13FC
    @ 専用トレーナー 4: ユウキ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 18, SPECIES_WINGULL
    trainer_mon_no_item_default 50, 18, SPECIES_LOMBRE
    trainer_mon_no_item_default 100, 20, SPECIES_COMBUSKEN

sParty_SpecialTrainer005: @ 0x082E1414
    @ 専用トレーナー 5: ユウキ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 29, SPECIES_PELIPPER
    trainer_mon_no_item_default 100, 29, SPECIES_LOMBRE
    trainer_mon_no_item_default 150, 31, SPECIES_COMBUSKEN

sParty_SpecialTrainer006: @ 0x082E142C
    @ 専用トレーナー 6: ユウキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_MUDKIP

sParty_SpecialTrainer007: @ 0x082E1434
    @ 専用トレーナー 7: ユウキ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 18, SPECIES_LOMBRE
    trainer_mon_no_item_default 50, 18, SPECIES_SLUGMA
    trainer_mon_no_item_default 100, 20, SPECIES_MARSHTOMP

sParty_SpecialTrainer008: @ 0x082E144C
    @ 専用トレーナー 8: ユウキ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 29, SPECIES_LOMBRE
    trainer_mon_no_item_default 100, 29, SPECIES_SLUGMA
    trainer_mon_no_item_default 150, 31, SPECIES_MARSHTOMP

sParty_SpecialTrainer009: @ 0x082E1464
    @ 専用トレーナー 9: ハルカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_TREECKO

sParty_SpecialTrainer010: @ 0x082E146C
    @ 専用トレーナー 10: ハルカ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 18, SPECIES_WINGULL
    trainer_mon_no_item_default 50, 18, SPECIES_SLUGMA
    trainer_mon_no_item_default 100, 20, SPECIES_GROVYLE

sParty_SpecialTrainer011: @ 0x082E1484
    @ 専用トレーナー 11: ハルカ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 29, SPECIES_SLUGMA
    trainer_mon_no_item_default 100, 29, SPECIES_LOMBRE
    trainer_mon_no_item_default 150, 31, SPECIES_GROVYLE

sParty_SpecialTrainer012: @ 0x082E149C
    @ 専用トレーナー 12: ハルカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_TORCHIC

sParty_SpecialTrainer013: @ 0x082E14A4
    @ 専用トレーナー 13: ハルカ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 18, SPECIES_WINGULL
    trainer_mon_no_item_default 50, 18, SPECIES_LOMBRE
    trainer_mon_no_item_default 100, 20, SPECIES_COMBUSKEN

sParty_SpecialTrainer014: @ 0x082E14BC
    @ 専用トレーナー 14: ハルカ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 29, SPECIES_PELIPPER
    trainer_mon_no_item_default 100, 29, SPECIES_LOMBRE
    trainer_mon_no_item_default 150, 31, SPECIES_COMBUSKEN

sParty_SpecialTrainer015: @ 0x082E14D4
    @ 専用トレーナー 15: ハルカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_MUDKIP

sParty_SpecialTrainer016: @ 0x082E14DC
    @ 専用トレーナー 16: ハルカ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 18, SPECIES_LOMBRE
    trainer_mon_no_item_default 50, 18, SPECIES_SLUGMA
    trainer_mon_no_item_default 100, 20, SPECIES_MARSHTOMP

sParty_SpecialTrainer017: @ 0x082E14F4
    @ 専用トレーナー 17: ハルカ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 29, SPECIES_LOMBRE
    trainer_mon_no_item_default 100, 29, SPECIES_SLUGMA
    trainer_mon_no_item_default 150, 31, SPECIES_MARSHTOMP

sParty_SpecialTrainer018: @ 0x082E150C
    @ 専用トレーナー 18: セイジ ; flags=0, partySize=6
    trainer_mon_no_item_default 0, 11, SPECIES_WHISMUR
    trainer_mon_no_item_default 0, 11, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 11, SPECIES_ARON
    trainer_mon_no_item_default 0, 11, SPECIES_POOCHYENA
    trainer_mon_no_item_default 0, 11, SPECIES_TAILLOW
    trainer_mon_no_item_default 0, 11, SPECIES_MAKUHITA

sParty_SpecialTrainer019: @ 0x082E153C
    @ 専用トレーナー 19: ヨシロウ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 27, SPECIES_PINSIR

sParty_SpecialTrainer020: @ 0x082E1544
    @ 専用トレーナー 20: テッペイ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 43, SPECIES_LUNATONE, MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC
    trainer_mon_no_item_custom 0, 43, SPECIES_SOLROCK, MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL

sParty_SpecialTrainer021: @ 0x082E1564
    @ 専用トレーナー 21: セイジ ; flags=0, partySize=6
    trainer_mon_no_item_default 10, 22, SPECIES_LOUDRED
    trainer_mon_no_item_default 10, 22, SPECIES_LINOONE
    trainer_mon_no_item_default 10, 22, SPECIES_ARON
    trainer_mon_no_item_default 10, 22, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 10, 22, SPECIES_SWELLOW
    trainer_mon_no_item_default 10, 22, SPECIES_MAKUHITA

sParty_SpecialTrainer022: @ 0x082E1594
    @ 専用トレーナー 22: セイジ ; flags=0, partySize=6
    trainer_mon_no_item_default 20, 25, SPECIES_LOUDRED
    trainer_mon_no_item_default 20, 25, SPECIES_LINOONE
    trainer_mon_no_item_default 20, 25, SPECIES_ARON
    trainer_mon_no_item_default 20, 25, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 20, 25, SPECIES_SWELLOW
    trainer_mon_no_item_default 20, 25, SPECIES_HARIYAMA

sParty_SpecialTrainer023: @ 0x082E15C4
    @ 専用トレーナー 23: セイジ ; flags=0, partySize=6
    trainer_mon_no_item_default 30, 28, SPECIES_LOUDRED
    trainer_mon_no_item_default 30, 28, SPECIES_LINOONE
    trainer_mon_no_item_default 30, 28, SPECIES_ARON
    trainer_mon_no_item_default 30, 28, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 30, 28, SPECIES_SWELLOW
    trainer_mon_no_item_default 30, 28, SPECIES_HARIYAMA

sParty_SpecialTrainer024: @ 0x082E15F4
    @ 専用トレーナー 24: セイジ ; flags=0, partySize=6
    trainer_mon_no_item_default 40, 31, SPECIES_LOUDRED
    trainer_mon_no_item_default 40, 31, SPECIES_LINOONE
    trainer_mon_no_item_default 40, 31, SPECIES_LAIRON
    trainer_mon_no_item_default 40, 31, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 40, 31, SPECIES_SWELLOW
    trainer_mon_no_item_default 40, 31, SPECIES_HARIYAMA

sParty_SpecialTrainer025: @ 0x082E1624
    @ 専用トレーナー 25: イクエ ; flags=0, partySize=6
    trainer_mon_no_item_default 0, 11, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 11, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 11, SPECIES_MARILL
    trainer_mon_no_item_default 0, 11, SPECIES_ROSELIA
    trainer_mon_no_item_default 0, 11, SPECIES_SKITTY
    trainer_mon_no_item_default 0, 11, SPECIES_GOLDEEN

sParty_SpecialTrainer026: @ 0x082E1654
    @ 専用トレーナー 26: ヒロエ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 43, SPECIES_SABLEYE
    trainer_mon_no_item_default 0, 43, SPECIES_ABSOL

sParty_SpecialTrainer027: @ 0x082E1664
    @ 専用トレーナー 27: ツネヤス ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_SANDSLASH

sParty_SpecialTrainer028: @ 0x082E166C
    @ 専用トレーナー 28: イクエ ; flags=0, partySize=6
    trainer_mon_no_item_default 10, 22, SPECIES_WINGULL
    trainer_mon_no_item_default 10, 22, SPECIES_SHROOMISH
    trainer_mon_no_item_default 10, 22, SPECIES_MARILL
    trainer_mon_no_item_default 10, 22, SPECIES_ROSELIA
    trainer_mon_no_item_default 10, 22, SPECIES_SKITTY
    trainer_mon_no_item_default 10, 22, SPECIES_GOLDEEN

sParty_SpecialTrainer029: @ 0x082E169C
    @ 専用トレーナー 29: イクエ ; flags=0, partySize=6
    trainer_mon_no_item_default 20, 25, SPECIES_PELIPPER
    trainer_mon_no_item_default 20, 25, SPECIES_BRELOOM
    trainer_mon_no_item_default 20, 25, SPECIES_MARILL
    trainer_mon_no_item_default 20, 25, SPECIES_ROSELIA
    trainer_mon_no_item_default 20, 25, SPECIES_DELCATTY
    trainer_mon_no_item_default 20, 25, SPECIES_GOLDEEN

sParty_SpecialTrainer030: @ 0x082E16CC
    @ 専用トレーナー 30: イクエ ; flags=0, partySize=6
    trainer_mon_no_item_default 30, 28, SPECIES_PELIPPER
    trainer_mon_no_item_default 30, 28, SPECIES_BRELOOM
    trainer_mon_no_item_default 30, 28, SPECIES_MARILL
    trainer_mon_no_item_default 30, 28, SPECIES_ROSELIA
    trainer_mon_no_item_default 30, 28, SPECIES_DELCATTY
    trainer_mon_no_item_default 30, 28, SPECIES_GOLDEEN

sParty_SpecialTrainer031: @ 0x082E16FC
    @ 専用トレーナー 31: イクエ ; flags=0, partySize=6
    trainer_mon_no_item_default 40, 31, SPECIES_PELIPPER
    trainer_mon_no_item_default 40, 31, SPECIES_BRELOOM
    trainer_mon_no_item_default 40, 31, SPECIES_AZUMARILL
    trainer_mon_no_item_default 40, 31, SPECIES_ROSELIA
    trainer_mon_no_item_default 40, 31, SPECIES_DELCATTY
    trainer_mon_no_item_default 40, 31, SPECIES_SEAKING

sParty_SpecialTrainer032: @ 0x082E172C
    @ 専用トレーナー 32: マモル ; flags=0, partySize=1
    trainer_mon_no_item_default 50, 27, SPECIES_BRELOOM

sParty_SpecialTrainer033: @ 0x082E1734
    @ 専用トレーナー 33: ジュンサク ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 28, SPECIES_SEEDOT
    trainer_mon_no_item_default 50, 28, SPECIES_NUZLEAF
    trainer_mon_no_item_default 50, 28, SPECIES_LOMBRE

sParty_SpecialTrainer034: @ 0x082E174C
    @ 専用トレーナー 34: ケイスケ ; flags=0, partySize=1
    trainer_mon_no_item_default 50, 39, SPECIES_CACTURNE

sParty_SpecialTrainer035: @ 0x082E1754
    @ 専用トレーナー 35: マモル ; flags=0, partySize=1
    trainer_mon_no_item_default 60, 31, SPECIES_BRELOOM

sParty_SpecialTrainer036: @ 0x082E175C
    @ 専用トレーナー 36: マモル ; flags=0, partySize=1
    trainer_mon_no_item_default 70, 34, SPECIES_BRELOOM

sParty_SpecialTrainer037: @ 0x082E1764
    @ 専用トレーナー 37: マモル ; flags=0, partySize=1
    trainer_mon_no_item_default 80, 37, SPECIES_BRELOOM

sParty_SpecialTrainer038: @ 0x082E176C
    @ 専用トレーナー 38: マモル ; flags=0, partySize=2
    trainer_mon_no_item_default 90, 39, SPECIES_KECLEON
    trainer_mon_no_item_default 90, 39, SPECIES_BRELOOM

sParty_SpecialTrainer039: @ 0x082E177C
    @ 専用トレーナー 39: マナミ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 26, SPECIES_GLOOM
    trainer_mon_no_item_default 50, 26, SPECIES_ROSELIA

sParty_SpecialTrainer040: @ 0x082E178C
    @ 専用トレーナー 40: セリナ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 28, SPECIES_LOTAD
    trainer_mon_no_item_default 50, 28, SPECIES_LOMBRE
    trainer_mon_no_item_default 50, 28, SPECIES_NUZLEAF

sParty_SpecialTrainer041: @ 0x082E17A4
    @ 専用トレーナー 41: チアキ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 38, SPECIES_SWABLU
    trainer_mon_no_item_default 50, 38, SPECIES_ROSELIA

sParty_SpecialTrainer042: @ 0x082E17B4
    @ 専用トレーナー 42: マナミ ; flags=0, partySize=2
    trainer_mon_no_item_default 60, 30, SPECIES_GLOOM
    trainer_mon_no_item_default 60, 30, SPECIES_ROSELIA

sParty_SpecialTrainer043: @ 0x082E17C4
    @ 専用トレーナー 43: マナミ ; flags=0, partySize=2
    trainer_mon_no_item_default 70, 33, SPECIES_GLOOM
    trainer_mon_no_item_default 70, 33, SPECIES_ROSELIA

sParty_SpecialTrainer044: @ 0x082E17D4
    @ 専用トレーナー 44: マナミ ; flags=0, partySize=2
    trainer_mon_no_item_default 80, 36, SPECIES_GLOOM
    trainer_mon_no_item_default 80, 36, SPECIES_ROSELIA

sParty_SpecialTrainer045: @ 0x082E17E4
    @ 専用トレーナー 45: マナミ ; flags=0, partySize=2
    trainer_mon_no_item_default 90, 39, SPECIES_BELLOSSOM
    trainer_mon_no_item_default 90, 39, SPECIES_ROSELIA

sParty_SpecialTrainer046: @ 0x082E17F4
    @ 専用トレーナー 46: ミツオ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 21, SPECIES_MAGNEMITE

sParty_SpecialTrainer047: @ 0x082E17FC
    @ 専用トレーナー 47: したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 35, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 50, 35, SPECIES_GOLBAT

sParty_SpecialTrainer048: @ 0x082E180C
    @ 専用トレーナー 48: したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 31, SPECIES_WAILMER
    trainer_mon_no_item_default 0, 31, SPECIES_ZUBAT

sParty_SpecialTrainer049: @ 0x082E181C
    @ 専用トレーナー 49: したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 30, SPECIES_WAILMER
    trainer_mon_no_item_default 0, 30, SPECIES_ZUBAT

sParty_SpecialTrainer050: @ 0x082E182C
    @ 専用トレーナー 50: したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 22, SPECIES_POOCHYENA
    trainer_mon_no_item_default 50, 22, SPECIES_NUMEL

sParty_SpecialTrainer051: @ 0x082E183C
    @ 専用トレーナー 51: ソウタロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 120, 8, SPECIES_GEODUDE
    trainer_mon_no_item_default 130, 8, SPECIES_GEODUDE

sParty_SpecialTrainer052: @ 0x082E184C
    @ 専用トレーナー 52: カズマサ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 13, SPECIES_MACHOP

sParty_SpecialTrainer053: @ 0x082E1854
    @ 専用トレーナー 53: アズミ ; flags=0, partySize=1
    trainer_mon_no_item_default 150, 13, SPECIES_MEDITITE

sParty_SpecialTrainer054: @ 0x082E185C
    @ 専用トレーナー 54: トシヒデ ; flags=0, partySize=1
    trainer_mon_no_item_default 200, 13, SPECIES_MAKUHITA

sParty_SpecialTrainer055: @ 0x082E1864
    @ 専用トレーナー 55: アサヨ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_MEDITITE

sParty_SpecialTrainer056: @ 0x082E186C
    @ 専用トレーナー 56: カズシゲ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_CARVANHA

sParty_SpecialTrainer057: @ 0x082E1874
    @ 専用トレーナー 57: エミリ ; flags=3, partySize=2
    trainer_mon_item_custom 100, 32, SPECIES_MANECTRIC, ITEM_NONE, MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE
    trainer_mon_item_custom 100, 32, SPECIES_LINOONE, ITEM_NONE, MOVE_SURF, MOVE_THIEF, MOVE_NONE, MOVE_NONE

sParty_SpecialTrainer058: @ 0x082E1894
    @ 専用トレーナー 58: マサアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 35, SPECIES_TENTACRUEL

sParty_SpecialTrainer059: @ 0x082E189C
    @ 専用トレーナー 59: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 20, SPECIES_ZUBAT

sParty_SpecialTrainer060: @ 0x082E18A4
    @ 専用トレーナー 60: ヨシフミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_SHARPEDO

sParty_SpecialTrainer061: @ 0x082E18AC
    @ 専用トレーナー 61: ななし2 ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 37, SPECIES_GIRAFARIG

sParty_SpecialTrainer062: @ 0x082E18B4
    @ 専用トレーナー 62: トニー ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_SPOINK

sParty_SpecialTrainer063: @ 0x082E18BC
    @ 専用トレーナー 63: ユキヨ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_KADABRA

sParty_SpecialTrainer064: @ 0x082E18C4
    @ 専用トレーナー 64: スティーブ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 36, SPECIES_GIRAFARIG

sParty_SpecialTrainer065: @ 0x082E18CC
    @ 専用トレーナー 65: リョウイチ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 36, SPECIES_WOBBUFFET

sParty_SpecialTrainer066: @ 0x082E18D4
    @ 専用トレーナー 66: したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 31, SPECIES_ZUBAT
    trainer_mon_no_item_default 0, 31, SPECIES_POOCHYENA

sParty_SpecialTrainer067: @ 0x082E18E4
    @ 専用トレーナー 67: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_BALTOY

sParty_SpecialTrainer068: @ 0x082E18EC
    @ 専用トレーナー 68: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_ZUBAT

sParty_SpecialTrainer069: @ 0x082E18F4
    @ 専用トレーナー 69: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_MIGHTYENA

sParty_SpecialTrainer070: @ 0x082E18FC
    @ 専用トレーナー 70: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_BALTOY

sParty_SpecialTrainer071: @ 0x082E1904
    @ 専用トレーナー 71: フサコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 36, SPECIES_NATU

sParty_SpecialTrainer072: @ 0x082E190C
    @ 専用トレーナー 72: ユウキ ; flags=0, partySize=2
    trainer_mon_no_item_default 25, 13, SPECIES_LOTAD
    trainer_mon_no_item_default 50, 15, SPECIES_TORCHIC

sParty_SpecialTrainer073: @ 0x082E191C
    @ 専用トレーナー 73: ユウキ ; flags=0, partySize=2
    trainer_mon_no_item_default 25, 13, SPECIES_WINGULL
    trainer_mon_no_item_default 50, 15, SPECIES_TREECKO

sParty_SpecialTrainer074: @ 0x082E192C
    @ 専用トレーナー 74: ゴウゾウ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_SWELLOW
    trainer_mon_no_item_default 0, 33, SPECIES_BRELOOM

sParty_SpecialTrainer075: @ 0x082E193C
    @ 専用トレーナー 75: カズハ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_STARYU

sParty_SpecialTrainer076: @ 0x082E1944
    @ 専用トレーナー 76: したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 27, SPECIES_ZUBAT
    trainer_mon_no_item_default 0, 27, SPECIES_POOCHYENA

sParty_SpecialTrainer077: @ 0x082E1954
    @ 専用トレーナー 77: ホムラ ; flags=0, partySize=4
    trainer_mon_no_item_default 50, 18, SPECIES_NUMEL
    trainer_mon_no_item_default 50, 20, SPECIES_POOCHYENA
    trainer_mon_no_item_default 50, 22, SPECIES_NUMEL
    trainer_mon_no_item_default 50, 22, SPECIES_ZUBAT

sParty_SpecialTrainer078: @ 0x082E1974
    @ 専用トレーナー 78: リョウスケ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_KECLEON
    trainer_mon_no_item_default 0, 33, SPECIES_LOUDRED

sParty_SpecialTrainer079: @ 0x082E1984
    @ 専用トレーナー 79: ユウキ ; flags=0, partySize=2
    trainer_mon_no_item_default 25, 13, SPECIES_SLUGMA
    trainer_mon_no_item_default 50, 15, SPECIES_MUDKIP

sParty_SpecialTrainer080: @ 0x082E1994
    @ 専用トレーナー 80: ハルカ ; flags=0, partySize=2
    trainer_mon_no_item_default 25, 13, SPECIES_WINGULL
    trainer_mon_no_item_default 50, 15, SPECIES_TREECKO

sParty_SpecialTrainer081: @ 0x082E19A4
    @ 専用トレーナー 81: マツブサ ; flags=0, partySize=3
    trainer_mon_no_item_default 150, 37, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 150, 38, SPECIES_CROBAT
    trainer_mon_no_item_default 150, 39, SPECIES_CAMERUPT

sParty_SpecialTrainer082: @ 0x082E19BC
    @ 専用トレーナー 82: マツブサ ; flags=0, partySize=3
    trainer_mon_no_item_default 150, 24, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 150, 24, SPECIES_ZUBAT
    trainer_mon_no_item_default 150, 25, SPECIES_CAMERUPT

sParty_SpecialTrainer083: @ 0x082E19D4
    @ 専用トレーナー 83: チカ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 4, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 4, SPECIES_SHROOMISH

sParty_SpecialTrainer084: @ 0x082E19E4
    @ 専用トレーナー 84: マキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 6, SPECIES_LOTAD
    trainer_mon_no_item_default 0, 6, SPECIES_SHROOMISH

sParty_SpecialTrainer085: @ 0x082E19F4
    @ 専用トレーナー 85: エリ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 9, SPECIES_MARILL

sParty_SpecialTrainer086: @ 0x082E19FC
    @ 専用トレーナー 86: アキ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 15, SPECIES_MARILL
    trainer_mon_no_item_default 100, 15, SPECIES_SHROOMISH
    trainer_mon_no_item_default 100, 15, SPECIES_NUMEL

sParty_SpecialTrainer087: @ 0x082E1A14
    @ 専用トレーナー 87: マキ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 26, SPECIES_LOMBRE
    trainer_mon_no_item_default 10, 26, SPECIES_SHROOMISH

sParty_SpecialTrainer088: @ 0x082E1A24
    @ 専用トレーナー 88: マキ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 29, SPECIES_LOMBRE
    trainer_mon_no_item_default 20, 29, SPECIES_BRELOOM

sParty_SpecialTrainer089: @ 0x082E1A34
    @ 専用トレーナー 89: マキ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 32, SPECIES_LOMBRE
    trainer_mon_no_item_default 30, 32, SPECIES_BRELOOM

sParty_SpecialTrainer090: @ 0x082E1A44
    @ 専用トレーナー 90: マキ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 34, SPECIES_SWELLOW
    trainer_mon_no_item_default 40, 34, SPECIES_LOMBRE
    trainer_mon_no_item_default 40, 34, SPECIES_BRELOOM

sParty_SpecialTrainer091: @ 0x082E1A5C
    @ 専用トレーナー 91: ミナ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 16, SPECIES_ODDISH

sParty_SpecialTrainer092: @ 0x082E1A64
    @ 専用トレーナー 92: シホ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 14, SPECIES_SKITTY
    trainer_mon_no_item_default 0, 14, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 14, SPECIES_MARILL

sParty_SpecialTrainer093: @ 0x082E1A7C
    @ 専用トレーナー 93: ミキ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 40, SPECIES_LUVDISC

sParty_SpecialTrainer094: @ 0x082E1A84
    @ 専用トレーナー 94: メイ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 39, SPECIES_GOLDEEN
    trainer_mon_no_item_default 100, 39, SPECIES_WAILMER

sParty_SpecialTrainer095: @ 0x082E1A94
    @ 専用トレーナー 95: シンイチ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 4, SPECIES_WURMPLE
    trainer_mon_no_item_default 0, 4, SPECIES_WURMPLE

sParty_SpecialTrainer096: @ 0x082E1AA4
    @ 専用トレーナー 96: フジオ ; flags=0, partySize=4
    trainer_mon_no_item_default 0, 3, SPECIES_WURMPLE
    trainer_mon_no_item_default 0, 3, SPECIES_WURMPLE
    trainer_mon_no_item_default 0, 3, SPECIES_WURMPLE
    trainer_mon_no_item_default 0, 3, SPECIES_WURMPLE

sParty_SpecialTrainer097: @ 0x082E1AC4
    @ 専用トレーナー 97: トモノリ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 8, SPECIES_WURMPLE
    trainer_mon_no_item_default 50, 8, SPECIES_NINCADA

sParty_SpecialTrainer098: @ 0x082E1AD4
    @ 専用トレーナー 98: オサム ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 28, SPECIES_NINCADA
    trainer_mon_no_item_default 0, 28, SPECIES_NINJASK

sParty_SpecialTrainer099: @ 0x082E1AE4
    @ 専用トレーナー 99: ヒロユキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_VOLBEAT
    trainer_mon_no_item_default 0, 25, SPECIES_ILLUMISE

sParty_SpecialTrainer100: @ 0x082E1AF4
    @ 専用トレーナー 100: トモミチ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 25, SPECIES_NINJASK

sParty_SpecialTrainer101: @ 0x082E1AFC
    @ 専用トレーナー 101: ミキヤ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 6, SPECIES_NINCADA
    trainer_mon_no_item_default 0, 6, SPECIES_NINCADA

sParty_SpecialTrainer102: @ 0x082E1B0C
    @ 専用トレーナー 102: ミキヤ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 27, SPECIES_NINJASK

sParty_SpecialTrainer103: @ 0x082E1B14
    @ 専用トレーナー 103: ミキヤ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 29, SPECIES_DUSTOX
    trainer_mon_no_item_default 20, 29, SPECIES_NINJASK

sParty_SpecialTrainer104: @ 0x082E1B24
    @ 専用トレーナー 104: ミキヤ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 31, SPECIES_SURSKIT
    trainer_mon_no_item_default 30, 31, SPECIES_DUSTOX
    trainer_mon_no_item_default 30, 31, SPECIES_NINJASK

sParty_SpecialTrainer105: @ 0x082E1B3C
    @ 専用トレーナー 105: ミキヤ ; flags=0, partySize=4
    trainer_mon_no_item_default 40, 33, SPECIES_SURSKIT
    trainer_mon_no_item_default 40, 33, SPECIES_NINJASK
    trainer_mon_no_item_default 40, 33, SPECIES_DUSTOX
    trainer_mon_no_item_default 40, 33, SPECIES_NINJASK

sParty_SpecialTrainer106: @ 0x082E1B5C
    @ 専用トレーナー 106: ハルノブ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 17, SPECIES_NUMEL
    trainer_mon_no_item_default 0, 17, SPECIES_MACHOP

sParty_SpecialTrainer107: @ 0x082E1B6C
    @ 専用トレーナー 107: ケンサク ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 16, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 17, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 16, SPECIES_GEODUDE

sParty_SpecialTrainer108: @ 0x082E1B84
    @ 専用トレーナー 108: カツヒト ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 18, SPECIES_MACHOP

sParty_SpecialTrainer109: @ 0x082E1B94
    @ 専用トレーナー 109: サブロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 18, SPECIES_NUMEL

sParty_SpecialTrainer110: @ 0x082E1BA4
    @ 専用トレーナー 110: マサノリ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 22, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 22, SPECIES_NOSEPASS
    trainer_mon_no_item_default 0, 22, SPECIES_GRAVELER

sParty_SpecialTrainer111: @ 0x082E1BBC
    @ 専用トレーナー 111: カズノリ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 8, SPECIES_GEODUDE

sParty_SpecialTrainer112: @ 0x082E1BC4
    @ 専用トレーナー 112: ダイチ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 20, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 20, SPECIES_BALTOY

sParty_SpecialTrainer113: @ 0x082E1BD4
    @ 専用トレーナー 113: サブロウ ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 9, SPECIES_WAILMER, MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE

sParty_SpecialTrainer114: @ 0x082E1BE4
    @ 専用トレーナー 114: ノボル ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 10, SPECIES_PELIPPER, MOVE_GUST, MOVE_GROWL, MOVE_NONE, MOVE_NONE
    trainer_mon_no_item_custom 0, 10, SPECIES_POOCHYENA, MOVE_BITE, MOVE_SCARY_FACE, MOVE_NONE, MOVE_NONE

sParty_SpecialTrainer115: @ 0x082E1C04
    @ 専用トレーナー 115: ノボル ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 16, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 16, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 16, SPECIES_MACHOP

sParty_SpecialTrainer116: @ 0x082E1C1C
    @ 専用トレーナー 116: ケンサク ; flags=0, partySize=4
    trainer_mon_no_item_default 10, 24, SPECIES_GEODUDE
    trainer_mon_no_item_default 10, 24, SPECIES_GEODUDE
    trainer_mon_no_item_default 10, 24, SPECIES_GEODUDE
    trainer_mon_no_item_default 10, 24, SPECIES_GRAVELER

sParty_SpecialTrainer117: @ 0x082E1C3C
    @ 専用トレーナー 117: ケンサク ; flags=0, partySize=4
    trainer_mon_no_item_default 20, 27, SPECIES_GEODUDE
    trainer_mon_no_item_default 20, 27, SPECIES_GEODUDE
    trainer_mon_no_item_default 20, 27, SPECIES_GRAVELER
    trainer_mon_no_item_default 20, 27, SPECIES_GRAVELER

sParty_SpecialTrainer118: @ 0x082E1C5C
    @ 専用トレーナー 118: ケンサク ; flags=0, partySize=4
    trainer_mon_no_item_default 30, 30, SPECIES_GEODUDE
    trainer_mon_no_item_default 30, 30, SPECIES_GRAVELER
    trainer_mon_no_item_default 30, 30, SPECIES_GRAVELER
    trainer_mon_no_item_default 30, 30, SPECIES_GRAVELER

sParty_SpecialTrainer119: @ 0x082E1C7C
    @ 専用トレーナー 119: ケンサク ; flags=0, partySize=4
    trainer_mon_no_item_default 40, 33, SPECIES_GRAVELER
    trainer_mon_no_item_default 40, 33, SPECIES_GRAVELER
    trainer_mon_no_item_default 40, 33, SPECIES_GRAVELER
    trainer_mon_no_item_default 40, 33, SPECIES_GOLEM

sParty_SpecialTrainer120: @ 0x082E1C9C
    @ 専用トレーナー 120: マコとテル ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 31, SPECIES_DELCATTY
    trainer_mon_no_item_default 0, 31, SPECIES_MANECTRIC

sParty_SpecialTrainer121: @ 0x082E1CAC
    @ 専用トレーナー 121: カホとジン ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 45, SPECIES_LUVDISC
    trainer_mon_no_item_default 0, 45, SPECIES_LUVDISC

sParty_SpecialTrainer122: @ 0x082E1CBC
    @ 専用トレーナー 122: ナツとフミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_VOLBEAT
    trainer_mon_no_item_default 0, 25, SPECIES_ILLUMISE

sParty_SpecialTrainer123: @ 0x082E1CCC
    @ 専用トレーナー 123: ナツとフミ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 30, SPECIES_VOLBEAT
    trainer_mon_no_item_default 10, 30, SPECIES_ILLUMISE

sParty_SpecialTrainer124: @ 0x082E1CDC
    @ 専用トレーナー 124: ナツとフミ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 33, SPECIES_VOLBEAT
    trainer_mon_no_item_default 20, 33, SPECIES_ILLUMISE

sParty_SpecialTrainer125: @ 0x082E1CEC
    @ 専用トレーナー 125: ナツとフミ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 36, SPECIES_VOLBEAT
    trainer_mon_no_item_default 30, 36, SPECIES_ILLUMISE

sParty_SpecialTrainer126: @ 0x082E1CFC
    @ 専用トレーナー 126: ナツとフミ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 39, SPECIES_VOLBEAT
    trainer_mon_no_item_default 40, 39, SPECIES_ILLUMISE

sParty_SpecialTrainer127: @ 0x082E1D0C
    @ 専用トレーナー 127: アツコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 13, SPECIES_GOLDEEN

sParty_SpecialTrainer128: @ 0x082E1D14
    @ 専用トレーナー 128: タクロウ ; flags=1, partySize=1
    trainer_mon_no_item_custom 100, 23, SPECIES_KECLEON, MOVE_FLAMETHROWER, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK, MOVE_BIND

sParty_SpecialTrainer129: @ 0x082E1D24
    @ 専用トレーナー 129: マコト ; flags=1, partySize=2
    trainer_mon_no_item_custom 100, 17, SPECIES_MEDITITE, MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_THUNDER_PUNCH
    trainer_mon_no_item_custom 100, 17, SPECIES_MEDITITE, MOVE_THUNDER_PUNCH, MOVE_DETECT, MOVE_CONFUSION, MOVE_MEDITATE

sParty_SpecialTrainer130: @ 0x082E1D44
    @ 専用トレーナー 130: トモミ ; flags=1, partySize=1
    trainer_mon_no_item_custom 100, 23, SPECIES_MEDITITE, MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_FIRE_PUNCH

sParty_SpecialTrainer131: @ 0x082E1D54
    @ 専用トレーナー 131: カツハル ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 25, SPECIES_KOFFING, MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN
    trainer_mon_no_item_custom 0, 25, SPECIES_KOFFING, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_SLUDGE, MOVE_SMOKESCREEN

sParty_SpecialTrainer132: @ 0x082E1D74
    @ 専用トレーナー 132: テツジ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 28, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN
    trainer_mon_no_item_custom 0, 28, SPECIES_NINJASK, MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM, MOVE_FURY_CUTTER, MOVE_SWORDS_DANCE

sParty_SpecialTrainer133: @ 0x082E1D94
    @ 専用トレーナー 133: タダヒロ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 28, SPECIES_NINCADA, MOVE_LEECH_LIFE, MOVE_FURY_SWIPES, MOVE_MIND_READER, MOVE_DIG
    trainer_mon_no_item_custom 0, 28, SPECIES_KOFFING, MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN

sParty_SpecialTrainer134: @ 0x082E1DB4
    @ 専用トレーナー 134: テルオ ; flags=0, partySize=2
    trainer_mon_no_item_default 150, 29, SPECIES_SWELLOW
    trainer_mon_no_item_default 150, 29, SPECIES_XATU

sParty_SpecialTrainer135: @ 0x082E1DC4
    @ 専用トレーナー 135: ミミコ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 27, SPECIES_SWABLU
    trainer_mon_no_item_default 100, 27, SPECIES_SWABLU
    trainer_mon_no_item_default 100, 27, SPECIES_SWABLU

sParty_SpecialTrainer136: @ 0x082E1DDC
    @ 専用トレーナー 136: ミツル ; flags=0, partySize=1
    trainer_mon_no_item_default 30, 16, SPECIES_RALTS

sParty_SpecialTrainer137: @ 0x082E1DE4
    @ 専用トレーナー 137: ミツル ; flags=1, partySize=5
    trainer_mon_no_item_custom 150, 47, SPECIES_ALTARIA, MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE
    trainer_mon_no_item_custom 150, 46, SPECIES_DELCATTY, MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 150, 47, SPECIES_ROSELIA, MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC
    trainer_mon_no_item_custom 150, 44, SPECIES_MAGNETON, MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH
    trainer_mon_no_item_custom 250, 48, SPECIES_GARDEVOIR, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT

sParty_SpecialTrainer138: @ 0x082E1E34
    @ 専用トレーナー 138: ミツル ; flags=1, partySize=5
    trainer_mon_no_item_custom 150, 50, SPECIES_ALTARIA, MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE
    trainer_mon_no_item_custom 150, 49, SPECIES_DELCATTY, MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 150, 50, SPECIES_ROSELIA, MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC
    trainer_mon_no_item_custom 150, 47, SPECIES_MAGNETON, MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH
    trainer_mon_no_item_custom 250, 51, SPECIES_GARDEVOIR, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT

sParty_SpecialTrainer139: @ 0x082E1E84
    @ 専用トレーナー 139: ミツル ; flags=1, partySize=5
    trainer_mon_no_item_custom 150, 53, SPECIES_ALTARIA, MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE
    trainer_mon_no_item_custom 150, 52, SPECIES_DELCATTY, MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 150, 53, SPECIES_ROSELIA, MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC
    trainer_mon_no_item_custom 150, 50, SPECIES_MAGNETON, MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH
    trainer_mon_no_item_custom 250, 54, SPECIES_GARDEVOIR, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT

sParty_SpecialTrainer140: @ 0x082E1ED4
    @ 専用トレーナー 140: ミツル ; flags=1, partySize=5
    trainer_mon_no_item_custom 150, 56, SPECIES_ALTARIA, MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE
    trainer_mon_no_item_custom 150, 55, SPECIES_DELCATTY, MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 150, 56, SPECIES_ROSELIA, MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC
    trainer_mon_no_item_custom 150, 53, SPECIES_MAGNETON, MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH
    trainer_mon_no_item_custom 250, 57, SPECIES_GARDEVOIR, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT

sParty_SpecialTrainer141: @ 0x082E1F24
    @ 専用トレーナー 141: ユウキ ; flags=0, partySize=4
    trainer_mon_no_item_default 150, 31, SPECIES_TROPIUS
    trainer_mon_no_item_default 150, 32, SPECIES_SLUGMA
    trainer_mon_no_item_default 150, 32, SPECIES_PELIPPER
    trainer_mon_no_item_default 200, 34, SPECIES_GROVYLE

sParty_SpecialTrainer142: @ 0x082E1F44
    @ 専用トレーナー 142: ユウキ ; flags=0, partySize=4
    trainer_mon_no_item_default 150, 31, SPECIES_TROPIUS
    trainer_mon_no_item_default 150, 32, SPECIES_PELIPPER
    trainer_mon_no_item_default 150, 32, SPECIES_LUDICOLO
    trainer_mon_no_item_default 200, 34, SPECIES_COMBUSKEN

sParty_SpecialTrainer143: @ 0x082E1F64
    @ 専用トレーナー 143: ユウキ ; flags=0, partySize=4
    trainer_mon_no_item_default 150, 31, SPECIES_TROPIUS
    trainer_mon_no_item_default 150, 32, SPECIES_LUDICOLO
    trainer_mon_no_item_default 150, 32, SPECIES_SLUGMA
    trainer_mon_no_item_default 200, 34, SPECIES_MARSHTOMP

sParty_SpecialTrainer144: @ 0x082E1F84
    @ 専用トレーナー 144: ハルカ ; flags=0, partySize=4
    trainer_mon_no_item_default 150, 31, SPECIES_TROPIUS
    trainer_mon_no_item_default 150, 32, SPECIES_SLUGMA
    trainer_mon_no_item_default 150, 32, SPECIES_PELIPPER
    trainer_mon_no_item_default 200, 34, SPECIES_GROVYLE

sParty_SpecialTrainer145: @ 0x082E1FA4
    @ 専用トレーナー 145: ハルカ ; flags=0, partySize=4
    trainer_mon_no_item_default 150, 31, SPECIES_TROPIUS
    trainer_mon_no_item_default 150, 32, SPECIES_PELIPPER
    trainer_mon_no_item_default 150, 32, SPECIES_LUDICOLO
    trainer_mon_no_item_default 200, 34, SPECIES_COMBUSKEN

sParty_SpecialTrainer146: @ 0x082E1FC4
    @ 専用トレーナー 146: ハルカ ; flags=0, partySize=4
    trainer_mon_no_item_default 150, 31, SPECIES_TROPIUS
    trainer_mon_no_item_default 150, 32, SPECIES_LUDICOLO
    trainer_mon_no_item_default 150, 32, SPECIES_SLUGMA
    trainer_mon_no_item_default 200, 34, SPECIES_MARSHTOMP

sParty_SpecialTrainer147: @ 0x082E1FE4
    @ 専用トレーナー 147: ヨシノリ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 30, SPECIES_WAILMER
    trainer_mon_no_item_default 0, 31, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 32, SPECIES_SHARPEDO

sParty_SpecialTrainer148: @ 0x082E1FFC
    @ 専用トレーナー 148: ケンタロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 31, SPECIES_CARVANHA
    trainer_mon_no_item_default 0, 34, SPECIES_TENTACRUEL

sParty_SpecialTrainer149: @ 0x082E200C
    @ 専用トレーナー 149: トモヒコ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 15, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 25, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 35, SPECIES_GYARADOS

sParty_SpecialTrainer150: @ 0x082E2024
    @ 専用トレーナー 150: サヤカ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 34, SPECIES_GLOOM
    trainer_mon_no_item_default 100, 34, SPECIES_AZUMARILL

sParty_SpecialTrainer151: @ 0x082E2034
    @ 専用トレーナー 151: ジュン ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 34, SPECIES_SHIFTRY
    trainer_mon_no_item_default 100, 34, SPECIES_NOSEPASS

sParty_SpecialTrainer152: @ 0x082E2044
    @ 専用トレーナー 152: テツロウ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_MACHOKE

sParty_SpecialTrainer153: @ 0x082E204C
    @ 専用トレーナー 153: コウサク ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 31, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 31, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 36, SPECIES_WAILMER

sParty_SpecialTrainer154: @ 0x082E2064
    @ 専用トレーナー 154: イクオ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 32, SPECIES_SWELLOW
    trainer_mon_no_item_default 0, 32, SPECIES_SKARMORY

sParty_SpecialTrainer155: @ 0x082E2074
    @ 専用トレーナー 155: アキオ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_SPHEAL
    trainer_mon_no_item_default 0, 33, SPECIES_SHARPEDO

sParty_SpecialTrainer156: @ 0x082E2084
    @ 専用トレーナー 156: ユカリ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_CHINCHOU

sParty_SpecialTrainer157: @ 0x082E208C
    @ 専用トレーナー 157: ナナとネネ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 19, SPECIES_SPINDA
    trainer_mon_no_item_default 0, 19, SPECIES_SPINDA

sParty_SpecialTrainer158: @ 0x082E209C
    @ 専用トレーナー 158: マホとナホ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 32, SPECIES_SWABLU, MOVE_SING, MOVE_FURY_ATTACK, MOVE_SAFEGUARD, MOVE_AERIAL_ACE
    trainer_mon_no_item_custom 0, 35, SPECIES_NUMEL, MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_REST, MOVE_EARTHQUAKE

sParty_SpecialTrainer159: @ 0x082E20BC
    @ 専用トレーナー 159: カヨとイヨ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 18, SPECIES_ROSELIA, MOVE_GROWTH, MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED
    trainer_mon_no_item_custom 0, 20, SPECIES_GRAVELER, MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_MUD_SPORT, MOVE_ROCK_THROW

sParty_SpecialTrainer160: @ 0x082E20DC
    @ 専用トレーナー 160: シキとリキ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 27, SPECIES_DUSTOX, MOVE_GUST, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_PROTECT
    trainer_mon_no_item_custom 0, 27, SPECIES_BEAUTIFLY, MOVE_GUST, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_STUN_SPORE

sParty_SpecialTrainer161: @ 0x082E20FC
    @ 専用トレーナー 161: ゲンとハツ ; flags=1, partySize=2
    trainer_mon_no_item_custom 200, 39, SPECIES_MEDICHAM, MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT
    trainer_mon_no_item_custom 200, 39, SPECIES_HARIYAMA, MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM

sParty_SpecialTrainer162: @ 0x082E211C
    @ 専用トレーナー 162: ゲンとハツ ; flags=1, partySize=2
    trainer_mon_no_item_custom 210, 43, SPECIES_MEDICHAM, MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT
    trainer_mon_no_item_custom 210, 43, SPECIES_HARIYAMA, MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM

sParty_SpecialTrainer163: @ 0x082E213C
    @ 専用トレーナー 163: ゲンとハツ ; flags=1, partySize=2
    trainer_mon_no_item_custom 220, 46, SPECIES_MEDICHAM, MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT
    trainer_mon_no_item_custom 220, 46, SPECIES_HARIYAMA, MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM

sParty_SpecialTrainer164: @ 0x082E215C
    @ 専用トレーナー 164: ゲンとハツ ; flags=1, partySize=2
    trainer_mon_no_item_custom 230, 49, SPECIES_MEDICHAM, MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT
    trainer_mon_no_item_custom 230, 49, SPECIES_HARIYAMA, MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM

sParty_SpecialTrainer165: @ 0x082E217C
    @ 専用トレーナー 165: ゲンとハツ ; flags=1, partySize=2
    trainer_mon_no_item_custom 240, 52, SPECIES_MEDICHAM, MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT
    trainer_mon_no_item_custom 240, 52, SPECIES_HARIYAMA, MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM

sParty_SpecialTrainer166: @ 0x082E219C
    @ 専用トレーナー 166: カツとアミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 35, SPECIES_AZUMARILL
    trainer_mon_no_item_default 0, 33, SPECIES_WINGULL

sParty_SpecialTrainer167: @ 0x082E21AC
    @ 専用トレーナー 167: コウとカコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 34, SPECIES_CHINCHOU
    trainer_mon_no_item_default 0, 33, SPECIES_CARVANHA

sParty_SpecialTrainer168: @ 0x082E21BC
    @ 専用トレーナー 168: コウとカコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 42, SPECIES_CHINCHOU
    trainer_mon_no_item_default 0, 40, SPECIES_CARVANHA

sParty_SpecialTrainer169: @ 0x082E21CC
    @ 専用トレーナー 169: コウとカコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 45, SPECIES_LANTURN
    trainer_mon_no_item_default 0, 43, SPECIES_CARVANHA

sParty_SpecialTrainer170: @ 0x082E21DC
    @ 専用トレーナー 170: コウとカコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 48, SPECIES_LANTURN
    trainer_mon_no_item_default 0, 46, SPECIES_SHARPEDO

sParty_SpecialTrainer171: @ 0x082E21EC
    @ 専用トレーナー 171: コウとカコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 51, SPECIES_LANTURN
    trainer_mon_no_item_default 0, 49, SPECIES_SHARPEDO

sParty_SpecialTrainer172: @ 0x082E21FC
    @ 専用トレーナー 172: シンとユミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 27, SPECIES_GOLDEEN
    trainer_mon_no_item_default 0, 25, SPECIES_TENTACOOL

sParty_SpecialTrainer173: @ 0x082E220C
    @ 専用トレーナー 173: マサシ ; flags=0, partySize=4
    trainer_mon_no_item_default 0, 29, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 20, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 26, SPECIES_FEEBAS
    trainer_mon_no_item_default 0, 23, SPECIES_CARVANHA

sParty_SpecialTrainer174: @ 0x082E222C
    @ 専用トレーナー 174: ノゾム ; flags=2, partySize=2
    trainer_mon_item_default 0, 8, SPECIES_ZIGZAGOON, ITEM_NUGGET
    trainer_mon_item_default 0, 8, SPECIES_POOCHYENA, ITEM_NONE

sParty_SpecialTrainer175: @ 0x082E223C
    @ 専用トレーナー 175: サクラコ ; flags=2, partySize=2
    trainer_mon_item_default 0, 8, SPECIES_LOTAD, ITEM_NONE
    trainer_mon_item_default 0, 8, SPECIES_ZIGZAGOON, ITEM_NUGGET

sParty_SpecialTrainer176: @ 0x082E224C
    @ 専用トレーナー 176: ケンキチ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 9, SPECIES_MAGIKARP

sParty_SpecialTrainer177: @ 0x082E2254
    @ 専用トレーナー 177: ハナ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 13, SPECIES_MARILL

sParty_SpecialTrainer178: @ 0x082E225C
    @ 専用トレーナー 178: タイスケ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 12, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 12, SPECIES_TENTACOOL

sParty_SpecialTrainer179: @ 0x082E226C
    @ 専用トレーナー 179: マサタカ ; flags=2, partySize=2
    trainer_mon_item_default 0, 14, SPECIES_MINUN, ITEM_ORAN_BERRY
    trainer_mon_item_default 0, 14, SPECIES_PLUSLE, ITEM_ORAN_BERRY

sParty_SpecialTrainer180: @ 0x082E227C
    @ 専用トレーナー 180: ポール ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 14, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 0, 14, SPECIES_VOLTORB

sParty_SpecialTrainer181: @ 0x082E228C
    @ 専用トレーナー 181: サエミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 15, SPECIES_MAGNEMITE

sParty_SpecialTrainer182: @ 0x082E2294
    @ 専用トレーナー 182: エリック ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 15, SPECIES_VOLTORB

sParty_SpecialTrainer183: @ 0x082E229C
    @ 専用トレーナー 183: シゲモリ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 15, SPECIES_MAKUHITA

sParty_SpecialTrainer184: @ 0x082E22A4
    @ 専用トレーナー 184: トシフミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 19, SPECIES_SANDSHREW

sParty_SpecialTrainer185: @ 0x082E22AC
    @ 専用トレーナー 185: ワカコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 18, SPECIES_ROSELIA

sParty_SpecialTrainer186: @ 0x082E22B4
    @ 専用トレーナー 186: イオリ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 18, SPECIES_SHROOMISH

sParty_SpecialTrainer187: @ 0x082E22BC
    @ 専用トレーナー 187: クニアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 18, SPECIES_NUMEL

sParty_SpecialTrainer188: @ 0x082E22C4
    @ 専用トレーナー 188: ノドカ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 17, SPECIES_MARILL
    trainer_mon_no_item_default 0, 19, SPECIES_LOMBRE

sParty_SpecialTrainer189: @ 0x082E22D4
    @ 専用トレーナー 189: カズタカ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 17, SPECIES_SKARMORY
    trainer_mon_no_item_default 0, 19, SPECIES_SWELLOW

sParty_SpecialTrainer190: @ 0x082E22E4
    @ 専用トレーナー 190: ユウゴ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_BALTOY
    trainer_mon_no_item_default 0, 18, SPECIES_SANDSHREW

sParty_SpecialTrainer191: @ 0x082E22F4
    @ 専用トレーナー 191: ミチオ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_ARON
    trainer_mon_no_item_default 0, 18, SPECIES_ARON

sParty_SpecialTrainer192: @ 0x082E2304
    @ 専用トレーナー 192: マツリ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_LOMBRE
    trainer_mon_no_item_default 0, 18, SPECIES_MARILL

sParty_SpecialTrainer193: @ 0x082E2314
    @ 専用トレーナー 193: ヒロミツ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 19, SPECIES_BARBOACH

sParty_SpecialTrainer194: @ 0x082E231C
    @ 専用トレーナー 194: ミナミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 19, SPECIES_NUZLEAF

sParty_SpecialTrainer195: @ 0x082E2324
    @ 専用トレーナー 195: マサヤ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 14, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 14, SPECIES_ARON
    trainer_mon_no_item_default 0, 14, SPECIES_ELECTRIKE

sParty_SpecialTrainer196: @ 0x082E233C
    @ 専用トレーナー 196: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_ZUBAT

sParty_SpecialTrainer197: @ 0x082E2344
    @ 専用トレーナー 197: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_POOCHYENA

sParty_SpecialTrainer198: @ 0x082E234C
    @ 専用トレーナー 198: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_NUMEL

sParty_SpecialTrainer199: @ 0x082E2354
    @ 専用トレーナー 199: したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 28, SPECIES_BALTOY
    trainer_mon_no_item_default 0, 28, SPECIES_ZUBAT

sParty_SpecialTrainer200: @ 0x082E2364
    @ 専用トレーナー 200: したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 28, SPECIES_BALTOY
    trainer_mon_no_item_default 0, 28, SPECIES_NUMEL

sParty_SpecialTrainer201: @ 0x082E2374
    @ 専用トレーナー 201: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_MIGHTYENA

sParty_SpecialTrainer202: @ 0x082E237C
    @ 専用トレーナー 202: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_ZUBAT

sParty_SpecialTrainer203: @ 0x082E2384
    @ 専用トレーナー 203: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_POOCHYENA

sParty_SpecialTrainer204: @ 0x082E238C
    @ 専用トレーナー 204: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_ZUBAT

sParty_SpecialTrainer205: @ 0x082E2394
    @ 専用トレーナー 205: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_MIGHTYENA

sParty_SpecialTrainer206: @ 0x082E239C
    @ 専用トレーナー 206: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_BALTOY

sParty_SpecialTrainer207: @ 0x082E23A4
    @ 専用トレーナー 207: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_NUMEL

sParty_SpecialTrainer208: @ 0x082E23AC
    @ 専用トレーナー 208: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_ZUBAT

sParty_SpecialTrainer209: @ 0x082E23B4
    @ 専用トレーナー 209: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_MIGHTYENA

sParty_SpecialTrainer210: @ 0x082E23BC
    @ 専用トレーナー 210: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_NUMEL

sParty_SpecialTrainer211: @ 0x082E23C4
    @ 専用トレーナー 211: したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_BALTOY

sParty_SpecialTrainer212: @ 0x082E23CC
    @ 専用トレーナー 212: ホムラ ; flags=0, partySize=4
    trainer_mon_no_item_default 75, 26, SPECIES_NUMEL
    trainer_mon_no_item_default 75, 28, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 75, 30, SPECIES_ZUBAT
    trainer_mon_no_item_default 75, 33, SPECIES_CAMERUPT

sParty_SpecialTrainer213: @ 0x082E23EC
    @ 専用トレーナー 213: ナルミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_PELIPPER
    trainer_mon_no_item_default 0, 33, SPECIES_CAMERUPT

sParty_SpecialTrainer214: @ 0x082E23FC
    @ 専用トレーナー 214: マツブサ ; flags=0, partySize=3
    trainer_mon_no_item_default 150, 42, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 150, 43, SPECIES_CROBAT
    trainer_mon_no_item_default 150, 44, SPECIES_CAMERUPT

sParty_SpecialTrainer215: @ 0x082E2414
    @ 専用トレーナー 215: ヒデヒコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 15, SPECIES_TENTACOOL

sParty_SpecialTrainer216: @ 0x082E241C
    @ 専用トレーナー 216: ユミコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 15, SPECIES_MARILL

sParty_SpecialTrainer217: @ 0x082E2424
    @ 専用トレーナー 217: ダイジロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 25, SPECIES_SANDSHREW
    trainer_mon_no_item_default 50, 25, SPECIES_SANDSHREW

sParty_SpecialTrainer218: @ 0x082E2434
    @ 専用トレーナー 218: ヤスフミ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 25, SPECIES_TAILLOW
    trainer_mon_no_item_default 50, 25, SPECIES_WINGULL

sParty_SpecialTrainer219: @ 0x082E2444
    @ 専用トレーナー 219: クニオ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_STARYU

sParty_SpecialTrainer220: @ 0x082E244C
    @ 専用トレーナー 220: ノリタカ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 24, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 24, SPECIES_MACHOP
    trainer_mon_no_item_default 0, 24, SPECIES_TENTACOOL

sParty_SpecialTrainer221: @ 0x082E2464
    @ 専用トレーナー 221: セイカ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 24, SPECIES_MANECTRIC
    trainer_mon_no_item_default 50, 24, SPECIES_SWELLOW
    trainer_mon_no_item_default 50, 24, SPECIES_MANECTRIC

sParty_SpecialTrainer222: @ 0x082E247C
    @ 専用トレーナー 222: トシタカ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_SKARMORY
    trainer_mon_no_item_default 0, 25, SPECIES_SKARMORY

sParty_SpecialTrainer223: @ 0x082E248C
    @ 専用トレーナー 223: アキコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 22, SPECIES_MARILL
    trainer_mon_no_item_default 0, 22, SPECIES_LOMBRE

sParty_SpecialTrainer224: @ 0x082E249C
    @ 専用トレーナー 224: ヒロトシ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 22, SPECIES_SANDSHREW
    trainer_mon_no_item_default 0, 22, SPECIES_SANDSLASH

sParty_SpecialTrainer225: @ 0x082E24AC
    @ 専用トレーナー 225: ヤスノリ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 22, SPECIES_TAILLOW
    trainer_mon_no_item_default 0, 22, SPECIES_NUZLEAF

sParty_SpecialTrainer226: @ 0x082E24BC
    @ 専用トレーナー 226: アツオ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_NUMEL
    trainer_mon_no_item_default 0, 18, SPECIES_SLUGMA

sParty_SpecialTrainer227: @ 0x082E24CC
    @ 専用トレーナー 227: タエコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 18, SPECIES_ROSELIA

sParty_SpecialTrainer228: @ 0x082E24DC
    @ 専用トレーナー 228: リンコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_DODUO
    trainer_mon_no_item_default 0, 26, SPECIES_DODRIO

sParty_SpecialTrainer229: @ 0x082E24EC
    @ 専用トレーナー 229: ユウゾウ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_NINJASK
    trainer_mon_no_item_default 0, 26, SPECIES_GULPIN

sParty_SpecialTrainer230: @ 0x082E24FC
    @ 専用トレーナー 230: シノ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_KADABRA
    trainer_mon_no_item_default 0, 26, SPECIES_KIRLIA

sParty_SpecialTrainer231: @ 0x082E250C
    @ 専用トレーナー 231: チトセ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_MEDITITE
    trainer_mon_no_item_default 0, 26, SPECIES_MAKUHITA

sParty_SpecialTrainer232: @ 0x082E251C
    @ 専用トレーナー 232: リネ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_MEDITITE
    trainer_mon_no_item_default 0, 18, SPECIES_SPOINK

sParty_SpecialTrainer233: @ 0x082E252C
    @ 専用トレーナー 233: ミチヤス ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 8, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 8, SPECIES_GEODUDE

sParty_SpecialTrainer234: @ 0x082E253C
    @ 専用トレーナー 234: ユウリ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 8, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 8, SPECIES_LOTAD

sParty_SpecialTrainer235: @ 0x082E254C
    @ 専用トレーナー 235: モトコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 17, SPECIES_DODUO

sParty_SpecialTrainer236: @ 0x082E2554
    @ 専用トレーナー 236: ミナツ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 17, SPECIES_RALTS

sParty_SpecialTrainer237: @ 0x082E255C
    @ 専用トレーナー 237: シマ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 17, SPECIES_MEDITITE

sParty_SpecialTrainer238: @ 0x082E2564
    @ 専用トレーナー 238: スズ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_ROSELIA
    trainer_mon_no_item_default 0, 33, SPECIES_MEDICHAM

sParty_SpecialTrainer239: @ 0x082E2574
    @ 専用トレーナー 239: ジミー ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_MANECTRIC

sParty_SpecialTrainer240: @ 0x082E257C
    @ 専用トレーナー 240: アツヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_SLUGMA
    trainer_mon_no_item_default 0, 25, SPECIES_NUMEL

sParty_SpecialTrainer241: @ 0x082E258C
    @ 専用トレーナー 241: ミヅキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_GOLDEEN

sParty_SpecialTrainer242: @ 0x082E2594
    @ 専用トレーナー 242: カズヒロ ; flags=1, partySize=1
    trainer_mon_no_item_custom 100, 30, SPECIES_MANECTRIC, MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_NONE

sParty_SpecialTrainer243: @ 0x082E25A4
    @ 専用トレーナー 243: フウコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 28, SPECIES_MEDITITE
    trainer_mon_no_item_default 0, 28, SPECIES_MAKUHITA

sParty_SpecialTrainer244: @ 0x082E25B4
    @ 専用トレーナー 244: ケンスケ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 29, SPECIES_DUSTOX
    trainer_mon_no_item_default 0, 29, SPECIES_BEAUTIFLY

sParty_SpecialTrainer245: @ 0x082E25C4
    @ 専用トレーナー 245: ヤスオ ; flags=0, partySize=6
    trainer_mon_no_item_default 10, 25, SPECIES_MAKUHITA
    trainer_mon_no_item_default 10, 25, SPECIES_WINGULL
    trainer_mon_no_item_default 10, 25, SPECIES_TROPIUS
    trainer_mon_no_item_default 10, 25, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 10, 25, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 10, 25, SPECIES_NUMEL

sParty_SpecialTrainer246: @ 0x082E25F4
    @ 専用トレーナー 246: ハルイ ; flags=0, partySize=6
    trainer_mon_no_item_default 10, 25, SPECIES_POOCHYENA
    trainer_mon_no_item_default 10, 25, SPECIES_SHROOMISH
    trainer_mon_no_item_default 10, 25, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 10, 25, SPECIES_MARILL
    trainer_mon_no_item_default 10, 25, SPECIES_SANDSHREW
    trainer_mon_no_item_default 10, 25, SPECIES_GULPIN

sParty_SpecialTrainer247: @ 0x082E2624
    @ 専用トレーナー 247: トキコ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 29, SPECIES_LOUDRED
    trainer_mon_no_item_default 100, 29, SPECIES_VIGOROTH

sParty_SpecialTrainer248: @ 0x082E2634
    @ 専用トレーナー 248: ハルカ ; flags=0, partySize=2
    trainer_mon_no_item_default 25, 13, SPECIES_LOTAD
    trainer_mon_no_item_default 50, 15, SPECIES_TORCHIC

sParty_SpecialTrainer249: @ 0x082E2644
    @ 専用トレーナー 249: ハルカ ; flags=0, partySize=2
    trainer_mon_no_item_default 25, 13, SPECIES_TORKOAL
    trainer_mon_no_item_default 50, 15, SPECIES_MUDKIP

sParty_SpecialTrainer250: @ 0x082E2654
    @ 専用トレーナー 250: ツツジ ; flags=3, partySize=4
    trainer_mon_item_custom 255, 32, SPECIES_GOLEM, ITEM_NONE, MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION
    trainer_mon_item_custom 255, 35, SPECIES_KABUTO, ITEM_SITRUS_BERRY, MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 35, SPECIES_ONIX, ITEM_NONE, MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 37, SPECIES_NOSEPASS, ITEM_SITRUS_BERRY, MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE

sParty_SpecialTrainer251: @ 0x082E2694
    @ 専用トレーナー 251: ツツジ ; flags=3, partySize=5
    trainer_mon_item_custom 255, 37, SPECIES_OMANYTE, ITEM_NONE, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF
    trainer_mon_item_custom 255, 37, SPECIES_GOLEM, ITEM_NONE, MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION
    trainer_mon_item_custom 255, 40, SPECIES_KABUTOPS, ITEM_SITRUS_BERRY, MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 40, SPECIES_ONIX, ITEM_NONE, MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 42, SPECIES_NOSEPASS, ITEM_SITRUS_BERRY, MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE

sParty_SpecialTrainer252: @ 0x082E26E4
    @ 専用トレーナー 252: ツツジ ; flags=3, partySize=5
    trainer_mon_item_custom 255, 42, SPECIES_OMASTAR, ITEM_NONE, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF
    trainer_mon_item_custom 255, 42, SPECIES_GOLEM, ITEM_NONE, MOVE_PROTECT, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION
    trainer_mon_item_custom 255, 45, SPECIES_KABUTOPS, ITEM_SITRUS_BERRY, MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 45, SPECIES_ONIX, ITEM_NONE, MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 47, SPECIES_NOSEPASS, ITEM_SITRUS_BERRY, MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE

sParty_SpecialTrainer253: @ 0x082E2734
    @ 専用トレーナー 253: ツツジ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 47, SPECIES_AERODACTYL, ITEM_NONE, MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT
    trainer_mon_item_custom 255, 47, SPECIES_GOLEM, ITEM_NONE, MOVE_FOCUS_PUNCH, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION
    trainer_mon_item_custom 255, 47, SPECIES_OMASTAR, ITEM_NONE, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF
    trainer_mon_item_custom 255, 50, SPECIES_KABUTOPS, ITEM_SITRUS_BERRY, MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 50, SPECIES_STEELIX, ITEM_NONE, MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 52, SPECIES_NOSEPASS, ITEM_SITRUS_BERRY, MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE

sParty_SpecialTrainer254: @ 0x082E2794
    @ 専用トレーナー 254: トウキ ; flags=3, partySize=4
    trainer_mon_item_custom 255, 33, SPECIES_MACHAMP, ITEM_SITRUS_BERRY, MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP
    trainer_mon_item_custom 255, 33, SPECIES_MEDITITE, ITEM_NONE, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH
    trainer_mon_item_custom 255, 35, SPECIES_HITMONTOP, ITEM_NONE, MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK
    trainer_mon_item_custom 255, 37, SPECIES_HARIYAMA, ITEM_SITRUS_BERRY, MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE

sParty_SpecialTrainer255: @ 0x082E27D4
    @ 専用トレーナー 255: トウキ ; flags=3, partySize=4
    trainer_mon_item_custom 255, 38, SPECIES_MACHAMP, ITEM_SITRUS_BERRY, MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP
    trainer_mon_item_custom 255, 38, SPECIES_MEDICHAM, ITEM_NONE, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH
    trainer_mon_item_custom 255, 40, SPECIES_HITMONTOP, ITEM_NONE, MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK
    trainer_mon_item_custom 255, 42, SPECIES_HARIYAMA, ITEM_SITRUS_BERRY, MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE

sParty_SpecialTrainer256: @ 0x082E2814
    @ 専用トレーナー 256: トウキ ; flags=3, partySize=5
    trainer_mon_item_custom 255, 40, SPECIES_HITMONCHAN, ITEM_NONE, MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH
    trainer_mon_item_custom 255, 43, SPECIES_MACHAMP, ITEM_SITRUS_BERRY, MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP
    trainer_mon_item_custom 255, 43, SPECIES_MEDICHAM, ITEM_NONE, MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC
    trainer_mon_item_custom 255, 45, SPECIES_HITMONTOP, ITEM_NONE, MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK
    trainer_mon_item_custom 255, 47, SPECIES_HARIYAMA, ITEM_SITRUS_BERRY, MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE

sParty_SpecialTrainer257: @ 0x082E2864
    @ 専用トレーナー 257: トウキ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 46, SPECIES_HITMONLEE, ITEM_NONE, MOVE_MEGA_KICK, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_BULK_UP
    trainer_mon_item_custom 255, 46, SPECIES_HITMONCHAN, ITEM_NONE, MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH
    trainer_mon_item_custom 255, 48, SPECIES_MACHAMP, ITEM_SITRUS_BERRY, MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP
    trainer_mon_item_custom 255, 48, SPECIES_MEDICHAM, ITEM_NONE, MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC
    trainer_mon_item_custom 255, 50, SPECIES_HITMONTOP, ITEM_NONE, MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK
    trainer_mon_item_custom 255, 52, SPECIES_HARIYAMA, ITEM_SITRUS_BERRY, MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE

sParty_SpecialTrainer258: @ 0x082E28C4
    @ 専用トレーナー 258: テッセン ; flags=3, partySize=4
    trainer_mon_item_custom 255, 36, SPECIES_MAREEP, ITEM_NONE, MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 36, SPECIES_ELECTRODE, ITEM_NONE, MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 38, SPECIES_MAGNETON, ITEM_SITRUS_BERRY, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 40, SPECIES_MANECTRIC, ITEM_SITRUS_BERRY, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT

sParty_SpecialTrainer259: @ 0x082E2904
    @ 専用トレーナー 259: テッセン ; flags=3, partySize=5
    trainer_mon_item_custom 255, 39, SPECIES_PIKACHU, ITEM_NONE, MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_SHOCK_WAVE
    trainer_mon_item_custom 255, 41, SPECIES_FLAAFFY, ITEM_NONE, MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 41, SPECIES_ELECTRODE, ITEM_NONE, MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 43, SPECIES_MAGNETON, ITEM_SITRUS_BERRY, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 45, SPECIES_MANECTRIC, ITEM_SITRUS_BERRY, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT

sParty_SpecialTrainer260: @ 0x082E2954
    @ 専用トレーナー 260: テッセン ; flags=3, partySize=5
    trainer_mon_item_custom 255, 44, SPECIES_RAICHU, ITEM_NONE, MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT
    trainer_mon_item_custom 255, 46, SPECIES_AMPHAROS, ITEM_NONE, MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 46, SPECIES_ELECTRODE, ITEM_NONE, MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 48, SPECIES_MAGNETON, ITEM_SITRUS_BERRY, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 50, SPECIES_MANECTRIC, ITEM_SITRUS_BERRY, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT

sParty_SpecialTrainer261: @ 0x082E29A4
    @ 専用トレーナー 261: テッセン ; flags=3, partySize=6
    trainer_mon_item_custom 255, 50, SPECIES_ELECTABUZZ, ITEM_NONE, MOVE_SWIFT, MOVE_FOCUS_PUNCH, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 51, SPECIES_RAICHU, ITEM_NONE, MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT
    trainer_mon_item_custom 255, 51, SPECIES_AMPHAROS, ITEM_NONE, MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 53, SPECIES_ELECTRODE, ITEM_NONE, MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 53, SPECIES_MAGNETON, ITEM_SITRUS_BERRY, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 55, SPECIES_MANECTRIC, ITEM_SITRUS_BERRY, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT

sParty_SpecialTrainer262: @ 0x082E2A04
    @ 専用トレーナー 262: アスナ ; flags=3, partySize=4
    trainer_mon_item_custom 255, 38, SPECIES_MAGCARGO, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 36, SPECIES_PONYTA, ITEM_NONE, MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE
    trainer_mon_item_custom 255, 38, SPECIES_CAMERUPT, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT
    trainer_mon_item_custom 255, 40, SPECIES_TORKOAL, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT

sParty_SpecialTrainer263: @ 0x082E2A44
    @ 専用トレーナー 263: アスナ ; flags=3, partySize=5
    trainer_mon_item_custom 255, 41, SPECIES_GROWLITHE, ITEM_NONE, MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_SUNNY_DAY
    trainer_mon_item_custom 255, 43, SPECIES_MAGCARGO, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 41, SPECIES_PONYTA, ITEM_NONE, MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE
    trainer_mon_item_custom 255, 43, SPECIES_CAMERUPT, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT
    trainer_mon_item_custom 255, 45, SPECIES_TORKOAL, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT

sParty_SpecialTrainer264: @ 0x082E2A94
    @ 専用トレーナー 264: アスナ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 46, SPECIES_HOUNDOUR, ITEM_NONE, MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY
    trainer_mon_item_custom 255, 46, SPECIES_GROWLITHE, ITEM_NONE, MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR
    trainer_mon_item_custom 255, 48, SPECIES_MAGCARGO, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 46, SPECIES_RAPIDASH, ITEM_NONE, MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE
    trainer_mon_item_custom 255, 48, SPECIES_CAMERUPT, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT
    trainer_mon_item_custom 255, 50, SPECIES_TORKOAL, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT

sParty_SpecialTrainer265: @ 0x082E2AF4
    @ 専用トレーナー 265: アスナ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 51, SPECIES_ARCANINE, ITEM_NONE, MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR
    trainer_mon_item_custom 255, 53, SPECIES_MAGCARGO, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 51, SPECIES_HOUNDOOM, ITEM_NONE, MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY
    trainer_mon_item_custom 255, 51, SPECIES_RAPIDASH, ITEM_NONE, MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE
    trainer_mon_item_custom 255, 53, SPECIES_CAMERUPT, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT
    trainer_mon_item_custom 255, 55, SPECIES_TORKOAL, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT

sParty_SpecialTrainer266: @ 0x082E2B54
    @ 専用トレーナー 266: センリ ; flags=3, partySize=4
    trainer_mon_item_custom 255, 42, SPECIES_CHANSEY, ITEM_NONE, MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH
    trainer_mon_item_custom 255, 42, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST
    trainer_mon_item_custom 255, 43, SPECIES_SPINDA, ITEM_NONE, MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS
    trainer_mon_item_custom 255, 45, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL

sParty_SpecialTrainer267: @ 0x082E2B94
    @ 専用トレーナー 267: センリ ; flags=3, partySize=5
    trainer_mon_item_custom 255, 47, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST
    trainer_mon_item_custom 255, 47, SPECIES_CHANSEY, ITEM_NONE, MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH
    trainer_mon_item_custom 255, 45, SPECIES_KANGASKHAN, ITEM_NONE, MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL
    trainer_mon_item_custom 255, 48, SPECIES_SPINDA, ITEM_NONE, MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS
    trainer_mon_item_custom 255, 50, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL

sParty_SpecialTrainer268: @ 0x082E2BE4
    @ 専用トレーナー 268: センリ ; flags=3, partySize=5
    trainer_mon_item_custom 255, 52, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST
    trainer_mon_item_custom 255, 52, SPECIES_BLISSEY, ITEM_NONE, MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH
    trainer_mon_item_custom 255, 50, SPECIES_KANGASKHAN, ITEM_NONE, MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL
    trainer_mon_item_custom 255, 53, SPECIES_SPINDA, ITEM_NONE, MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS
    trainer_mon_item_custom 255, 55, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL

sParty_SpecialTrainer269: @ 0x082E2C34
    @ 専用トレーナー 269: センリ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 57, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST
    trainer_mon_item_custom 255, 57, SPECIES_BLISSEY, ITEM_NONE, MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH
    trainer_mon_item_custom 255, 55, SPECIES_KANGASKHAN, ITEM_NONE, MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL
    trainer_mon_item_custom 255, 57, SPECIES_TAUROS, ITEM_NONE, MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE
    trainer_mon_item_custom 255, 58, SPECIES_SPINDA, ITEM_NONE, MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS
    trainer_mon_item_custom 255, 60, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL

sParty_SpecialTrainer270: @ 0x082E2C94
    @ 専用トレーナー 270: ナギ ; flags=3, partySize=5
    trainer_mon_item_custom 255, 40, SPECIES_DRATINI, ITEM_SITRUS_BERRY, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 38, SPECIES_TROPIUS, ITEM_NONE, MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE
    trainer_mon_item_custom 255, 41, SPECIES_PELIPPER, ITEM_NONE, MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 43, SPECIES_SKARMORY, ITEM_NONE, MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 45, SPECIES_ALTARIA, ITEM_CHESTO_BERRY, MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE

sParty_SpecialTrainer271: @ 0x082E2CE4
    @ 専用トレーナー 271: ナギ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 43, SPECIES_HOOTHOOT, ITEM_NONE, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER
    trainer_mon_item_custom 255, 43, SPECIES_TROPIUS, ITEM_NONE, MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE
    trainer_mon_item_custom 255, 45, SPECIES_DRAGONAIR, ITEM_SITRUS_BERRY, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 46, SPECIES_PELIPPER, ITEM_NONE, MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 48, SPECIES_SKARMORY, ITEM_NONE, MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 50, SPECIES_ALTARIA, ITEM_CHESTO_BERRY, MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE

sParty_SpecialTrainer272: @ 0x082E2D44
    @ 専用トレーナー 272: ナギ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 48, SPECIES_NOCTOWL, ITEM_NONE, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER
    trainer_mon_item_custom 255, 49, SPECIES_TROPIUS, ITEM_NONE, MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE
    trainer_mon_item_custom 255, 50, SPECIES_DRAGONAIR, ITEM_SITRUS_BERRY, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 51, SPECIES_PELIPPER, ITEM_NONE, MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 53, SPECIES_SKARMORY, ITEM_NONE, MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 55, SPECIES_ALTARIA, ITEM_CHESTO_BERRY, MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE

sParty_SpecialTrainer273: @ 0x082E2DA4
    @ 専用トレーナー 273: ナギ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 53, SPECIES_NOCTOWL, ITEM_NONE, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER
    trainer_mon_item_custom 255, 54, SPECIES_TROPIUS, ITEM_NONE, MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE
    trainer_mon_item_custom 255, 55, SPECIES_PELIPPER, ITEM_NONE, MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 55, SPECIES_DRAGONITE, ITEM_SITRUS_BERRY, MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 58, SPECIES_SKARMORY, ITEM_NONE, MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 60, SPECIES_ALTARIA, ITEM_CHESTO_BERRY, MOVE_SKY_ATTACK, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE

sParty_SpecialTrainer274: @ 0x082E2E04
    @ 専用トレーナー 274: フウとラン ; flags=3, partySize=5
    trainer_mon_item_custom 255, 48, SPECIES_SLOWPOKE, ITEM_NONE, MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT
    trainer_mon_item_custom 255, 49, SPECIES_CLAYDOL, ITEM_NONE, MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 49, SPECIES_XATU, ITEM_CHESTO_BERRY, MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 50, SPECIES_LUNATONE, ITEM_CHESTO_BERRY, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 50, SPECIES_SOLROCK, ITEM_SITRUS_BERRY, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER

sParty_SpecialTrainer275: @ 0x082E2E54
    @ 専用トレーナー 275: フウとラン ; flags=3, partySize=6
    trainer_mon_item_custom 255, 53, SPECIES_DROWZEE, ITEM_NONE, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT
    trainer_mon_item_custom 255, 53, SPECIES_SLOWPOKE, ITEM_NONE, MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT
    trainer_mon_item_custom 255, 54, SPECIES_CLAYDOL, ITEM_NONE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 54, SPECIES_XATU, ITEM_CHESTO_BERRY, MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 55, SPECIES_LUNATONE, ITEM_CHESTO_BERRY, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 55, SPECIES_SOLROCK, ITEM_SITRUS_BERRY, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER

sParty_SpecialTrainer276: @ 0x082E2EB4
    @ 専用トレーナー 276: フウとラン ; flags=3, partySize=6
    trainer_mon_item_custom 255, 58, SPECIES_HYPNO, ITEM_NONE, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT
    trainer_mon_item_custom 255, 59, SPECIES_CLAYDOL, ITEM_NONE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 58, SPECIES_SLOWPOKE, ITEM_NONE, MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT
    trainer_mon_item_custom 255, 59, SPECIES_XATU, ITEM_CHESTO_BERRY, MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 60, SPECIES_LUNATONE, ITEM_CHESTO_BERRY, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 60, SPECIES_SOLROCK, ITEM_SITRUS_BERRY, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER

sParty_SpecialTrainer277: @ 0x082E2F14
    @ 専用トレーナー 277: フウとラン ; flags=3, partySize=6
    trainer_mon_item_custom 255, 63, SPECIES_HYPNO, ITEM_NONE, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT
    trainer_mon_item_custom 255, 64, SPECIES_CLAYDOL, ITEM_NONE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 63, SPECIES_SLOWKING, ITEM_NONE, MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT
    trainer_mon_item_custom 255, 64, SPECIES_XATU, ITEM_CHESTO_BERRY, MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 65, SPECIES_LUNATONE, ITEM_CHESTO_BERRY, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 65, SPECIES_SOLROCK, ITEM_SITRUS_BERRY, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER

sParty_SpecialTrainer278: @ 0x082E2F74
    @ 専用トレーナー 278: アダン ; flags=3, partySize=5
    trainer_mon_item_custom 255, 46, SPECIES_POLIWAG, ITEM_NONE, MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP
    trainer_mon_item_custom 255, 46, SPECIES_WHISCASH, ITEM_NONE, MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE
    trainer_mon_item_custom 255, 48, SPECIES_WALREIN, ITEM_NONE, MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 48, SPECIES_CRAWDAUNT, ITEM_CHESTO_BERRY, MOVE_REST, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_DOUBLE_TEAM
    trainer_mon_item_custom 255, 51, SPECIES_KINGDRA, ITEM_CHESTO_BERRY, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST

sParty_SpecialTrainer279: @ 0x082E2FC4
    @ 専用トレーナー 279: アダン ; flags=3, partySize=5
    trainer_mon_item_custom 255, 50, SPECIES_POLIWHIRL, ITEM_NONE, MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP
    trainer_mon_item_custom 255, 51, SPECIES_WHISCASH, ITEM_NONE, MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE
    trainer_mon_item_custom 255, 53, SPECIES_WALREIN, ITEM_NONE, MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 53, SPECIES_CRAWDAUNT, ITEM_CHESTO_BERRY, MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM
    trainer_mon_item_custom 255, 56, SPECIES_KINGDRA, ITEM_CHESTO_BERRY, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST

sParty_SpecialTrainer280: @ 0x082E3014
    @ 専用トレーナー 280: アダン ; flags=3, partySize=6
    trainer_mon_item_custom 255, 56, SPECIES_LAPRAS, ITEM_NONE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY
    trainer_mon_item_custom 255, 58, SPECIES_WHISCASH, ITEM_NONE, MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE
    trainer_mon_item_custom 255, 56, SPECIES_POLIWHIRL, ITEM_NONE, MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP
    trainer_mon_item_custom 255, 58, SPECIES_WALREIN, ITEM_NONE, MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 58, SPECIES_CRAWDAUNT, ITEM_CHESTO_BERRY, MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM
    trainer_mon_item_custom 255, 61, SPECIES_KINGDRA, ITEM_CHESTO_BERRY, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST

sParty_SpecialTrainer281: @ 0x082E3074
    @ 専用トレーナー 281: アダン ; flags=3, partySize=6
    trainer_mon_item_custom 255, 61, SPECIES_LAPRAS, ITEM_NONE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY
    trainer_mon_item_custom 255, 63, SPECIES_WHISCASH, ITEM_NONE, MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE
    trainer_mon_item_custom 255, 61, SPECIES_POLITOED, ITEM_NONE, MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG
    trainer_mon_item_custom 255, 63, SPECIES_WALREIN, ITEM_NONE, MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_SHEER_COLD
    trainer_mon_item_custom 255, 63, SPECIES_CRAWDAUNT, ITEM_CHESTO_BERRY, MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM
    trainer_mon_item_custom 255, 66, SPECIES_KINGDRA, ITEM_CHESTO_BERRY, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST

sParty_SpecialTrainer282: @ 0x082E30D4
    @ 専用トレーナー 282: モトヒロ ; flags=3, partySize=2
    trainer_mon_item_custom 100, 17, SPECIES_ILLUMISE, ITEM_NONE, MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CHARM, MOVE_NONE
    trainer_mon_item_custom 100, 17, SPECIES_VOLBEAT, ITEM_NONE, MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CONFUSE_RAY, MOVE_NONE

sParty_SpecialTrainer283: @ 0x082E30F4
    @ 専用トレーナー 283: セイイチ ; flags=0, partySize=1
    trainer_mon_no_item_default 200, 30, SPECIES_TROPIUS

sParty_SpecialTrainer284: @ 0x082E30FC
    @ 専用トレーナー 284: ダイゴ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 77, SPECIES_SKARMORY, ITEM_NONE, MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING
    trainer_mon_item_custom 255, 75, SPECIES_CLAYDOL, ITEM_NONE, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE
    trainer_mon_item_custom 255, 76, SPECIES_AGGRON, ITEM_NONE, MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW
    trainer_mon_item_custom 255, 76, SPECIES_CRADILY, ITEM_NONE, MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY
    trainer_mon_item_custom 255, 76, SPECIES_ARMALDO, ITEM_NONE, MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH
    trainer_mon_item_custom 255, 78, SPECIES_METAGROSS, ITEM_SITRUS_BERRY, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL

sParty_SpecialTrainer285: @ 0x082E315C
    @ 専用トレーナー 285: リラ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BELDUM

sParty_SpecialTrainer286: @ 0x082E3164
    @ 専用トレーナー 286: ヒース ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BELDUM

sParty_SpecialTrainer287: @ 0x082E316C
    @ 専用トレーナー 287: ウコン ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BELDUM

sParty_SpecialTrainer288: @ 0x082E3174
    @ 専用トレーナー 288: コゴミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BELDUM

sParty_SpecialTrainer289: @ 0x082E317C
    @ 専用トレーナー 289: ダツラ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BELDUM

sParty_SpecialTrainer290: @ 0x082E3184
    @ 専用トレーナー 290: アザミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BELDUM

sParty_SpecialTrainer291: @ 0x082E318C
    @ 専用トレーナー 291: ジンダイ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BELDUM

sParty_SpecialTrainer292: @ 0x082E3194
    @ 専用トレーナー 292: ダイジロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 31, SPECIES_SANDSHREW
    trainer_mon_no_item_default 10, 31, SPECIES_SANDSHREW

sParty_SpecialTrainer293: @ 0x082E31A4
    @ 専用トレーナー 293: ダイジロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 33, SPECIES_NOSEPASS
    trainer_mon_no_item_default 20, 33, SPECIES_SANDSHREW
    trainer_mon_no_item_default 20, 33, SPECIES_SANDSHREW

sParty_SpecialTrainer294: @ 0x082E31BC
    @ 専用トレーナー 294: ダイジロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 35, SPECIES_NOSEPASS
    trainer_mon_no_item_default 30, 35, SPECIES_SANDSHREW
    trainer_mon_no_item_default 30, 35, SPECIES_SANDSHREW

sParty_SpecialTrainer295: @ 0x082E31D4
    @ 専用トレーナー 295: ダイジロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 37, SPECIES_NOSEPASS
    trainer_mon_no_item_default 40, 37, SPECIES_SANDSLASH
    trainer_mon_no_item_default 40, 37, SPECIES_SANDSLASH

sParty_SpecialTrainer296: @ 0x082E31EC
    @ 専用トレーナー 296: ノリタカ ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 30, SPECIES_WINGULL
    trainer_mon_no_item_default 10, 30, SPECIES_MACHOP
    trainer_mon_no_item_default 10, 30, SPECIES_TENTACOOL

sParty_SpecialTrainer297: @ 0x082E3204
    @ 専用トレーナー 297: ノリタカ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 32, SPECIES_PELIPPER
    trainer_mon_no_item_default 20, 32, SPECIES_MACHOP
    trainer_mon_no_item_default 20, 32, SPECIES_TENTACOOL

sParty_SpecialTrainer298: @ 0x082E321C
    @ 専用トレーナー 298: ノリタカ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 34, SPECIES_PELIPPER
    trainer_mon_no_item_default 30, 34, SPECIES_MACHOP
    trainer_mon_no_item_default 30, 34, SPECIES_TENTACRUEL

sParty_SpecialTrainer299: @ 0x082E3234
    @ 専用トレーナー 299: ノリタカ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 36, SPECIES_PELIPPER
    trainer_mon_no_item_default 40, 36, SPECIES_MACHOKE
    trainer_mon_no_item_default 40, 36, SPECIES_TENTACRUEL

sParty_SpecialTrainer300: @ 0x082E324C
    @ 専用トレーナー 300: ヤスヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 37, SPECIES_STARYU
    trainer_mon_no_item_default 10, 37, SPECIES_STARYU

sParty_SpecialTrainer301: @ 0x082E325C
    @ 専用トレーナー 301: ヤスヒロ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 39, SPECIES_WINGULL
    trainer_mon_no_item_default 20, 39, SPECIES_STARYU
    trainer_mon_no_item_default 20, 39, SPECIES_STARYU

sParty_SpecialTrainer302: @ 0x082E3274
    @ 専用トレーナー 302: ヤスヒロ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 41, SPECIES_PELIPPER
    trainer_mon_no_item_default 30, 41, SPECIES_STARYU
    trainer_mon_no_item_default 30, 41, SPECIES_STARYU

sParty_SpecialTrainer303: @ 0x082E328C
    @ 専用トレーナー 303: ヤスヒロ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 43, SPECIES_PELIPPER
    trainer_mon_no_item_default 40, 43, SPECIES_STARMIE
    trainer_mon_no_item_default 40, 43, SPECIES_STARMIE

sParty_SpecialTrainer304: @ 0x082E32A4
    @ 専用トレーナー 304: テツロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 37, SPECIES_MACHOKE
    trainer_mon_no_item_default 10, 37, SPECIES_MACHOKE

sParty_SpecialTrainer305: @ 0x082E32B4
    @ 専用トレーナー 305: テツロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 39, SPECIES_MAKUHITA
    trainer_mon_no_item_default 20, 39, SPECIES_MACHOKE
    trainer_mon_no_item_default 20, 39, SPECIES_MACHOKE

sParty_SpecialTrainer306: @ 0x082E32CC
    @ 専用トレーナー 306: テツロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 41, SPECIES_HARIYAMA
    trainer_mon_no_item_default 30, 41, SPECIES_MACHOKE
    trainer_mon_no_item_default 30, 41, SPECIES_MACHOKE

sParty_SpecialTrainer307: @ 0x082E32E4
    @ 専用トレーナー 307: テツロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 43, SPECIES_HARIYAMA
    trainer_mon_no_item_default 40, 43, SPECIES_MACHAMP
    trainer_mon_no_item_default 40, 43, SPECIES_MACHAMP

sParty_SpecialTrainer308: @ 0x082E32FC
    @ 専用トレーナー 308: トキコ ; flags=0, partySize=2
    trainer_mon_no_item_default 110, 35, SPECIES_LOUDRED
    trainer_mon_no_item_default 110, 35, SPECIES_VIGOROTH

sParty_SpecialTrainer309: @ 0x082E330C
    @ 専用トレーナー 309: トキコ ; flags=0, partySize=3
    trainer_mon_no_item_default 120, 37, SPECIES_SPINDA
    trainer_mon_no_item_default 120, 37, SPECIES_LOUDRED
    trainer_mon_no_item_default 120, 37, SPECIES_VIGOROTH

sParty_SpecialTrainer310: @ 0x082E3324
    @ 専用トレーナー 310: トキコ ; flags=0, partySize=3
    trainer_mon_no_item_default 130, 39, SPECIES_SPINDA
    trainer_mon_no_item_default 130, 39, SPECIES_LOUDRED
    trainer_mon_no_item_default 100, 39, SPECIES_VIGOROTH

sParty_SpecialTrainer311: @ 0x082E333C
    @ 専用トレーナー 311: トキコ ; flags=0, partySize=3
    trainer_mon_no_item_default 140, 41, SPECIES_SPINDA
    trainer_mon_no_item_default 140, 41, SPECIES_EXPLOUD
    trainer_mon_no_item_default 140, 41, SPECIES_SLAKING

sParty_SpecialTrainer312: @ 0x082E3354
    @ 専用トレーナー 312: ジョー ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 35, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 10, 35, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 10, 35, SPECIES_LOUDRED

sParty_SpecialTrainer313: @ 0x082E336C
    @ 専用トレーナー 313: ジョー ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 37, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 20, 37, SPECIES_MANECTRIC
    trainer_mon_no_item_default 20, 37, SPECIES_LOUDRED

sParty_SpecialTrainer314: @ 0x082E3384
    @ 専用トレーナー 314: ジョー ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 39, SPECIES_MANECTRIC
    trainer_mon_no_item_default 30, 39, SPECIES_MANECTRIC
    trainer_mon_no_item_default 30, 39, SPECIES_LOUDRED

sParty_SpecialTrainer315: @ 0x082E339C
    @ 専用トレーナー 315: ジョー ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 41, SPECIES_MANECTRIC
    trainer_mon_no_item_default 40, 41, SPECIES_MANECTRIC
    trainer_mon_no_item_default 40, 41, SPECIES_EXPLOUD

sParty_SpecialTrainer316: @ 0x082E33B4
    @ 専用トレーナー 316: マサヒコ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 26, SPECIES_GEODUDE
    trainer_mon_no_item_default 10, 26, SPECIES_NUMEL

sParty_SpecialTrainer317: @ 0x082E33C4
    @ 専用トレーナー 317: マサヒコ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 28, SPECIES_MACHOP
    trainer_mon_no_item_default 20, 28, SPECIES_NUMEL
    trainer_mon_no_item_default 20, 28, SPECIES_GRAVELER

sParty_SpecialTrainer318: @ 0x082E33DC
    @ 専用トレーナー 318: マサヒコ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 30, SPECIES_MACHOP
    trainer_mon_no_item_default 30, 30, SPECIES_NUMEL
    trainer_mon_no_item_default 30, 30, SPECIES_GRAVELER

sParty_SpecialTrainer319: @ 0x082E33F4
    @ 専用トレーナー 319: マサヒコ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 33, SPECIES_MACHOKE
    trainer_mon_no_item_default 40, 33, SPECIES_CAMERUPT
    trainer_mon_no_item_default 40, 33, SPECIES_GOLEM

sParty_SpecialTrainer320: @ 0x082E340C
    @ 専用トレーナー 320: フクミ ; flags=0, partySize=6
    trainer_mon_no_item_default 10, 31, SPECIES_SKITTY
    trainer_mon_no_item_default 10, 31, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 10, 31, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 10, 31, SPECIES_LOTAD
    trainer_mon_no_item_default 10, 31, SPECIES_SEEDOT
    trainer_mon_no_item_default 10, 31, SPECIES_TAILLOW

sParty_SpecialTrainer321: @ 0x082E343C
    @ 専用トレーナー 321: フクミ ; flags=0, partySize=6
    trainer_mon_no_item_default 20, 33, SPECIES_SKITTY
    trainer_mon_no_item_default 20, 33, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 20, 33, SPECIES_LINOONE
    trainer_mon_no_item_default 20, 33, SPECIES_LOMBRE
    trainer_mon_no_item_default 20, 33, SPECIES_NUZLEAF
    trainer_mon_no_item_default 20, 33, SPECIES_TAILLOW

sParty_SpecialTrainer322: @ 0x082E346C
    @ 専用トレーナー 322: フクミ ; flags=0, partySize=6
    trainer_mon_no_item_default 30, 35, SPECIES_DELCATTY
    trainer_mon_no_item_default 30, 35, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 30, 35, SPECIES_LINOONE
    trainer_mon_no_item_default 30, 35, SPECIES_LOMBRE
    trainer_mon_no_item_default 30, 35, SPECIES_NUZLEAF
    trainer_mon_no_item_default 30, 35, SPECIES_SWELLOW

sParty_SpecialTrainer323: @ 0x082E349C
    @ 専用トレーナー 323: フクミ ; flags=0, partySize=6
    trainer_mon_no_item_default 40, 37, SPECIES_DELCATTY
    trainer_mon_no_item_default 40, 37, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 40, 37, SPECIES_LINOONE
    trainer_mon_no_item_default 40, 37, SPECIES_LUDICOLO
    trainer_mon_no_item_default 40, 37, SPECIES_SHIFTRY
    trainer_mon_no_item_default 40, 37, SPECIES_SWELLOW

sParty_SpecialTrainer324: @ 0x082E34CC
    @ 専用トレーナー 324: ショウ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 34, SPECIES_WAILMER
    trainer_mon_no_item_default 10, 34, SPECIES_HORSEA

sParty_SpecialTrainer325: @ 0x082E34DC
    @ 専用トレーナー 325: ショウ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 36, SPECIES_LUVDISC
    trainer_mon_no_item_default 20, 36, SPECIES_WAILMER
    trainer_mon_no_item_default 20, 36, SPECIES_SEADRA

sParty_SpecialTrainer326: @ 0x082E34F4
    @ 専用トレーナー 326: ショウ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 38, SPECIES_LUVDISC
    trainer_mon_no_item_default 30, 38, SPECIES_WAILMER
    trainer_mon_no_item_default 30, 38, SPECIES_SEADRA

sParty_SpecialTrainer327: @ 0x082E350C
    @ 専用トレーナー 327: ショウ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 40, SPECIES_LUVDISC
    trainer_mon_no_item_default 40, 40, SPECIES_WAILORD
    trainer_mon_no_item_default 40, 40, SPECIES_KINGDRA

sParty_SpecialTrainer328: @ 0x082E3524
    @ 専用トレーナー 328: ミハネ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 41, SPECIES_CHIMECHO

sParty_SpecialTrainer329: @ 0x082E352C
    @ 専用トレーナー 329: シンヤ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 41, SPECIES_BANETTE
    trainer_mon_no_item_default 0, 41, SPECIES_KADABRA

sParty_SpecialTrainer330: @ 0x082E353C
    @ 専用トレーナー 330: ダグ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 41, SPECIES_WOBBUFFET

sParty_SpecialTrainer331: @ 0x082E3544
    @ 専用トレーナー 331: レッド ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_CHARMANDER

sParty_SpecialTrainer332: @ 0x082E354C
    @ 専用トレーナー 332: リーフ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BULBASAUR

sParty_SpecialTrainer333: @ 0x082E3554
    @ 専用トレーナー 333: ユウキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_GROUDON

sParty_SpecialTrainer334: @ 0x082E355C
    @ 専用トレーナー 334: ハルカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_KYOGRE
