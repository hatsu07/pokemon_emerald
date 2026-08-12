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

sParty_Sawyer1: @ 0x082DEEBC
    @ TRAINER_SAWYER_1 (id 1): マサヒコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 21, SPECIES_GEODUDE

sParty_GruntAquaHideout1: @ 0x082DEEC4
    @ TRAINER_GRUNT_AQUA_HIDEOUT_1 (id 2): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_POOCHYENA

sParty_GruntAquaHideout2: @ 0x082DEECC
    @ TRAINER_GRUNT_AQUA_HIDEOUT_2 (id 3): したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 31, SPECIES_ZUBAT
    trainer_mon_no_item_default 0, 31, SPECIES_CARVANHA

sParty_GruntAquaHideout3: @ 0x082DEEDC
    @ TRAINER_GRUNT_AQUA_HIDEOUT_3 (id 4): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_ZUBAT

sParty_GruntAquaHideout4: @ 0x082DEEE4
    @ TRAINER_GRUNT_AQUA_HIDEOUT_4 (id 5): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_CARVANHA

sParty_GruntSeafloorCavern1: @ 0x082DEEEC
    @ TRAINER_GRUNT_SEAFLOOR_CAVERN_1 (id 6): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 36, SPECIES_POOCHYENA

sParty_GruntSeafloorCavern2: @ 0x082DEEF4
    @ TRAINER_GRUNT_SEAFLOOR_CAVERN_2 (id 7): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 36, SPECIES_CARVANHA

sParty_GruntSeafloorCavern3: @ 0x082DEEFC
    @ TRAINER_GRUNT_SEAFLOOR_CAVERN_3 (id 8): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 36, SPECIES_ZUBAT

sParty_Gabrielle1: @ 0x082DEF04
    @ TRAINER_GABRIELLE_1 (id 9): フクミ ; flags=0, partySize=6
    trainer_mon_no_item_default 0, 26, SPECIES_SKITTY
    trainer_mon_no_item_default 0, 26, SPECIES_POOCHYENA
    trainer_mon_no_item_default 0, 26, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 26, SPECIES_LOTAD
    trainer_mon_no_item_default 0, 26, SPECIES_SEEDOT
    trainer_mon_no_item_default 0, 26, SPECIES_TAILLOW

sParty_GruntPetalburgWoods: @ 0x082DEF34
    @ TRAINER_GRUNT_PETALBURG_WOODS (id 10): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 9, SPECIES_POOCHYENA

sParty_Marcel: @ 0x082DEF3C
    @ TRAINER_MARCEL (id 11): セツオ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 29, SPECIES_MANECTRIC
    trainer_mon_no_item_default 100, 29, SPECIES_SHIFTRY

sParty_Alberto: @ 0x082DEF4C
    @ TRAINER_ALBERTO (id 12): ヨウスケ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 30, SPECIES_PELIPPER
    trainer_mon_no_item_default 0, 30, SPECIES_XATU

sParty_Ed: @ 0x082DEF5C
    @ TRAINER_ED (id 13): スグル ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 30, SPECIES_ZANGOOSE
    trainer_mon_no_item_default 0, 30, SPECIES_SEVIPER

sParty_GruntSeafloorCavern4: @ 0x082DEF6C
    @ TRAINER_GRUNT_SEAFLOOR_CAVERN_4 (id 14): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 36, SPECIES_CARVANHA

sParty_Declan: @ 0x082DEF74
    @ TRAINER_DECLAN (id 15): イッペイ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_GYARADOS

sParty_GruntRusturfTunnel: @ 0x082DEF7C
    @ TRAINER_GRUNT_RUSTURF_TUNNEL (id 16): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 11, SPECIES_POOCHYENA

sParty_GruntWeatherInst1: @ 0x082DEF84
    @ TRAINER_GRUNT_WEATHER_INST_1 (id 17): したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 27, SPECIES_ZUBAT
    trainer_mon_no_item_default 0, 27, SPECIES_POOCHYENA

sParty_GruntWeatherInst2: @ 0x082DEF94
    @ TRAINER_GRUNT_WEATHER_INST_2 (id 18): したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 27, SPECIES_POOCHYENA
    trainer_mon_no_item_default 0, 27, SPECIES_CARVANHA

sParty_GruntWeatherInst3: @ 0x082DEFA4
    @ TRAINER_GRUNT_WEATHER_INST_3 (id 19): したっぱ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 26, SPECIES_POOCHYENA
    trainer_mon_no_item_default 0, 26, SPECIES_ZUBAT
    trainer_mon_no_item_default 0, 26, SPECIES_CARVANHA

sParty_GruntMuseum1: @ 0x082DEFBC
    @ TRAINER_GRUNT_MUSEUM_1 (id 20): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 15, SPECIES_CARVANHA

sParty_GruntMuseum2: @ 0x082DEFC4
    @ TRAINER_GRUNT_MUSEUM_2 (id 21): したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 14, SPECIES_ZUBAT
    trainer_mon_no_item_default 0, 14, SPECIES_CARVANHA

sParty_GruntSpaceCenter1: @ 0x082DEFD4
    @ TRAINER_GRUNT_SPACE_CENTER_1 (id 22): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_NUMEL

sParty_GruntMtPyre1: @ 0x082DEFDC
    @ TRAINER_GRUNT_MT_PYRE_1 (id 23): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_ZUBAT

sParty_GruntMtPyre2: @ 0x082DEFE4
    @ TRAINER_GRUNT_MT_PYRE_2 (id 24): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_CARVANHA

sParty_GruntMtPyre3: @ 0x082DEFEC
    @ TRAINER_GRUNT_MT_PYRE_3 (id 25): したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 30, SPECIES_POOCHYENA
    trainer_mon_no_item_default 0, 30, SPECIES_CARVANHA

sParty_GruntWeatherInst4: @ 0x082DEFFC
    @ TRAINER_GRUNT_WEATHER_INST_4 (id 26): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 28, SPECIES_CARVANHA

sParty_GruntAquaHideout5: @ 0x082DF004
    @ TRAINER_GRUNT_AQUA_HIDEOUT_5 (id 27): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_CARVANHA

sParty_GruntAquaHideout6: @ 0x082DF00C
    @ TRAINER_GRUNT_AQUA_HIDEOUT_6 (id 28): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_ZUBAT

sParty_Fredrick: @ 0x082DF014
    @ TRAINER_FREDRICK (id 29): トシシゲ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 30, SPECIES_MAKUHITA
    trainer_mon_no_item_default 100, 30, SPECIES_MACHOKE

sParty_Matt: @ 0x082DF024
    @ TRAINER_MATT (id 30): ウシオ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 34, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 50, 34, SPECIES_GOLBAT

sParty_Zander: @ 0x082DF034
    @ TRAINER_ZANDER (id 31): リョウジ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 31, SPECIES_HARIYAMA

sParty_ShellyWeatherInstitute: @ 0x082DF03C
    @ TRAINER_SHELLY_WEATHER_INSTITUTE (id 32): イズミ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 28, SPECIES_CARVANHA
    trainer_mon_no_item_default 50, 28, SPECIES_MIGHTYENA

sParty_ShellySeafloorCavern: @ 0x082DF04C
    @ TRAINER_SHELLY_SEAFLOOR_CAVERN (id 33): イズミ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 37, SPECIES_SHARPEDO
    trainer_mon_no_item_default 100, 37, SPECIES_MIGHTYENA

sParty_Archie: @ 0x082DF05C
    @ TRAINER_ARCHIE (id 34): アオギリ ; flags=0, partySize=3
    trainer_mon_no_item_default 150, 41, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 150, 41, SPECIES_CROBAT
    trainer_mon_no_item_default 150, 43, SPECIES_SHARPEDO

sParty_Leah: @ 0x082DF074
    @ TRAINER_LEAH (id 35): エミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 31, SPECIES_SPOINK

sParty_Daisy: @ 0x082DF07C
    @ TRAINER_DAISY (id 36): ミドリ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 14, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 14, SPECIES_ROSELIA

sParty_Rose1: @ 0x082DF08C
    @ TRAINER_ROSE_1 (id 37): ヤヨイ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 14, SPECIES_ROSELIA
    trainer_mon_no_item_default 0, 14, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 14, SPECIES_ROSELIA

sParty_Felix: @ 0x082DF0A4
    @ TRAINER_FELIX (id 38): コウジロウ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 43, SPECIES_MEDICHAM, MOVE_PSYCHIC, MOVE_NONE, MOVE_NONE, MOVE_NONE
    trainer_mon_no_item_custom 0, 43, SPECIES_CLAYDOL, MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE

sParty_Violet: @ 0x082DF0C4
    @ TRAINER_VIOLET (id 39): チヅル ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_ROSELIA
    trainer_mon_no_item_default 0, 26, SPECIES_GLOOM

sParty_Rose2: @ 0x082DF0D4
    @ TRAINER_ROSE_2 (id 40): ヤヨイ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 26, SPECIES_SHROOMISH
    trainer_mon_no_item_default 10, 26, SPECIES_ROSELIA

sParty_Rose3: @ 0x082DF0E4
    @ TRAINER_ROSE_3 (id 41): ヤヨイ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 28, SPECIES_SHROOMISH
    trainer_mon_no_item_default 20, 28, SPECIES_GLOOM
    trainer_mon_no_item_default 20, 28, SPECIES_ROSELIA

sParty_Rose4: @ 0x082DF0FC
    @ TRAINER_ROSE_4 (id 42): ヤヨイ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 31, SPECIES_SHROOMISH
    trainer_mon_no_item_default 30, 31, SPECIES_GLOOM
    trainer_mon_no_item_default 30, 31, SPECIES_ROSELIA

sParty_Rose5: @ 0x082DF114
    @ TRAINER_ROSE_5 (id 43): ヤヨイ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 34, SPECIES_BRELOOM
    trainer_mon_no_item_default 40, 34, SPECIES_GLOOM
    trainer_mon_no_item_default 40, 34, SPECIES_ROSELIA

sParty_Dusty1: @ 0x082DF12C
    @ TRAINER_DUSTY_1 (id 44): ノブオ ; flags=1, partySize=1
    trainer_mon_no_item_custom 50, 23, SPECIES_SANDSLASH, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING

sParty_Chip: @ 0x082DF13C
    @ TRAINER_CHIP (id 45): ケイイチ ; flags=1, partySize=3
    trainer_mon_no_item_custom 50, 27, SPECIES_BALTOY, MOVE_PSYBEAM, MOVE_SELF_DESTRUCT, MOVE_SANDSTORM, MOVE_ANCIENT_POWER
    trainer_mon_no_item_custom 50, 27, SPECIES_SANDSHREW, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING
    trainer_mon_no_item_custom 50, 27, SPECIES_SANDSLASH, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING

sParty_Foster: @ 0x082DF16C
    @ TRAINER_FOSTER (id 46): アキヒト ; flags=1, partySize=2
    trainer_mon_no_item_custom 100, 25, SPECIES_SANDSHREW, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING
    trainer_mon_no_item_custom 100, 25, SPECIES_SANDSLASH, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING

sParty_Dusty2: @ 0x082DF18C
    @ TRAINER_DUSTY_2 (id 47): ノブオ ; flags=1, partySize=1
    trainer_mon_no_item_custom 60, 27, SPECIES_SANDSLASH, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING

sParty_Dusty3: @ 0x082DF19C
    @ TRAINER_DUSTY_3 (id 48): ノブオ ; flags=1, partySize=1
    trainer_mon_no_item_custom 70, 30, SPECIES_SANDSLASH, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING

sParty_Dusty4: @ 0x082DF1AC
    @ TRAINER_DUSTY_4 (id 49): ノブオ ; flags=1, partySize=1
    trainer_mon_no_item_custom 80, 33, SPECIES_SANDSLASH, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING

sParty_Dusty5: @ 0x082DF1BC
    @ TRAINER_DUSTY_5 (id 50): ノブオ ; flags=1, partySize=1
    trainer_mon_no_item_custom 90, 36, SPECIES_SANDSLASH, MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING

sParty_GabbyAndTy1: @ 0x082DF1CC
    @ TRAINER_GABBY_AND_TY_1 (id 51): マリとダイ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 17, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 50, 17, SPECIES_WHISMUR

sParty_GabbyAndTy2: @ 0x082DF1DC
    @ TRAINER_GABBY_AND_TY_2 (id 52): マリとダイ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 27, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 100, 27, SPECIES_LOUDRED

sParty_GabbyAndTy3: @ 0x082DF1EC
    @ TRAINER_GABBY_AND_TY_3 (id 53): マリとダイ ; flags=0, partySize=2
    trainer_mon_no_item_default 150, 30, SPECIES_MAGNETON
    trainer_mon_no_item_default 150, 30, SPECIES_LOUDRED

sParty_GabbyAndTy4: @ 0x082DF1FC
    @ TRAINER_GABBY_AND_TY_4 (id 54): マリとダイ ; flags=0, partySize=2
    trainer_mon_no_item_default 200, 33, SPECIES_MAGNETON
    trainer_mon_no_item_default 200, 33, SPECIES_LOUDRED

sParty_GabbyAndTy5: @ 0x082DF20C
    @ TRAINER_GABBY_AND_TY_5 (id 55): マリとダイ ; flags=0, partySize=2
    trainer_mon_no_item_default 250, 36, SPECIES_MAGNETON
    trainer_mon_no_item_default 250, 36, SPECIES_LOUDRED

sParty_GabbyAndTy6: @ 0x082DF21C
    @ TRAINER_GABBY_AND_TY_6 (id 56): マリとダイ ; flags=1, partySize=2
    trainer_mon_no_item_custom 250, 39, SPECIES_MAGNETON, MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND, MOVE_THUNDERBOLT
    trainer_mon_no_item_custom 250, 39, SPECIES_EXPLOUD, MOVE_ASTONISH, MOVE_STOMP, MOVE_SUPERSONIC, MOVE_HYPER_VOICE

sParty_Lola1: @ 0x082DF23C
    @ TRAINER_LOLA_1 (id 57): アユミ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 12, SPECIES_AZURILL
    trainer_mon_no_item_default 10, 12, SPECIES_AZURILL

sParty_Austina: @ 0x082DF24C
    @ TRAINER_AUSTINA (id 58): ヒロミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_MARILL

sParty_Gwen: @ 0x082DF254
    @ TRAINER_GWEN (id 59): ノゾミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_MARILL

sParty_Lola2: @ 0x082DF25C
    @ TRAINER_LOLA_2 (id 60): アユミ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 26, SPECIES_MARILL
    trainer_mon_no_item_default 10, 26, SPECIES_MARILL

sParty_Lola3: @ 0x082DF26C
    @ TRAINER_LOLA_3 (id 61): アユミ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 29, SPECIES_MARILL
    trainer_mon_no_item_default 20, 29, SPECIES_MARILL

sParty_Lola4: @ 0x082DF27C
    @ TRAINER_LOLA_4 (id 62): アユミ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 32, SPECIES_MARILL
    trainer_mon_no_item_default 30, 32, SPECIES_MARILL

sParty_Lola5: @ 0x082DF28C
    @ TRAINER_LOLA_5 (id 63): アユミ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 35, SPECIES_AZUMARILL
    trainer_mon_no_item_default 40, 35, SPECIES_AZUMARILL

sParty_Ricky1: @ 0x082DF29C
    @ TRAINER_RICKY_1 (id 64): ユウタ ; flags=1, partySize=1
    trainer_mon_no_item_custom 10, 13, SPECIES_ZIGZAGOON, MOVE_SAND_ATTACK, MOVE_HEADBUTT, MOVE_TAIL_WHIP, MOVE_SURF

sParty_Simon: @ 0x082DF2AC
    @ TRAINER_SIMON (id 65): ヤスノブ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 12, SPECIES_AZURILL
    trainer_mon_no_item_default 0, 12, SPECIES_MARILL

sParty_Charlie: @ 0x082DF2BC
    @ TRAINER_CHARLIE (id 66): マナブ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_MARILL

sParty_Ricky2: @ 0x082DF2C4
    @ TRAINER_RICKY_2 (id 67): ユウタ ; flags=1, partySize=1
    trainer_mon_no_item_custom 10, 27, SPECIES_LINOONE, MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF

sParty_Ricky3: @ 0x082DF2D4
    @ TRAINER_RICKY_3 (id 68): ユウタ ; flags=1, partySize=1
    trainer_mon_no_item_custom 20, 30, SPECIES_LINOONE, MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF

sParty_Ricky4: @ 0x082DF2E4
    @ TRAINER_RICKY_4 (id 69): ユウタ ; flags=1, partySize=1
    trainer_mon_no_item_custom 30, 33, SPECIES_LINOONE, MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF

sParty_Ricky5: @ 0x082DF2F4
    @ TRAINER_RICKY_5 (id 70): ユウタ ; flags=1, partySize=1
    trainer_mon_no_item_custom 40, 36, SPECIES_LINOONE, MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF

sParty_Randall: @ 0x082DF304
    @ TRAINER_RANDALL (id 71): トシキ ; flags=3, partySize=1
    trainer_mon_item_custom 255, 26, SPECIES_SWELLOW, ITEM_NONE, MOVE_QUICK_ATTACK, MOVE_AGILITY, MOVE_WING_ATTACK, MOVE_NONE

sParty_Parker: @ 0x082DF314
    @ TRAINER_PARKER (id 72): ヒデキ ; flags=3, partySize=1
    trainer_mon_item_custom 255, 26, SPECIES_SPINDA, ITEM_NONE, MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_FOCUS_PUNCH, MOVE_NONE

sParty_George: @ 0x082DF324
    @ TRAINER_GEORGE (id 73): カズマ ; flags=3, partySize=1
    trainer_mon_item_custom 255, 26, SPECIES_SLAKOTH, ITEM_SITRUS_BERRY, MOVE_SLACK_OFF, MOVE_COUNTER, MOVE_SHADOW_BALL, MOVE_NONE

sParty_Berke: @ 0x082DF334
    @ TRAINER_BERKE (id 74): ナオキ ; flags=3, partySize=1
    trainer_mon_item_custom 255, 26, SPECIES_VIGOROTH, ITEM_NONE, MOVE_FOCUS_ENERGY, MOVE_SLASH, MOVE_NONE, MOVE_NONE

sParty_Braxton: @ 0x082DF344
    @ TRAINER_BRAXTON (id 75): ヨシオ ; flags=1, partySize=5
    trainer_mon_no_item_custom 100, 28, SPECIES_SWELLOW, MOVE_FOCUS_ENERGY, MOVE_QUICK_ATTACK, MOVE_WING_ATTACK, MOVE_ENDEAVOR
    trainer_mon_no_item_custom 100, 28, SPECIES_TRAPINCH, MOVE_BITE, MOVE_DIG, MOVE_FAINT_ATTACK, MOVE_SAND_TOMB
    trainer_mon_no_item_custom 100, 28, SPECIES_WAILMER, MOVE_ROLLOUT, MOVE_WHIRLPOOL, MOVE_ASTONISH, MOVE_WATER_PULSE
    trainer_mon_no_item_custom 100, 28, SPECIES_MAGNETON, MOVE_THUNDERBOLT, MOVE_SUPERSONIC, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM
    trainer_mon_no_item_custom 100, 28, SPECIES_SHIFTRY, MOVE_GIGA_DRAIN, MOVE_FAINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_SWAGGER

sParty_Vincent: @ 0x082DF394
    @ TRAINER_VINCENT (id 76): ユウト ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 44, SPECIES_SABLEYE
    trainer_mon_no_item_default 100, 44, SPECIES_MEDICHAM
    trainer_mon_no_item_default 100, 44, SPECIES_SHARPEDO

sParty_Leroy: @ 0x082DF3AC
    @ TRAINER_LEROY (id 77): マコト ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 46, SPECIES_MAWILE
    trainer_mon_no_item_default 100, 46, SPECIES_STARMIE

sParty_Wilton1: @ 0x082DF3BC
    @ TRAINER_WILTON_1 (id 78): ユウスケ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 17, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 100, 17, SPECIES_WAILMER
    trainer_mon_no_item_default 100, 17, SPECIES_MAKUHITA

sParty_Edgar: @ 0x082DF3D4
    @ TRAINER_EDGAR (id 79): コウキ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 43, SPECIES_CACTURNE
    trainer_mon_no_item_default 100, 43, SPECIES_PELIPPER

sParty_Albert: @ 0x082DF3E4
    @ TRAINER_ALBERT (id 80): ショウ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 43, SPECIES_MAGNETON
    trainer_mon_no_item_default 100, 43, SPECIES_MUK

sParty_Samuel: @ 0x082DF3F4
    @ TRAINER_SAMUEL (id 81): タクヤ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 42, SPECIES_SWELLOW
    trainer_mon_no_item_default 100, 42, SPECIES_MAWILE
    trainer_mon_no_item_default 100, 42, SPECIES_KADABRA

sParty_Vito: @ 0x082DF40C
    @ TRAINER_VITO (id 82): リョウヘイ ; flags=0, partySize=4
    trainer_mon_no_item_default 100, 42, SPECIES_DODRIO
    trainer_mon_no_item_default 100, 42, SPECIES_KADABRA
    trainer_mon_no_item_default 100, 42, SPECIES_ELECTRODE
    trainer_mon_no_item_default 100, 42, SPECIES_SHIFTRY

sParty_Owen: @ 0x082DF42C
    @ TRAINER_OWEN (id 83): カケル ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 42, SPECIES_KECLEON
    trainer_mon_no_item_default 100, 42, SPECIES_GRAVELER
    trainer_mon_no_item_default 100, 42, SPECIES_WAILORD

sParty_Wilton2: @ 0x082DF444
    @ TRAINER_WILTON_2 (id 84): ユウスケ ; flags=0, partySize=3
    trainer_mon_no_item_default 110, 26, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 110, 26, SPECIES_WAILMER
    trainer_mon_no_item_default 110, 26, SPECIES_MAKUHITA

sParty_Wilton3: @ 0x082DF45C
    @ TRAINER_WILTON_3 (id 85): ユウスケ ; flags=0, partySize=3
    trainer_mon_no_item_default 120, 29, SPECIES_MANECTRIC
    trainer_mon_no_item_default 120, 29, SPECIES_WAILMER
    trainer_mon_no_item_default 120, 29, SPECIES_MAKUHITA

sParty_Wilton4: @ 0x082DF474
    @ TRAINER_WILTON_4 (id 86): ユウスケ ; flags=0, partySize=3
    trainer_mon_no_item_default 130, 32, SPECIES_MANECTRIC
    trainer_mon_no_item_default 130, 32, SPECIES_WAILMER
    trainer_mon_no_item_default 130, 32, SPECIES_MAKUHITA

sParty_Wilton5: @ 0x082DF48C
    @ TRAINER_WILTON_5 (id 87): ユウスケ ; flags=0, partySize=3
    trainer_mon_no_item_default 140, 35, SPECIES_MANECTRIC
    trainer_mon_no_item_default 140, 35, SPECIES_WAILMER
    trainer_mon_no_item_default 140, 35, SPECIES_HARIYAMA

sParty_Warren: @ 0x082DF4A4
    @ TRAINER_WARREN (id 88): レイジ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 33, SPECIES_GRAVELER
    trainer_mon_no_item_default 100, 33, SPECIES_LUDICOLO

sParty_Mary: @ 0x082DF4B4
    @ TRAINER_MARY (id 89): アヤカ ; flags=3, partySize=1
    trainer_mon_item_custom 255, 26, SPECIES_DELCATTY, ITEM_NONE, MOVE_FAINT_ATTACK, MOVE_SHOCK_WAVE, MOVE_NONE, MOVE_NONE

sParty_Alexia: @ 0x082DF4C4
    @ TRAINER_ALEXIA (id 90): ミハル ; flags=3, partySize=1
    trainer_mon_item_custom 255, 26, SPECIES_WIGGLYTUFF, ITEM_NONE, MOVE_DEFENSE_CURL, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_NONE

sParty_Jody: @ 0x082DF4D4
    @ TRAINER_JODY (id 91): サオリ ; flags=3, partySize=1
    trainer_mon_item_custom 255, 26, SPECIES_ZANGOOSE, ITEM_NONE, MOVE_SWORDS_DANCE, MOVE_SLASH, MOVE_NONE, MOVE_NONE

sParty_Wendy: @ 0x082DF4E4
    @ TRAINER_WENDY (id 92): セツナ ; flags=1, partySize=3
    trainer_mon_no_item_custom 100, 29, SPECIES_MAWILE, MOVE_BATON_PASS, MOVE_FAINT_ATTACK, MOVE_FAKE_TEARS, MOVE_BITE
    trainer_mon_no_item_custom 100, 29, SPECIES_ROSELIA, MOVE_MEGA_DRAIN, MOVE_MAGICAL_LEAF, MOVE_GRASS_WHISTLE, MOVE_LEECH_SEED
    trainer_mon_no_item_custom 100, 29, SPECIES_PELIPPER, MOVE_FLY, MOVE_WATER_GUN, MOVE_MIST, MOVE_PROTECT

sParty_Keira: @ 0x082DF514
    @ TRAINER_KEIRA (id 93): アイナ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 45, SPECIES_LAIRON
    trainer_mon_no_item_default 100, 45, SPECIES_MANECTRIC

sParty_Brooke1: @ 0x082DF524
    @ TRAINER_BROOKE_1 (id 94): マリア ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 17, SPECIES_WINGULL
    trainer_mon_no_item_default 100, 17, SPECIES_NUMEL
    trainer_mon_no_item_default 100, 17, SPECIES_ROSELIA

sParty_Jennifer: @ 0x082DF53C
    @ TRAINER_JENNIFER (id 95): ヤエコ ; flags=0, partySize=1
    trainer_mon_no_item_default 200, 30, SPECIES_SABLEYE

sParty_Hope: @ 0x082DF544
    @ TRAINER_HOPE (id 96): アイリ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 45, SPECIES_ROSELIA

sParty_Shannon: @ 0x082DF54C
    @ TRAINER_SHANNON (id 97): エリコ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 45, SPECIES_CLAYDOL

sParty_Michelle: @ 0x082DF554
    @ TRAINER_MICHELLE (id 98): カズミ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 42, SPECIES_TORKOAL
    trainer_mon_no_item_default 100, 42, SPECIES_MEDICHAM
    trainer_mon_no_item_default 100, 42, SPECIES_LUDICOLO

sParty_Caroline: @ 0x082DF56C
    @ TRAINER_CAROLINE (id 99): コトミ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 43, SPECIES_SKARMORY
    trainer_mon_no_item_default 100, 43, SPECIES_SABLEYE

sParty_Julie: @ 0x082DF57C
    @ TRAINER_JULIE (id 100): ヒヅキ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 42, SPECIES_SANDSLASH
    trainer_mon_no_item_default 100, 42, SPECIES_NINETALES
    trainer_mon_no_item_default 100, 42, SPECIES_TROPIUS

sParty_Brooke2: @ 0x082DF594
    @ TRAINER_BROOKE_2 (id 101): マリア ; flags=0, partySize=3
    trainer_mon_no_item_default 110, 26, SPECIES_WINGULL
    trainer_mon_no_item_default 110, 26, SPECIES_NUMEL
    trainer_mon_no_item_default 110, 26, SPECIES_ROSELIA

sParty_Brooke3: @ 0x082DF5AC
    @ TRAINER_BROOKE_3 (id 102): マリア ; flags=0, partySize=3
    trainer_mon_no_item_default 120, 29, SPECIES_PELIPPER
    trainer_mon_no_item_default 120, 29, SPECIES_NUMEL
    trainer_mon_no_item_default 120, 29, SPECIES_ROSELIA

sParty_Brooke4: @ 0x082DF5C4
    @ TRAINER_BROOKE_4 (id 103): マリア ; flags=0, partySize=3
    trainer_mon_no_item_default 130, 32, SPECIES_PELIPPER
    trainer_mon_no_item_default 130, 32, SPECIES_NUMEL
    trainer_mon_no_item_default 130, 32, SPECIES_ROSELIA

sParty_Brooke5: @ 0x082DF5DC
    @ TRAINER_BROOKE_5 (id 104): マリア ; flags=0, partySize=3
    trainer_mon_no_item_default 140, 34, SPECIES_PELIPPER
    trainer_mon_no_item_default 140, 34, SPECIES_CAMERUPT
    trainer_mon_no_item_default 140, 34, SPECIES_ROSELIA

sParty_Patricia: @ 0x082DF5F4
    @ TRAINER_PATRICIA (id 105): コトネ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 41, SPECIES_BANETTE
    trainer_mon_no_item_default 0, 41, SPECIES_LUNATONE

sParty_Kindra: @ 0x082DF604
    @ TRAINER_KINDRA (id 106): サチコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 30, SPECIES_DUSKULL
    trainer_mon_no_item_default 0, 30, SPECIES_SHUPPET

sParty_Tammy: @ 0x082DF614
    @ TRAINER_TAMMY (id 107): ミコト ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 29, SPECIES_DUSKULL
    trainer_mon_no_item_default 0, 29, SPECIES_SHUPPET

sParty_Valerie1: @ 0x082DF624
    @ TRAINER_VALERIE_1 (id 108): ホノカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_SABLEYE

sParty_Tasha: @ 0x082DF62C
    @ TRAINER_TASHA (id 109): ホタル ; flags=0, partySize=1
    trainer_mon_no_item_default 50, 32, SPECIES_SHUPPET

sParty_Valerie2: @ 0x082DF634
    @ TRAINER_VALERIE_2 (id 110): ホノカ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 31, SPECIES_SABLEYE
    trainer_mon_no_item_default 10, 31, SPECIES_SPOINK

sParty_Valerie3: @ 0x082DF644
    @ TRAINER_VALERIE_3 (id 111): ホノカ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 35, SPECIES_SPOINK
    trainer_mon_no_item_default 20, 35, SPECIES_SABLEYE

sParty_Valerie4: @ 0x082DF654
    @ TRAINER_VALERIE_4 (id 112): ホノカ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 40, SPECIES_SPOINK
    trainer_mon_no_item_default 30, 40, SPECIES_SABLEYE

sParty_Valerie5: @ 0x082DF664
    @ TRAINER_VALERIE_5 (id 113): ホノカ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 42, SPECIES_DUSKULL
    trainer_mon_no_item_default 40, 42, SPECIES_SABLEYE
    trainer_mon_no_item_default 40, 42, SPECIES_GRUMPIG

sParty_Cindy1: @ 0x082DF67C
    @ TRAINER_CINDY_1 (id 114): レイカ ; flags=2, partySize=1
    trainer_mon_item_default 0, 7, SPECIES_ZIGZAGOON, ITEM_NUGGET

sParty_Daphne: @ 0x082DF684
    @ TRAINER_DAPHNE (id 115): エイカ ; flags=3, partySize=2
    trainer_mon_item_custom 100, 39, SPECIES_LUVDISC, ITEM_NUGGET, MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL, MOVE_WATER_PULSE
    trainer_mon_item_custom 100, 39, SPECIES_LUVDISC, ITEM_NUGGET, MOVE_ATTRACT, MOVE_SAFEGUARD, MOVE_TAKE_DOWN, MOVE_WATER_PULSE

sParty_GruntSpaceCenter2: @ 0x082DF6A4
    @ TRAINER_GRUNT_SPACE_CENTER_2 (id 116): したっぱ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 26, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 0, 28, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 0, 30, SPECIES_NUMEL

sParty_Cindy2: @ 0x082DF6BC
    @ TRAINER_CINDY_2 (id 117): レイカ ; flags=3, partySize=1
    trainer_mon_item_custom 0, 11, SPECIES_ZIGZAGOON, ITEM_NUGGET, MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE

sParty_Brianna: @ 0x082DF6CC
    @ TRAINER_BRIANNA (id 118): シオリ ; flags=2, partySize=1
    trainer_mon_item_default 150, 40, SPECIES_SEAKING, ITEM_NUGGET

sParty_Naomi: @ 0x082DF6D4
    @ TRAINER_NAOMI (id 119): カナコ ; flags=2, partySize=1
    trainer_mon_item_default 100, 45, SPECIES_ROSELIA, ITEM_NUGGET

sParty_Cindy3: @ 0x082DF6DC
    @ TRAINER_CINDY_3 (id 120): レイカ ; flags=2, partySize=1
    trainer_mon_item_default 10, 27, SPECIES_LINOONE, ITEM_NUGGET

sParty_Cindy4: @ 0x082DF6E4
    @ TRAINER_CINDY_4 (id 121): レイカ ; flags=2, partySize=1
    trainer_mon_item_default 20, 30, SPECIES_LINOONE, ITEM_NUGGET

sParty_Cindy5: @ 0x082DF6EC
    @ TRAINER_CINDY_5 (id 122): レイカ ; flags=2, partySize=1
    trainer_mon_item_default 30, 33, SPECIES_LINOONE, ITEM_NUGGET

sParty_Cindy6: @ 0x082DF6F4
    @ TRAINER_CINDY_6 (id 123): レイカ ; flags=3, partySize=1
    trainer_mon_item_custom 40, 36, SPECIES_LINOONE, ITEM_NUGGET, MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK

sParty_Melissa: @ 0x082DF704
    @ TRAINER_MELISSA (id 124): メグミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 21, SPECIES_MARILL

sParty_Sheila: @ 0x082DF70C
    @ TRAINER_SHEILA (id 125): クニミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 21, SPECIES_SHROOMISH

sParty_Shirley: @ 0x082DF714
    @ TRAINER_SHIRLEY (id 126): アサミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 21, SPECIES_NUMEL

sParty_Jessica1: @ 0x082DF71C
    @ TRAINER_JESSICA_1 (id 127): ヨリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 29, SPECIES_KECLEON, MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 0, 29, SPECIES_SEVIPER, MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH

sParty_Connie: @ 0x082DF73C
    @ TRAINER_CONNIE (id 128): マユコ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 40, SPECIES_GOLDEEN

sParty_Bridget: @ 0x082DF744
    @ TRAINER_BRIDGET (id 129): セイコ ; flags=0, partySize=1
    trainer_mon_no_item_default 150, 40, SPECIES_AZUMARILL

sParty_Olivia: @ 0x082DF74C
    @ TRAINER_OLIVIA (id 130): ナオコ ; flags=1, partySize=3
    trainer_mon_no_item_custom 100, 35, SPECIES_CLAMPERL, MOVE_IRON_DEFENSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_WATER_PULSE
    trainer_mon_no_item_custom 100, 37, SPECIES_CORPHISH, MOVE_TAUNT, MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_NONE
    trainer_mon_no_item_custom 100, 39, SPECIES_LOMBRE, MOVE_UPROAR, MOVE_FURY_SWIPES, MOVE_FAKE_OUT, MOVE_WATER_PULSE

sParty_Tiffany: @ 0x082DF77C
    @ TRAINER_TIFFANY (id 131): ハルコ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 39, SPECIES_CARVANHA
    trainer_mon_no_item_default 100, 39, SPECIES_SHARPEDO

sParty_Jessica2: @ 0x082DF78C
    @ TRAINER_JESSICA_2 (id 132): ヨリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 10, 35, SPECIES_KECLEON, MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 10, 35, SPECIES_SEVIPER, MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH

sParty_Jessica3: @ 0x082DF7AC
    @ TRAINER_JESSICA_3 (id 133): ヨリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 20, 38, SPECIES_KECLEON, MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 20, 38, SPECIES_SEVIPER, MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH

sParty_Jessica4: @ 0x082DF7CC
    @ TRAINER_JESSICA_4 (id 134): ヨリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 30, 41, SPECIES_KECLEON, MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 30, 41, SPECIES_SEVIPER, MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH

sParty_Jessica5: @ 0x082DF7EC
    @ TRAINER_JESSICA_5 (id 135): ヨリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 40, 44, SPECIES_KECLEON, MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 40, 44, SPECIES_SEVIPER, MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH

sParty_Winston1: @ 0x082DF80C
    @ TRAINER_WINSTON_1 (id 136): ミツグ ; flags=2, partySize=1
    trainer_mon_item_default 0, 7, SPECIES_ZIGZAGOON, ITEM_NUGGET

sParty_Mollie: @ 0x082DF814
    @ TRAINER_MOLLIE (id 137): ナエ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_WHISCASH
    trainer_mon_no_item_default 200, 33, SPECIES_MEDITITE

sParty_Garret: @ 0x082DF824
    @ TRAINER_GARRET (id 138): ショウイチ ; flags=2, partySize=1
    trainer_mon_item_default 0, 45, SPECIES_AZUMARILL, ITEM_NUGGET

sParty_Winston2: @ 0x082DF82C
    @ TRAINER_WINSTON_2 (id 139): ミツグ ; flags=2, partySize=1
    trainer_mon_item_default 0, 27, SPECIES_LINOONE, ITEM_NUGGET

sParty_Winston3: @ 0x082DF834
    @ TRAINER_WINSTON_3 (id 140): ミツグ ; flags=2, partySize=1
    trainer_mon_item_default 0, 30, SPECIES_LINOONE, ITEM_NUGGET

sParty_Winston4: @ 0x082DF83C
    @ TRAINER_WINSTON_4 (id 141): ミツグ ; flags=2, partySize=1
    trainer_mon_item_default 0, 33, SPECIES_LINOONE, ITEM_NUGGET

sParty_Winston5: @ 0x082DF844
    @ TRAINER_WINSTON_5 (id 142): ミツグ ; flags=3, partySize=1
    trainer_mon_item_custom 0, 36, SPECIES_LINOONE, ITEM_NUGGET, MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK

sParty_Steve1: @ 0x082DF854
    @ TRAINER_STEVE_1 (id 143): トシオ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 19, SPECIES_ARON

sParty_Thalia1: @ 0x082DF85C
    @ TRAINER_THALIA_1 (id 144): ショウ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_WAILMER
    trainer_mon_no_item_default 0, 25, SPECIES_HORSEA

sParty_Mark: @ 0x082DF86C
    @ TRAINER_MARK (id 145): モトフミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 31, SPECIES_RHYHORN

sParty_GruntMtChimney1: @ 0x082DF874
    @ TRAINER_GRUNT_MT_CHIMNEY_1 (id 146): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 20, SPECIES_NUMEL

sParty_Steve2: @ 0x082DF87C
    @ TRAINER_STEVE_2 (id 147): トシオ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 27, SPECIES_LAIRON

sParty_Steve3: @ 0x082DF884
    @ TRAINER_STEVE_3 (id 148): トシオ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 29, SPECIES_LAIRON
    trainer_mon_no_item_default 20, 29, SPECIES_RHYHORN

sParty_Steve4: @ 0x082DF894
    @ TRAINER_STEVE_4 (id 149): トシオ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 32, SPECIES_LAIRON
    trainer_mon_no_item_default 30, 32, SPECIES_RHYHORN

sParty_Steve5: @ 0x082DF8A4
    @ TRAINER_STEVE_5 (id 150): トシオ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 35, SPECIES_AGGRON
    trainer_mon_no_item_default 40, 35, SPECIES_RHYDON

sParty_Luis: @ 0x082DF8B4
    @ TRAINER_LUIS (id 151): ヨウヘイ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_CARVANHA

sParty_Dominik: @ 0x082DF8BC
    @ TRAINER_DOMINIK (id 152): ヒロミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_TENTACOOL

sParty_Douglas: @ 0x082DF8C4
    @ TRAINER_DOUGLAS (id 153): タツオ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 24, SPECIES_TENTACOOL
    trainer_mon_no_item_default 10, 24, SPECIES_TENTACOOL

sParty_Darrin: @ 0x082DF8D4
    @ TRAINER_DARRIN (id 154): テルユキ ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 24, SPECIES_TENTACOOL
    trainer_mon_no_item_default 10, 24, SPECIES_WINGULL
    trainer_mon_no_item_default 10, 24, SPECIES_TENTACOOL

sParty_Tony1: @ 0x082DF8EC
    @ TRAINER_TONY_1 (id 155): エイイチ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_CARVANHA

sParty_Jerome: @ 0x082DF8F4
    @ TRAINER_JEROME (id 156): モリオ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_TENTACRUEL

sParty_Matthew: @ 0x082DF8FC
    @ TRAINER_MATTHEW (id 157): クニヒコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_CARVANHA

sParty_David: @ 0x082DF904
    @ TRAINER_DAVID (id 158): ケンイチ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 25, SPECIES_CARVANHA

sParty_Spencer: @ 0x082DF914
    @ TRAINER_SPENCER (id 159): トシヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 33, SPECIES_WINGULL

sParty_Roland: @ 0x082DF924
    @ TRAINER_ROLAND (id 160): マサトシ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_CARVANHA

sParty_Nolen: @ 0x082DF92C
    @ TRAINER_NOLEN (id 161): シノブ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_TENTACRUEL

sParty_Stan: @ 0x082DF934
    @ TRAINER_STAN (id 162): ケイシ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_HORSEA

sParty_Barry: @ 0x082DF93C
    @ TRAINER_BARRY (id 163): ガクジ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_GYARADOS

sParty_Dean: @ 0x082DF944
    @ TRAINER_DEAN (id 164): レツジ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 31, SPECIES_CARVANHA
    trainer_mon_no_item_default 0, 31, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 31, SPECIES_CARVANHA

sParty_Rodney: @ 0x082DF95C
    @ TRAINER_RODNEY (id 165): マサヒロ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_GYARADOS

sParty_Richard: @ 0x082DF964
    @ TRAINER_RICHARD (id 166): ハルキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_PELIPPER

sParty_Herman: @ 0x082DF96C
    @ TRAINER_HERMAN (id 167): ダイスケ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 33, SPECIES_TENTACRUEL

sParty_Santiago: @ 0x082DF97C
    @ TRAINER_SANTIAGO (id 168): シンジ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_TENTACRUEL
    trainer_mon_no_item_default 0, 33, SPECIES_WAILMER

sParty_Gilbert: @ 0x082DF98C
    @ TRAINER_GILBERT (id 169): ゴウ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_SHARPEDO

sParty_Franklin: @ 0x082DF994
    @ TRAINER_FRANKLIN (id 170): シゲオ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_SEALEO

sParty_Kevin: @ 0x082DF99C
    @ TRAINER_KEVIN (id 171): ツトム ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_SPHEAL

sParty_Jack: @ 0x082DF9A4
    @ TRAINER_JACK (id 172): ヒデノリ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_GYARADOS

sParty_Dudley: @ 0x082DF9AC
    @ TRAINER_DUDLEY (id 173): トクオ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 33, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 33, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 33, SPECIES_TENTACRUEL

sParty_Chad: @ 0x082DF9C4
    @ TRAINER_CHAD (id 174): カツユキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 33, SPECIES_WAILMER

sParty_Tony2: @ 0x082DF9D4
    @ TRAINER_TONY_2 (id 175): エイイチ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 30, SPECIES_SHARPEDO

sParty_Tony3: @ 0x082DF9DC
    @ TRAINER_TONY_3 (id 176): エイイチ ; flags=0, partySize=1
    trainer_mon_no_item_default 20, 33, SPECIES_SHARPEDO

sParty_Tony4: @ 0x082DF9E4
    @ TRAINER_TONY_4 (id 177): エイイチ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 34, SPECIES_STARYU
    trainer_mon_no_item_default 30, 36, SPECIES_SHARPEDO

sParty_Tony5: @ 0x082DF9F4
    @ TRAINER_TONY_5 (id 178): エイイチ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 37, SPECIES_STARMIE
    trainer_mon_no_item_default 40, 39, SPECIES_SHARPEDO

sParty_Takao: @ 0x082DFA04
    @ TRAINER_TAKAO (id 179): タイケイ ; flags=0, partySize=1
    trainer_mon_no_item_default 127, 13, SPECIES_MACHOP

sParty_Hitoshi: @ 0x082DFA0C
    @ TRAINER_HITOSHI (id 180): イワオ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 32, SPECIES_MACHOP
    trainer_mon_no_item_default 200, 32, SPECIES_MACHOKE

sParty_Kiyo: @ 0x082DFA1C
    @ TRAINER_KIYO (id 181): タクマ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 34, SPECIES_HARIYAMA

sParty_Koichi: @ 0x082DFA24
    @ TRAINER_KOICHI (id 182): タケノリ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 24, SPECIES_MACHOP
    trainer_mon_no_item_default 150, 28, SPECIES_MACHOKE

sParty_Nob1: @ 0x082DFA34
    @ TRAINER_NOB_1 (id 183): ゴロウ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 19, SPECIES_MACHOP

sParty_Nob2: @ 0x082DFA3C
    @ TRAINER_NOB_2 (id 184): ゴロウ ; flags=0, partySize=1
    trainer_mon_no_item_default 110, 27, SPECIES_MACHOKE

sParty_Nob3: @ 0x082DFA44
    @ TRAINER_NOB_3 (id 185): ゴロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 120, 29, SPECIES_MACHOP
    trainer_mon_no_item_default 120, 29, SPECIES_MACHOKE

sParty_Nob4: @ 0x082DFA54
    @ TRAINER_NOB_4 (id 186): ゴロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 130, 31, SPECIES_MACHOP
    trainer_mon_no_item_default 130, 31, SPECIES_MACHOKE
    trainer_mon_no_item_default 130, 31, SPECIES_MACHOKE

sParty_Nob5: @ 0x082DFA6C
    @ TRAINER_NOB_5 (id 187): ゴロウ ; flags=2, partySize=4
    trainer_mon_item_default 140, 33, SPECIES_MACHOP, ITEM_NONE
    trainer_mon_item_default 140, 33, SPECIES_MACHOKE, ITEM_NONE
    trainer_mon_item_default 140, 33, SPECIES_MACHOKE, ITEM_NONE
    trainer_mon_item_default 140, 33, SPECIES_MACHAMP, ITEM_BLACK_BELT

sParty_Yuji: @ 0x082DFA8C
    @ TRAINER_YUJI (id 188): カズシ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 26, SPECIES_MAKUHITA
    trainer_mon_no_item_default 100, 26, SPECIES_MACHOKE

sParty_Daisuke: @ 0x082DFA9C
    @ TRAINER_DAISUKE (id 189): タダシ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 19, SPECIES_MACHOP

sParty_Atsushi: @ 0x082DFAA4
    @ TRAINER_ATSUSHI (id 190): テツヒサ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 32, SPECIES_HARIYAMA

sParty_Kirk: @ 0x082DFAAC
    @ TRAINER_KIRK (id 191): ジョージ ; flags=1, partySize=2
    trainer_mon_no_item_custom 100, 17, SPECIES_ELECTRIKE, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_SPARK, MOVE_LEER
    trainer_mon_no_item_custom 100, 17, SPECIES_VOLTORB, MOVE_CHARGE, MOVE_SHOCK_WAVE, MOVE_SCREECH, MOVE_NONE

sParty_GruntAquaHideout7: @ 0x082DFACC
    @ TRAINER_GRUNT_AQUA_HIDEOUT_7 (id 192): したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 31, SPECIES_POOCHYENA
    trainer_mon_no_item_default 0, 31, SPECIES_ZUBAT

sParty_GruntAquaHideout8: @ 0x082DFADC
    @ TRAINER_GRUNT_AQUA_HIDEOUT_8 (id 193): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_CARVANHA

sParty_Shawn: @ 0x082DFAE4
    @ TRAINER_SHAWN (id 194): マイク ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 17, SPECIES_VOLTORB
    trainer_mon_no_item_default 100, 17, SPECIES_MAGNEMITE

sParty_Fernando1: @ 0x082DFAF4
    @ TRAINER_FERNANDO_1 (id 195): ジョー ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 30, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 0, 30, SPECIES_LOUDRED

sParty_Dalton1: @ 0x082DFB04
    @ TRAINER_DALTON_1 (id 196): テリー ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 15, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 0, 15, SPECIES_WHISMUR

sParty_Dalton2: @ 0x082DFB14
    @ TRAINER_DALTON_2 (id 197): テリー ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 25, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 10, 25, SPECIES_WHISMUR
    trainer_mon_no_item_default 10, 25, SPECIES_MAGNEMITE

sParty_Dalton3: @ 0x082DFB2C
    @ TRAINER_DALTON_3 (id 198): テリー ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 28, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 20, 28, SPECIES_LOUDRED
    trainer_mon_no_item_default 20, 28, SPECIES_MAGNEMITE

sParty_Dalton4: @ 0x082DFB44
    @ TRAINER_DALTON_4 (id 199): テリー ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 31, SPECIES_MAGNETON
    trainer_mon_no_item_default 30, 31, SPECIES_LOUDRED
    trainer_mon_no_item_default 30, 31, SPECIES_MAGNETON

sParty_Dalton5: @ 0x082DFB5C
    @ TRAINER_DALTON_5 (id 200): テリー ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 34, SPECIES_MAGNETON
    trainer_mon_no_item_default 40, 34, SPECIES_EXPLOUD
    trainer_mon_no_item_default 40, 34, SPECIES_MAGNETON

sParty_Cole: @ 0x082DFB74
    @ TRAINER_COLE (id 201): アキラ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 23, SPECIES_NUMEL

sParty_Jeff: @ 0x082DFB7C
    @ TRAINER_JEFF (id 202): コウタ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 22, SPECIES_SLUGMA
    trainer_mon_no_item_default 100, 22, SPECIES_SLUGMA

sParty_Axle: @ 0x082DFB8C
    @ TRAINER_AXLE (id 203): タモツ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 23, SPECIES_NUMEL

sParty_Jace: @ 0x082DFB94
    @ TRAINER_JACE (id 204): ジュンジ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 23, SPECIES_SLUGMA

sParty_Keegan: @ 0x082DFB9C
    @ TRAINER_KEEGAN (id 205): タカハル ; flags=0, partySize=1
    trainer_mon_no_item_default 120, 23, SPECIES_SLUGMA

sParty_Bernie1: @ 0x082DFBA4
    @ TRAINER_BERNIE_1 (id 206): ノブヒコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_SLUGMA
    trainer_mon_no_item_default 0, 18, SPECIES_WINGULL

sParty_Bernie2: @ 0x082DFBB4
    @ TRAINER_BERNIE_2 (id 207): ノブヒコ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 26, SPECIES_SLUGMA
    trainer_mon_no_item_default 10, 26, SPECIES_WINGULL

sParty_Bernie3: @ 0x082DFBC4
    @ TRAINER_BERNIE_3 (id 208): ノブヒコ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 29, SPECIES_SLUGMA
    trainer_mon_no_item_default 20, 29, SPECIES_PELIPPER

sParty_Bernie4: @ 0x082DFBD4
    @ TRAINER_BERNIE_4 (id 209): ノブヒコ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 32, SPECIES_SLUGMA
    trainer_mon_no_item_default 30, 32, SPECIES_PELIPPER

sParty_Bernie5: @ 0x082DFBE4
    @ TRAINER_BERNIE_5 (id 210): ノブヒコ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 35, SPECIES_MAGCARGO
    trainer_mon_no_item_default 40, 35, SPECIES_PELIPPER

sParty_Drew: @ 0x082DFBF4
    @ TRAINER_DREW (id 211): ノリヒロ ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 23, SPECIES_SANDSHREW, MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH

sParty_Beau: @ 0x082DFC04
    @ TRAINER_BEAU (id 212): カズユキ ; flags=1, partySize=3
    trainer_mon_no_item_custom 0, 21, SPECIES_BALTOY, MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB
    trainer_mon_no_item_custom 0, 21, SPECIES_SANDSHREW, MOVE_POISON_STING, MOVE_SAND_ATTACK, MOVE_SCRATCH, MOVE_DIG
    trainer_mon_no_item_custom 0, 21, SPECIES_BALTOY, MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB

sParty_Larry: @ 0x082DFC34
    @ TRAINER_LARRY (id 213): キヨフミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 18, SPECIES_NUZLEAF

sParty_Shane: @ 0x082DFC3C
    @ TRAINER_SHANE (id 214): トモヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_SANDSHREW
    trainer_mon_no_item_default 0, 18, SPECIES_NUZLEAF

sParty_Justin: @ 0x082DFC4C
    @ TRAINER_JUSTIN (id 215): マサミチ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 24, SPECIES_KECLEON

sParty_Ethan1: @ 0x082DFC54
    @ TRAINER_ETHAN_1 (id 216): ヨシハル ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 20, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 20, SPECIES_TAILLOW

sParty_Autumn: @ 0x082DFC64
    @ TRAINER_AUTUMN (id 217): ナツコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 21, SPECIES_SHROOMISH

sParty_Travis: @ 0x082DFC6C
    @ TRAINER_TRAVIS (id 218): ヨシヤ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 18, SPECIES_SANDSHREW

sParty_Ethan2: @ 0x082DFC74
    @ TRAINER_ETHAN_2 (id 219): ヨシハル ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 26, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 10, 26, SPECIES_TAILLOW

sParty_Ethan3: @ 0x082DFC84
    @ TRAINER_ETHAN_3 (id 220): ヨシハル ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 29, SPECIES_LINOONE
    trainer_mon_no_item_default 20, 29, SPECIES_SWELLOW

sParty_Ethan4: @ 0x082DFC94
    @ TRAINER_ETHAN_4 (id 221): ヨシハル ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 31, SPECIES_SANDSHREW
    trainer_mon_no_item_default 30, 31, SPECIES_SWELLOW
    trainer_mon_no_item_default 30, 31, SPECIES_LINOONE

sParty_Ethan5: @ 0x082DFCAC
    @ TRAINER_ETHAN_5 (id 222): ヨシハル ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 34, SPECIES_SWELLOW
    trainer_mon_no_item_default 40, 34, SPECIES_SANDSLASH
    trainer_mon_no_item_default 40, 34, SPECIES_LINOONE

sParty_Brent: @ 0x082DFCC4
    @ TRAINER_BRENT (id 223): ヨウイチ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 26, SPECIES_SURSKIT

sParty_Donald: @ 0x082DFCCC
    @ TRAINER_DONALD (id 224): イクミ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 24, SPECIES_WURMPLE
    trainer_mon_no_item_default 100, 24, SPECIES_SILCOON
    trainer_mon_no_item_default 100, 24, SPECIES_BEAUTIFLY

sParty_Taylor: @ 0x082DFCE4
    @ TRAINER_TAYLOR (id 225): ソウスケ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 27, SPECIES_WURMPLE
    trainer_mon_no_item_default 100, 27, SPECIES_CASCOON
    trainer_mon_no_item_default 100, 27, SPECIES_DUSTOX

sParty_Jeffrey1: @ 0x082DFCFC
    @ TRAINER_JEFFREY_1 (id 226): ミキオ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 27, SPECIES_SURSKIT
    trainer_mon_no_item_default 0, 27, SPECIES_SURSKIT
    trainer_mon_no_item_default 0, 27, SPECIES_SURSKIT

sParty_Derek: @ 0x082DFD14
    @ TRAINER_DEREK (id 227): ヨシアキ ; flags=0, partySize=2
    trainer_mon_no_item_default 150, 16, SPECIES_DUSTOX
    trainer_mon_no_item_default 150, 16, SPECIES_BEAUTIFLY

sParty_Jeffrey2: @ 0x082DFD24
    @ TRAINER_JEFFREY_2 (id 228): ミキオ ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 31, SPECIES_SURSKIT
    trainer_mon_no_item_default 10, 31, SPECIES_SURSKIT
    trainer_mon_no_item_default 10, 31, SPECIES_SURSKIT

sParty_Jeffrey3: @ 0x082DFD3C
    @ TRAINER_JEFFREY_3 (id 229): ミキオ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 34, SPECIES_SURSKIT
    trainer_mon_no_item_default 20, 34, SPECIES_SURSKIT
    trainer_mon_no_item_default 20, 34, SPECIES_MASQUERAIN

sParty_Jeffrey4: @ 0x082DFD54
    @ TRAINER_JEFFREY_4 (id 230): ミキオ ; flags=0, partySize=4
    trainer_mon_no_item_default 30, 36, SPECIES_SURSKIT
    trainer_mon_no_item_default 30, 36, SPECIES_WURMPLE
    trainer_mon_no_item_default 30, 36, SPECIES_SURSKIT
    trainer_mon_no_item_default 30, 36, SPECIES_MASQUERAIN

sParty_Jeffrey5: @ 0x082DFD74
    @ TRAINER_JEFFREY_5 (id 231): ミキオ ; flags=2, partySize=5
    trainer_mon_item_default 40, 38, SPECIES_SURSKIT, ITEM_NONE
    trainer_mon_item_default 40, 38, SPECIES_DUSTOX, ITEM_NONE
    trainer_mon_item_default 40, 38, SPECIES_SURSKIT, ITEM_NONE
    trainer_mon_item_default 40, 38, SPECIES_MASQUERAIN, ITEM_SILVER_POWDER
    trainer_mon_item_default 40, 38, SPECIES_BEAUTIFLY, ITEM_NONE

sParty_Edward: @ 0x082DFD9C
    @ TRAINER_EDWARD (id 232): アキト ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 15, SPECIES_ABRA, MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE

sParty_Preston: @ 0x082DFDAC
    @ TRAINER_PRESTON (id 233): ヒロム ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_KIRLIA

sParty_Virgil: @ 0x082DFDB4
    @ TRAINER_VIRGIL (id 234): ユウヤ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_RALTS

sParty_Blake: @ 0x082DFDBC
    @ TRAINER_BLAKE (id 235): サトキ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_GIRAFARIG

sParty_William: @ 0x082DFDC4
    @ TRAINER_WILLIAM (id 236): テツヤ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 26, SPECIES_RALTS
    trainer_mon_no_item_default 0, 26, SPECIES_RALTS
    trainer_mon_no_item_default 0, 26, SPECIES_KIRLIA

sParty_Joshua: @ 0x082DFDDC
    @ TRAINER_JOSHUA (id 237): シュウイチ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 41, SPECIES_KADABRA
    trainer_mon_no_item_default 0, 41, SPECIES_SOLROCK

sParty_Cameron1: @ 0x082DFDEC
    @ TRAINER_CAMERON_1 (id 238): カオル ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 31, SPECIES_SOLROCK

sParty_Cameron2: @ 0x082DFDF4
    @ TRAINER_CAMERON_2 (id 239): カオル ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 33, SPECIES_KADABRA
    trainer_mon_no_item_default 10, 33, SPECIES_SOLROCK

sParty_Cameron3: @ 0x082DFE04
    @ TRAINER_CAMERON_3 (id 240): カオル ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 38, SPECIES_KADABRA
    trainer_mon_no_item_default 20, 38, SPECIES_SOLROCK

sParty_Cameron4: @ 0x082DFE14
    @ TRAINER_CAMERON_4 (id 241): カオル ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 41, SPECIES_KADABRA
    trainer_mon_no_item_default 30, 41, SPECIES_SOLROCK

sParty_Cameron5: @ 0x082DFE24
    @ TRAINER_CAMERON_5 (id 242): カオル ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 45, SPECIES_SOLROCK
    trainer_mon_no_item_default 40, 45, SPECIES_ALAKAZAM

sParty_Jaclyn: @ 0x082DFE34
    @ TRAINER_JACLYN (id 243): マリコ ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 16, SPECIES_ABRA, MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE

sParty_Hannah: @ 0x082DFE44
    @ TRAINER_HANNAH (id 244): アスカ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_KIRLIA

sParty_Samantha: @ 0x082DFE4C
    @ TRAINER_SAMANTHA (id 245): ミライ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_XATU

sParty_Maura: @ 0x082DFE54
    @ TRAINER_MAURA (id 246): ヒカリ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_KADABRA

sParty_Kayla: @ 0x082DFE5C
    @ TRAINER_KAYLA (id 247): オリエ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 26, SPECIES_WOBBUFFET
    trainer_mon_no_item_default 0, 26, SPECIES_NATU
    trainer_mon_no_item_default 0, 26, SPECIES_KADABRA

sParty_Alexis: @ 0x082DFE74
    @ TRAINER_ALEXIS (id 248): ナナコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 41, SPECIES_KIRLIA
    trainer_mon_no_item_default 0, 41, SPECIES_XATU

sParty_Jacki1: @ 0x082DFE84
    @ TRAINER_JACKI_1 (id 249): シホミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 30, SPECIES_KADABRA
    trainer_mon_no_item_default 0, 30, SPECIES_LUNATONE

sParty_Jacki2: @ 0x082DFE94
    @ TRAINER_JACKI_2 (id 250): シホミ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 34, SPECIES_KADABRA
    trainer_mon_no_item_default 10, 34, SPECIES_LUNATONE

sParty_Jacki3: @ 0x082DFEA4
    @ TRAINER_JACKI_3 (id 251): シホミ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 37, SPECIES_KADABRA
    trainer_mon_no_item_default 20, 37, SPECIES_LUNATONE

sParty_Jacki4: @ 0x082DFEB4
    @ TRAINER_JACKI_4 (id 252): シホミ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 40, SPECIES_KADABRA
    trainer_mon_no_item_default 30, 40, SPECIES_LUNATONE

sParty_Jacki5: @ 0x082DFEC4
    @ TRAINER_JACKI_5 (id 253): シホミ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 43, SPECIES_LUNATONE
    trainer_mon_no_item_default 40, 43, SPECIES_ALAKAZAM

sParty_Walter1: @ 0x082DFED4
    @ TRAINER_WALTER_1 (id 254): ロバート ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_MANECTRIC

sParty_Micah: @ 0x082DFEDC
    @ TRAINER_MICAH (id 255): オルソン ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 44, SPECIES_MANECTRIC
    trainer_mon_no_item_default 0, 44, SPECIES_MANECTRIC

sParty_Thomas: @ 0x082DFEEC
    @ TRAINER_THOMAS (id 256): スコット ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 45, SPECIES_ZANGOOSE

sParty_Walter2: @ 0x082DFEF4
    @ TRAINER_WALTER_2 (id 257): ロバート ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 34, SPECIES_MANECTRIC

sParty_Walter3: @ 0x082DFEFC
    @ TRAINER_WALTER_3 (id 258): ロバート ; flags=1, partySize=2
    trainer_mon_no_item_custom 20, 36, SPECIES_LINOONE, MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES
    trainer_mon_no_item_custom 20, 36, SPECIES_MANECTRIC, MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR

sParty_Walter4: @ 0x082DFF1C
    @ TRAINER_WALTER_4 (id 259): ロバート ; flags=1, partySize=2
    trainer_mon_no_item_custom 30, 39, SPECIES_LINOONE, MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES
    trainer_mon_no_item_custom 30, 39, SPECIES_MANECTRIC, MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_NONE

sParty_Walter5: @ 0x082DFF3C
    @ TRAINER_WALTER_5 (id 260): ロバート ; flags=1, partySize=3
    trainer_mon_no_item_custom 40, 41, SPECIES_LINOONE, MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES
    trainer_mon_no_item_custom 40, 41, SPECIES_GOLDUCK, MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP
    trainer_mon_no_item_custom 40, 41, SPECIES_MANECTRIC, MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR

sParty_Sidney: @ 0x082DFF6C
    @ TRAINER_SIDNEY (id 261): カゲツ ; flags=3, partySize=5
    trainer_mon_item_custom 250, 46, SPECIES_MIGHTYENA, ITEM_NONE, MOVE_ROAR, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_CRUNCH
    trainer_mon_item_custom 250, 48, SPECIES_SHIFTRY, ITEM_NONE, MOVE_TORMENT, MOVE_DOUBLE_TEAM, MOVE_SWAGGER, MOVE_EXTRASENSORY
    trainer_mon_item_custom 250, 46, SPECIES_CACTURNE, ITEM_NONE, MOVE_LEECH_SEED, MOVE_FAINT_ATTACK, MOVE_NEEDLE_ARM, MOVE_COTTON_SPORE
    trainer_mon_item_custom 250, 48, SPECIES_CRAWDAUNT, ITEM_NONE, MOVE_SURF, MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_FACADE
    trainer_mon_item_custom 255, 49, SPECIES_ABSOL, ITEM_SITRUS_BERRY, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SLASH

sParty_Phoebe: @ 0x082DFFBC
    @ TRAINER_PHOEBE (id 262): フヨウ ; flags=3, partySize=5
    trainer_mon_item_custom 250, 48, SPECIES_DUSCLOPS, ITEM_NONE, MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_PROTECT
    trainer_mon_item_custom 250, 49, SPECIES_BANETTE, ITEM_NONE, MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_WILL_O_WISP, MOVE_FAINT_ATTACK
    trainer_mon_item_custom 250, 50, SPECIES_SABLEYE, ITEM_NONE, MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_NIGHT_SHADE, MOVE_FAINT_ATTACK
    trainer_mon_item_custom 250, 49, SPECIES_BANETTE, ITEM_NONE, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FACADE
    trainer_mon_item_custom 255, 51, SPECIES_DUSCLOPS, ITEM_SITRUS_BERRY, MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE

sParty_Glacia: @ 0x082E000C
    @ TRAINER_GLACIA (id 263): プリム ; flags=3, partySize=5
    trainer_mon_item_custom 250, 50, SPECIES_SEALEO, ITEM_NONE, MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_HAIL, MOVE_ICE_BALL
    trainer_mon_item_custom 250, 50, SPECIES_GLALIE, ITEM_NONE, MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_ICY_WIND, MOVE_ICE_BEAM
    trainer_mon_item_custom 250, 52, SPECIES_SEALEO, ITEM_NONE, MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_HAIL, MOVE_BLIZZARD
    trainer_mon_item_custom 250, 52, SPECIES_GLALIE, ITEM_NONE, MOVE_SHADOW_BALL, MOVE_EXPLOSION, MOVE_HAIL, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 53, SPECIES_WALREIN, ITEM_SITRUS_BERRY, MOVE_SURF, MOVE_BODY_SLAM, MOVE_ICE_BEAM, MOVE_SHEER_COLD

sParty_Drake: @ 0x082E005C
    @ TRAINER_DRAKE (id 264): ゲンジ ; flags=3, partySize=5
    trainer_mon_item_custom 250, 52, SPECIES_SHELGON, ITEM_NONE, MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW, MOVE_PROTECT, MOVE_DOUBLE_EDGE
    trainer_mon_item_custom 250, 54, SPECIES_ALTARIA, ITEM_NONE, MOVE_DOUBLE_EDGE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE
    trainer_mon_item_custom 250, 53, SPECIES_KINGDRA, ITEM_NONE, MOVE_SMOKESCREEN, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_BODY_SLAM
    trainer_mon_item_custom 250, 53, SPECIES_FLYGON, ITEM_NONE, MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE
    trainer_mon_item_custom 255, 55, SPECIES_SALAMENCE, ITEM_SITRUS_BERRY, MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_CRUNCH

sParty_Roxanne1: @ 0x082E00AC
    @ TRAINER_ROXANNE_1 (id 265): ツツジ ; flags=3, partySize=3
    trainer_mon_item_custom 100, 12, SPECIES_GEODUDE, ITEM_NONE, MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_ROCK_THROW, MOVE_ROCK_TOMB
    trainer_mon_item_custom 100, 12, SPECIES_GEODUDE, ITEM_NONE, MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_ROCK_THROW, MOVE_ROCK_TOMB
    trainer_mon_item_custom 200, 15, SPECIES_NOSEPASS, ITEM_ORAN_BERRY, MOVE_BLOCK, MOVE_HARDEN, MOVE_TACKLE, MOVE_ROCK_TOMB

sParty_Brawly1: @ 0x082E00DC
    @ TRAINER_BRAWLY_1 (id 266): トウキ ; flags=3, partySize=3
    trainer_mon_item_custom 100, 16, SPECIES_MACHOP, ITEM_NONE, MOVE_KARATE_CHOP, MOVE_LOW_KICK, MOVE_SEISMIC_TOSS, MOVE_BULK_UP
    trainer_mon_item_custom 100, 16, SPECIES_MEDITITE, ITEM_NONE, MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_BULK_UP
    trainer_mon_item_custom 200, 19, SPECIES_MAKUHITA, ITEM_SITRUS_BERRY, MOVE_ARM_THRUST, MOVE_VITAL_THROW, MOVE_REVERSAL, MOVE_BULK_UP

sParty_Wattson1: @ 0x082E010C
    @ TRAINER_WATTSON_1 (id 267): テッセン ; flags=3, partySize=4
    trainer_mon_item_custom 200, 20, SPECIES_VOLTORB, ITEM_NONE, MOVE_ROLLOUT, MOVE_SPARK, MOVE_SELF_DESTRUCT, MOVE_SHOCK_WAVE
    trainer_mon_item_custom 200, 20, SPECIES_ELECTRIKE, ITEM_NONE, MOVE_SHOCK_WAVE, MOVE_LEER, MOVE_QUICK_ATTACK, MOVE_HOWL
    trainer_mon_item_custom 220, 22, SPECIES_MAGNETON, ITEM_NONE, MOVE_SUPERSONIC, MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM
    trainer_mon_item_custom 250, 24, SPECIES_MANECTRIC, ITEM_SITRUS_BERRY, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_SHOCK_WAVE, MOVE_HOWL

sParty_Flannery1: @ 0x082E014C
    @ TRAINER_FLANNERY_1 (id 268): アスナ ; flags=3, partySize=4
    trainer_mon_item_custom 200, 24, SPECIES_NUMEL, ITEM_NONE, MOVE_OVERHEAT, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY
    trainer_mon_item_custom 200, 24, SPECIES_SLUGMA, ITEM_NONE, MOVE_OVERHEAT, MOVE_SMOG, MOVE_LIGHT_SCREEN, MOVE_SUNNY_DAY
    trainer_mon_item_custom 250, 26, SPECIES_CAMERUPT, ITEM_NONE, MOVE_OVERHEAT, MOVE_TACKLE, MOVE_SUNNY_DAY, MOVE_ATTRACT
    trainer_mon_item_custom 250, 29, SPECIES_TORKOAL, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_BODY_SLAM, MOVE_ATTRACT

sParty_Norman1: @ 0x082E018C
    @ TRAINER_NORMAN_1 (id 269): センリ ; flags=3, partySize=4
    trainer_mon_item_custom 200, 27, SPECIES_SPINDA, ITEM_NONE, MOVE_TEETER_DANCE, MOVE_PSYBEAM, MOVE_FACADE, MOVE_ENCORE
    trainer_mon_item_custom 200, 27, SPECIES_VIGOROTH, ITEM_NONE, MOVE_SLASH, MOVE_FACADE, MOVE_ENCORE, MOVE_FAINT_ATTACK
    trainer_mon_item_custom 200, 29, SPECIES_LINOONE, ITEM_NONE, MOVE_SLASH, MOVE_BELLY_DRUM, MOVE_FACADE, MOVE_HEADBUTT
    trainer_mon_item_custom 250, 31, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_COUNTER, MOVE_YAWN, MOVE_FACADE, MOVE_FAINT_ATTACK

sParty_Winona1: @ 0x082E01CC
    @ TRAINER_WINONA_1 (id 270): ナギ ; flags=3, partySize=5
    trainer_mon_item_custom 210, 29, SPECIES_SWABLU, ITEM_NONE, MOVE_PERISH_SONG, MOVE_MIRROR_MOVE, MOVE_SAFEGUARD, MOVE_AERIAL_ACE
    trainer_mon_item_custom 210, 29, SPECIES_TROPIUS, ITEM_NONE, MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_SYNTHESIS
    trainer_mon_item_custom 210, 30, SPECIES_PELIPPER, ITEM_NONE, MOVE_WATER_GUN, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE
    trainer_mon_item_custom 220, 31, SPECIES_SKARMORY, ITEM_NONE, MOVE_SAND_ATTACK, MOVE_FURY_ATTACK, MOVE_STEEL_WING, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 33, SPECIES_ALTARIA, ITEM_ORAN_BERRY, MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE

sParty_TateAndLiza1: @ 0x082E021C
    @ TRAINER_TATE_AND_LIZA_1 (id 271): フウとラン ; flags=3, partySize=4
    trainer_mon_item_custom 250, 41, SPECIES_CLAYDOL, ITEM_NONE, MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 250, 41, SPECIES_XATU, ITEM_NONE, MOVE_PSYCHIC, MOVE_SUNNY_DAY, MOVE_CONFUSE_RAY, MOVE_CALM_MIND
    trainer_mon_item_custom 250, 42, SPECIES_LUNATONE, ITEM_SITRUS_BERRY, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_CALM_MIND
    trainer_mon_item_custom 250, 42, SPECIES_SOLROCK, ITEM_SITRUS_BERRY, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER

sParty_Juan1: @ 0x082E025C
    @ TRAINER_JUAN_1 (id 272): アダン ; flags=3, partySize=5
    trainer_mon_item_custom 200, 41, SPECIES_LUVDISC, ITEM_NONE, MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL
    trainer_mon_item_custom 200, 41, SPECIES_WHISCASH, ITEM_NONE, MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_AMNESIA, MOVE_EARTHQUAKE
    trainer_mon_item_custom 200, 43, SPECIES_SEALEO, ITEM_NONE, MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_AURORA_BEAM, MOVE_WATER_PULSE
    trainer_mon_item_custom 200, 43, SPECIES_CRAWDAUNT, ITEM_NONE, MOVE_WATER_PULSE, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_LEER
    trainer_mon_item_custom 250, 46, SPECIES_KINGDRA, ITEM_CHESTO_BERRY, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST

sParty_Jerry1: @ 0x082E02AC
    @ TRAINER_JERRY_1 (id 273): ヒデオ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 9, SPECIES_RALTS

sParty_Ted: @ 0x082E02B4
    @ TRAINER_TED (id 274): ノブヒサ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 17, SPECIES_RALTS

sParty_Paul: @ 0x082E02BC
    @ TRAINER_PAUL (id 275): カツトシ ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 15, SPECIES_NUMEL
    trainer_mon_no_item_default 10, 15, SPECIES_ODDISH
    trainer_mon_no_item_default 10, 15, SPECIES_WINGULL

sParty_Jerry2: @ 0x082E02D4
    @ TRAINER_JERRY_2 (id 276): ヒデオ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 26, SPECIES_RALTS
    trainer_mon_no_item_default 20, 26, SPECIES_MEDITITE

sParty_Jerry3: @ 0x082E02E4
    @ TRAINER_JERRY_3 (id 277): ヒデオ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 29, SPECIES_KIRLIA
    trainer_mon_no_item_default 30, 29, SPECIES_MEDITITE

sParty_Jerry4: @ 0x082E02F4
    @ TRAINER_JERRY_4 (id 278): ヒデオ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 32, SPECIES_KIRLIA
    trainer_mon_no_item_default 40, 32, SPECIES_MEDICHAM

sParty_Jerry5: @ 0x082E0304
    @ TRAINER_JERRY_5 (id 279): ヒデオ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 34, SPECIES_KIRLIA
    trainer_mon_no_item_default 50, 34, SPECIES_BANETTE
    trainer_mon_no_item_default 50, 34, SPECIES_MEDICHAM

sParty_Karen1: @ 0x082E031C
    @ TRAINER_KAREN_1 (id 280): ハツネ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 9, SPECIES_SHROOMISH

sParty_Georgia: @ 0x082E0324
    @ TRAINER_GEORGIA (id 281): ミキエ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 16, SPECIES_SHROOMISH
    trainer_mon_no_item_default 10, 16, SPECIES_BEAUTIFLY

sParty_Karen2: @ 0x082E0334
    @ TRAINER_KAREN_2 (id 282): ハツネ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 26, SPECIES_SHROOMISH
    trainer_mon_no_item_default 20, 26, SPECIES_WHISMUR

sParty_Karen3: @ 0x082E0344
    @ TRAINER_KAREN_3 (id 283): ハツネ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 29, SPECIES_SHROOMISH
    trainer_mon_no_item_default 30, 29, SPECIES_LOUDRED

sParty_Karen4: @ 0x082E0354
    @ TRAINER_KAREN_4 (id 284): ハツネ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 32, SPECIES_BRELOOM
    trainer_mon_no_item_default 40, 32, SPECIES_LOUDRED

sParty_Karen5: @ 0x082E0364
    @ TRAINER_KAREN_5 (id 285): ハツネ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 35, SPECIES_BRELOOM
    trainer_mon_no_item_default 50, 35, SPECIES_EXPLOUD

sParty_KateAndJoy: @ 0x082E0374
    @ TRAINER_KATE_AND_JOY (id 286): マナとユイ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 30, SPECIES_SPINDA, MOVE_HYPNOSIS, MOVE_PSYBEAM, MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE
    trainer_mon_no_item_custom 0, 32, SPECIES_SLAKING, MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FAINT_ATTACK

sParty_AnnaAndMeg1: @ 0x082E0394
    @ TRAINER_ANNA_AND_MEG_1 (id 287): ミホとリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 15, SPECIES_ZIGZAGOON, MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH
    trainer_mon_no_item_custom 0, 17, SPECIES_MAKUHITA, MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE

sParty_AnnaAndMeg2: @ 0x082E03B4
    @ TRAINER_ANNA_AND_MEG_2 (id 288): ミホとリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 10, 28, SPECIES_ZIGZAGOON, MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH
    trainer_mon_no_item_custom 10, 30, SPECIES_MAKUHITA, MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE

sParty_AnnaAndMeg3: @ 0x082E03D4
    @ TRAINER_ANNA_AND_MEG_3 (id 289): ミホとリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 20, 31, SPECIES_ZIGZAGOON, MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH
    trainer_mon_no_item_custom 20, 33, SPECIES_MAKUHITA, MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE

sParty_AnnaAndMeg4: @ 0x082E03F4
    @ TRAINER_ANNA_AND_MEG_4 (id 290): ミホとリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 30, 34, SPECIES_LINOONE, MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH
    trainer_mon_no_item_custom 30, 36, SPECIES_MAKUHITA, MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE

sParty_AnnaAndMeg5: @ 0x082E0414
    @ TRAINER_ANNA_AND_MEG_5 (id 291): ミホとリコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 40, 36, SPECIES_LINOONE, MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH
    trainer_mon_no_item_custom 40, 38, SPECIES_HARIYAMA, MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE

sParty_Victor: @ 0x082E0434
    @ TRAINER_VICTOR (id 292): ハルヒコ ; flags=2, partySize=2
    trainer_mon_item_default 25, 16, SPECIES_TAILLOW, ITEM_ORAN_BERRY
    trainer_mon_item_default 25, 16, SPECIES_ZIGZAGOON, ITEM_ORAN_BERRY

sParty_Miguel1: @ 0x082E0444
    @ TRAINER_MIGUEL_1 (id 293): ミツハル ; flags=2, partySize=1
    trainer_mon_item_default 0, 15, SPECIES_SKITTY, ITEM_ORAN_BERRY

sParty_Colton: @ 0x082E044C
    @ TRAINER_COLTON (id 294): ヒサシ ; flags=3, partySize=6
    trainer_mon_item_custom 0, 22, SPECIES_SKITTY, ITEM_ORAN_BERRY, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL
    trainer_mon_item_custom 0, 36, SPECIES_SKITTY, ITEM_ORAN_BERRY, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL
    trainer_mon_item_custom 0, 40, SPECIES_SKITTY, ITEM_ORAN_BERRY, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL
    trainer_mon_item_custom 0, 12, SPECIES_SKITTY, ITEM_ORAN_BERRY, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL
    trainer_mon_item_custom 0, 30, SPECIES_SKITTY, ITEM_ORAN_BERRY, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL
    trainer_mon_item_custom 0, 42, SPECIES_DELCATTY, ITEM_ORAN_BERRY, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL

sParty_Miguel2: @ 0x082E04AC
    @ TRAINER_MIGUEL_2 (id 295): ミツハル ; flags=2, partySize=1
    trainer_mon_item_default 0, 29, SPECIES_SKITTY, ITEM_ORAN_BERRY

sParty_Miguel3: @ 0x082E04B4
    @ TRAINER_MIGUEL_3 (id 296): ミツハル ; flags=2, partySize=1
    trainer_mon_item_default 0, 32, SPECIES_SKITTY, ITEM_ORAN_BERRY

sParty_Miguel4: @ 0x082E04BC
    @ TRAINER_MIGUEL_4 (id 297): ミツハル ; flags=2, partySize=1
    trainer_mon_item_default 0, 35, SPECIES_DELCATTY, ITEM_ORAN_BERRY

sParty_Miguel5: @ 0x082E04C4
    @ TRAINER_MIGUEL_5 (id 298): ミツハル ; flags=2, partySize=1
    trainer_mon_item_default 0, 38, SPECIES_DELCATTY, ITEM_SITRUS_BERRY

sParty_Victoria: @ 0x082E04CC
    @ TRAINER_VICTORIA (id 299): ヤスエ ; flags=2, partySize=1
    trainer_mon_item_default 50, 17, SPECIES_ROSELIA, ITEM_ORAN_BERRY

sParty_Vanessa: @ 0x082E04D4
    @ TRAINER_VANESSA (id 300): ケサコ ; flags=2, partySize=1
    trainer_mon_item_default 0, 30, SPECIES_PIKACHU, ITEM_ORAN_BERRY

sParty_Bethany: @ 0x082E04DC
    @ TRAINER_BETHANY (id 301): テイコ ; flags=2, partySize=3
    trainer_mon_item_default 100, 35, SPECIES_AZURILL, ITEM_ORAN_BERRY
    trainer_mon_item_default 100, 37, SPECIES_MARILL, ITEM_ORAN_BERRY
    trainer_mon_item_default 100, 39, SPECIES_AZUMARILL, ITEM_ORAN_BERRY

sParty_Isabel1: @ 0x082E04F4
    @ TRAINER_ISABEL_1 (id 302): マサコ ; flags=2, partySize=2
    trainer_mon_item_default 0, 14, SPECIES_PLUSLE, ITEM_ORAN_BERRY
    trainer_mon_item_default 0, 14, SPECIES_MINUN, ITEM_ORAN_BERRY

sParty_Isabel2: @ 0x082E0504
    @ TRAINER_ISABEL_2 (id 303): マサコ ; flags=2, partySize=2
    trainer_mon_item_default 10, 26, SPECIES_PLUSLE, ITEM_ORAN_BERRY
    trainer_mon_item_default 10, 26, SPECIES_MINUN, ITEM_ORAN_BERRY

sParty_Isabel3: @ 0x082E0514
    @ TRAINER_ISABEL_3 (id 304): マサコ ; flags=2, partySize=2
    trainer_mon_item_default 20, 29, SPECIES_PLUSLE, ITEM_ORAN_BERRY
    trainer_mon_item_default 20, 29, SPECIES_MINUN, ITEM_ORAN_BERRY

sParty_Isabel4: @ 0x082E0524
    @ TRAINER_ISABEL_4 (id 305): マサコ ; flags=2, partySize=2
    trainer_mon_item_default 30, 32, SPECIES_PLUSLE, ITEM_ORAN_BERRY
    trainer_mon_item_default 30, 32, SPECIES_MINUN, ITEM_ORAN_BERRY

sParty_Isabel5: @ 0x082E0534
    @ TRAINER_ISABEL_5 (id 306): マサコ ; flags=2, partySize=2
    trainer_mon_item_default 40, 35, SPECIES_PLUSLE, ITEM_SITRUS_BERRY
    trainer_mon_item_default 40, 35, SPECIES_MINUN, ITEM_SITRUS_BERRY

sParty_Timothy1: @ 0x082E0544
    @ TRAINER_TIMOTHY_1 (id 307): ウンショウ ; flags=0, partySize=1
    trainer_mon_no_item_default 200, 27, SPECIES_HARIYAMA

sParty_Timothy2: @ 0x082E054C
    @ TRAINER_TIMOTHY_2 (id 308): ウンショウ ; flags=1, partySize=1
    trainer_mon_no_item_custom 210, 33, SPECIES_HARIYAMA, MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG

sParty_Timothy3: @ 0x082E055C
    @ TRAINER_TIMOTHY_3 (id 309): ウンショウ ; flags=1, partySize=1
    trainer_mon_no_item_custom 220, 36, SPECIES_HARIYAMA, MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG

sParty_Timothy4: @ 0x082E056C
    @ TRAINER_TIMOTHY_4 (id 310): ウンショウ ; flags=1, partySize=1
    trainer_mon_no_item_custom 230, 39, SPECIES_HARIYAMA, MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG

sParty_Timothy5: @ 0x082E057C
    @ TRAINER_TIMOTHY_5 (id 311): ウンショウ ; flags=1, partySize=1
    trainer_mon_no_item_custom 240, 42, SPECIES_HARIYAMA, MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG

sParty_Vicky: @ 0x082E058C
    @ TRAINER_VICKY (id 312): ミツヨ ; flags=1, partySize=1
    trainer_mon_no_item_custom 200, 18, SPECIES_MEDITITE, MOVE_HI_JUMP_KICK, MOVE_MEDITATE, MOVE_CONFUSION, MOVE_DETECT

sParty_Shelby1: @ 0x082E059C
    @ TRAINER_SHELBY_1 (id 313): ミヤコ ; flags=0, partySize=2
    trainer_mon_no_item_default 200, 21, SPECIES_MEDITITE
    trainer_mon_no_item_default 200, 21, SPECIES_MAKUHITA

sParty_Shelby2: @ 0x082E05AC
    @ TRAINER_SHELBY_2 (id 314): ミヤコ ; flags=0, partySize=2
    trainer_mon_no_item_default 210, 30, SPECIES_MEDITITE
    trainer_mon_no_item_default 210, 30, SPECIES_MAKUHITA

sParty_Shelby3: @ 0x082E05BC
    @ TRAINER_SHELBY_3 (id 315): ミヤコ ; flags=0, partySize=2
    trainer_mon_no_item_default 220, 33, SPECIES_MEDICHAM
    trainer_mon_no_item_default 220, 33, SPECIES_HARIYAMA

sParty_Shelby4: @ 0x082E05CC
    @ TRAINER_SHELBY_4 (id 316): ミヤコ ; flags=0, partySize=2
    trainer_mon_no_item_default 230, 36, SPECIES_MEDICHAM
    trainer_mon_no_item_default 230, 36, SPECIES_HARIYAMA

sParty_Shelby5: @ 0x082E05DC
    @ TRAINER_SHELBY_5 (id 317): ミヤコ ; flags=0, partySize=2
    trainer_mon_no_item_default 240, 39, SPECIES_MEDICHAM
    trainer_mon_no_item_default 240, 39, SPECIES_HARIYAMA

sParty_Calvin1: @ 0x082E05EC
    @ TRAINER_CALVIN_1 (id 318): カズキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_POOCHYENA

sParty_Billy: @ 0x082E05F4
    @ TRAINER_BILLY (id 319): ケイタ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 5, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 7, SPECIES_SEEDOT

sParty_Josh: @ 0x082E0604
    @ TRAINER_JOSH (id 320): タロウ ; flags=1, partySize=1
    trainer_mon_no_item_custom 100, 10, SPECIES_GEODUDE, MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE

sParty_Tommy: @ 0x082E0614
    @ TRAINER_TOMMY (id 321): カツオ ; flags=0, partySize=2
    trainer_mon_no_item_default 110, 8, SPECIES_GEODUDE
    trainer_mon_no_item_default 120, 8, SPECIES_GEODUDE

sParty_Joey: @ 0x082E0624
    @ TRAINER_JOEY (id 322): タケオ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 9, SPECIES_MACHOP

sParty_Ben: @ 0x082E062C
    @ TRAINER_BEN (id 323): ヒロト ; flags=1, partySize=2
    trainer_mon_no_item_custom 150, 17, SPECIES_ZIGZAGOON, MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_GROWL, MOVE_THUNDERBOLT
    trainer_mon_no_item_custom 150, 17, SPECIES_GULPIN, MOVE_AMNESIA, MOVE_SLUDGE, MOVE_YAWN, MOVE_POUND

sParty_Quincy: @ 0x082E064C
    @ TRAINER_QUINCY (id 324): タダトシ ; flags=1, partySize=2
    trainer_mon_no_item_custom 100, 43, SPECIES_SLAKING, MOVE_ATTRACT, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER
    trainer_mon_no_item_custom 100, 43, SPECIES_DUSCLOPS, MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC

sParty_Katelynn: @ 0x082E066C
    @ TRAINER_KATELYNN (id 325): スズカ ; flags=1, partySize=2
    trainer_mon_no_item_custom 100, 43, SPECIES_GARDEVOIR, MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND
    trainer_mon_no_item_custom 100, 43, SPECIES_SLAKING, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK

sParty_Jaylen: @ 0x082E068C
    @ TRAINER_JAYLEN (id 326): マサユキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 19, SPECIES_TRAPINCH

sParty_Dillon: @ 0x082E0694
    @ TRAINER_DILLON (id 327): ヨシト ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 19, SPECIES_ARON

sParty_Calvin2: @ 0x082E069C
    @ TRAINER_CALVIN_2 (id 328): カズキ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 27, SPECIES_MIGHTYENA

sParty_Calvin3: @ 0x082E06A4
    @ TRAINER_CALVIN_3 (id 329): カズキ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 28, SPECIES_SWELLOW
    trainer_mon_no_item_default 20, 30, SPECIES_MIGHTYENA

sParty_Calvin4: @ 0x082E06B4
    @ TRAINER_CALVIN_4 (id 330): カズキ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 31, SPECIES_SWELLOW
    trainer_mon_no_item_default 30, 29, SPECIES_LINOONE
    trainer_mon_no_item_default 30, 33, SPECIES_MIGHTYENA

sParty_Calvin5: @ 0x082E06CC
    @ TRAINER_CALVIN_5 (id 331): カズキ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 34, SPECIES_SWELLOW
    trainer_mon_no_item_default 40, 32, SPECIES_LINOONE
    trainer_mon_no_item_default 40, 36, SPECIES_MIGHTYENA

sParty_Eddie: @ 0x082E06E4
    @ TRAINER_EDDIE (id 332): ヤスユキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 14, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 16, SPECIES_ZIGZAGOON

sParty_Allen: @ 0x082E06F4
    @ TRAINER_ALLEN (id 333): イサム ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 4, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 3, SPECIES_TAILLOW

sParty_Timmy: @ 0x082E0704
    @ TRAINER_TIMMY (id 334): シンゴ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 15, SPECIES_ARON
    trainer_mon_no_item_default 0, 13, SPECIES_ELECTRIKE

sParty_Wallace: @ 0x082E0714
    @ TRAINER_WALLACE (id 335): ミクリ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 57, SPECIES_WAILORD, ITEM_NONE, MOVE_RAIN_DANCE, MOVE_WATER_SPOUT, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD
    trainer_mon_item_custom 255, 55, SPECIES_TENTACRUEL, ITEM_NONE, MOVE_TOXIC, MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 56, SPECIES_LUDICOLO, ITEM_NONE, MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM
    trainer_mon_item_custom 255, 56, SPECIES_WHISCASH, ITEM_NONE, MOVE_EARTHQUAKE, MOVE_SURF, MOVE_AMNESIA, MOVE_HYPER_BEAM
    trainer_mon_item_custom 255, 56, SPECIES_GYARADOS, ITEM_NONE, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_SURF
    trainer_mon_item_custom 255, 58, SPECIES_MILOTIC, ITEM_SITRUS_BERRY, MOVE_RECOVER, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC

sParty_Andrew: @ 0x082E0774
    @ TRAINER_ANDREW (id 336): カツノリ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 5, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 10, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 15, SPECIES_MAGIKARP

sParty_Ivan: @ 0x082E078C
    @ TRAINER_IVAN (id 337): ヨシタカ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 5, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 6, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 7, SPECIES_MAGIKARP

sParty_Claude: @ 0x082E07A4
    @ TRAINER_CLAUDE (id 338): ヒデユキ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 16, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 17, SPECIES_GOLDEEN
    trainer_mon_no_item_default 0, 18, SPECIES_BARBOACH

sParty_Elliot1: @ 0x082E07BC
    @ TRAINER_ELLIOT_1 (id 339): アキヒコ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 10, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 7, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 10, SPECIES_MAGIKARP

sParty_Ned: @ 0x082E07D4
    @ TRAINER_NED (id 340): トモカズ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 11, SPECIES_TENTACOOL

sParty_Dale: @ 0x082E07DC
    @ TRAINER_DALE (id 341): タカフミ ; flags=0, partySize=4
    trainer_mon_no_item_default 0, 11, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 14, SPECIES_WAILMER
    trainer_mon_no_item_default 0, 11, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 14, SPECIES_WAILMER

sParty_Nolan: @ 0x082E07FC
    @ TRAINER_NOLAN (id 342): タカノリ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 19, SPECIES_BARBOACH

sParty_Barny: @ 0x082E0804
    @ TRAINER_BARNY (id 343): カズヒコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 25, SPECIES_CARVANHA

sParty_Wade: @ 0x082E0814
    @ TRAINER_WADE (id 344): イサオ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 16, SPECIES_TENTACOOL

sParty_Carter: @ 0x082E081C
    @ TRAINER_CARTER (id 345): タカヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 25, SPECIES_WAILMER
    trainer_mon_no_item_default 10, 25, SPECIES_TENTACRUEL

sParty_Elliot2: @ 0x082E082C
    @ TRAINER_ELLIOT_2 (id 346): アキヒコ ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 24, SPECIES_TENTACOOL
    trainer_mon_no_item_default 10, 27, SPECIES_GYARADOS
    trainer_mon_no_item_default 10, 27, SPECIES_GYARADOS

sParty_Elliot3: @ 0x082E0844
    @ TRAINER_ELLIOT_3 (id 347): アキヒコ ; flags=0, partySize=4
    trainer_mon_no_item_default 20, 29, SPECIES_GYARADOS
    trainer_mon_no_item_default 20, 26, SPECIES_CARVANHA
    trainer_mon_no_item_default 20, 26, SPECIES_TENTACOOL
    trainer_mon_no_item_default 20, 29, SPECIES_GYARADOS

sParty_Elliot4: @ 0x082E0864
    @ TRAINER_ELLIOT_4 (id 348): アキヒコ ; flags=0, partySize=4
    trainer_mon_no_item_default 30, 31, SPECIES_GYARADOS
    trainer_mon_no_item_default 30, 30, SPECIES_CARVANHA
    trainer_mon_no_item_default 30, 30, SPECIES_TENTACRUEL
    trainer_mon_no_item_default 31, 31, SPECIES_GYARADOS

sParty_Elliot5: @ 0x082E0884
    @ TRAINER_ELLIOT_5 (id 349): アキヒコ ; flags=0, partySize=4
    trainer_mon_no_item_default 40, 33, SPECIES_GYARADOS
    trainer_mon_no_item_default 40, 33, SPECIES_SHARPEDO
    trainer_mon_no_item_default 40, 33, SPECIES_GYARADOS
    trainer_mon_no_item_default 40, 35, SPECIES_TENTACRUEL

sParty_Ronald: @ 0x082E08A4
    @ TRAINER_RONALD (id 350): カズオ ; flags=0, partySize=6
    trainer_mon_no_item_default 0, 19, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 21, SPECIES_GYARADOS
    trainer_mon_no_item_default 0, 23, SPECIES_GYARADOS
    trainer_mon_no_item_default 0, 26, SPECIES_GYARADOS
    trainer_mon_no_item_default 0, 30, SPECIES_GYARADOS
    trainer_mon_no_item_default 0, 35, SPECIES_GYARADOS

sParty_Jacob: @ 0x082E08D4
    @ TRAINER_JACOB (id 351): ススム ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 6, SPECIES_VOLTORB
    trainer_mon_no_item_default 20, 6, SPECIES_VOLTORB
    trainer_mon_no_item_default 200, 14, SPECIES_MAGNEMITE

sParty_Anthony: @ 0x082E08EC
    @ TRAINER_ANTHONY (id 352): シュンスケ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 14, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 0, 14, SPECIES_MAGNEMITE

sParty_Benjamin1: @ 0x082E08FC
    @ TRAINER_BENJAMIN_1 (id 353): ヒデアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 16, SPECIES_MAGNEMITE

sParty_Benjamin2: @ 0x082E0904
    @ TRAINER_BENJAMIN_2 (id 354): ヒデアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 30, SPECIES_MAGNEMITE

sParty_Benjamin3: @ 0x082E090C
    @ TRAINER_BENJAMIN_3 (id 355): ヒデアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 20, 33, SPECIES_MAGNEMITE

sParty_Benjamin4: @ 0x082E0914
    @ TRAINER_BENJAMIN_4 (id 356): ヒデアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 30, 36, SPECIES_MAGNETON

sParty_Benjamin5: @ 0x082E091C
    @ TRAINER_BENJAMIN_5 (id 357): ヒデアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 40, 39, SPECIES_MAGNETON

sParty_Abigail1: @ 0x082E0924
    @ TRAINER_ABIGAIL_1 (id 358): ショウコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 16, SPECIES_MAGNEMITE

sParty_Jasmine: @ 0x082E092C
    @ TRAINER_JASMINE (id 359): ヒデミ ; flags=0, partySize=3
    trainer_mon_no_item_default 80, 14, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 80, 14, SPECIES_MAGNEMITE
    trainer_mon_no_item_default 0, 6, SPECIES_VOLTORB

sParty_Abigail2: @ 0x082E0944
    @ TRAINER_ABIGAIL_2 (id 360): ショウコ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 28, SPECIES_MAGNEMITE

sParty_Abigail3: @ 0x082E094C
    @ TRAINER_ABIGAIL_3 (id 361): ショウコ ; flags=0, partySize=1
    trainer_mon_no_item_default 20, 31, SPECIES_MAGNEMITE

sParty_Abigail4: @ 0x082E0954
    @ TRAINER_ABIGAIL_4 (id 362): ショウコ ; flags=0, partySize=1
    trainer_mon_no_item_default 30, 34, SPECIES_MAGNETON

sParty_Abigail5: @ 0x082E095C
    @ TRAINER_ABIGAIL_5 (id 363): ショウコ ; flags=0, partySize=1
    trainer_mon_no_item_default 40, 37, SPECIES_MAGNETON

sParty_Dylan1: @ 0x082E0964
    @ TRAINER_DYLAN_1 (id 364): ツヨシ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 17, SPECIES_DODUO

sParty_Dylan2: @ 0x082E096C
    @ TRAINER_DYLAN_2 (id 365): ツヨシ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 28, SPECIES_DODUO

sParty_Dylan3: @ 0x082E0974
    @ TRAINER_DYLAN_3 (id 366): ツヨシ ; flags=0, partySize=1
    trainer_mon_no_item_default 20, 31, SPECIES_DODUO

sParty_Dylan4: @ 0x082E097C
    @ TRAINER_DYLAN_4 (id 367): ツヨシ ; flags=0, partySize=1
    trainer_mon_no_item_default 30, 34, SPECIES_DODRIO

sParty_Dylan5: @ 0x082E0984
    @ TRAINER_DYLAN_5 (id 368): ツヨシ ; flags=0, partySize=1
    trainer_mon_no_item_default 40, 37, SPECIES_DODRIO

sParty_Maria1: @ 0x082E098C
    @ TRAINER_MARIA_1 (id 369): サエコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 17, SPECIES_DODUO

sParty_Maria2: @ 0x082E0994
    @ TRAINER_MARIA_2 (id 370): サエコ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 28, SPECIES_DODUO

sParty_Maria3: @ 0x082E099C
    @ TRAINER_MARIA_3 (id 371): サエコ ; flags=0, partySize=1
    trainer_mon_no_item_default 20, 31, SPECIES_DODUO

sParty_Maria4: @ 0x082E09A4
    @ TRAINER_MARIA_4 (id 372): サエコ ; flags=0, partySize=1
    trainer_mon_no_item_default 30, 34, SPECIES_DODRIO

sParty_Maria5: @ 0x082E09AC
    @ TRAINER_MARIA_5 (id 373): サエコ ; flags=0, partySize=1
    trainer_mon_no_item_default 40, 37, SPECIES_DODRIO

sParty_Camden: @ 0x082E09B4
    @ TRAINER_CAMDEN (id 374): シゲハル ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_STARYU
    trainer_mon_no_item_default 0, 33, SPECIES_STARYU

sParty_Demetrius: @ 0x082E09C4
    @ TRAINER_DEMETRIUS (id 375): フミタケ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 25, SPECIES_ELECTRIKE

sParty_Isaiah1: @ 0x082E09D4
    @ TRAINER_ISAIAH_1 (id 376): エイスケ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 35, SPECIES_STARYU

sParty_Pablo1: @ 0x082E09DC
    @ TRAINER_PABLO_1 (id 377): ヤスヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_STARYU
    trainer_mon_no_item_default 0, 33, SPECIES_STARYU

sParty_Chase: @ 0x082E09EC
    @ TRAINER_CHASE (id 378): ショウゴ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_WINGULL
    trainer_mon_no_item_default 80, 34, SPECIES_STARYU

sParty_Isaiah2: @ 0x082E09FC
    @ TRAINER_ISAIAH_2 (id 379): エイスケ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 39, SPECIES_STARYU

sParty_Isaiah3: @ 0x082E0A04
    @ TRAINER_ISAIAH_3 (id 380): エイスケ ; flags=0, partySize=1
    trainer_mon_no_item_default 20, 42, SPECIES_STARYU

sParty_Isaiah4: @ 0x082E0A0C
    @ TRAINER_ISAIAH_4 (id 381): エイスケ ; flags=0, partySize=1
    trainer_mon_no_item_default 30, 45, SPECIES_STARMIE

sParty_Isaiah5: @ 0x082E0A14
    @ TRAINER_ISAIAH_5 (id 382): エイスケ ; flags=0, partySize=1
    trainer_mon_no_item_default 40, 48, SPECIES_STARMIE

sParty_Isobel: @ 0x082E0A1C
    @ TRAINER_ISOBEL (id 383): キヌエ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_STARYU

sParty_Donny: @ 0x082E0A24
    @ TRAINER_DONNY (id 384): ユヅル ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_WINGULL
    trainer_mon_no_item_default 160, 34, SPECIES_STARYU

sParty_Talia: @ 0x082E0A34
    @ TRAINER_TALIA (id 385): ミカコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_STARYU

sParty_Katelyn1: @ 0x082E0A3C
    @ TRAINER_KATELYN_1 (id 386): ナツミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 35, SPECIES_STARYU

sParty_Allison: @ 0x082E0A44
    @ TRAINER_ALLISON (id 387): チサト ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 27, SPECIES_WINGULL
    trainer_mon_no_item_default 240, 33, SPECIES_STARYU

sParty_Katelyn2: @ 0x082E0A54
    @ TRAINER_KATELYN_2 (id 388): ナツミ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 39, SPECIES_STARYU

sParty_Katelyn3: @ 0x082E0A5C
    @ TRAINER_KATELYN_3 (id 389): ナツミ ; flags=0, partySize=1
    trainer_mon_no_item_default 20, 42, SPECIES_STARYU

sParty_Katelyn4: @ 0x082E0A64
    @ TRAINER_KATELYN_4 (id 390): ナツミ ; flags=0, partySize=1
    trainer_mon_no_item_default 30, 45, SPECIES_STARMIE

sParty_Katelyn5: @ 0x082E0A6C
    @ TRAINER_KATELYN_5 (id 391): ナツミ ; flags=0, partySize=1
    trainer_mon_no_item_default 40, 48, SPECIES_STARMIE

sParty_Nicolas1: @ 0x082E0A74
    @ TRAINER_NICOLAS_1 (id 392): タケル ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 37, SPECIES_ALTARIA
    trainer_mon_no_item_default 100, 37, SPECIES_ALTARIA

sParty_Nicolas2: @ 0x082E0A84
    @ TRAINER_NICOLAS_2 (id 393): タケル ; flags=0, partySize=2
    trainer_mon_no_item_default 110, 41, SPECIES_ALTARIA
    trainer_mon_no_item_default 110, 41, SPECIES_ALTARIA

sParty_Nicolas3: @ 0x082E0A94
    @ TRAINER_NICOLAS_3 (id 394): タケル ; flags=0, partySize=2
    trainer_mon_no_item_default 120, 44, SPECIES_ALTARIA
    trainer_mon_no_item_default 120, 44, SPECIES_ALTARIA

sParty_Nicolas4: @ 0x082E0AA4
    @ TRAINER_NICOLAS_4 (id 395): タケル ; flags=0, partySize=3
    trainer_mon_no_item_default 130, 46, SPECIES_BAGON
    trainer_mon_no_item_default 130, 46, SPECIES_ALTARIA
    trainer_mon_no_item_default 130, 46, SPECIES_ALTARIA

sParty_Nicolas5: @ 0x082E0ABC
    @ TRAINER_NICOLAS_5 (id 396): タケル ; flags=2, partySize=3
    trainer_mon_item_default 140, 49, SPECIES_ALTARIA, ITEM_NONE
    trainer_mon_item_default 140, 49, SPECIES_ALTARIA, ITEM_NONE
    trainer_mon_item_default 140, 49, SPECIES_SHELGON, ITEM_DRAGON_FANG

sParty_Aaron: @ 0x082E0AD4
    @ TRAINER_AARON (id 397): タツマ ; flags=1, partySize=1
    trainer_mon_no_item_custom 255, 34, SPECIES_BAGON, MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_EMBER

sParty_Perry: @ 0x082E0AE4
    @ TRAINER_PERRY (id 398): キヨヒコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_WINGULL

sParty_Hugh: @ 0x082E0AEC
    @ TRAINER_HUGH (id 399): タクミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 25, SPECIES_TROPIUS

sParty_Phil: @ 0x082E0AFC
    @ TRAINER_PHIL (id 400): シュンペイ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_SWELLOW

sParty_Jared: @ 0x082E0B04
    @ TRAINER_JARED (id 401): エイジ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 27, SPECIES_DODUO
    trainer_mon_no_item_default 100, 27, SPECIES_SKARMORY
    trainer_mon_no_item_default 100, 27, SPECIES_TROPIUS

sParty_Humberto: @ 0x082E0B1C
    @ TRAINER_HUMBERTO (id 402): ミツアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 250, 30, SPECIES_SKARMORY

sParty_Presley: @ 0x082E0B24
    @ TRAINER_PRESLEY (id 403): ナオヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_TROPIUS
    trainer_mon_no_item_default 0, 33, SPECIES_XATU

sParty_Edwardo: @ 0x082E0B34
    @ TRAINER_EDWARDO (id 404): ジョウタ ; flags=0, partySize=2
    trainer_mon_no_item_default 150, 29, SPECIES_DODUO
    trainer_mon_no_item_default 150, 29, SPECIES_PELIPPER

sParty_Colin: @ 0x082E0B44
    @ TRAINER_COLIN (id 405): モリカズ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 28, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 28, SPECIES_NATU

sParty_Robert1: @ 0x082E0B54
    @ TRAINER_ROBERT_1 (id 406): ツバサ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_SWABLU

sParty_Benny: @ 0x082E0B5C
    @ TRAINER_BENNY (id 407): アキマサ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 36, SPECIES_SWELLOW
    trainer_mon_no_item_default 0, 36, SPECIES_PELIPPER
    trainer_mon_no_item_default 0, 36, SPECIES_XATU

sParty_Chester: @ 0x082E0B74
    @ TRAINER_CHESTER (id 408): タイシ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_TAILLOW
    trainer_mon_no_item_default 0, 25, SPECIES_SWELLOW

sParty_Robert2: @ 0x082E0B84
    @ TRAINER_ROBERT_2 (id 409): ツバサ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 32, SPECIES_NATU
    trainer_mon_no_item_default 10, 32, SPECIES_SWABLU

sParty_Robert3: @ 0x082E0B94
    @ TRAINER_ROBERT_3 (id 410): ツバサ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 35, SPECIES_NATU
    trainer_mon_no_item_default 20, 35, SPECIES_ALTARIA

sParty_Robert4: @ 0x082E0BA4
    @ TRAINER_ROBERT_4 (id 411): ツバサ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 38, SPECIES_NATU
    trainer_mon_no_item_default 30, 38, SPECIES_ALTARIA

sParty_Robert5: @ 0x082E0BB4
    @ TRAINER_ROBERT_5 (id 412): ツバサ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 41, SPECIES_ALTARIA
    trainer_mon_no_item_default 40, 41, SPECIES_XATU

sParty_Alex: @ 0x082E0BC4
    @ TRAINER_ALEX (id 413): マサツグ ; flags=0, partySize=2
    trainer_mon_no_item_default 150, 33, SPECIES_NATU
    trainer_mon_no_item_default 150, 33, SPECIES_SWELLOW

sParty_Beck: @ 0x082E0BD4
    @ TRAINER_BECK (id 414): トシアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_TROPIUS

sParty_Yasu: @ 0x082E0BDC
    @ TRAINER_YASU (id 415): ヒロノブ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_NINJASK

sParty_Takashi: @ 0x082E0BE4
    @ TRAINER_TAKASHI (id 416): シロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_NINJASK
    trainer_mon_no_item_default 0, 25, SPECIES_KOFFING

sParty_Dianne: @ 0x082E0BF4
    @ TRAINER_DIANNE (id 417): ココロ ; flags=3, partySize=2
    trainer_mon_item_custom 0, 43, SPECIES_CLAYDOL, ITEM_NONE, MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE
    trainer_mon_item_custom 0, 43, SPECIES_LANTURN, ITEM_NONE, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE

sParty_Jani: @ 0x082E0C14
    @ TRAINER_JANI (id 418): マミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_MARILL

sParty_Lao1: @ 0x082E0C1C
    @ TRAINER_LAO_1 (id 419): キンジ ; flags=1, partySize=3
    trainer_mon_no_item_custom 0, 17, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT
    trainer_mon_no_item_custom 0, 17, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT
    trainer_mon_no_item_custom 0, 17, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT

sParty_Lung: @ 0x082E0C4C
    @ TRAINER_LUNG (id 420): ムラマサ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_KOFFING
    trainer_mon_no_item_default 0, 18, SPECIES_NINJASK

sParty_Lao2: @ 0x082E0C5C
    @ TRAINER_LAO_2 (id 421): キンジ ; flags=1, partySize=4
    trainer_mon_no_item_custom 0, 24, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT
    trainer_mon_no_item_custom 0, 24, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE
    trainer_mon_no_item_custom 0, 24, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT
    trainer_mon_no_item_custom 0, 26, SPECIES_KOFFING, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE

sParty_Lao3: @ 0x082E0C9C
    @ TRAINER_LAO_3 (id 422): キンジ ; flags=1, partySize=4
    trainer_mon_no_item_custom 20, 27, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT
    trainer_mon_no_item_custom 20, 27, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT
    trainer_mon_no_item_custom 20, 27, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE
    trainer_mon_no_item_custom 20, 29, SPECIES_KOFFING, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE

sParty_Lao4: @ 0x082E0CDC
    @ TRAINER_LAO_4 (id 423): キンジ ; flags=1, partySize=4
    trainer_mon_no_item_custom 30, 30, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE
    trainer_mon_no_item_custom 30, 30, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE
    trainer_mon_no_item_custom 30, 30, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE
    trainer_mon_no_item_custom 30, 32, SPECIES_KOFFING, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE

sParty_Lao5: @ 0x082E0D1C
    @ TRAINER_LAO_5 (id 424): キンジ ; flags=3, partySize=4
    trainer_mon_item_custom 40, 33, SPECIES_KOFFING, ITEM_NONE, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE
    trainer_mon_item_custom 40, 33, SPECIES_KOFFING, ITEM_NONE, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT
    trainer_mon_item_custom 40, 33, SPECIES_KOFFING, ITEM_NONE, MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT
    trainer_mon_item_custom 40, 35, SPECIES_WEEZING, ITEM_SMOKE_BALL, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE

sParty_Jocelyn: @ 0x082E0D5C
    @ TRAINER_JOCELYN (id 425): シノブ ; flags=0, partySize=1
    trainer_mon_no_item_default 127, 13, SPECIES_MEDITITE

sParty_Laura: @ 0x082E0D64
    @ TRAINER_LAURA (id 426): ミサト ; flags=0, partySize=1
    trainer_mon_no_item_default 150, 13, SPECIES_MEDITITE

sParty_Cyndy1: @ 0x082E0D6C
    @ TRAINER_CYNDY_1 (id 427): ユリカ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 18, SPECIES_MEDITITE
    trainer_mon_no_item_default 100, 18, SPECIES_MAKUHITA

sParty_Cora: @ 0x082E0D7C
    @ TRAINER_CORA (id 428): フウカ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 27, SPECIES_MEDITITE

sParty_Paula: @ 0x082E0D84
    @ TRAINER_PAULA (id 429): ヒイナ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 27, SPECIES_BRELOOM

sParty_Cyndy2: @ 0x082E0D8C
    @ TRAINER_CYNDY_2 (id 430): ユリカ ; flags=0, partySize=2
    trainer_mon_no_item_default 110, 26, SPECIES_MEDITITE
    trainer_mon_no_item_default 110, 26, SPECIES_MAKUHITA

sParty_Cyndy3: @ 0x082E0D9C
    @ TRAINER_CYNDY_3 (id 431): ユリカ ; flags=0, partySize=2
    trainer_mon_no_item_default 120, 29, SPECIES_MEDITITE
    trainer_mon_no_item_default 120, 29, SPECIES_MAKUHITA

sParty_Cyndy4: @ 0x082E0DAC
    @ TRAINER_CYNDY_4 (id 432): ユリカ ; flags=0, partySize=2
    trainer_mon_no_item_default 130, 32, SPECIES_MEDICHAM
    trainer_mon_no_item_default 130, 32, SPECIES_HARIYAMA

sParty_Cyndy5: @ 0x082E0DBC
    @ TRAINER_CYNDY_5 (id 433): ユリカ ; flags=0, partySize=2
    trainer_mon_no_item_default 140, 35, SPECIES_MEDICHAM
    trainer_mon_no_item_default 140, 35, SPECIES_HARIYAMA

sParty_Madeline1: @ 0x082E0DCC
    @ TRAINER_MADELINE_1 (id 434): マドカ ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 19, SPECIES_NUMEL, MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY

sParty_Clarissa: @ 0x082E0DDC
    @ TRAINER_CLARISSA (id 435): ミカ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 28, SPECIES_ROSELIA
    trainer_mon_no_item_default 0, 28, SPECIES_WAILMER

sParty_Angelica: @ 0x082E0DEC
    @ TRAINER_ANGELICA (id 436): ウキエ ; flags=1, partySize=1
    trainer_mon_no_item_custom 50, 30, SPECIES_CASTFORM_NORMAL, MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE

sParty_Madeline2: @ 0x082E0DFC
    @ TRAINER_MADELINE_2 (id 437): マドカ ; flags=1, partySize=1
    trainer_mon_no_item_custom 10, 29, SPECIES_NUMEL, MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY

sParty_Madeline3: @ 0x082E0E0C
    @ TRAINER_MADELINE_3 (id 438): マドカ ; flags=1, partySize=1
    trainer_mon_no_item_custom 20, 32, SPECIES_NUMEL, MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY

sParty_Madeline4: @ 0x082E0E1C
    @ TRAINER_MADELINE_4 (id 439): マドカ ; flags=1, partySize=2
    trainer_mon_no_item_custom 30, 34, SPECIES_ROSELIA, MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY
    trainer_mon_no_item_custom 30, 34, SPECIES_NUMEL, MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY

sParty_Madeline5: @ 0x082E0E3C
    @ TRAINER_MADELINE_5 (id 440): マドカ ; flags=1, partySize=2
    trainer_mon_no_item_custom 40, 37, SPECIES_ROSELIA, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY
    trainer_mon_no_item_custom 40, 37, SPECIES_CAMERUPT, MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY

sParty_Beverly: @ 0x082E0E5C
    @ TRAINER_BEVERLY (id 441): ナツキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 25, SPECIES_WAILMER

sParty_Imani: @ 0x082E0E6C
    @ TRAINER_IMANI (id 442): マユカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_MARILL

sParty_Kyla: @ 0x082E0E74
    @ TRAINER_KYLA (id 443): ミズハ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_WAILMER

sParty_Denise: @ 0x082E0E7C
    @ TRAINER_DENISE (id 444): マサミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 25, SPECIES_GOLDEEN

sParty_Beth: @ 0x082E0E8C
    @ TRAINER_BETH (id 445): ノリカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_GOLDEEN

sParty_Tara: @ 0x082E0E94
    @ TRAINER_TARA (id 446): チヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_HORSEA
    trainer_mon_no_item_default 0, 25, SPECIES_MARILL

sParty_Missy: @ 0x082E0EA4
    @ TRAINER_MISSY (id 447): クミコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_GOLDEEN

sParty_Alice: @ 0x082E0EAC
    @ TRAINER_ALICE (id 448): エツコ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 24, SPECIES_GOLDEEN
    trainer_mon_no_item_default 0, 24, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 24, SPECIES_GOLDEEN

sParty_Jenny1: @ 0x082E0EC4
    @ TRAINER_JENNY_1 (id 449): ナギサ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_WAILMER

sParty_Grace: @ 0x082E0ECC
    @ TRAINER_GRACE (id 450): アキエ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_MARILL

sParty_Tanya: @ 0x082E0ED4
    @ TRAINER_TANYA (id 451): ケイコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_LUVDISC

sParty_Sharon: @ 0x082E0EDC
    @ TRAINER_SHARON (id 452): サイカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_SEAKING

sParty_Nikki: @ 0x082E0EE4
    @ TRAINER_NIKKI (id 453): シズエ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_MARILL
    trainer_mon_no_item_default 0, 33, SPECIES_SPHEAL

sParty_Brenda: @ 0x082E0EF4
    @ TRAINER_BRENDA (id 454): テルミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_GOLDEEN

sParty_Katie: @ 0x082E0EFC
    @ TRAINER_KATIE (id 455): フミエ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_GOLDEEN
    trainer_mon_no_item_default 0, 33, SPECIES_SPHEAL

sParty_Susie: @ 0x082E0F0C
    @ TRAINER_SUSIE (id 456): ミサキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_LUVDISC

sParty_Kara: @ 0x082E0F14
    @ TRAINER_KARA (id 457): マリエ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_SEAKING

sParty_Dana: @ 0x082E0F1C
    @ TRAINER_DANA (id 458): ミユキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_AZUMARILL

sParty_Sienna: @ 0x082E0F24
    @ TRAINER_SIENNA (id 459): イクコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_LUVDISC
    trainer_mon_no_item_default 0, 33, SPECIES_LUVDISC

sParty_Debra: @ 0x082E0F34
    @ TRAINER_DEBRA (id 460): リカコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_SEAKING

sParty_Linda: @ 0x082E0F3C
    @ TRAINER_LINDA (id 461): ハルミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_HORSEA
    trainer_mon_no_item_default 0, 33, SPECIES_SEADRA

sParty_Kaylee: @ 0x082E0F4C
    @ TRAINER_KAYLEE (id 462): タカコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 34, SPECIES_LANTURN
    trainer_mon_no_item_default 0, 34, SPECIES_PELIPPER

sParty_Laurel: @ 0x082E0F5C
    @ TRAINER_LAUREL (id 463): ソノコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_LUVDISC
    trainer_mon_no_item_default 0, 33, SPECIES_LUVDISC

sParty_Carlee: @ 0x082E0F6C
    @ TRAINER_CARLEE (id 464): クニコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 35, SPECIES_SEAKING

sParty_Jenny2: @ 0x082E0F74
    @ TRAINER_JENNY_2 (id 465): ナギサ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 38, SPECIES_WAILMER

sParty_Jenny3: @ 0x082E0F7C
    @ TRAINER_JENNY_3 (id 466): ナギサ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 41, SPECIES_WAILMER

sParty_Jenny4: @ 0x082E0F84
    @ TRAINER_JENNY_4 (id 467): ナギサ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 43, SPECIES_STARYU
    trainer_mon_no_item_default 0, 43, SPECIES_WAILMER

sParty_Jenny5: @ 0x082E0F94
    @ TRAINER_JENNY_5 (id 468): ナギサ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 45, SPECIES_LUVDISC
    trainer_mon_no_item_default 0, 45, SPECIES_WAILMER
    trainer_mon_no_item_default 0, 45, SPECIES_STARMIE

sParty_Heidi: @ 0x082E0FAC
    @ TRAINER_HEIDI (id 469): チカコ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 22, SPECIES_SANDSHREW, MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH
    trainer_mon_no_item_custom 0, 22, SPECIES_BALTOY, MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB

sParty_Becky: @ 0x082E0FCC
    @ TRAINER_BECKY (id 470): アイミ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 22, SPECIES_SANDSHREW, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH, MOVE_DIG
    trainer_mon_no_item_custom 0, 22, SPECIES_MARILL, MOVE_ROLLOUT, MOVE_BUBBLE_BEAM, MOVE_TAIL_WHIP, MOVE_DEFENSE_CURL

sParty_Carol: @ 0x082E0FEC
    @ TRAINER_CAROL (id 471): ヒロコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 17, SPECIES_TAILLOW
    trainer_mon_no_item_default 0, 17, SPECIES_LOMBRE

sParty_Nancy: @ 0x082E0FFC
    @ TRAINER_NANCY (id 472): サツキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_MARILL
    trainer_mon_no_item_default 0, 18, SPECIES_LOMBRE

sParty_Martha: @ 0x082E100C
    @ TRAINER_MARTHA (id 473): トモコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 23, SPECIES_SKITTY
    trainer_mon_no_item_default 0, 23, SPECIES_SWABLU

sParty_Diana1: @ 0x082E101C
    @ TRAINER_DIANA_1 (id 474): コズエ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 19, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 19, SPECIES_ODDISH
    trainer_mon_no_item_default 0, 19, SPECIES_SWABLU

sParty_Cedric: @ 0x082E1034
    @ TRAINER_CEDRIC (id 475): ヨシキヨ ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 32, SPECIES_WOBBUFFET, MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT

sParty_Irene: @ 0x082E1044
    @ TRAINER_IRENE (id 476): ミズキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 17, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 17, SPECIES_MARILL

sParty_Diana2: @ 0x082E1054
    @ TRAINER_DIANA_2 (id 477): コズエ ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 25, SPECIES_SHROOMISH
    trainer_mon_no_item_default 10, 25, SPECIES_GLOOM
    trainer_mon_no_item_default 10, 25, SPECIES_SWABLU

sParty_Diana3: @ 0x082E106C
    @ TRAINER_DIANA_3 (id 478): コズエ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 28, SPECIES_BRELOOM
    trainer_mon_no_item_default 20, 28, SPECIES_GLOOM
    trainer_mon_no_item_default 20, 28, SPECIES_SWABLU

sParty_Diana4: @ 0x082E1084
    @ TRAINER_DIANA_4 (id 479): コズエ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 31, SPECIES_BRELOOM
    trainer_mon_no_item_default 30, 31, SPECIES_GLOOM
    trainer_mon_no_item_default 30, 31, SPECIES_SWABLU

sParty_Diana5: @ 0x082E109C
    @ TRAINER_DIANA_5 (id 480): コズエ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 40, SPECIES_BRELOOM
    trainer_mon_no_item_default 40, 40, SPECIES_VILEPLUME
    trainer_mon_no_item_default 40, 40, SPECIES_ALTARIA

sParty_AmyAndLiv1: @ 0x082E10B4
    @ TRAINER_AMY_AND_LIV_1 (id 481): クミとルミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 15, SPECIES_PLUSLE
    trainer_mon_no_item_default 0, 15, SPECIES_MINUN

sParty_AmyAndLiv2: @ 0x082E10C4
    @ TRAINER_AMY_AND_LIV_2 (id 482): クミとルミ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 27, SPECIES_PLUSLE
    trainer_mon_no_item_default 10, 27, SPECIES_MINUN

sParty_GinaAndMia1: @ 0x082E10D4
    @ TRAINER_GINA_AND_MIA_1 (id 483): ナオとミオ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 6, SPECIES_SEEDOT
    trainer_mon_no_item_default 0, 6, SPECIES_LOTAD

sParty_MiuAndYuki: @ 0x082E10E4
    @ TRAINER_MIU_AND_YUKI (id 484): ミウとユキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_BEAUTIFLY
    trainer_mon_no_item_default 0, 26, SPECIES_DUSTOX

sParty_AmyAndLiv3: @ 0x082E10F4
    @ TRAINER_AMY_AND_LIV_3 (id 485): クミとルミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 9, SPECIES_PLUSLE
    trainer_mon_no_item_default 0, 9, SPECIES_MINUN

sParty_GinaAndMia2: @ 0x082E1104
    @ TRAINER_GINA_AND_MIA_2 (id 486): ナオとミオ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 10, SPECIES_DUSKULL, MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE
    trainer_mon_no_item_custom 0, 10, SPECIES_SHROOMISH, MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE

sParty_AmyAndLiv4: @ 0x082E1124
    @ TRAINER_AMY_AND_LIV_4 (id 487): クミとルミ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 30, SPECIES_PLUSLE
    trainer_mon_no_item_default 20, 30, SPECIES_MINUN

sParty_AmyAndLiv5: @ 0x082E1134
    @ TRAINER_AMY_AND_LIV_5 (id 488): クミとルミ ; flags=1, partySize=2
    trainer_mon_no_item_custom 30, 33, SPECIES_PLUSLE, MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND
    trainer_mon_no_item_custom 30, 33, SPECIES_MINUN, MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND

sParty_AmyAndLiv6: @ 0x082E1154
    @ TRAINER_AMY_AND_LIV_6 (id 489): クミとルミ ; flags=1, partySize=2
    trainer_mon_no_item_custom 40, 36, SPECIES_PLUSLE, MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND
    trainer_mon_no_item_custom 40, 36, SPECIES_MINUN, MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND

sParty_Huey: @ 0x082E1174
    @ TRAINER_HUEY (id 490): タツロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 12, SPECIES_WINGULL
    trainer_mon_no_item_default 10, 12, SPECIES_MACHOP

sParty_Edmond: @ 0x082E1184
    @ TRAINER_EDMOND (id 491): カツヤ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 13, SPECIES_WINGULL

sParty_Ernest1: @ 0x082E118C
    @ TRAINER_ERNEST_1 (id 492): ジロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 33, SPECIES_MACHOKE

sParty_Dwayne: @ 0x082E119C
    @ TRAINER_DWAYNE (id 493): タツヒコ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 11, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 11, SPECIES_MACHOP
    trainer_mon_no_item_default 0, 11, SPECIES_TENTACOOL

sParty_Phillip: @ 0x082E11B4
    @ TRAINER_PHILLIP (id 494): ユウサク ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 44, SPECIES_TENTACRUEL
    trainer_mon_no_item_default 0, 44, SPECIES_MACHOKE

sParty_Leonard: @ 0x082E11C4
    @ TRAINER_LEONARD (id 495): ダイキ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 43, SPECIES_MACHOP
    trainer_mon_no_item_default 0, 43, SPECIES_PELIPPER
    trainer_mon_no_item_default 0, 43, SPECIES_MACHOKE

sParty_Duncan: @ 0x082E11DC
    @ TRAINER_DUNCAN (id 496): ヒデフミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_SPHEAL
    trainer_mon_no_item_default 0, 25, SPECIES_MACHOKE

sParty_Ernest2: @ 0x082E11EC
    @ TRAINER_ERNEST_2 (id 497): ジロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 36, SPECIES_WINGULL
    trainer_mon_no_item_default 10, 36, SPECIES_TENTACOOL
    trainer_mon_no_item_default 10, 36, SPECIES_MACHOKE

sParty_Ernest3: @ 0x082E1204
    @ TRAINER_ERNEST_3 (id 498): ジロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 39, SPECIES_PELIPPER
    trainer_mon_no_item_default 20, 39, SPECIES_TENTACOOL
    trainer_mon_no_item_default 20, 39, SPECIES_MACHOKE

sParty_Ernest4: @ 0x082E121C
    @ TRAINER_ERNEST_4 (id 499): ジロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 42, SPECIES_PELIPPER
    trainer_mon_no_item_default 30, 42, SPECIES_TENTACOOL
    trainer_mon_no_item_default 30, 42, SPECIES_MACHOKE

sParty_Ernest5: @ 0x082E1234
    @ TRAINER_ERNEST_5 (id 500): ジロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 45, SPECIES_PELIPPER
    trainer_mon_no_item_default 40, 45, SPECIES_MACHOKE
    trainer_mon_no_item_default 40, 45, SPECIES_TENTACRUEL

sParty_Eli: @ 0x082E124C
    @ TRAINER_ELI (id 501): テルヨシ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 23, SPECIES_NUMEL

sParty_Annika: @ 0x082E1254
    @ TRAINER_ANNIKA (id 502): ミネコ ; flags=3, partySize=2
    trainer_mon_item_custom 100, 39, SPECIES_FEEBAS, ITEM_ORAN_BERRY, MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT
    trainer_mon_item_custom 100, 39, SPECIES_FEEBAS, ITEM_ORAN_BERRY, MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT

sParty_Jazmyn: @ 0x082E1274
    @ TRAINER_JAZMYN (id 503): ミワ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 27, SPECIES_ABSOL

sParty_Jonas: @ 0x082E127C
    @ TRAINER_JONAS (id 504): シンスケ ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 31, SPECIES_KOFFING, MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB

sParty_Kayley: @ 0x082E128C
    @ TRAINER_KAYLEY (id 505): カオルコ ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 31, SPECIES_CASTFORM_NORMAL, MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM

sParty_Auron: @ 0x082E129C
    @ TRAINER_AURON (id 506): イッケイ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_MANECTRIC
    trainer_mon_no_item_default 0, 33, SPECIES_MACHAMP

sParty_Kelvin: @ 0x082E12AC
    @ TRAINER_KELVIN (id 507): ナオヤ ; flags=0, partySize=2
    trainer_mon_no_item_default 150, 33, SPECIES_MACHOKE
    trainer_mon_no_item_default 150, 33, SPECIES_SPHEAL

sParty_Marley: @ 0x082E12BC
    @ TRAINER_MARLEY (id 508): リツコ ; flags=3, partySize=1
    trainer_mon_item_custom 255, 34, SPECIES_MANECTRIC, ITEM_NONE, MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT

sParty_Reyna: @ 0x082E12CC
    @ TRAINER_REYNA (id 509): タマキ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 33, SPECIES_MEDITITE
    trainer_mon_no_item_default 200, 33, SPECIES_HARIYAMA

sParty_Hudson: @ 0x082E12DC
    @ TRAINER_HUDSON (id 510): ジュンヤ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_WAILMER

sParty_Conor: @ 0x082E12E4
    @ TRAINER_CONOR (id 511): シゲヨシ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_CHINCHOU
    trainer_mon_no_item_default 200, 33, SPECIES_HARIYAMA

sParty_Edwin1: @ 0x082E12F4
    @ TRAINER_EDWIN_1 (id 512): モトキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 14, SPECIES_LOMBRE
    trainer_mon_no_item_default 0, 14, SPECIES_NUZLEAF

sParty_Hector: @ 0x082E1304
    @ TRAINER_HECTOR (id 513): トシノブ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_ZANGOOSE
    trainer_mon_no_item_default 0, 18, SPECIES_SEVIPER

sParty_TabithaMossdeep: @ 0x082E1314
    @ TRAINER_TABITHA_MOSSDEEP (id 514): ホムラ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 36, SPECIES_CAMERUPT
    trainer_mon_no_item_default 100, 38, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 100, 40, SPECIES_GOLBAT

sParty_Edwin2: @ 0x082E132C
    @ TRAINER_EDWIN_2 (id 515): モトキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_LOMBRE
    trainer_mon_no_item_default 0, 26, SPECIES_NUZLEAF

sParty_Edwin3: @ 0x082E133C
    @ TRAINER_EDWIN_3 (id 516): モトキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 29, SPECIES_LOMBRE
    trainer_mon_no_item_default 0, 29, SPECIES_NUZLEAF

sParty_Edwin4: @ 0x082E134C
    @ TRAINER_EDWIN_4 (id 517): モトキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 32, SPECIES_LOMBRE
    trainer_mon_no_item_default 0, 32, SPECIES_NUZLEAF

sParty_Edwin5: @ 0x082E135C
    @ TRAINER_EDWIN_5 (id 518): モトキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 35, SPECIES_LUDICOLO
    trainer_mon_no_item_default 0, 35, SPECIES_SHIFTRY

sParty_WallyVr1: @ 0x082E136C
    @ TRAINER_WALLY_VR_1 (id 519): ミツル ; flags=1, partySize=5
    trainer_mon_no_item_custom 150, 44, SPECIES_ALTARIA, MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE
    trainer_mon_no_item_custom 150, 43, SPECIES_DELCATTY, MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 150, 44, SPECIES_ROSELIA, MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC
    trainer_mon_no_item_custom 150, 41, SPECIES_MAGNETON, MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH
    trainer_mon_no_item_custom 250, 45, SPECIES_GARDEVOIR, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT

sParty_BrendanRoute103Mudkip: @ 0x082E13BC
    @ TRAINER_BRENDAN_ROUTE_103_MUDKIP (id 520, special 0): ユウキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_TREECKO

sParty_BrendanRoute110Mudkip: @ 0x082E13C4
    @ TRAINER_BRENDAN_ROUTE_110_MUDKIP (id 521, special 1): ユウキ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 18, SPECIES_SLUGMA
    trainer_mon_no_item_default 50, 18, SPECIES_WINGULL
    trainer_mon_no_item_default 100, 20, SPECIES_GROVYLE

sParty_BrendanRoute119Mudkip: @ 0x082E13DC
    @ TRAINER_BRENDAN_ROUTE_119_MUDKIP (id 522, special 2): ユウキ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 29, SPECIES_SLUGMA
    trainer_mon_no_item_default 100, 29, SPECIES_PELIPPER
    trainer_mon_no_item_default 150, 31, SPECIES_GROVYLE

sParty_BrendanRoute103Treecko: @ 0x082E13F4
    @ TRAINER_BRENDAN_ROUTE_103_TREECKO (id 523, special 3): ユウキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_TORCHIC

sParty_BrendanRoute110Treecko: @ 0x082E13FC
    @ TRAINER_BRENDAN_ROUTE_110_TREECKO (id 524, special 4): ユウキ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 18, SPECIES_WINGULL
    trainer_mon_no_item_default 50, 18, SPECIES_LOMBRE
    trainer_mon_no_item_default 100, 20, SPECIES_COMBUSKEN

sParty_BrendanRoute119Treecko: @ 0x082E1414
    @ TRAINER_BRENDAN_ROUTE_119_TREECKO (id 525, special 5): ユウキ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 29, SPECIES_PELIPPER
    trainer_mon_no_item_default 100, 29, SPECIES_LOMBRE
    trainer_mon_no_item_default 150, 31, SPECIES_COMBUSKEN

sParty_BrendanRoute103Torchic: @ 0x082E142C
    @ TRAINER_BRENDAN_ROUTE_103_TORCHIC (id 526, special 6): ユウキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_MUDKIP

sParty_BrendanRoute110Torchic: @ 0x082E1434
    @ TRAINER_BRENDAN_ROUTE_110_TORCHIC (id 527, special 7): ユウキ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 18, SPECIES_LOMBRE
    trainer_mon_no_item_default 50, 18, SPECIES_SLUGMA
    trainer_mon_no_item_default 100, 20, SPECIES_MARSHTOMP

sParty_BrendanRoute119Torchic: @ 0x082E144C
    @ TRAINER_BRENDAN_ROUTE_119_TORCHIC (id 528, special 8): ユウキ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 29, SPECIES_LOMBRE
    trainer_mon_no_item_default 100, 29, SPECIES_SLUGMA
    trainer_mon_no_item_default 150, 31, SPECIES_MARSHTOMP

sParty_MayRoute103Mudkip: @ 0x082E1464
    @ TRAINER_MAY_ROUTE_103_MUDKIP (id 529, special 9): ハルカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_TREECKO

sParty_MayRoute110Mudkip: @ 0x082E146C
    @ TRAINER_MAY_ROUTE_110_MUDKIP (id 530, special 10): ハルカ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 18, SPECIES_WINGULL
    trainer_mon_no_item_default 50, 18, SPECIES_SLUGMA
    trainer_mon_no_item_default 100, 20, SPECIES_GROVYLE

sParty_MayRoute119Mudkip: @ 0x082E1484
    @ TRAINER_MAY_ROUTE_119_MUDKIP (id 531, special 11): ハルカ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 29, SPECIES_SLUGMA
    trainer_mon_no_item_default 100, 29, SPECIES_LOMBRE
    trainer_mon_no_item_default 150, 31, SPECIES_GROVYLE

sParty_MayRoute103Treecko: @ 0x082E149C
    @ TRAINER_MAY_ROUTE_103_TREECKO (id 532, special 12): ハルカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_TORCHIC

sParty_MayRoute110Treecko: @ 0x082E14A4
    @ TRAINER_MAY_ROUTE_110_TREECKO (id 533, special 13): ハルカ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 18, SPECIES_WINGULL
    trainer_mon_no_item_default 50, 18, SPECIES_LOMBRE
    trainer_mon_no_item_default 100, 20, SPECIES_COMBUSKEN

sParty_MayRoute119Treecko: @ 0x082E14BC
    @ TRAINER_MAY_ROUTE_119_TREECKO (id 534, special 14): ハルカ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 29, SPECIES_PELIPPER
    trainer_mon_no_item_default 100, 29, SPECIES_LOMBRE
    trainer_mon_no_item_default 150, 31, SPECIES_COMBUSKEN

sParty_MayRoute103Torchic: @ 0x082E14D4
    @ TRAINER_MAY_ROUTE_103_TORCHIC (id 535, special 15): ハルカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_MUDKIP

sParty_MayRoute110Torchic: @ 0x082E14DC
    @ TRAINER_MAY_ROUTE_110_TORCHIC (id 536, special 16): ハルカ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 18, SPECIES_LOMBRE
    trainer_mon_no_item_default 50, 18, SPECIES_SLUGMA
    trainer_mon_no_item_default 100, 20, SPECIES_MARSHTOMP

sParty_MayRoute119Torchic: @ 0x082E14F4
    @ TRAINER_MAY_ROUTE_119_TORCHIC (id 537, special 17): ハルカ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 29, SPECIES_LOMBRE
    trainer_mon_no_item_default 100, 29, SPECIES_SLUGMA
    trainer_mon_no_item_default 150, 31, SPECIES_MARSHTOMP

sParty_Isaac1: @ 0x082E150C
    @ TRAINER_ISAAC_1 (id 538, special 18): セイジ ; flags=0, partySize=6
    trainer_mon_no_item_default 0, 11, SPECIES_WHISMUR
    trainer_mon_no_item_default 0, 11, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 11, SPECIES_ARON
    trainer_mon_no_item_default 0, 11, SPECIES_POOCHYENA
    trainer_mon_no_item_default 0, 11, SPECIES_TAILLOW
    trainer_mon_no_item_default 0, 11, SPECIES_MAKUHITA

sParty_Davis: @ 0x082E153C
    @ TRAINER_DAVIS (id 539, special 19): ヨシロウ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 27, SPECIES_PINSIR

sParty_Mitchell: @ 0x082E1544
    @ TRAINER_MITCHELL (id 540, special 20): テッペイ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 43, SPECIES_LUNATONE, MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC
    trainer_mon_no_item_custom 0, 43, SPECIES_SOLROCK, MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL

sParty_Isaac2: @ 0x082E1564
    @ TRAINER_ISAAC_2 (id 541, special 21): セイジ ; flags=0, partySize=6
    trainer_mon_no_item_default 10, 22, SPECIES_LOUDRED
    trainer_mon_no_item_default 10, 22, SPECIES_LINOONE
    trainer_mon_no_item_default 10, 22, SPECIES_ARON
    trainer_mon_no_item_default 10, 22, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 10, 22, SPECIES_SWELLOW
    trainer_mon_no_item_default 10, 22, SPECIES_MAKUHITA

sParty_Isaac3: @ 0x082E1594
    @ TRAINER_ISAAC_3 (id 542, special 22): セイジ ; flags=0, partySize=6
    trainer_mon_no_item_default 20, 25, SPECIES_LOUDRED
    trainer_mon_no_item_default 20, 25, SPECIES_LINOONE
    trainer_mon_no_item_default 20, 25, SPECIES_ARON
    trainer_mon_no_item_default 20, 25, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 20, 25, SPECIES_SWELLOW
    trainer_mon_no_item_default 20, 25, SPECIES_HARIYAMA

sParty_Isaac4: @ 0x082E15C4
    @ TRAINER_ISAAC_4 (id 543, special 23): セイジ ; flags=0, partySize=6
    trainer_mon_no_item_default 30, 28, SPECIES_LOUDRED
    trainer_mon_no_item_default 30, 28, SPECIES_LINOONE
    trainer_mon_no_item_default 30, 28, SPECIES_ARON
    trainer_mon_no_item_default 30, 28, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 30, 28, SPECIES_SWELLOW
    trainer_mon_no_item_default 30, 28, SPECIES_HARIYAMA

sParty_Isaac5: @ 0x082E15F4
    @ TRAINER_ISAAC_5 (id 544, special 24): セイジ ; flags=0, partySize=6
    trainer_mon_no_item_default 40, 31, SPECIES_LOUDRED
    trainer_mon_no_item_default 40, 31, SPECIES_LINOONE
    trainer_mon_no_item_default 40, 31, SPECIES_LAIRON
    trainer_mon_no_item_default 40, 31, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 40, 31, SPECIES_SWELLOW
    trainer_mon_no_item_default 40, 31, SPECIES_HARIYAMA

sParty_Lydia1: @ 0x082E1624
    @ TRAINER_LYDIA_1 (id 545, special 25): イクエ ; flags=0, partySize=6
    trainer_mon_no_item_default 0, 11, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 11, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 11, SPECIES_MARILL
    trainer_mon_no_item_default 0, 11, SPECIES_ROSELIA
    trainer_mon_no_item_default 0, 11, SPECIES_SKITTY
    trainer_mon_no_item_default 0, 11, SPECIES_GOLDEEN

sParty_Halle: @ 0x082E1654
    @ TRAINER_HALLE (id 546, special 26): ヒロエ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 43, SPECIES_SABLEYE
    trainer_mon_no_item_default 0, 43, SPECIES_ABSOL

sParty_Garrison: @ 0x082E1664
    @ TRAINER_GARRISON (id 547, special 27): ツネヤス ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_SANDSLASH

sParty_Lydia2: @ 0x082E166C
    @ TRAINER_LYDIA_2 (id 548, special 28): イクエ ; flags=0, partySize=6
    trainer_mon_no_item_default 10, 22, SPECIES_WINGULL
    trainer_mon_no_item_default 10, 22, SPECIES_SHROOMISH
    trainer_mon_no_item_default 10, 22, SPECIES_MARILL
    trainer_mon_no_item_default 10, 22, SPECIES_ROSELIA
    trainer_mon_no_item_default 10, 22, SPECIES_SKITTY
    trainer_mon_no_item_default 10, 22, SPECIES_GOLDEEN

sParty_Lydia3: @ 0x082E169C
    @ TRAINER_LYDIA_3 (id 549, special 29): イクエ ; flags=0, partySize=6
    trainer_mon_no_item_default 20, 25, SPECIES_PELIPPER
    trainer_mon_no_item_default 20, 25, SPECIES_BRELOOM
    trainer_mon_no_item_default 20, 25, SPECIES_MARILL
    trainer_mon_no_item_default 20, 25, SPECIES_ROSELIA
    trainer_mon_no_item_default 20, 25, SPECIES_DELCATTY
    trainer_mon_no_item_default 20, 25, SPECIES_GOLDEEN

sParty_Lydia4: @ 0x082E16CC
    @ TRAINER_LYDIA_4 (id 550, special 30): イクエ ; flags=0, partySize=6
    trainer_mon_no_item_default 30, 28, SPECIES_PELIPPER
    trainer_mon_no_item_default 30, 28, SPECIES_BRELOOM
    trainer_mon_no_item_default 30, 28, SPECIES_MARILL
    trainer_mon_no_item_default 30, 28, SPECIES_ROSELIA
    trainer_mon_no_item_default 30, 28, SPECIES_DELCATTY
    trainer_mon_no_item_default 30, 28, SPECIES_GOLDEEN

sParty_Lydia5: @ 0x082E16FC
    @ TRAINER_LYDIA_5 (id 551, special 31): イクエ ; flags=0, partySize=6
    trainer_mon_no_item_default 40, 31, SPECIES_PELIPPER
    trainer_mon_no_item_default 40, 31, SPECIES_BRELOOM
    trainer_mon_no_item_default 40, 31, SPECIES_AZUMARILL
    trainer_mon_no_item_default 40, 31, SPECIES_ROSELIA
    trainer_mon_no_item_default 40, 31, SPECIES_DELCATTY
    trainer_mon_no_item_default 40, 31, SPECIES_SEAKING

sParty_Jackson1: @ 0x082E172C
    @ TRAINER_JACKSON_1 (id 552, special 32): マモル ; flags=0, partySize=1
    trainer_mon_no_item_default 50, 27, SPECIES_BRELOOM

sParty_Lorenzo: @ 0x082E1734
    @ TRAINER_LORENZO (id 553, special 33): ジュンサク ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 28, SPECIES_SEEDOT
    trainer_mon_no_item_default 50, 28, SPECIES_NUZLEAF
    trainer_mon_no_item_default 50, 28, SPECIES_LOMBRE

sParty_Sebastian: @ 0x082E174C
    @ TRAINER_SEBASTIAN (id 554, special 34): ケイスケ ; flags=0, partySize=1
    trainer_mon_no_item_default 50, 39, SPECIES_CACTURNE

sParty_Jackson2: @ 0x082E1754
    @ TRAINER_JACKSON_2 (id 555, special 35): マモル ; flags=0, partySize=1
    trainer_mon_no_item_default 60, 31, SPECIES_BRELOOM

sParty_Jackson3: @ 0x082E175C
    @ TRAINER_JACKSON_3 (id 556, special 36): マモル ; flags=0, partySize=1
    trainer_mon_no_item_default 70, 34, SPECIES_BRELOOM

sParty_Jackson4: @ 0x082E1764
    @ TRAINER_JACKSON_4 (id 557, special 37): マモル ; flags=0, partySize=1
    trainer_mon_no_item_default 80, 37, SPECIES_BRELOOM

sParty_Jackson5: @ 0x082E176C
    @ TRAINER_JACKSON_5 (id 558, special 38): マモル ; flags=0, partySize=2
    trainer_mon_no_item_default 90, 39, SPECIES_KECLEON
    trainer_mon_no_item_default 90, 39, SPECIES_BRELOOM

sParty_Catherine1: @ 0x082E177C
    @ TRAINER_CATHERINE_1 (id 559, special 39): マナミ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 26, SPECIES_GLOOM
    trainer_mon_no_item_default 50, 26, SPECIES_ROSELIA

sParty_Jenna: @ 0x082E178C
    @ TRAINER_JENNA (id 560, special 40): セリナ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 28, SPECIES_LOTAD
    trainer_mon_no_item_default 50, 28, SPECIES_LOMBRE
    trainer_mon_no_item_default 50, 28, SPECIES_NUZLEAF

sParty_Sophia: @ 0x082E17A4
    @ TRAINER_SOPHIA (id 561, special 41): チアキ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 38, SPECIES_SWABLU
    trainer_mon_no_item_default 50, 38, SPECIES_ROSELIA

sParty_Catherine2: @ 0x082E17B4
    @ TRAINER_CATHERINE_2 (id 562, special 42): マナミ ; flags=0, partySize=2
    trainer_mon_no_item_default 60, 30, SPECIES_GLOOM
    trainer_mon_no_item_default 60, 30, SPECIES_ROSELIA

sParty_Catherine3: @ 0x082E17C4
    @ TRAINER_CATHERINE_3 (id 563, special 43): マナミ ; flags=0, partySize=2
    trainer_mon_no_item_default 70, 33, SPECIES_GLOOM
    trainer_mon_no_item_default 70, 33, SPECIES_ROSELIA

sParty_Catherine4: @ 0x082E17D4
    @ TRAINER_CATHERINE_4 (id 564, special 44): マナミ ; flags=0, partySize=2
    trainer_mon_no_item_default 80, 36, SPECIES_GLOOM
    trainer_mon_no_item_default 80, 36, SPECIES_ROSELIA

sParty_Catherine5: @ 0x082E17E4
    @ TRAINER_CATHERINE_5 (id 565, special 45): マナミ ; flags=0, partySize=2
    trainer_mon_no_item_default 90, 39, SPECIES_BELLOSSOM
    trainer_mon_no_item_default 90, 39, SPECIES_ROSELIA

sParty_Julio: @ 0x082E17F4
    @ TRAINER_JULIO (id 566, special 46): ミツオ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 21, SPECIES_MAGNEMITE

sParty_GruntSeafloorCavern5: @ 0x082E17FC
    @ TRAINER_GRUNT_SEAFLOOR_CAVERN_5 (id 567, special 47): したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 35, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 50, 35, SPECIES_GOLBAT

sParty_GruntUnused: @ 0x082E180C
    @ TRAINER_GRUNT_UNUSED (id 568, special 48): したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 31, SPECIES_WAILMER
    trainer_mon_no_item_default 0, 31, SPECIES_ZUBAT

sParty_GruntMtPyre4: @ 0x082E181C
    @ TRAINER_GRUNT_MT_PYRE_4 (id 569, special 49): したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 30, SPECIES_WAILMER
    trainer_mon_no_item_default 0, 30, SPECIES_ZUBAT

sParty_GruntJaggedPass: @ 0x082E182C
    @ TRAINER_GRUNT_JAGGED_PASS (id 570, special 50): したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 22, SPECIES_POOCHYENA
    trainer_mon_no_item_default 50, 22, SPECIES_NUMEL

sParty_Marc: @ 0x082E183C
    @ TRAINER_MARC (id 571, special 51): ソウタロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 120, 8, SPECIES_GEODUDE
    trainer_mon_no_item_default 130, 8, SPECIES_GEODUDE

sParty_Brenden: @ 0x082E184C
    @ TRAINER_BRENDEN (id 572, special 52): カズマサ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 13, SPECIES_MACHOP

sParty_Lilith: @ 0x082E1854
    @ TRAINER_LILITH (id 573, special 53): アズミ ; flags=0, partySize=1
    trainer_mon_no_item_default 150, 13, SPECIES_MEDITITE

sParty_Cristian: @ 0x082E185C
    @ TRAINER_CRISTIAN (id 574, special 54): トシヒデ ; flags=0, partySize=1
    trainer_mon_no_item_default 200, 13, SPECIES_MAKUHITA

sParty_Sylvia: @ 0x082E1864
    @ TRAINER_SYLVIA (id 575, special 55): アサヨ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_MEDITITE

sParty_Leonardo: @ 0x082E186C
    @ TRAINER_LEONARDO (id 576, special 56): カズシゲ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_CARVANHA

sParty_Athena: @ 0x082E1874
    @ TRAINER_ATHENA (id 577, special 57): エミリ ; flags=3, partySize=2
    trainer_mon_item_custom 100, 32, SPECIES_MANECTRIC, ITEM_NONE, MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE
    trainer_mon_item_custom 100, 32, SPECIES_LINOONE, ITEM_NONE, MOVE_SURF, MOVE_THIEF, MOVE_NONE, MOVE_NONE

sParty_Harrison: @ 0x082E1894
    @ TRAINER_HARRISON (id 578, special 58): マサアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 35, SPECIES_TENTACRUEL

sParty_GruntMtChimney2: @ 0x082E189C
    @ TRAINER_GRUNT_MT_CHIMNEY_2 (id 579, special 59): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 20, SPECIES_ZUBAT

sParty_Clarence: @ 0x082E18A4
    @ TRAINER_CLARENCE (id 580, special 60): ヨシフミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_SHARPEDO

sParty_Terry: @ 0x082E18AC
    @ TRAINER_TERRY (id 581, special 61): ななし2 ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 37, SPECIES_GIRAFARIG

sParty_Nate: @ 0x082E18B4
    @ TRAINER_NATE (id 582, special 62): トニー ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_SPOINK

sParty_Kathleen: @ 0x082E18BC
    @ TRAINER_KATHLEEN (id 583, special 63): ユキヨ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 36, SPECIES_KADABRA

sParty_Clifford: @ 0x082E18C4
    @ TRAINER_CLIFFORD (id 584, special 64): スティーブ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 36, SPECIES_GIRAFARIG

sParty_Nicholas: @ 0x082E18CC
    @ TRAINER_NICHOLAS (id 585, special 65): リョウイチ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 36, SPECIES_WOBBUFFET

sParty_GruntSpaceCenter3: @ 0x082E18D4
    @ TRAINER_GRUNT_SPACE_CENTER_3 (id 586, special 66): したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 31, SPECIES_ZUBAT
    trainer_mon_no_item_default 0, 31, SPECIES_POOCHYENA

sParty_GruntSpaceCenter4: @ 0x082E18E4
    @ TRAINER_GRUNT_SPACE_CENTER_4 (id 587, special 67): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_BALTOY

sParty_GruntSpaceCenter5: @ 0x082E18EC
    @ TRAINER_GRUNT_SPACE_CENTER_5 (id 588, special 68): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_ZUBAT

sParty_GruntSpaceCenter6: @ 0x082E18F4
    @ TRAINER_GRUNT_SPACE_CENTER_6 (id 589, special 69): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_MIGHTYENA

sParty_GruntSpaceCenter7: @ 0x082E18FC
    @ TRAINER_GRUNT_SPACE_CENTER_7 (id 590, special 70): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 32, SPECIES_BALTOY

sParty_Macey: @ 0x082E1904
    @ TRAINER_MACEY (id 591, special 71): フサコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 36, SPECIES_NATU

sParty_BrendanRustboroTreecko: @ 0x082E190C
    @ TRAINER_BRENDAN_RUSTBORO_TREECKO (id 592, special 72): ユウキ ; flags=0, partySize=2
    trainer_mon_no_item_default 25, 13, SPECIES_LOTAD
    trainer_mon_no_item_default 50, 15, SPECIES_TORCHIC

sParty_BrendanRustboroMudkip: @ 0x082E191C
    @ TRAINER_BRENDAN_RUSTBORO_MUDKIP (id 593, special 73): ユウキ ; flags=0, partySize=2
    trainer_mon_no_item_default 25, 13, SPECIES_WINGULL
    trainer_mon_no_item_default 50, 15, SPECIES_TREECKO

sParty_Paxton: @ 0x082E192C
    @ TRAINER_PAXTON (id 594, special 74): ゴウゾウ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_SWELLOW
    trainer_mon_no_item_default 0, 33, SPECIES_BRELOOM

sParty_Isabella: @ 0x082E193C
    @ TRAINER_ISABELLA (id 595, special 75): カズハ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_STARYU

sParty_GruntWeatherInst5: @ 0x082E1944
    @ TRAINER_GRUNT_WEATHER_INST_5 (id 596, special 76): したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 27, SPECIES_ZUBAT
    trainer_mon_no_item_default 0, 27, SPECIES_POOCHYENA

sParty_TabithaMtChimney: @ 0x082E1954
    @ TRAINER_TABITHA_MT_CHIMNEY (id 597, special 77): ホムラ ; flags=0, partySize=4
    trainer_mon_no_item_default 50, 18, SPECIES_NUMEL
    trainer_mon_no_item_default 50, 20, SPECIES_POOCHYENA
    trainer_mon_no_item_default 50, 22, SPECIES_NUMEL
    trainer_mon_no_item_default 50, 22, SPECIES_ZUBAT

sParty_Jonathan: @ 0x082E1974
    @ TRAINER_JONATHAN (id 598, special 78): リョウスケ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_KECLEON
    trainer_mon_no_item_default 0, 33, SPECIES_LOUDRED

sParty_BrendanRustboroTorchic: @ 0x082E1984
    @ TRAINER_BRENDAN_RUSTBORO_TORCHIC (id 599, special 79): ユウキ ; flags=0, partySize=2
    trainer_mon_no_item_default 25, 13, SPECIES_SLUGMA
    trainer_mon_no_item_default 50, 15, SPECIES_MUDKIP

sParty_MayRustboroMudkip: @ 0x082E1994
    @ TRAINER_MAY_RUSTBORO_MUDKIP (id 600, special 80): ハルカ ; flags=0, partySize=2
    trainer_mon_no_item_default 25, 13, SPECIES_WINGULL
    trainer_mon_no_item_default 50, 15, SPECIES_TREECKO

sParty_MaxieMagmaHideout: @ 0x082E19A4
    @ TRAINER_MAXIE_MAGMA_HIDEOUT (id 601, special 81): マツブサ ; flags=0, partySize=3
    trainer_mon_no_item_default 150, 37, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 150, 38, SPECIES_CROBAT
    trainer_mon_no_item_default 150, 39, SPECIES_CAMERUPT

sParty_MaxieMtChimney: @ 0x082E19BC
    @ TRAINER_MAXIE_MT_CHIMNEY (id 602, special 82): マツブサ ; flags=0, partySize=3
    trainer_mon_no_item_default 150, 24, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 150, 24, SPECIES_ZUBAT
    trainer_mon_no_item_default 150, 25, SPECIES_CAMERUPT

sParty_Tiana: @ 0x082E19D4
    @ TRAINER_TIANA (id 603, special 83): チカ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 4, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 4, SPECIES_SHROOMISH

sParty_Haley1: @ 0x082E19E4
    @ TRAINER_HALEY_1 (id 604, special 84): マキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 6, SPECIES_LOTAD
    trainer_mon_no_item_default 0, 6, SPECIES_SHROOMISH

sParty_Janice: @ 0x082E19F4
    @ TRAINER_JANICE (id 605, special 85): エリ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 9, SPECIES_MARILL

sParty_Vivi: @ 0x082E19FC
    @ TRAINER_VIVI (id 606, special 86): アキ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 15, SPECIES_MARILL
    trainer_mon_no_item_default 100, 15, SPECIES_SHROOMISH
    trainer_mon_no_item_default 100, 15, SPECIES_NUMEL

sParty_Haley2: @ 0x082E1A14
    @ TRAINER_HALEY_2 (id 607, special 87): マキ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 26, SPECIES_LOMBRE
    trainer_mon_no_item_default 10, 26, SPECIES_SHROOMISH

sParty_Haley3: @ 0x082E1A24
    @ TRAINER_HALEY_3 (id 608, special 88): マキ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 29, SPECIES_LOMBRE
    trainer_mon_no_item_default 20, 29, SPECIES_BRELOOM

sParty_Haley4: @ 0x082E1A34
    @ TRAINER_HALEY_4 (id 609, special 89): マキ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 32, SPECIES_LOMBRE
    trainer_mon_no_item_default 30, 32, SPECIES_BRELOOM

sParty_Haley5: @ 0x082E1A44
    @ TRAINER_HALEY_5 (id 610, special 90): マキ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 34, SPECIES_SWELLOW
    trainer_mon_no_item_default 40, 34, SPECIES_LOMBRE
    trainer_mon_no_item_default 40, 34, SPECIES_BRELOOM

sParty_Sally: @ 0x082E1A5C
    @ TRAINER_SALLY (id 611, special 91): ミナ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 16, SPECIES_ODDISH

sParty_Robin: @ 0x082E1A64
    @ TRAINER_ROBIN (id 612, special 92): シホ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 14, SPECIES_SKITTY
    trainer_mon_no_item_default 0, 14, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 14, SPECIES_MARILL

sParty_Andrea: @ 0x082E1A7C
    @ TRAINER_ANDREA (id 613, special 93): ミキ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 40, SPECIES_LUVDISC

sParty_Crissy: @ 0x082E1A84
    @ TRAINER_CRISSY (id 614, special 94): メイ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 39, SPECIES_GOLDEEN
    trainer_mon_no_item_default 100, 39, SPECIES_WAILMER

sParty_Rick: @ 0x082E1A94
    @ TRAINER_RICK (id 615, special 95): シンイチ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 4, SPECIES_WURMPLE
    trainer_mon_no_item_default 0, 4, SPECIES_WURMPLE

sParty_Lyle: @ 0x082E1AA4
    @ TRAINER_LYLE (id 616, special 96): フジオ ; flags=0, partySize=4
    trainer_mon_no_item_default 0, 3, SPECIES_WURMPLE
    trainer_mon_no_item_default 0, 3, SPECIES_WURMPLE
    trainer_mon_no_item_default 0, 3, SPECIES_WURMPLE
    trainer_mon_no_item_default 0, 3, SPECIES_WURMPLE

sParty_Jose: @ 0x082E1AC4
    @ TRAINER_JOSE (id 617, special 97): トモノリ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 8, SPECIES_WURMPLE
    trainer_mon_no_item_default 50, 8, SPECIES_NINCADA

sParty_Doug: @ 0x082E1AD4
    @ TRAINER_DOUG (id 618, special 98): オサム ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 28, SPECIES_NINCADA
    trainer_mon_no_item_default 0, 28, SPECIES_NINJASK

sParty_Greg: @ 0x082E1AE4
    @ TRAINER_GREG (id 619, special 99): ヒロユキ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_VOLBEAT
    trainer_mon_no_item_default 0, 25, SPECIES_ILLUMISE

sParty_Kent: @ 0x082E1AF4
    @ TRAINER_KENT (id 620, special 100): トモミチ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 25, SPECIES_NINJASK

sParty_James1: @ 0x082E1AFC
    @ TRAINER_JAMES_1 (id 621, special 101): ミキヤ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 6, SPECIES_NINCADA
    trainer_mon_no_item_default 0, 6, SPECIES_NINCADA

sParty_James2: @ 0x082E1B0C
    @ TRAINER_JAMES_2 (id 622, special 102): ミキヤ ; flags=0, partySize=1
    trainer_mon_no_item_default 10, 27, SPECIES_NINJASK

sParty_James3: @ 0x082E1B14
    @ TRAINER_JAMES_3 (id 623, special 103): ミキヤ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 29, SPECIES_DUSTOX
    trainer_mon_no_item_default 20, 29, SPECIES_NINJASK

sParty_James4: @ 0x082E1B24
    @ TRAINER_JAMES_4 (id 624, special 104): ミキヤ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 31, SPECIES_SURSKIT
    trainer_mon_no_item_default 30, 31, SPECIES_DUSTOX
    trainer_mon_no_item_default 30, 31, SPECIES_NINJASK

sParty_James5: @ 0x082E1B3C
    @ TRAINER_JAMES_5 (id 625, special 105): ミキヤ ; flags=0, partySize=4
    trainer_mon_no_item_default 40, 33, SPECIES_SURSKIT
    trainer_mon_no_item_default 40, 33, SPECIES_NINJASK
    trainer_mon_no_item_default 40, 33, SPECIES_DUSTOX
    trainer_mon_no_item_default 40, 33, SPECIES_NINJASK

sParty_Brice: @ 0x082E1B5C
    @ TRAINER_BRICE (id 626, special 106): ハルノブ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 17, SPECIES_NUMEL
    trainer_mon_no_item_default 0, 17, SPECIES_MACHOP

sParty_Trent1: @ 0x082E1B6C
    @ TRAINER_TRENT_1 (id 627, special 107): ケンサク ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 16, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 17, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 16, SPECIES_GEODUDE

sParty_Lenny: @ 0x082E1B84
    @ TRAINER_LENNY (id 628, special 108): カツヒト ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 18, SPECIES_MACHOP

sParty_Lucas1: @ 0x082E1B94
    @ TRAINER_LUCAS_1 (id 629, special 109): サブロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 18, SPECIES_NUMEL

sParty_Alan: @ 0x082E1BA4
    @ TRAINER_ALAN (id 630, special 110): マサノリ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 22, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 22, SPECIES_NOSEPASS
    trainer_mon_no_item_default 0, 22, SPECIES_GRAVELER

sParty_Clark: @ 0x082E1BBC
    @ TRAINER_CLARK (id 631, special 111): カズノリ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 8, SPECIES_GEODUDE

sParty_Eric: @ 0x082E1BC4
    @ TRAINER_ERIC (id 632, special 112): ダイチ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 20, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 20, SPECIES_BALTOY

sParty_Lucas2: @ 0x082E1BD4
    @ TRAINER_LUCAS_2 (id 633, special 113): サブロウ ; flags=1, partySize=1
    trainer_mon_no_item_custom 0, 9, SPECIES_WAILMER, MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE

sParty_Mike1: @ 0x082E1BE4
    @ TRAINER_MIKE_1 (id 634, special 114): ノボル ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 10, SPECIES_PELIPPER, MOVE_GUST, MOVE_GROWL, MOVE_NONE, MOVE_NONE
    trainer_mon_no_item_custom 0, 10, SPECIES_POOCHYENA, MOVE_BITE, MOVE_SCARY_FACE, MOVE_NONE, MOVE_NONE

sParty_Mike2: @ 0x082E1C04
    @ TRAINER_MIKE_2 (id 635, special 115): ノボル ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 16, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 16, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 16, SPECIES_MACHOP

sParty_Trent2: @ 0x082E1C1C
    @ TRAINER_TRENT_2 (id 636, special 116): ケンサク ; flags=0, partySize=4
    trainer_mon_no_item_default 10, 24, SPECIES_GEODUDE
    trainer_mon_no_item_default 10, 24, SPECIES_GEODUDE
    trainer_mon_no_item_default 10, 24, SPECIES_GEODUDE
    trainer_mon_no_item_default 10, 24, SPECIES_GRAVELER

sParty_Trent3: @ 0x082E1C3C
    @ TRAINER_TRENT_3 (id 637, special 117): ケンサク ; flags=0, partySize=4
    trainer_mon_no_item_default 20, 27, SPECIES_GEODUDE
    trainer_mon_no_item_default 20, 27, SPECIES_GEODUDE
    trainer_mon_no_item_default 20, 27, SPECIES_GRAVELER
    trainer_mon_no_item_default 20, 27, SPECIES_GRAVELER

sParty_Trent4: @ 0x082E1C5C
    @ TRAINER_TRENT_4 (id 638, special 118): ケンサク ; flags=0, partySize=4
    trainer_mon_no_item_default 30, 30, SPECIES_GEODUDE
    trainer_mon_no_item_default 30, 30, SPECIES_GRAVELER
    trainer_mon_no_item_default 30, 30, SPECIES_GRAVELER
    trainer_mon_no_item_default 30, 30, SPECIES_GRAVELER

sParty_Trent5: @ 0x082E1C7C
    @ TRAINER_TRENT_5 (id 639, special 119): ケンサク ; flags=0, partySize=4
    trainer_mon_no_item_default 40, 33, SPECIES_GRAVELER
    trainer_mon_no_item_default 40, 33, SPECIES_GRAVELER
    trainer_mon_no_item_default 40, 33, SPECIES_GRAVELER
    trainer_mon_no_item_default 40, 33, SPECIES_GOLEM

sParty_DezAndLuke: @ 0x082E1C9C
    @ TRAINER_DEZ_AND_LUKE (id 640, special 120): マコとテル ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 31, SPECIES_DELCATTY
    trainer_mon_no_item_default 0, 31, SPECIES_MANECTRIC

sParty_LeaAndJed: @ 0x082E1CAC
    @ TRAINER_LEA_AND_JED (id 641, special 121): カホとジン ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 45, SPECIES_LUVDISC
    trainer_mon_no_item_default 0, 45, SPECIES_LUVDISC

sParty_KiraAndDan1: @ 0x082E1CBC
    @ TRAINER_KIRA_AND_DAN_1 (id 642, special 122): ナツとフミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_VOLBEAT
    trainer_mon_no_item_default 0, 25, SPECIES_ILLUMISE

sParty_KiraAndDan2: @ 0x082E1CCC
    @ TRAINER_KIRA_AND_DAN_2 (id 643, special 123): ナツとフミ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 30, SPECIES_VOLBEAT
    trainer_mon_no_item_default 10, 30, SPECIES_ILLUMISE

sParty_KiraAndDan3: @ 0x082E1CDC
    @ TRAINER_KIRA_AND_DAN_3 (id 644, special 124): ナツとフミ ; flags=0, partySize=2
    trainer_mon_no_item_default 20, 33, SPECIES_VOLBEAT
    trainer_mon_no_item_default 20, 33, SPECIES_ILLUMISE

sParty_KiraAndDan4: @ 0x082E1CEC
    @ TRAINER_KIRA_AND_DAN_4 (id 645, special 125): ナツとフミ ; flags=0, partySize=2
    trainer_mon_no_item_default 30, 36, SPECIES_VOLBEAT
    trainer_mon_no_item_default 30, 36, SPECIES_ILLUMISE

sParty_KiraAndDan5: @ 0x082E1CFC
    @ TRAINER_KIRA_AND_DAN_5 (id 646, special 126): ナツとフミ ; flags=0, partySize=2
    trainer_mon_no_item_default 40, 39, SPECIES_VOLBEAT
    trainer_mon_no_item_default 40, 39, SPECIES_ILLUMISE

sParty_Johanna: @ 0x082E1D0C
    @ TRAINER_JOHANNA (id 647, special 127): アツコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 13, SPECIES_GOLDEEN

sParty_Gerald: @ 0x082E1D14
    @ TRAINER_GERALD (id 648, special 128): タクロウ ; flags=1, partySize=1
    trainer_mon_no_item_custom 100, 23, SPECIES_KECLEON, MOVE_FLAMETHROWER, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK, MOVE_BIND

sParty_Vivian: @ 0x082E1D24
    @ TRAINER_VIVIAN (id 649, special 129): マコト ; flags=1, partySize=2
    trainer_mon_no_item_custom 100, 17, SPECIES_MEDITITE, MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_THUNDER_PUNCH
    trainer_mon_no_item_custom 100, 17, SPECIES_MEDITITE, MOVE_THUNDER_PUNCH, MOVE_DETECT, MOVE_CONFUSION, MOVE_MEDITATE

sParty_Danielle: @ 0x082E1D44
    @ TRAINER_DANIELLE (id 650, special 130): トモミ ; flags=1, partySize=1
    trainer_mon_no_item_custom 100, 23, SPECIES_MEDITITE, MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_FIRE_PUNCH

sParty_Hideo: @ 0x082E1D54
    @ TRAINER_HIDEO (id 651, special 131): カツハル ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 25, SPECIES_KOFFING, MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN
    trainer_mon_no_item_custom 0, 25, SPECIES_KOFFING, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_SLUDGE, MOVE_SMOKESCREEN

sParty_Keigo: @ 0x082E1D74
    @ TRAINER_KEIGO (id 652, special 132): テツジ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 28, SPECIES_KOFFING, MOVE_POISON_GAS, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN
    trainer_mon_no_item_custom 0, 28, SPECIES_NINJASK, MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM, MOVE_FURY_CUTTER, MOVE_SWORDS_DANCE

sParty_Riley: @ 0x082E1D94
    @ TRAINER_RILEY (id 653, special 133): タダヒロ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 28, SPECIES_NINCADA, MOVE_LEECH_LIFE, MOVE_FURY_SWIPES, MOVE_MIND_READER, MOVE_DIG
    trainer_mon_no_item_custom 0, 28, SPECIES_KOFFING, MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN

sParty_Flint: @ 0x082E1DB4
    @ TRAINER_FLINT (id 654, special 134): テルオ ; flags=0, partySize=2
    trainer_mon_no_item_default 150, 29, SPECIES_SWELLOW
    trainer_mon_no_item_default 150, 29, SPECIES_XATU

sParty_Ashley: @ 0x082E1DC4
    @ TRAINER_ASHLEY (id 655, special 135): ミミコ ; flags=0, partySize=3
    trainer_mon_no_item_default 100, 27, SPECIES_SWABLU
    trainer_mon_no_item_default 100, 27, SPECIES_SWABLU
    trainer_mon_no_item_default 100, 27, SPECIES_SWABLU

sParty_WallyMauville: @ 0x082E1DDC
    @ TRAINER_WALLY_MAUVILLE (id 656, special 136): ミツル ; flags=0, partySize=1
    trainer_mon_no_item_default 30, 16, SPECIES_RALTS

sParty_WallyVr2: @ 0x082E1DE4
    @ TRAINER_WALLY_VR_2 (id 657, special 137): ミツル ; flags=1, partySize=5
    trainer_mon_no_item_custom 150, 47, SPECIES_ALTARIA, MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE
    trainer_mon_no_item_custom 150, 46, SPECIES_DELCATTY, MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 150, 47, SPECIES_ROSELIA, MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC
    trainer_mon_no_item_custom 150, 44, SPECIES_MAGNETON, MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH
    trainer_mon_no_item_custom 250, 48, SPECIES_GARDEVOIR, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT

sParty_WallyVr3: @ 0x082E1E34
    @ TRAINER_WALLY_VR_3 (id 658, special 138): ミツル ; flags=1, partySize=5
    trainer_mon_no_item_custom 150, 50, SPECIES_ALTARIA, MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE
    trainer_mon_no_item_custom 150, 49, SPECIES_DELCATTY, MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 150, 50, SPECIES_ROSELIA, MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC
    trainer_mon_no_item_custom 150, 47, SPECIES_MAGNETON, MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH
    trainer_mon_no_item_custom 250, 51, SPECIES_GARDEVOIR, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT

sParty_WallyVr4: @ 0x082E1E84
    @ TRAINER_WALLY_VR_4 (id 659, special 139): ミツル ; flags=1, partySize=5
    trainer_mon_no_item_custom 150, 53, SPECIES_ALTARIA, MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE
    trainer_mon_no_item_custom 150, 52, SPECIES_DELCATTY, MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 150, 53, SPECIES_ROSELIA, MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC
    trainer_mon_no_item_custom 150, 50, SPECIES_MAGNETON, MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH
    trainer_mon_no_item_custom 250, 54, SPECIES_GARDEVOIR, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT

sParty_WallyVr5: @ 0x082E1ED4
    @ TRAINER_WALLY_VR_5 (id 660, special 140): ミツル ; flags=1, partySize=5
    trainer_mon_no_item_custom 150, 56, SPECIES_ALTARIA, MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE
    trainer_mon_no_item_custom 150, 55, SPECIES_DELCATTY, MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK
    trainer_mon_no_item_custom 150, 56, SPECIES_ROSELIA, MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC
    trainer_mon_no_item_custom 150, 53, SPECIES_MAGNETON, MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH
    trainer_mon_no_item_custom 250, 57, SPECIES_GARDEVOIR, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT

sParty_BrendanLilycoveMudkip: @ 0x082E1F24
    @ TRAINER_BRENDAN_LILYCOVE_MUDKIP (id 661, special 141): ユウキ ; flags=0, partySize=4
    trainer_mon_no_item_default 150, 31, SPECIES_TROPIUS
    trainer_mon_no_item_default 150, 32, SPECIES_SLUGMA
    trainer_mon_no_item_default 150, 32, SPECIES_PELIPPER
    trainer_mon_no_item_default 200, 34, SPECIES_GROVYLE

sParty_BrendanLilycoveTreecko: @ 0x082E1F44
    @ TRAINER_BRENDAN_LILYCOVE_TREECKO (id 662, special 142): ユウキ ; flags=0, partySize=4
    trainer_mon_no_item_default 150, 31, SPECIES_TROPIUS
    trainer_mon_no_item_default 150, 32, SPECIES_PELIPPER
    trainer_mon_no_item_default 150, 32, SPECIES_LUDICOLO
    trainer_mon_no_item_default 200, 34, SPECIES_COMBUSKEN

sParty_BrendanLilycoveTorchic: @ 0x082E1F64
    @ TRAINER_BRENDAN_LILYCOVE_TORCHIC (id 663, special 143): ユウキ ; flags=0, partySize=4
    trainer_mon_no_item_default 150, 31, SPECIES_TROPIUS
    trainer_mon_no_item_default 150, 32, SPECIES_LUDICOLO
    trainer_mon_no_item_default 150, 32, SPECIES_SLUGMA
    trainer_mon_no_item_default 200, 34, SPECIES_MARSHTOMP

sParty_MayLilycoveMudkip: @ 0x082E1F84
    @ TRAINER_MAY_LILYCOVE_MUDKIP (id 664, special 144): ハルカ ; flags=0, partySize=4
    trainer_mon_no_item_default 150, 31, SPECIES_TROPIUS
    trainer_mon_no_item_default 150, 32, SPECIES_SLUGMA
    trainer_mon_no_item_default 150, 32, SPECIES_PELIPPER
    trainer_mon_no_item_default 200, 34, SPECIES_GROVYLE

sParty_MayLilycoveTreecko: @ 0x082E1FA4
    @ TRAINER_MAY_LILYCOVE_TREECKO (id 665, special 145): ハルカ ; flags=0, partySize=4
    trainer_mon_no_item_default 150, 31, SPECIES_TROPIUS
    trainer_mon_no_item_default 150, 32, SPECIES_PELIPPER
    trainer_mon_no_item_default 150, 32, SPECIES_LUDICOLO
    trainer_mon_no_item_default 200, 34, SPECIES_COMBUSKEN

sParty_MayLilycoveTorchic: @ 0x082E1FC4
    @ TRAINER_MAY_LILYCOVE_TORCHIC (id 666, special 146): ハルカ ; flags=0, partySize=4
    trainer_mon_no_item_default 150, 31, SPECIES_TROPIUS
    trainer_mon_no_item_default 150, 32, SPECIES_LUDICOLO
    trainer_mon_no_item_default 150, 32, SPECIES_SLUGMA
    trainer_mon_no_item_default 200, 34, SPECIES_MARSHTOMP

sParty_Jonah: @ 0x082E1FE4
    @ TRAINER_JONAH (id 667, special 147): ヨシノリ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 30, SPECIES_WAILMER
    trainer_mon_no_item_default 0, 31, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 32, SPECIES_SHARPEDO

sParty_Henry: @ 0x082E1FFC
    @ TRAINER_HENRY (id 668, special 148): ケンタロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 31, SPECIES_CARVANHA
    trainer_mon_no_item_default 0, 34, SPECIES_TENTACRUEL

sParty_Roger: @ 0x082E200C
    @ TRAINER_ROGER (id 669, special 149): トモヒコ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 15, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 25, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 35, SPECIES_GYARADOS

sParty_Alexa: @ 0x082E2024
    @ TRAINER_ALEXA (id 670, special 150): サヤカ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 34, SPECIES_GLOOM
    trainer_mon_no_item_default 100, 34, SPECIES_AZUMARILL

sParty_Ruben: @ 0x082E2034
    @ TRAINER_RUBEN (id 671, special 151): ジュン ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 34, SPECIES_SHIFTRY
    trainer_mon_no_item_default 100, 34, SPECIES_NOSEPASS

sParty_Koji1: @ 0x082E2044
    @ TRAINER_KOJI_1 (id 672, special 152): テツロウ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_MACHOKE

sParty_Wayne: @ 0x082E204C
    @ TRAINER_WAYNE (id 673, special 153): コウサク ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 31, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 31, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 36, SPECIES_WAILMER

sParty_Aidan: @ 0x082E2064
    @ TRAINER_AIDAN (id 674, special 154): イクオ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 32, SPECIES_SWELLOW
    trainer_mon_no_item_default 0, 32, SPECIES_SKARMORY

sParty_Reed: @ 0x082E2074
    @ TRAINER_REED (id 675, special 155): アキオ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_SPHEAL
    trainer_mon_no_item_default 0, 33, SPECIES_SHARPEDO

sParty_Tisha: @ 0x082E2084
    @ TRAINER_TISHA (id 676, special 156): ユカリ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 34, SPECIES_CHINCHOU

sParty_ToriAndTia: @ 0x082E208C
    @ TRAINER_TORI_AND_TIA (id 677, special 157): ナナとネネ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 19, SPECIES_SPINDA
    trainer_mon_no_item_default 0, 19, SPECIES_SPINDA

sParty_KimAndIris: @ 0x082E209C
    @ TRAINER_KIM_AND_IRIS (id 678, special 158): マホとナホ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 32, SPECIES_SWABLU, MOVE_SING, MOVE_FURY_ATTACK, MOVE_SAFEGUARD, MOVE_AERIAL_ACE
    trainer_mon_no_item_custom 0, 35, SPECIES_NUMEL, MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_REST, MOVE_EARTHQUAKE

sParty_TyraAndIvy: @ 0x082E20BC
    @ TRAINER_TYRA_AND_IVY (id 679, special 159): カヨとイヨ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 18, SPECIES_ROSELIA, MOVE_GROWTH, MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED
    trainer_mon_no_item_custom 0, 20, SPECIES_GRAVELER, MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_MUD_SPORT, MOVE_ROCK_THROW

sParty_MelAndPaul: @ 0x082E20DC
    @ TRAINER_MEL_AND_PAUL (id 680, special 160): シキとリキ ; flags=1, partySize=2
    trainer_mon_no_item_custom 0, 27, SPECIES_DUSTOX, MOVE_GUST, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_PROTECT
    trainer_mon_no_item_custom 0, 27, SPECIES_BEAUTIFLY, MOVE_GUST, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_STUN_SPORE

sParty_JohnAndJay1: @ 0x082E20FC
    @ TRAINER_JOHN_AND_JAY_1 (id 681, special 161): ゲンとハツ ; flags=1, partySize=2
    trainer_mon_no_item_custom 200, 39, SPECIES_MEDICHAM, MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT
    trainer_mon_no_item_custom 200, 39, SPECIES_HARIYAMA, MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM

sParty_JohnAndJay2: @ 0x082E211C
    @ TRAINER_JOHN_AND_JAY_2 (id 682, special 162): ゲンとハツ ; flags=1, partySize=2
    trainer_mon_no_item_custom 210, 43, SPECIES_MEDICHAM, MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT
    trainer_mon_no_item_custom 210, 43, SPECIES_HARIYAMA, MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM

sParty_JohnAndJay3: @ 0x082E213C
    @ TRAINER_JOHN_AND_JAY_3 (id 683, special 163): ゲンとハツ ; flags=1, partySize=2
    trainer_mon_no_item_custom 220, 46, SPECIES_MEDICHAM, MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT
    trainer_mon_no_item_custom 220, 46, SPECIES_HARIYAMA, MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM

sParty_JohnAndJay4: @ 0x082E215C
    @ TRAINER_JOHN_AND_JAY_4 (id 684, special 164): ゲンとハツ ; flags=1, partySize=2
    trainer_mon_no_item_custom 230, 49, SPECIES_MEDICHAM, MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT
    trainer_mon_no_item_custom 230, 49, SPECIES_HARIYAMA, MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM

sParty_JohnAndJay5: @ 0x082E217C
    @ TRAINER_JOHN_AND_JAY_5 (id 685, special 165): ゲンとハツ ; flags=1, partySize=2
    trainer_mon_no_item_custom 240, 52, SPECIES_MEDICHAM, MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT
    trainer_mon_no_item_custom 240, 52, SPECIES_HARIYAMA, MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM

sParty_ReliAndIan: @ 0x082E219C
    @ TRAINER_RELI_AND_IAN (id 686, special 166): カツとアミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 35, SPECIES_AZUMARILL
    trainer_mon_no_item_default 0, 33, SPECIES_WINGULL

sParty_LilaAndRoy1: @ 0x082E21AC
    @ TRAINER_LILA_AND_ROY_1 (id 687, special 167): コウとカコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 34, SPECIES_CHINCHOU
    trainer_mon_no_item_default 0, 33, SPECIES_CARVANHA

sParty_LilaAndRoy2: @ 0x082E21BC
    @ TRAINER_LILA_AND_ROY_2 (id 688, special 168): コウとカコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 42, SPECIES_CHINCHOU
    trainer_mon_no_item_default 0, 40, SPECIES_CARVANHA

sParty_LilaAndRoy3: @ 0x082E21CC
    @ TRAINER_LILA_AND_ROY_3 (id 689, special 169): コウとカコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 45, SPECIES_LANTURN
    trainer_mon_no_item_default 0, 43, SPECIES_CARVANHA

sParty_LilaAndRoy4: @ 0x082E21DC
    @ TRAINER_LILA_AND_ROY_4 (id 690, special 170): コウとカコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 48, SPECIES_LANTURN
    trainer_mon_no_item_default 0, 46, SPECIES_SHARPEDO

sParty_LilaAndRoy5: @ 0x082E21EC
    @ TRAINER_LILA_AND_ROY_5 (id 691, special 171): コウとカコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 51, SPECIES_LANTURN
    trainer_mon_no_item_default 0, 49, SPECIES_SHARPEDO

sParty_LisaAndRay: @ 0x082E21FC
    @ TRAINER_LISA_AND_RAY (id 692, special 172): シンとユミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 27, SPECIES_GOLDEEN
    trainer_mon_no_item_default 0, 25, SPECIES_TENTACOOL

sParty_Chris: @ 0x082E220C
    @ TRAINER_CHRIS (id 693, special 173): マサシ ; flags=0, partySize=4
    trainer_mon_no_item_default 0, 29, SPECIES_MAGIKARP
    trainer_mon_no_item_default 0, 20, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 26, SPECIES_FEEBAS
    trainer_mon_no_item_default 0, 23, SPECIES_CARVANHA

sParty_Dawson: @ 0x082E222C
    @ TRAINER_DAWSON (id 694, special 174): ノゾム ; flags=2, partySize=2
    trainer_mon_item_default 0, 8, SPECIES_ZIGZAGOON, ITEM_NUGGET
    trainer_mon_item_default 0, 8, SPECIES_POOCHYENA, ITEM_NONE

sParty_Sarah: @ 0x082E223C
    @ TRAINER_SARAH (id 695, special 175): サクラコ ; flags=2, partySize=2
    trainer_mon_item_default 0, 8, SPECIES_LOTAD, ITEM_NONE
    trainer_mon_item_default 0, 8, SPECIES_ZIGZAGOON, ITEM_NUGGET

sParty_Darian: @ 0x082E224C
    @ TRAINER_DARIAN (id 696, special 176): ケンキチ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 9, SPECIES_MAGIKARP

sParty_Hailey: @ 0x082E2254
    @ TRAINER_HAILEY (id 697, special 177): ハナ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 13, SPECIES_MARILL

sParty_Chandler: @ 0x082E225C
    @ TRAINER_CHANDLER (id 698, special 178): タイスケ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 12, SPECIES_TENTACOOL
    trainer_mon_no_item_default 0, 12, SPECIES_TENTACOOL

sParty_Kaleb: @ 0x082E226C
    @ TRAINER_KALEB (id 699, special 179): マサタカ ; flags=2, partySize=2
    trainer_mon_item_default 0, 14, SPECIES_MINUN, ITEM_ORAN_BERRY
    trainer_mon_item_default 0, 14, SPECIES_PLUSLE, ITEM_ORAN_BERRY

sParty_Joseph: @ 0x082E227C
    @ TRAINER_JOSEPH (id 700, special 180): ポール ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 14, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 0, 14, SPECIES_VOLTORB

sParty_Alyssa: @ 0x082E228C
    @ TRAINER_ALYSSA (id 701, special 181): サエミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 15, SPECIES_MAGNEMITE

sParty_Marcos: @ 0x082E2294
    @ TRAINER_MARCOS (id 702, special 182): エリック ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 15, SPECIES_VOLTORB

sParty_Rhett: @ 0x082E229C
    @ TRAINER_RHETT (id 703, special 183): シゲモリ ; flags=0, partySize=1
    trainer_mon_no_item_default 100, 15, SPECIES_MAKUHITA

sParty_Tyron: @ 0x082E22A4
    @ TRAINER_TYRON (id 704, special 184): トシフミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 19, SPECIES_SANDSHREW

sParty_Celina: @ 0x082E22AC
    @ TRAINER_CELINA (id 705, special 185): ワカコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 18, SPECIES_ROSELIA

sParty_Bianca: @ 0x082E22B4
    @ TRAINER_BIANCA (id 706, special 186): イオリ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 18, SPECIES_SHROOMISH

sParty_Hayden: @ 0x082E22BC
    @ TRAINER_HAYDEN (id 707, special 187): クニアキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 18, SPECIES_NUMEL

sParty_Sophie: @ 0x082E22C4
    @ TRAINER_SOPHIE (id 708, special 188): ノドカ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 17, SPECIES_MARILL
    trainer_mon_no_item_default 0, 19, SPECIES_LOMBRE

sParty_Coby: @ 0x082E22D4
    @ TRAINER_COBY (id 709, special 189): カズタカ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 17, SPECIES_SKARMORY
    trainer_mon_no_item_default 0, 19, SPECIES_SWELLOW

sParty_Lawrence: @ 0x082E22E4
    @ TRAINER_LAWRENCE (id 710, special 190): ユウゴ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_BALTOY
    trainer_mon_no_item_default 0, 18, SPECIES_SANDSHREW

sParty_Wyatt: @ 0x082E22F4
    @ TRAINER_WYATT (id 711, special 191): ミチオ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_ARON
    trainer_mon_no_item_default 0, 18, SPECIES_ARON

sParty_Angelina: @ 0x082E2304
    @ TRAINER_ANGELINA (id 712, special 192): マツリ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_LOMBRE
    trainer_mon_no_item_default 0, 18, SPECIES_MARILL

sParty_Kai: @ 0x082E2314
    @ TRAINER_KAI (id 713, special 193): ヒロミツ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 19, SPECIES_BARBOACH

sParty_Charlotte: @ 0x082E231C
    @ TRAINER_CHARLOTTE (id 714, special 194): ミナミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 19, SPECIES_NUZLEAF

sParty_Deandre: @ 0x082E2324
    @ TRAINER_DEANDRE (id 715, special 195): マサヤ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 14, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 0, 14, SPECIES_ARON
    trainer_mon_no_item_default 0, 14, SPECIES_ELECTRIKE

sParty_GruntMagmaHideout1: @ 0x082E233C
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_1 (id 716, special 196): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_ZUBAT

sParty_GruntMagmaHideout2: @ 0x082E2344
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_2 (id 717, special 197): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_POOCHYENA

sParty_GruntMagmaHideout3: @ 0x082E234C
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_3 (id 718, special 198): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_NUMEL

sParty_GruntMagmaHideout4: @ 0x082E2354
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_4 (id 719, special 199): したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 28, SPECIES_BALTOY
    trainer_mon_no_item_default 0, 28, SPECIES_ZUBAT

sParty_GruntMagmaHideout5: @ 0x082E2364
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_5 (id 720, special 200): したっぱ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 28, SPECIES_BALTOY
    trainer_mon_no_item_default 0, 28, SPECIES_NUMEL

sParty_GruntMagmaHideout6: @ 0x082E2374
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_6 (id 721, special 201): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_MIGHTYENA

sParty_GruntMagmaHideout7: @ 0x082E237C
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_7 (id 722, special 202): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_ZUBAT

sParty_GruntMagmaHideout8: @ 0x082E2384
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_8 (id 723, special 203): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_POOCHYENA

sParty_GruntMagmaHideout9: @ 0x082E238C
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_9 (id 724, special 204): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_ZUBAT

sParty_GruntMagmaHideout10: @ 0x082E2394
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_10 (id 725, special 205): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_MIGHTYENA

sParty_GruntMagmaHideout11: @ 0x082E239C
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_11 (id 726, special 206): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_BALTOY

sParty_GruntMagmaHideout12: @ 0x082E23A4
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_12 (id 727, special 207): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_NUMEL

sParty_GruntMagmaHideout13: @ 0x082E23AC
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_13 (id 728, special 208): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_ZUBAT

sParty_GruntMagmaHideout14: @ 0x082E23B4
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_14 (id 729, special 209): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_MIGHTYENA

sParty_GruntMagmaHideout15: @ 0x082E23BC
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_15 (id 730, special 210): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_NUMEL

sParty_GruntMagmaHideout16: @ 0x082E23C4
    @ TRAINER_GRUNT_MAGMA_HIDEOUT_16 (id 731, special 211): したっぱ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 29, SPECIES_BALTOY

sParty_TabithaMagmaHideout: @ 0x082E23CC
    @ TRAINER_TABITHA_MAGMA_HIDEOUT (id 732, special 212): ホムラ ; flags=0, partySize=4
    trainer_mon_no_item_default 75, 26, SPECIES_NUMEL
    trainer_mon_no_item_default 75, 28, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 75, 30, SPECIES_ZUBAT
    trainer_mon_no_item_default 75, 33, SPECIES_CAMERUPT

sParty_Darcy: @ 0x082E23EC
    @ TRAINER_DARCY (id 733, special 213): ナルミ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_PELIPPER
    trainer_mon_no_item_default 0, 33, SPECIES_CAMERUPT

sParty_MaxieMossdeep: @ 0x082E23FC
    @ TRAINER_MAXIE_MOSSDEEP (id 734, special 214): マツブサ ; flags=0, partySize=3
    trainer_mon_no_item_default 150, 42, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 150, 43, SPECIES_CROBAT
    trainer_mon_no_item_default 150, 44, SPECIES_CAMERUPT

sParty_Pete: @ 0x082E2414
    @ TRAINER_PETE (id 735, special 215): ヒデヒコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 15, SPECIES_TENTACOOL

sParty_Isabelle: @ 0x082E241C
    @ TRAINER_ISABELLE (id 736, special 216): ユミコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 15, SPECIES_MARILL

sParty_Andres1: @ 0x082E2424
    @ TRAINER_ANDRES_1 (id 737, special 217): ダイジロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 25, SPECIES_SANDSHREW
    trainer_mon_no_item_default 50, 25, SPECIES_SANDSHREW

sParty_Josue: @ 0x082E2434
    @ TRAINER_JOSUE (id 738, special 218): ヤスフミ ; flags=0, partySize=2
    trainer_mon_no_item_default 50, 25, SPECIES_TAILLOW
    trainer_mon_no_item_default 50, 25, SPECIES_WINGULL

sParty_Camron: @ 0x082E2444
    @ TRAINER_CAMRON (id 739, special 219): クニオ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_STARYU

sParty_Cory1: @ 0x082E244C
    @ TRAINER_CORY_1 (id 740, special 220): ノリタカ ; flags=0, partySize=3
    trainer_mon_no_item_default 0, 24, SPECIES_WINGULL
    trainer_mon_no_item_default 0, 24, SPECIES_MACHOP
    trainer_mon_no_item_default 0, 24, SPECIES_TENTACOOL

sParty_Carolina: @ 0x082E2464
    @ TRAINER_CAROLINA (id 741, special 221): セイカ ; flags=0, partySize=3
    trainer_mon_no_item_default 50, 24, SPECIES_MANECTRIC
    trainer_mon_no_item_default 50, 24, SPECIES_SWELLOW
    trainer_mon_no_item_default 50, 24, SPECIES_MANECTRIC

sParty_Elijah: @ 0x082E247C
    @ TRAINER_ELIJAH (id 742, special 222): トシタカ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_SKARMORY
    trainer_mon_no_item_default 0, 25, SPECIES_SKARMORY

sParty_Celia: @ 0x082E248C
    @ TRAINER_CELIA (id 743, special 223): アキコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 22, SPECIES_MARILL
    trainer_mon_no_item_default 0, 22, SPECIES_LOMBRE

sParty_Bryan: @ 0x082E249C
    @ TRAINER_BRYAN (id 744, special 224): ヒロトシ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 22, SPECIES_SANDSHREW
    trainer_mon_no_item_default 0, 22, SPECIES_SANDSLASH

sParty_Branden: @ 0x082E24AC
    @ TRAINER_BRANDEN (id 745, special 225): ヤスノリ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 22, SPECIES_TAILLOW
    trainer_mon_no_item_default 0, 22, SPECIES_NUZLEAF

sParty_Bryant: @ 0x082E24BC
    @ TRAINER_BRYANT (id 746, special 226): アツオ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_NUMEL
    trainer_mon_no_item_default 0, 18, SPECIES_SLUGMA

sParty_Shayla: @ 0x082E24CC
    @ TRAINER_SHAYLA (id 747, special 227): タエコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 18, SPECIES_ROSELIA

sParty_Kyra: @ 0x082E24DC
    @ TRAINER_KYRA (id 748, special 228): リンコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_DODUO
    trainer_mon_no_item_default 0, 26, SPECIES_DODRIO

sParty_Jaiden: @ 0x082E24EC
    @ TRAINER_JAIDEN (id 749, special 229): ユウゾウ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_NINJASK
    trainer_mon_no_item_default 0, 26, SPECIES_GULPIN

sParty_Alix: @ 0x082E24FC
    @ TRAINER_ALIX (id 750, special 230): シノ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_KADABRA
    trainer_mon_no_item_default 0, 26, SPECIES_KIRLIA

sParty_Helene: @ 0x082E250C
    @ TRAINER_HELENE (id 751, special 231): チトセ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 26, SPECIES_MEDITITE
    trainer_mon_no_item_default 0, 26, SPECIES_MAKUHITA

sParty_Marlene: @ 0x082E251C
    @ TRAINER_MARLENE (id 752, special 232): リネ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 18, SPECIES_MEDITITE
    trainer_mon_no_item_default 0, 18, SPECIES_SPOINK

sParty_Devan: @ 0x082E252C
    @ TRAINER_DEVAN (id 753, special 233): ミチヤス ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 8, SPECIES_GEODUDE
    trainer_mon_no_item_default 0, 8, SPECIES_GEODUDE

sParty_Johnson: @ 0x082E253C
    @ TRAINER_JOHNSON (id 754, special 234): ユウリ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 8, SPECIES_SHROOMISH
    trainer_mon_no_item_default 0, 8, SPECIES_LOTAD

sParty_Melina: @ 0x082E254C
    @ TRAINER_MELINA (id 755, special 235): モトコ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 17, SPECIES_DODUO

sParty_Brandi: @ 0x082E2554
    @ TRAINER_BRANDI (id 756, special 236): ミナツ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 17, SPECIES_RALTS

sParty_Aisha: @ 0x082E255C
    @ TRAINER_AISHA (id 757, special 237): シマ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 17, SPECIES_MEDITITE

sParty_Makayla: @ 0x082E2564
    @ TRAINER_MAKAYLA (id 758, special 238): スズ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 33, SPECIES_ROSELIA
    trainer_mon_no_item_default 0, 33, SPECIES_MEDICHAM

sParty_Fabian: @ 0x082E2574
    @ TRAINER_FABIAN (id 759, special 239): ジミー ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_MANECTRIC

sParty_Dayton: @ 0x082E257C
    @ TRAINER_DAYTON (id 760, special 240): アツヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 25, SPECIES_SLUGMA
    trainer_mon_no_item_default 0, 25, SPECIES_NUMEL

sParty_Rachel: @ 0x082E258C
    @ TRAINER_RACHEL (id 761, special 241): ミヅキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 26, SPECIES_GOLDEEN

sParty_Leonel: @ 0x082E2594
    @ TRAINER_LEONEL (id 762, special 242): カズヒロ ; flags=1, partySize=1
    trainer_mon_no_item_custom 100, 30, SPECIES_MANECTRIC, MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_NONE

sParty_Callie: @ 0x082E25A4
    @ TRAINER_CALLIE (id 763, special 243): フウコ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 28, SPECIES_MEDITITE
    trainer_mon_no_item_default 0, 28, SPECIES_MAKUHITA

sParty_Cale: @ 0x082E25B4
    @ TRAINER_CALE (id 764, special 244): ケンスケ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 29, SPECIES_DUSTOX
    trainer_mon_no_item_default 0, 29, SPECIES_BEAUTIFLY

sParty_Myles: @ 0x082E25C4
    @ TRAINER_MYLES (id 765, special 245): ヤスオ ; flags=0, partySize=6
    trainer_mon_no_item_default 10, 25, SPECIES_MAKUHITA
    trainer_mon_no_item_default 10, 25, SPECIES_WINGULL
    trainer_mon_no_item_default 10, 25, SPECIES_TROPIUS
    trainer_mon_no_item_default 10, 25, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 10, 25, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 10, 25, SPECIES_NUMEL

sParty_Pat: @ 0x082E25F4
    @ TRAINER_PAT (id 766, special 246): ハルイ ; flags=0, partySize=6
    trainer_mon_no_item_default 10, 25, SPECIES_POOCHYENA
    trainer_mon_no_item_default 10, 25, SPECIES_SHROOMISH
    trainer_mon_no_item_default 10, 25, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 10, 25, SPECIES_MARILL
    trainer_mon_no_item_default 10, 25, SPECIES_SANDSHREW
    trainer_mon_no_item_default 10, 25, SPECIES_GULPIN

sParty_Cristin1: @ 0x082E2624
    @ TRAINER_CRISTIN_1 (id 767, special 247): トキコ ; flags=0, partySize=2
    trainer_mon_no_item_default 100, 29, SPECIES_LOUDRED
    trainer_mon_no_item_default 100, 29, SPECIES_VIGOROTH

sParty_MayRustboroTreecko: @ 0x082E2634
    @ TRAINER_MAY_RUSTBORO_TREECKO (id 768, special 248): ハルカ ; flags=0, partySize=2
    trainer_mon_no_item_default 25, 13, SPECIES_LOTAD
    trainer_mon_no_item_default 50, 15, SPECIES_TORCHIC

sParty_MayRustboroTorchic: @ 0x082E2644
    @ TRAINER_MAY_RUSTBORO_TORCHIC (id 769, special 249): ハルカ ; flags=0, partySize=2
    trainer_mon_no_item_default 25, 13, SPECIES_TORKOAL
    trainer_mon_no_item_default 50, 15, SPECIES_MUDKIP

sParty_Roxanne2: @ 0x082E2654
    @ TRAINER_ROXANNE_2 (id 770, special 250): ツツジ ; flags=3, partySize=4
    trainer_mon_item_custom 255, 32, SPECIES_GOLEM, ITEM_NONE, MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION
    trainer_mon_item_custom 255, 35, SPECIES_KABUTO, ITEM_SITRUS_BERRY, MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 35, SPECIES_ONIX, ITEM_NONE, MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 37, SPECIES_NOSEPASS, ITEM_SITRUS_BERRY, MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE

sParty_Roxanne3: @ 0x082E2694
    @ TRAINER_ROXANNE_3 (id 771, special 251): ツツジ ; flags=3, partySize=5
    trainer_mon_item_custom 255, 37, SPECIES_OMANYTE, ITEM_NONE, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF
    trainer_mon_item_custom 255, 37, SPECIES_GOLEM, ITEM_NONE, MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION
    trainer_mon_item_custom 255, 40, SPECIES_KABUTOPS, ITEM_SITRUS_BERRY, MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 40, SPECIES_ONIX, ITEM_NONE, MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 42, SPECIES_NOSEPASS, ITEM_SITRUS_BERRY, MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE

sParty_Roxanne4: @ 0x082E26E4
    @ TRAINER_ROXANNE_4 (id 772, special 252): ツツジ ; flags=3, partySize=5
    trainer_mon_item_custom 255, 42, SPECIES_OMASTAR, ITEM_NONE, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF
    trainer_mon_item_custom 255, 42, SPECIES_GOLEM, ITEM_NONE, MOVE_PROTECT, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION
    trainer_mon_item_custom 255, 45, SPECIES_KABUTOPS, ITEM_SITRUS_BERRY, MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 45, SPECIES_ONIX, ITEM_NONE, MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 47, SPECIES_NOSEPASS, ITEM_SITRUS_BERRY, MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE

sParty_Roxanne5: @ 0x082E2734
    @ TRAINER_ROXANNE_5 (id 773, special 253): ツツジ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 47, SPECIES_AERODACTYL, ITEM_NONE, MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT
    trainer_mon_item_custom 255, 47, SPECIES_GOLEM, ITEM_NONE, MOVE_FOCUS_PUNCH, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION
    trainer_mon_item_custom 255, 47, SPECIES_OMASTAR, ITEM_NONE, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF
    trainer_mon_item_custom 255, 50, SPECIES_KABUTOPS, ITEM_SITRUS_BERRY, MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 50, SPECIES_STEELIX, ITEM_NONE, MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 52, SPECIES_NOSEPASS, ITEM_SITRUS_BERRY, MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE

sParty_Brawly2: @ 0x082E2794
    @ TRAINER_BRAWLY_2 (id 774, special 254): トウキ ; flags=3, partySize=4
    trainer_mon_item_custom 255, 33, SPECIES_MACHAMP, ITEM_SITRUS_BERRY, MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP
    trainer_mon_item_custom 255, 33, SPECIES_MEDITITE, ITEM_NONE, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH
    trainer_mon_item_custom 255, 35, SPECIES_HITMONTOP, ITEM_NONE, MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK
    trainer_mon_item_custom 255, 37, SPECIES_HARIYAMA, ITEM_SITRUS_BERRY, MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE

sParty_Brawly3: @ 0x082E27D4
    @ TRAINER_BRAWLY_3 (id 775, special 255): トウキ ; flags=3, partySize=4
    trainer_mon_item_custom 255, 38, SPECIES_MACHAMP, ITEM_SITRUS_BERRY, MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP
    trainer_mon_item_custom 255, 38, SPECIES_MEDICHAM, ITEM_NONE, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH
    trainer_mon_item_custom 255, 40, SPECIES_HITMONTOP, ITEM_NONE, MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK
    trainer_mon_item_custom 255, 42, SPECIES_HARIYAMA, ITEM_SITRUS_BERRY, MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE

sParty_Brawly4: @ 0x082E2814
    @ TRAINER_BRAWLY_4 (id 776, special 256): トウキ ; flags=3, partySize=5
    trainer_mon_item_custom 255, 40, SPECIES_HITMONCHAN, ITEM_NONE, MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH
    trainer_mon_item_custom 255, 43, SPECIES_MACHAMP, ITEM_SITRUS_BERRY, MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP
    trainer_mon_item_custom 255, 43, SPECIES_MEDICHAM, ITEM_NONE, MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC
    trainer_mon_item_custom 255, 45, SPECIES_HITMONTOP, ITEM_NONE, MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK
    trainer_mon_item_custom 255, 47, SPECIES_HARIYAMA, ITEM_SITRUS_BERRY, MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE

sParty_Brawly5: @ 0x082E2864
    @ TRAINER_BRAWLY_5 (id 777, special 257): トウキ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 46, SPECIES_HITMONLEE, ITEM_NONE, MOVE_MEGA_KICK, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_BULK_UP
    trainer_mon_item_custom 255, 46, SPECIES_HITMONCHAN, ITEM_NONE, MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH
    trainer_mon_item_custom 255, 48, SPECIES_MACHAMP, ITEM_SITRUS_BERRY, MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP
    trainer_mon_item_custom 255, 48, SPECIES_MEDICHAM, ITEM_NONE, MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC
    trainer_mon_item_custom 255, 50, SPECIES_HITMONTOP, ITEM_NONE, MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK
    trainer_mon_item_custom 255, 52, SPECIES_HARIYAMA, ITEM_SITRUS_BERRY, MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE

sParty_Wattson2: @ 0x082E28C4
    @ TRAINER_WATTSON_2 (id 778, special 258): テッセン ; flags=3, partySize=4
    trainer_mon_item_custom 255, 36, SPECIES_MAREEP, ITEM_NONE, MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 36, SPECIES_ELECTRODE, ITEM_NONE, MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 38, SPECIES_MAGNETON, ITEM_SITRUS_BERRY, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 40, SPECIES_MANECTRIC, ITEM_SITRUS_BERRY, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT

sParty_Wattson3: @ 0x082E2904
    @ TRAINER_WATTSON_3 (id 779, special 259): テッセン ; flags=3, partySize=5
    trainer_mon_item_custom 255, 39, SPECIES_PIKACHU, ITEM_NONE, MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_SHOCK_WAVE
    trainer_mon_item_custom 255, 41, SPECIES_FLAAFFY, ITEM_NONE, MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 41, SPECIES_ELECTRODE, ITEM_NONE, MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 43, SPECIES_MAGNETON, ITEM_SITRUS_BERRY, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 45, SPECIES_MANECTRIC, ITEM_SITRUS_BERRY, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT

sParty_Wattson4: @ 0x082E2954
    @ TRAINER_WATTSON_4 (id 780, special 260): テッセン ; flags=3, partySize=5
    trainer_mon_item_custom 255, 44, SPECIES_RAICHU, ITEM_NONE, MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT
    trainer_mon_item_custom 255, 46, SPECIES_AMPHAROS, ITEM_NONE, MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 46, SPECIES_ELECTRODE, ITEM_NONE, MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 48, SPECIES_MAGNETON, ITEM_SITRUS_BERRY, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 50, SPECIES_MANECTRIC, ITEM_SITRUS_BERRY, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT

sParty_Wattson5: @ 0x082E29A4
    @ TRAINER_WATTSON_5 (id 781, special 261): テッセン ; flags=3, partySize=6
    trainer_mon_item_custom 255, 50, SPECIES_ELECTABUZZ, ITEM_NONE, MOVE_SWIFT, MOVE_FOCUS_PUNCH, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 51, SPECIES_RAICHU, ITEM_NONE, MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT
    trainer_mon_item_custom 255, 51, SPECIES_AMPHAROS, ITEM_NONE, MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 53, SPECIES_ELECTRODE, ITEM_NONE, MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 53, SPECIES_MAGNETON, ITEM_SITRUS_BERRY, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE
    trainer_mon_item_custom 255, 55, SPECIES_MANECTRIC, ITEM_SITRUS_BERRY, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT

sParty_Flannery2: @ 0x082E2A04
    @ TRAINER_FLANNERY_2 (id 782, special 262): アスナ ; flags=3, partySize=4
    trainer_mon_item_custom 255, 38, SPECIES_MAGCARGO, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 36, SPECIES_PONYTA, ITEM_NONE, MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE
    trainer_mon_item_custom 255, 38, SPECIES_CAMERUPT, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT
    trainer_mon_item_custom 255, 40, SPECIES_TORKOAL, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT

sParty_Flannery3: @ 0x082E2A44
    @ TRAINER_FLANNERY_3 (id 783, special 263): アスナ ; flags=3, partySize=5
    trainer_mon_item_custom 255, 41, SPECIES_GROWLITHE, ITEM_NONE, MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_SUNNY_DAY
    trainer_mon_item_custom 255, 43, SPECIES_MAGCARGO, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 41, SPECIES_PONYTA, ITEM_NONE, MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE
    trainer_mon_item_custom 255, 43, SPECIES_CAMERUPT, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT
    trainer_mon_item_custom 255, 45, SPECIES_TORKOAL, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT

sParty_Flannery4: @ 0x082E2A94
    @ TRAINER_FLANNERY_4 (id 784, special 264): アスナ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 46, SPECIES_HOUNDOUR, ITEM_NONE, MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY
    trainer_mon_item_custom 255, 46, SPECIES_GROWLITHE, ITEM_NONE, MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR
    trainer_mon_item_custom 255, 48, SPECIES_MAGCARGO, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 46, SPECIES_RAPIDASH, ITEM_NONE, MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE
    trainer_mon_item_custom 255, 48, SPECIES_CAMERUPT, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT
    trainer_mon_item_custom 255, 50, SPECIES_TORKOAL, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT

sParty_Flannery5: @ 0x082E2AF4
    @ TRAINER_FLANNERY_5 (id 785, special 265): アスナ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 51, SPECIES_ARCANINE, ITEM_NONE, MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR
    trainer_mon_item_custom 255, 53, SPECIES_MAGCARGO, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE
    trainer_mon_item_custom 255, 51, SPECIES_HOUNDOOM, ITEM_NONE, MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY
    trainer_mon_item_custom 255, 51, SPECIES_RAPIDASH, ITEM_NONE, MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE
    trainer_mon_item_custom 255, 53, SPECIES_CAMERUPT, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT
    trainer_mon_item_custom 255, 55, SPECIES_TORKOAL, ITEM_WHITE_HERB, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT

sParty_Norman2: @ 0x082E2B54
    @ TRAINER_NORMAN_2 (id 786, special 266): センリ ; flags=3, partySize=4
    trainer_mon_item_custom 255, 42, SPECIES_CHANSEY, ITEM_NONE, MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH
    trainer_mon_item_custom 255, 42, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST
    trainer_mon_item_custom 255, 43, SPECIES_SPINDA, ITEM_NONE, MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS
    trainer_mon_item_custom 255, 45, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL

sParty_Norman3: @ 0x082E2B94
    @ TRAINER_NORMAN_3 (id 787, special 267): センリ ; flags=3, partySize=5
    trainer_mon_item_custom 255, 47, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST
    trainer_mon_item_custom 255, 47, SPECIES_CHANSEY, ITEM_NONE, MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH
    trainer_mon_item_custom 255, 45, SPECIES_KANGASKHAN, ITEM_NONE, MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL
    trainer_mon_item_custom 255, 48, SPECIES_SPINDA, ITEM_NONE, MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS
    trainer_mon_item_custom 255, 50, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL

sParty_Norman4: @ 0x082E2BE4
    @ TRAINER_NORMAN_4 (id 788, special 268): センリ ; flags=3, partySize=5
    trainer_mon_item_custom 255, 52, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST
    trainer_mon_item_custom 255, 52, SPECIES_BLISSEY, ITEM_NONE, MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH
    trainer_mon_item_custom 255, 50, SPECIES_KANGASKHAN, ITEM_NONE, MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL
    trainer_mon_item_custom 255, 53, SPECIES_SPINDA, ITEM_NONE, MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS
    trainer_mon_item_custom 255, 55, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL

sParty_Norman5: @ 0x082E2C34
    @ TRAINER_NORMAN_5 (id 789, special 269): センリ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 57, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST
    trainer_mon_item_custom 255, 57, SPECIES_BLISSEY, ITEM_NONE, MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH
    trainer_mon_item_custom 255, 55, SPECIES_KANGASKHAN, ITEM_NONE, MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL
    trainer_mon_item_custom 255, 57, SPECIES_TAUROS, ITEM_NONE, MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE
    trainer_mon_item_custom 255, 58, SPECIES_SPINDA, ITEM_NONE, MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS
    trainer_mon_item_custom 255, 60, SPECIES_SLAKING, ITEM_SITRUS_BERRY, MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL

sParty_Winona2: @ 0x082E2C94
    @ TRAINER_WINONA_2 (id 790, special 270): ナギ ; flags=3, partySize=5
    trainer_mon_item_custom 255, 40, SPECIES_DRATINI, ITEM_SITRUS_BERRY, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 38, SPECIES_TROPIUS, ITEM_NONE, MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE
    trainer_mon_item_custom 255, 41, SPECIES_PELIPPER, ITEM_NONE, MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 43, SPECIES_SKARMORY, ITEM_NONE, MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 45, SPECIES_ALTARIA, ITEM_CHESTO_BERRY, MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE

sParty_Winona3: @ 0x082E2CE4
    @ TRAINER_WINONA_3 (id 791, special 271): ナギ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 43, SPECIES_HOOTHOOT, ITEM_NONE, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER
    trainer_mon_item_custom 255, 43, SPECIES_TROPIUS, ITEM_NONE, MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE
    trainer_mon_item_custom 255, 45, SPECIES_DRAGONAIR, ITEM_SITRUS_BERRY, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 46, SPECIES_PELIPPER, ITEM_NONE, MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 48, SPECIES_SKARMORY, ITEM_NONE, MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 50, SPECIES_ALTARIA, ITEM_CHESTO_BERRY, MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE

sParty_Winona4: @ 0x082E2D44
    @ TRAINER_WINONA_4 (id 792, special 272): ナギ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 48, SPECIES_NOCTOWL, ITEM_NONE, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER
    trainer_mon_item_custom 255, 49, SPECIES_TROPIUS, ITEM_NONE, MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE
    trainer_mon_item_custom 255, 50, SPECIES_DRAGONAIR, ITEM_SITRUS_BERRY, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 51, SPECIES_PELIPPER, ITEM_NONE, MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 53, SPECIES_SKARMORY, ITEM_NONE, MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 55, SPECIES_ALTARIA, ITEM_CHESTO_BERRY, MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE

sParty_Winona5: @ 0x082E2DA4
    @ TRAINER_WINONA_5 (id 793, special 273): ナギ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 53, SPECIES_NOCTOWL, ITEM_NONE, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER
    trainer_mon_item_custom 255, 54, SPECIES_TROPIUS, ITEM_NONE, MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE
    trainer_mon_item_custom 255, 55, SPECIES_PELIPPER, ITEM_NONE, MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 55, SPECIES_DRAGONITE, ITEM_SITRUS_BERRY, MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 58, SPECIES_SKARMORY, ITEM_NONE, MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE
    trainer_mon_item_custom 255, 60, SPECIES_ALTARIA, ITEM_CHESTO_BERRY, MOVE_SKY_ATTACK, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE

sParty_TateAndLiza2: @ 0x082E2E04
    @ TRAINER_TATE_AND_LIZA_2 (id 794, special 274): フウとラン ; flags=3, partySize=5
    trainer_mon_item_custom 255, 48, SPECIES_SLOWPOKE, ITEM_NONE, MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT
    trainer_mon_item_custom 255, 49, SPECIES_CLAYDOL, ITEM_NONE, MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 49, SPECIES_XATU, ITEM_CHESTO_BERRY, MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 50, SPECIES_LUNATONE, ITEM_CHESTO_BERRY, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 50, SPECIES_SOLROCK, ITEM_SITRUS_BERRY, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER

sParty_TateAndLiza3: @ 0x082E2E54
    @ TRAINER_TATE_AND_LIZA_3 (id 795, special 275): フウとラン ; flags=3, partySize=6
    trainer_mon_item_custom 255, 53, SPECIES_DROWZEE, ITEM_NONE, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT
    trainer_mon_item_custom 255, 53, SPECIES_SLOWPOKE, ITEM_NONE, MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT
    trainer_mon_item_custom 255, 54, SPECIES_CLAYDOL, ITEM_NONE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 54, SPECIES_XATU, ITEM_CHESTO_BERRY, MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 55, SPECIES_LUNATONE, ITEM_CHESTO_BERRY, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 55, SPECIES_SOLROCK, ITEM_SITRUS_BERRY, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER

sParty_TateAndLiza4: @ 0x082E2EB4
    @ TRAINER_TATE_AND_LIZA_4 (id 796, special 276): フウとラン ; flags=3, partySize=6
    trainer_mon_item_custom 255, 58, SPECIES_HYPNO, ITEM_NONE, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT
    trainer_mon_item_custom 255, 59, SPECIES_CLAYDOL, ITEM_NONE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 58, SPECIES_SLOWPOKE, ITEM_NONE, MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT
    trainer_mon_item_custom 255, 59, SPECIES_XATU, ITEM_CHESTO_BERRY, MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 60, SPECIES_LUNATONE, ITEM_CHESTO_BERRY, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 60, SPECIES_SOLROCK, ITEM_SITRUS_BERRY, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER

sParty_TateAndLiza5: @ 0x082E2F14
    @ TRAINER_TATE_AND_LIZA_5 (id 797, special 277): フウとラン ; flags=3, partySize=6
    trainer_mon_item_custom 255, 63, SPECIES_HYPNO, ITEM_NONE, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT
    trainer_mon_item_custom 255, 64, SPECIES_CLAYDOL, ITEM_NONE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN
    trainer_mon_item_custom 255, 63, SPECIES_SLOWKING, ITEM_NONE, MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT
    trainer_mon_item_custom 255, 64, SPECIES_XATU, ITEM_CHESTO_BERRY, MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 65, SPECIES_LUNATONE, ITEM_CHESTO_BERRY, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND
    trainer_mon_item_custom 255, 65, SPECIES_SOLROCK, ITEM_SITRUS_BERRY, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER

sParty_Juan2: @ 0x082E2F74
    @ TRAINER_JUAN_2 (id 798, special 278): アダン ; flags=3, partySize=5
    trainer_mon_item_custom 255, 46, SPECIES_POLIWAG, ITEM_NONE, MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP
    trainer_mon_item_custom 255, 46, SPECIES_WHISCASH, ITEM_NONE, MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE
    trainer_mon_item_custom 255, 48, SPECIES_WALREIN, ITEM_NONE, MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 48, SPECIES_CRAWDAUNT, ITEM_CHESTO_BERRY, MOVE_REST, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_DOUBLE_TEAM
    trainer_mon_item_custom 255, 51, SPECIES_KINGDRA, ITEM_CHESTO_BERRY, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST

sParty_Juan3: @ 0x082E2FC4
    @ TRAINER_JUAN_3 (id 799, special 279): アダン ; flags=3, partySize=5
    trainer_mon_item_custom 255, 50, SPECIES_POLIWHIRL, ITEM_NONE, MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP
    trainer_mon_item_custom 255, 51, SPECIES_WHISCASH, ITEM_NONE, MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE
    trainer_mon_item_custom 255, 53, SPECIES_WALREIN, ITEM_NONE, MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 53, SPECIES_CRAWDAUNT, ITEM_CHESTO_BERRY, MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM
    trainer_mon_item_custom 255, 56, SPECIES_KINGDRA, ITEM_CHESTO_BERRY, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST

sParty_Juan4: @ 0x082E3014
    @ TRAINER_JUAN_4 (id 800, special 280): アダン ; flags=3, partySize=6
    trainer_mon_item_custom 255, 56, SPECIES_LAPRAS, ITEM_NONE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY
    trainer_mon_item_custom 255, 58, SPECIES_WHISCASH, ITEM_NONE, MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE
    trainer_mon_item_custom 255, 56, SPECIES_POLIWHIRL, ITEM_NONE, MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP
    trainer_mon_item_custom 255, 58, SPECIES_WALREIN, ITEM_NONE, MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM
    trainer_mon_item_custom 255, 58, SPECIES_CRAWDAUNT, ITEM_CHESTO_BERRY, MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM
    trainer_mon_item_custom 255, 61, SPECIES_KINGDRA, ITEM_CHESTO_BERRY, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST

sParty_Juan5: @ 0x082E3074
    @ TRAINER_JUAN_5 (id 801, special 281): アダン ; flags=3, partySize=6
    trainer_mon_item_custom 255, 61, SPECIES_LAPRAS, ITEM_NONE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY
    trainer_mon_item_custom 255, 63, SPECIES_WHISCASH, ITEM_NONE, MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE
    trainer_mon_item_custom 255, 61, SPECIES_POLITOED, ITEM_NONE, MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG
    trainer_mon_item_custom 255, 63, SPECIES_WALREIN, ITEM_NONE, MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_SHEER_COLD
    trainer_mon_item_custom 255, 63, SPECIES_CRAWDAUNT, ITEM_CHESTO_BERRY, MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM
    trainer_mon_item_custom 255, 66, SPECIES_KINGDRA, ITEM_CHESTO_BERRY, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST

sParty_Angelo: @ 0x082E30D4
    @ TRAINER_ANGELO (id 802, special 282): モトヒロ ; flags=3, partySize=2
    trainer_mon_item_custom 100, 17, SPECIES_ILLUMISE, ITEM_NONE, MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CHARM, MOVE_NONE
    trainer_mon_item_custom 100, 17, SPECIES_VOLBEAT, ITEM_NONE, MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CONFUSE_RAY, MOVE_NONE

sParty_Darius: @ 0x082E30F4
    @ TRAINER_DARIUS (id 803, special 283): セイイチ ; flags=0, partySize=1
    trainer_mon_no_item_default 200, 30, SPECIES_TROPIUS

sParty_Steven: @ 0x082E30FC
    @ TRAINER_STEVEN (id 804, special 284): ダイゴ ; flags=3, partySize=6
    trainer_mon_item_custom 255, 77, SPECIES_SKARMORY, ITEM_NONE, MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING
    trainer_mon_item_custom 255, 75, SPECIES_CLAYDOL, ITEM_NONE, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE
    trainer_mon_item_custom 255, 76, SPECIES_AGGRON, ITEM_NONE, MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW
    trainer_mon_item_custom 255, 76, SPECIES_CRADILY, ITEM_NONE, MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY
    trainer_mon_item_custom 255, 76, SPECIES_ARMALDO, ITEM_NONE, MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH
    trainer_mon_item_custom 255, 78, SPECIES_METAGROSS, ITEM_SITRUS_BERRY, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL

sParty_Anabel: @ 0x082E315C
    @ TRAINER_ANABEL (id 805, special 285): リラ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BELDUM

sParty_Tucker: @ 0x082E3164
    @ TRAINER_TUCKER (id 806, special 286): ヒース ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BELDUM

sParty_Spenser: @ 0x082E316C
    @ TRAINER_SPENSER (id 807, special 287): ウコン ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BELDUM

sParty_Greta: @ 0x082E3174
    @ TRAINER_GRETA (id 808, special 288): コゴミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BELDUM

sParty_Noland: @ 0x082E317C
    @ TRAINER_NOLAND (id 809, special 289): ダツラ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BELDUM

sParty_Lucy: @ 0x082E3184
    @ TRAINER_LUCY (id 810, special 290): アザミ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BELDUM

sParty_Brandon: @ 0x082E318C
    @ TRAINER_BRANDON (id 811, special 291): ジンダイ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BELDUM

sParty_Andres2: @ 0x082E3194
    @ TRAINER_ANDRES_2 (id 812, special 292): ダイジロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 31, SPECIES_SANDSHREW
    trainer_mon_no_item_default 10, 31, SPECIES_SANDSHREW

sParty_Andres3: @ 0x082E31A4
    @ TRAINER_ANDRES_3 (id 813, special 293): ダイジロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 33, SPECIES_NOSEPASS
    trainer_mon_no_item_default 20, 33, SPECIES_SANDSHREW
    trainer_mon_no_item_default 20, 33, SPECIES_SANDSHREW

sParty_Andres4: @ 0x082E31BC
    @ TRAINER_ANDRES_4 (id 814, special 294): ダイジロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 35, SPECIES_NOSEPASS
    trainer_mon_no_item_default 30, 35, SPECIES_SANDSHREW
    trainer_mon_no_item_default 30, 35, SPECIES_SANDSHREW

sParty_Andres5: @ 0x082E31D4
    @ TRAINER_ANDRES_5 (id 815, special 295): ダイジロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 37, SPECIES_NOSEPASS
    trainer_mon_no_item_default 40, 37, SPECIES_SANDSLASH
    trainer_mon_no_item_default 40, 37, SPECIES_SANDSLASH

sParty_Cory2: @ 0x082E31EC
    @ TRAINER_CORY_2 (id 816, special 296): ノリタカ ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 30, SPECIES_WINGULL
    trainer_mon_no_item_default 10, 30, SPECIES_MACHOP
    trainer_mon_no_item_default 10, 30, SPECIES_TENTACOOL

sParty_Cory3: @ 0x082E3204
    @ TRAINER_CORY_3 (id 817, special 297): ノリタカ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 32, SPECIES_PELIPPER
    trainer_mon_no_item_default 20, 32, SPECIES_MACHOP
    trainer_mon_no_item_default 20, 32, SPECIES_TENTACOOL

sParty_Cory4: @ 0x082E321C
    @ TRAINER_CORY_4 (id 818, special 298): ノリタカ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 34, SPECIES_PELIPPER
    trainer_mon_no_item_default 30, 34, SPECIES_MACHOP
    trainer_mon_no_item_default 30, 34, SPECIES_TENTACRUEL

sParty_Cory5: @ 0x082E3234
    @ TRAINER_CORY_5 (id 819, special 299): ノリタカ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 36, SPECIES_PELIPPER
    trainer_mon_no_item_default 40, 36, SPECIES_MACHOKE
    trainer_mon_no_item_default 40, 36, SPECIES_TENTACRUEL

sParty_Pablo2: @ 0x082E324C
    @ TRAINER_PABLO_2 (id 820, special 300): ヤスヒロ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 37, SPECIES_STARYU
    trainer_mon_no_item_default 10, 37, SPECIES_STARYU

sParty_Pablo3: @ 0x082E325C
    @ TRAINER_PABLO_3 (id 821, special 301): ヤスヒロ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 39, SPECIES_WINGULL
    trainer_mon_no_item_default 20, 39, SPECIES_STARYU
    trainer_mon_no_item_default 20, 39, SPECIES_STARYU

sParty_Pablo4: @ 0x082E3274
    @ TRAINER_PABLO_4 (id 822, special 302): ヤスヒロ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 41, SPECIES_PELIPPER
    trainer_mon_no_item_default 30, 41, SPECIES_STARYU
    trainer_mon_no_item_default 30, 41, SPECIES_STARYU

sParty_Pablo5: @ 0x082E328C
    @ TRAINER_PABLO_5 (id 823, special 303): ヤスヒロ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 43, SPECIES_PELIPPER
    trainer_mon_no_item_default 40, 43, SPECIES_STARMIE
    trainer_mon_no_item_default 40, 43, SPECIES_STARMIE

sParty_Koji2: @ 0x082E32A4
    @ TRAINER_KOJI_2 (id 824, special 304): テツロウ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 37, SPECIES_MACHOKE
    trainer_mon_no_item_default 10, 37, SPECIES_MACHOKE

sParty_Koji3: @ 0x082E32B4
    @ TRAINER_KOJI_3 (id 825, special 305): テツロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 39, SPECIES_MAKUHITA
    trainer_mon_no_item_default 20, 39, SPECIES_MACHOKE
    trainer_mon_no_item_default 20, 39, SPECIES_MACHOKE

sParty_Koji4: @ 0x082E32CC
    @ TRAINER_KOJI_4 (id 826, special 306): テツロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 41, SPECIES_HARIYAMA
    trainer_mon_no_item_default 30, 41, SPECIES_MACHOKE
    trainer_mon_no_item_default 30, 41, SPECIES_MACHOKE

sParty_Koji5: @ 0x082E32E4
    @ TRAINER_KOJI_5 (id 827, special 307): テツロウ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 43, SPECIES_HARIYAMA
    trainer_mon_no_item_default 40, 43, SPECIES_MACHAMP
    trainer_mon_no_item_default 40, 43, SPECIES_MACHAMP

sParty_Cristin2: @ 0x082E32FC
    @ TRAINER_CRISTIN_2 (id 828, special 308): トキコ ; flags=0, partySize=2
    trainer_mon_no_item_default 110, 35, SPECIES_LOUDRED
    trainer_mon_no_item_default 110, 35, SPECIES_VIGOROTH

sParty_Cristin3: @ 0x082E330C
    @ TRAINER_CRISTIN_3 (id 829, special 309): トキコ ; flags=0, partySize=3
    trainer_mon_no_item_default 120, 37, SPECIES_SPINDA
    trainer_mon_no_item_default 120, 37, SPECIES_LOUDRED
    trainer_mon_no_item_default 120, 37, SPECIES_VIGOROTH

sParty_Cristin4: @ 0x082E3324
    @ TRAINER_CRISTIN_4 (id 830, special 310): トキコ ; flags=0, partySize=3
    trainer_mon_no_item_default 130, 39, SPECIES_SPINDA
    trainer_mon_no_item_default 130, 39, SPECIES_LOUDRED
    trainer_mon_no_item_default 100, 39, SPECIES_VIGOROTH

sParty_Cristin5: @ 0x082E333C
    @ TRAINER_CRISTIN_5 (id 831, special 311): トキコ ; flags=0, partySize=3
    trainer_mon_no_item_default 140, 41, SPECIES_SPINDA
    trainer_mon_no_item_default 140, 41, SPECIES_EXPLOUD
    trainer_mon_no_item_default 140, 41, SPECIES_SLAKING

sParty_Fernando2: @ 0x082E3354
    @ TRAINER_FERNANDO_2 (id 832, special 312): ジョー ; flags=0, partySize=3
    trainer_mon_no_item_default 10, 35, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 10, 35, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 10, 35, SPECIES_LOUDRED

sParty_Fernando3: @ 0x082E336C
    @ TRAINER_FERNANDO_3 (id 833, special 313): ジョー ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 37, SPECIES_ELECTRIKE
    trainer_mon_no_item_default 20, 37, SPECIES_MANECTRIC
    trainer_mon_no_item_default 20, 37, SPECIES_LOUDRED

sParty_Fernando4: @ 0x082E3384
    @ TRAINER_FERNANDO_4 (id 834, special 314): ジョー ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 39, SPECIES_MANECTRIC
    trainer_mon_no_item_default 30, 39, SPECIES_MANECTRIC
    trainer_mon_no_item_default 30, 39, SPECIES_LOUDRED

sParty_Fernando5: @ 0x082E339C
    @ TRAINER_FERNANDO_5 (id 835, special 315): ジョー ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 41, SPECIES_MANECTRIC
    trainer_mon_no_item_default 40, 41, SPECIES_MANECTRIC
    trainer_mon_no_item_default 40, 41, SPECIES_EXPLOUD

sParty_Sawyer2: @ 0x082E33B4
    @ TRAINER_SAWYER_2 (id 836, special 316): マサヒコ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 26, SPECIES_GEODUDE
    trainer_mon_no_item_default 10, 26, SPECIES_NUMEL

sParty_Sawyer3: @ 0x082E33C4
    @ TRAINER_SAWYER_3 (id 837, special 317): マサヒコ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 28, SPECIES_MACHOP
    trainer_mon_no_item_default 20, 28, SPECIES_NUMEL
    trainer_mon_no_item_default 20, 28, SPECIES_GRAVELER

sParty_Sawyer4: @ 0x082E33DC
    @ TRAINER_SAWYER_4 (id 838, special 318): マサヒコ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 30, SPECIES_MACHOP
    trainer_mon_no_item_default 30, 30, SPECIES_NUMEL
    trainer_mon_no_item_default 30, 30, SPECIES_GRAVELER

sParty_Sawyer5: @ 0x082E33F4
    @ TRAINER_SAWYER_5 (id 839, special 319): マサヒコ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 33, SPECIES_MACHOKE
    trainer_mon_no_item_default 40, 33, SPECIES_CAMERUPT
    trainer_mon_no_item_default 40, 33, SPECIES_GOLEM

sParty_Gabrielle2: @ 0x082E340C
    @ TRAINER_GABRIELLE_2 (id 840, special 320): フクミ ; flags=0, partySize=6
    trainer_mon_no_item_default 10, 31, SPECIES_SKITTY
    trainer_mon_no_item_default 10, 31, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 10, 31, SPECIES_ZIGZAGOON
    trainer_mon_no_item_default 10, 31, SPECIES_LOTAD
    trainer_mon_no_item_default 10, 31, SPECIES_SEEDOT
    trainer_mon_no_item_default 10, 31, SPECIES_TAILLOW

sParty_Gabrielle3: @ 0x082E343C
    @ TRAINER_GABRIELLE_3 (id 841, special 321): フクミ ; flags=0, partySize=6
    trainer_mon_no_item_default 20, 33, SPECIES_SKITTY
    trainer_mon_no_item_default 20, 33, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 20, 33, SPECIES_LINOONE
    trainer_mon_no_item_default 20, 33, SPECIES_LOMBRE
    trainer_mon_no_item_default 20, 33, SPECIES_NUZLEAF
    trainer_mon_no_item_default 20, 33, SPECIES_TAILLOW

sParty_Gabrielle4: @ 0x082E346C
    @ TRAINER_GABRIELLE_4 (id 842, special 322): フクミ ; flags=0, partySize=6
    trainer_mon_no_item_default 30, 35, SPECIES_DELCATTY
    trainer_mon_no_item_default 30, 35, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 30, 35, SPECIES_LINOONE
    trainer_mon_no_item_default 30, 35, SPECIES_LOMBRE
    trainer_mon_no_item_default 30, 35, SPECIES_NUZLEAF
    trainer_mon_no_item_default 30, 35, SPECIES_SWELLOW

sParty_Gabrielle5: @ 0x082E349C
    @ TRAINER_GABRIELLE_5 (id 843, special 323): フクミ ; flags=0, partySize=6
    trainer_mon_no_item_default 40, 37, SPECIES_DELCATTY
    trainer_mon_no_item_default 40, 37, SPECIES_MIGHTYENA
    trainer_mon_no_item_default 40, 37, SPECIES_LINOONE
    trainer_mon_no_item_default 40, 37, SPECIES_LUDICOLO
    trainer_mon_no_item_default 40, 37, SPECIES_SHIFTRY
    trainer_mon_no_item_default 40, 37, SPECIES_SWELLOW

sParty_Thalia2: @ 0x082E34CC
    @ TRAINER_THALIA_2 (id 844, special 324): ショウ ; flags=0, partySize=2
    trainer_mon_no_item_default 10, 34, SPECIES_WAILMER
    trainer_mon_no_item_default 10, 34, SPECIES_HORSEA

sParty_Thalia3: @ 0x082E34DC
    @ TRAINER_THALIA_3 (id 845, special 325): ショウ ; flags=0, partySize=3
    trainer_mon_no_item_default 20, 36, SPECIES_LUVDISC
    trainer_mon_no_item_default 20, 36, SPECIES_WAILMER
    trainer_mon_no_item_default 20, 36, SPECIES_SEADRA

sParty_Thalia4: @ 0x082E34F4
    @ TRAINER_THALIA_4 (id 846, special 326): ショウ ; flags=0, partySize=3
    trainer_mon_no_item_default 30, 38, SPECIES_LUVDISC
    trainer_mon_no_item_default 30, 38, SPECIES_WAILMER
    trainer_mon_no_item_default 30, 38, SPECIES_SEADRA

sParty_Thalia5: @ 0x082E350C
    @ TRAINER_THALIA_5 (id 847, special 327): ショウ ; flags=0, partySize=3
    trainer_mon_no_item_default 40, 40, SPECIES_LUVDISC
    trainer_mon_no_item_default 40, 40, SPECIES_WAILORD
    trainer_mon_no_item_default 40, 40, SPECIES_KINGDRA

sParty_Mariela: @ 0x082E3524
    @ TRAINER_MARIELA (id 848, special 328): ミハネ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 41, SPECIES_CHIMECHO

sParty_Alvaro: @ 0x082E352C
    @ TRAINER_ALVARO (id 849, special 329): シンヤ ; flags=0, partySize=2
    trainer_mon_no_item_default 0, 41, SPECIES_BANETTE
    trainer_mon_no_item_default 0, 41, SPECIES_KADABRA

sParty_Everett: @ 0x082E353C
    @ TRAINER_EVERETT (id 850, special 330): ダグ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 41, SPECIES_WOBBUFFET

sParty_Red: @ 0x082E3544
    @ TRAINER_RED (id 851, special 331): レッド ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_CHARMANDER

sParty_Leaf: @ 0x082E354C
    @ TRAINER_LEAF (id 852, special 332): リーフ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_BULBASAUR

sParty_BrendanPlaceholder: @ 0x082E3554
    @ TRAINER_BRENDAN_PLACEHOLDER (id 853, special 333): ユウキ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_GROUDON

sParty_MayPlaceholder: @ 0x082E355C
    @ TRAINER_MAY_PLACEHOLDER (id 854, special 334): ハルカ ; flags=0, partySize=1
    trainer_mon_no_item_default 0, 5, SPECIES_KYOGRE
