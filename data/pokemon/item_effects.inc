@ Item effect byte arrays and ITEM_POTION..ITEM_ENIGMA_BERRY pointer table.
@ Semantic labels follow pret/pokeemerald; numeric labels remain compatibility aliases.

	.globl gItemEffect_Potion
	.globl gItemEffect_00D
gItemEffect_Potion: @ 0x082EED08
gItemEffect_00D:
	.byte 0, 0, 0, 0, ITEM4_HEAL_HP, 0, 20

	.globl gItemEffect_Antidote
	.globl gItemEffect_00E
gItemEffect_Antidote: @ 0x082EED0F
gItemEffect_00E:
	.byte 0, 0, 0, ITEM3_POISON, 0, 0

	.globl gItemEffect_BurnHeal
	.globl gItemEffect_00F
gItemEffect_BurnHeal: @ 0x082EED15
gItemEffect_00F:
	.byte 0, 0, 0, ITEM3_BURN, 0, 0

	.globl gItemEffect_IceHeal
	.globl gItemEffect_010
gItemEffect_IceHeal: @ 0x082EED1B
gItemEffect_010:
	.byte 0, 0, 0, ITEM3_FREEZE, 0, 0

	.globl gItemEffect_Awakening
	.globl gItemEffect_011
gItemEffect_Awakening: @ 0x082EED21
gItemEffect_011:
	.byte 0, 0, 0, ITEM3_SLEEP, 0, 0

	.globl gItemEffect_ParalyzeHeal
	.globl gItemEffect_012
gItemEffect_ParalyzeHeal: @ 0x082EED27
gItemEffect_012:
	.byte 0, 0, 0, ITEM3_PARALYSIS, 0, 0

	.globl gItemEffect_FullRestore
	.globl gItemEffect_013
gItemEffect_FullRestore: @ 0x082EED2D
gItemEffect_013:
	.byte 0, 0, 0, ITEM3_STATUS_ALL, ITEM4_HEAL_HP, 0, ITEM6_HEAL_HP_FULL

	.globl gItemEffect_MaxPotion
	.globl gItemEffect_014
gItemEffect_MaxPotion: @ 0x082EED34
gItemEffect_014:
	.byte 0, 0, 0, 0, ITEM4_HEAL_HP, 0, ITEM6_HEAL_HP_FULL

	.globl gItemEffect_HyperPotion
	.globl gItemEffect_015
gItemEffect_HyperPotion: @ 0x082EED3B
gItemEffect_015:
	.byte 0, 0, 0, 0, ITEM4_HEAL_HP, 0, 200

	.globl gItemEffect_SuperPotion
	.globl gItemEffect_016
gItemEffect_SuperPotion: @ 0x082EED42
gItemEffect_016:
	.byte 0, 0, 0, 0, ITEM4_HEAL_HP, 0, 50

	.globl gItemEffect_FullHeal
	.globl gItemEffect_017
gItemEffect_FullHeal: @ 0x082EED49
gItemEffect_017:
	.byte 0, 0, 0, ITEM3_STATUS_ALL, 0, 0

	.globl gItemEffect_Revive
	.globl gItemEffect_018
gItemEffect_Revive: @ 0x082EED4F
gItemEffect_018:
	.byte 0, 0, 0, 0, ITEM4_REVIVE | ITEM4_HEAL_HP, 0, ITEM6_HEAL_HP_HALF

	.globl gItemEffect_MaxRevive
	.globl gItemEffect_019
gItemEffect_MaxRevive: @ 0x082EED56
gItemEffect_019:
	.byte 0, 0, 0, 0, ITEM4_REVIVE | ITEM4_HEAL_HP, 0, ITEM6_HEAL_HP_FULL

	.globl gItemEffect_FreshWater
	.globl gItemEffect_01A
gItemEffect_FreshWater: @ 0x082EED5D
gItemEffect_01A:
	.byte 0, 0, 0, 0, ITEM4_HEAL_HP, 0, 50

	.globl gItemEffect_SodaPop
	.globl gItemEffect_01B
gItemEffect_SodaPop: @ 0x082EED64
gItemEffect_01B:
	.byte 0, 0, 0, 0, ITEM4_HEAL_HP, 0, 60

	.globl gItemEffect_Lemonade
	.globl gItemEffect_01C
gItemEffect_Lemonade: @ 0x082EED6B
gItemEffect_01C:
	.byte 0, 0, 0, 0, ITEM4_HEAL_HP, 0, 80

	.globl gItemEffect_MoomooMilk
	.globl gItemEffect_01D
gItemEffect_MoomooMilk: @ 0x082EED72
gItemEffect_01D:
	.byte 0, 0, 0, 0, ITEM4_HEAL_HP, 0, 100

	.globl gItemEffect_EnergyPowder
	.globl gItemEffect_01E
gItemEffect_EnergyPowder: @ 0x082EED79
gItemEffect_01E:
	.byte 0, 0, 0, 0, ITEM4_HEAL_HP, ITEM5_FRIENDSHIP_ALL, 50, -5, -5, -10

	.globl gItemEffect_EnergyRoot
	.globl gItemEffect_01F
gItemEffect_EnergyRoot: @ 0x082EED83
gItemEffect_01F:
	.byte 0, 0, 0, 0, ITEM4_HEAL_HP, ITEM5_FRIENDSHIP_ALL, 200, -10, -10, -15

	.globl gItemEffect_HealPowder
	.globl gItemEffect_020
gItemEffect_HealPowder: @ 0x082EED8D
gItemEffect_020:
	.byte 0, 0, 0, ITEM3_STATUS_ALL, 0, ITEM5_FRIENDSHIP_ALL, -5, -5, -10

	.globl gItemEffect_RevivalHerb
	.globl gItemEffect_021
gItemEffect_RevivalHerb: @ 0x082EED96
gItemEffect_021:
	.byte 0, 0, 0, 0, ITEM4_REVIVE | ITEM4_HEAL_HP, ITEM5_FRIENDSHIP_ALL, ITEM6_HEAL_HP_FULL, -15, -15, -20

	.globl gItemEffect_Ether
	.globl gItemEffect_022
gItemEffect_Ether: @ 0x082EEDA0
gItemEffect_022:
	.byte 0, 0, 0, 0, ITEM4_HEAL_PP_ONE | ITEM4_HEAL_PP, 0, 10

	.globl gItemEffect_MaxEther
	.globl gItemEffect_023
gItemEffect_MaxEther: @ 0x082EEDA7
gItemEffect_023:
	.byte 0, 0, 0, 0, ITEM4_HEAL_PP_ONE | ITEM4_HEAL_PP, 0, ITEM6_HEAL_PP_FULL

	.globl gItemEffect_Elixir
	.globl gItemEffect_024
gItemEffect_Elixir: @ 0x082EEDAE
gItemEffect_024:
	.byte 0, 0, 0, 0, ITEM4_HEAL_PP, 0, 10

	.globl gItemEffect_MaxElixir
	.globl gItemEffect_025
gItemEffect_MaxElixir: @ 0x082EEDB5
gItemEffect_025:
	.byte 0, 0, 0, 0, ITEM4_HEAL_PP, 0, ITEM6_HEAL_PP_FULL

	.globl gItemEffect_LavaCookie
	.globl gItemEffect_026
gItemEffect_LavaCookie: @ 0x082EEDBC
gItemEffect_026:
	.byte 0, 0, 0, ITEM3_STATUS_ALL, 0, 0

	.globl gItemEffect_BlueFlute
	.globl gItemEffect_027
gItemEffect_BlueFlute: @ 0x082EEDC2
gItemEffect_027:
	.byte 0, 0, 0, ITEM3_SLEEP, 0, 0

	.globl gItemEffect_YellowFlute
	.globl gItemEffect_028
gItemEffect_YellowFlute: @ 0x082EEDC8
gItemEffect_028:
	.byte 0, 0, 0, ITEM3_CONFUSION, 0, 0

	.globl gItemEffect_RedFlute
	.globl gItemEffect_029
gItemEffect_RedFlute: @ 0x082EEDCE
gItemEffect_029:
	.byte ITEM0_INFATUATION, 0, 0, 0, 0, 0

	.globl gItemEffect_BerryJuice
	.globl gItemEffect_02C
gItemEffect_BerryJuice: @ 0x082EEDD4
gItemEffect_02C:
	.byte 0, 0, 0, 0, ITEM4_HEAL_HP, 0, 20

	.globl gItemEffect_SacredAsh
	.globl gItemEffect_02D
gItemEffect_SacredAsh: @ 0x082EEDDB
gItemEffect_02D:
	.byte ITEM0_SACRED_ASH, 0, 0, 0, ITEM4_REVIVE | ITEM4_HEAL_HP, 0, ITEM6_HEAL_HP_FULL

	.globl gItemEffect_03F
gItemEffect_03F: @ 0x082EEDE2
	.byte 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x0A, 0x05, 0x03, 0x02

	.globl gItemEffect_040
gItemEffect_040: @ 0x082EEDEC
	.byte 0x00, 0x00, 0x00, 0x00, 0x02, 0xE0, 0x0A, 0x05, 0x03, 0x02

	.globl gItemEffect_041
gItemEffect_041: @ 0x082EEDF6
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xE1, 0x0A, 0x05, 0x03, 0x02

	.globl gItemEffect_042
gItemEffect_042: @ 0x082EEE00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xE2, 0x0A, 0x05, 0x03, 0x02

	.globl gItemEffect_043
gItemEffect_043: @ 0x082EEE0A
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xE8, 0x0A, 0x05, 0x03, 0x02

	.globl gItemEffect_044
gItemEffect_044: @ 0x082EEE14
	.byte 0x00, 0x00, 0x00, 0x40, 0x44, 0xE0, 0xFD, 0x05, 0x03, 0x02

	.globl gItemEffect_045
gItemEffect_045: @ 0x082EEE1E
	.byte 0x00, 0x00, 0x00, 0x00, 0x20, 0xE0, 0x05, 0x03, 0x02

	.globl gItemEffect_046
gItemEffect_046: @ 0x082EEE27
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xE4, 0x0A, 0x05, 0x03, 0x02

	.globl gItemEffect_047
gItemEffect_047: @ 0x082EEE31
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x05, 0x03, 0x02

	.globl gItemEffect_049
gItemEffect_049: @ 0x082EEE3A
	.byte 0x00, 0x00, 0x00, 0x80, 0x00, 0x60, 0x01, 0x01

	.globl gItemEffect_04A
gItemEffect_04A: @ 0x082EEE42
	.byte 0x20, 0x00, 0x00, 0x00, 0x00, 0x60, 0x01, 0x01

	.globl gItemEffect_04B
gItemEffect_04B: @ 0x082EEE4A
	.byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x60, 0x01, 0x01

	.globl gItemEffect_04C
gItemEffect_04C: @ 0x082EEE52
	.byte 0x00, 0x10, 0x00, 0x00, 0x00, 0x60, 0x01, 0x01

	.globl gItemEffect_04D
gItemEffect_04D: @ 0x082EEE5A
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x60, 0x01, 0x01

	.globl gItemEffect_04E
gItemEffect_04E: @ 0x082EEE62
	.byte 0x00, 0x00, 0x10, 0x00, 0x00, 0x60, 0x01, 0x01

	.globl gItemEffect_04F
gItemEffect_04F: @ 0x082EEE6A
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x60, 0x01, 0x01

	.globl gItemEffect_05D
gItemEffect_05D: @ 0x082EEE72
	.byte 0x00, 0x00, 0x00, 0x00, 0x80, 0x00

	.globl gItemEffect_05E
gItemEffect_05E: @ 0x082EEE78
	.byte 0x00, 0x00, 0x00, 0x00, 0x80, 0x00

	.globl gItemEffect_05F
gItemEffect_05F: @ 0x082EEE7E
	.byte 0x00, 0x00, 0x00, 0x00, 0x80, 0x00

	.globl gItemEffect_060
gItemEffect_060: @ 0x082EEE84
	.byte 0x00, 0x00, 0x00, 0x00, 0x80, 0x00

	.globl gItemEffect_061
gItemEffect_061: @ 0x082EEE8A
	.byte 0x00, 0x00, 0x00, 0x00, 0x80, 0x00

	.globl gItemEffect_062
gItemEffect_062: @ 0x082EEE90
	.byte 0x00, 0x00, 0x00, 0x00, 0x80, 0x00

	.globl gItemEffect_085
gItemEffect_085: @ 0x082EEE96
	.byte 0x00, 0x00, 0x00, 0x02, 0x00, 0x00

	.globl gItemEffect_086
gItemEffect_086: @ 0x082EEE9C
	.byte 0x00, 0x00, 0x00, 0x20, 0x00, 0x00

	.globl gItemEffect_087
gItemEffect_087: @ 0x082EEEA2
	.byte 0x00, 0x00, 0x00, 0x10, 0x00, 0x00

	.globl gItemEffect_088
gItemEffect_088: @ 0x082EEEA8
	.byte 0x00, 0x00, 0x00, 0x08, 0x00, 0x00

	.globl gItemEffect_089
gItemEffect_089: @ 0x082EEEAE
	.byte 0x00, 0x00, 0x00, 0x04, 0x00, 0x00

	.globl gItemEffect_08A
gItemEffect_08A: @ 0x082EEEB4
	.byte 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x0A

	.globl gItemEffect_08B
gItemEffect_08B: @ 0x082EEEBB
	.byte 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0A

	.globl gItemEffect_08C
gItemEffect_08C: @ 0x082EEEC2
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00

	.globl gItemEffect_08D
gItemEffect_08D: @ 0x082EEEC8
	.byte 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00

	.globl gItemEffect_08E
gItemEffect_08E: @ 0x082EEECE
	.byte 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x1E

	.globl gItemEffect_099
gItemEffect_099: @ 0x082EEED5
	.byte 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0xF6, 0x0A, 0x05, 0x02

	.globl gItemEffect_09A
gItemEffect_09A: @ 0x082EEEDF
	.byte 0x00, 0x00, 0x00, 0x00, 0x02, 0xE0, 0xF6, 0x0A, 0x05, 0x02

	.globl gItemEffect_09B
gItemEffect_09B: @ 0x082EEEE9
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xE1, 0xF6, 0x0A, 0x05, 0x02

	.globl gItemEffect_09C
gItemEffect_09C: @ 0x082EEEF3
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xE8, 0xF6, 0x0A, 0x05, 0x02

	.globl gItemEffect_09D
gItemEffect_09D: @ 0x082EEEFD
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xE4, 0xF6, 0x0A, 0x05, 0x02

	.globl gItemEffect_09E
gItemEffect_09E: @ 0x082EEF07
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xE2, 0xF6, 0x0A, 0x05, 0x02

	item_effect_alias gItemEffect_HPUp, gItemEffect_03F
	item_effect_alias gItemEffect_Protein, gItemEffect_040
	item_effect_alias gItemEffect_Iron, gItemEffect_041
	item_effect_alias gItemEffect_Carbos, gItemEffect_042
	item_effect_alias gItemEffect_Calcium, gItemEffect_043
	item_effect_alias gItemEffect_RareCandy, gItemEffect_044
	item_effect_alias gItemEffect_PPUp, gItemEffect_045
	item_effect_alias gItemEffect_Zinc, gItemEffect_046
	item_effect_alias gItemEffect_PPMax, gItemEffect_047
	item_effect_alias gItemEffect_GuardSpec, gItemEffect_049
	item_effect_alias gItemEffect_DireHit, gItemEffect_04A
	item_effect_alias gItemEffect_XAttack, gItemEffect_04B
	item_effect_alias gItemEffect_XDefend, gItemEffect_04C
	item_effect_alias gItemEffect_XSpeed, gItemEffect_04D
	item_effect_alias gItemEffect_XAccuracy, gItemEffect_04E
	item_effect_alias gItemEffect_XSpecial, gItemEffect_04F
	item_effect_alias gItemEffect_SunStone, gItemEffect_05D
	item_effect_alias gItemEffect_MoonStone, gItemEffect_05E
	item_effect_alias gItemEffect_FireStone, gItemEffect_05F
	item_effect_alias gItemEffect_ThunderStone, gItemEffect_060
	item_effect_alias gItemEffect_WaterStone, gItemEffect_061
	item_effect_alias gItemEffect_LeafStone, gItemEffect_062
	item_effect_alias gItemEffect_CheriBerry, gItemEffect_085
	item_effect_alias gItemEffect_ChestoBerry, gItemEffect_086
	item_effect_alias gItemEffect_PechaBerry, gItemEffect_087
	item_effect_alias gItemEffect_RawstBerry, gItemEffect_088
	item_effect_alias gItemEffect_AspearBerry, gItemEffect_089
	item_effect_alias gItemEffect_LeppaBerry, gItemEffect_08A
	item_effect_alias gItemEffect_OranBerry, gItemEffect_08B
	item_effect_alias gItemEffect_PersimBerry, gItemEffect_08C
	item_effect_alias gItemEffect_LumBerry, gItemEffect_08D
	item_effect_alias gItemEffect_SitrusBerry, gItemEffect_08E
	item_effect_alias gItemEffect_PomegBerry, gItemEffect_099
	item_effect_alias gItemEffect_KelpsyBerry, gItemEffect_09A
	item_effect_alias gItemEffect_QualotBerry, gItemEffect_09B
	item_effect_alias gItemEffect_HondewBerry, gItemEffect_09C
	item_effect_alias gItemEffect_GrepaBerry, gItemEffect_09D
	item_effect_alias gItemEffect_TamatoBerry, gItemEffect_09E

	@ 0x082EEF11-0x082EEF13 alignment
	.byte 0, 0, 0

	.globl gItemEffectTable
	.globl gUnknown_82EEF14
gItemEffectTable: @ 0x082EEF14
gUnknown_82EEF14:
	item_effect_table_entry ITEM_POTION, gItemEffect_Potion
	item_effect_table_entry ITEM_ANTIDOTE, gItemEffect_Antidote
	item_effect_table_entry ITEM_BURN_HEAL, gItemEffect_BurnHeal
	item_effect_table_entry ITEM_ICE_HEAL, gItemEffect_IceHeal
	item_effect_table_entry ITEM_AWAKENING, gItemEffect_Awakening
	item_effect_table_entry ITEM_PARALYZE_HEAL, gItemEffect_ParalyzeHeal
	item_effect_table_entry ITEM_FULL_RESTORE, gItemEffect_FullRestore
	item_effect_table_entry ITEM_MAX_POTION, gItemEffect_MaxPotion
	item_effect_table_entry ITEM_HYPER_POTION, gItemEffect_HyperPotion
	item_effect_table_entry ITEM_SUPER_POTION, gItemEffect_SuperPotion
	item_effect_table_entry ITEM_FULL_HEAL, gItemEffect_FullHeal
	item_effect_table_entry ITEM_REVIVE, gItemEffect_Revive
	item_effect_table_entry ITEM_MAX_REVIVE, gItemEffect_MaxRevive
	item_effect_table_entry ITEM_FRESH_WATER, gItemEffect_FreshWater
	item_effect_table_entry ITEM_SODA_POP, gItemEffect_SodaPop
	item_effect_table_entry ITEM_LEMONADE, gItemEffect_Lemonade
	item_effect_table_entry ITEM_MOOMOO_MILK, gItemEffect_MoomooMilk
	item_effect_table_entry ITEM_ENERGY_POWDER, gItemEffect_EnergyPowder
	item_effect_table_entry ITEM_ENERGY_ROOT, gItemEffect_EnergyRoot
	item_effect_table_entry ITEM_HEAL_POWDER, gItemEffect_HealPowder
	item_effect_table_entry ITEM_REVIVAL_HERB, gItemEffect_RevivalHerb
	item_effect_table_entry ITEM_ETHER, gItemEffect_Ether
	item_effect_table_entry ITEM_MAX_ETHER, gItemEffect_MaxEther
	item_effect_table_entry ITEM_ELIXIR, gItemEffect_Elixir
	item_effect_table_entry ITEM_MAX_ELIXIR, gItemEffect_MaxElixir
	item_effect_table_entry ITEM_LAVA_COOKIE, gItemEffect_LavaCookie
	item_effect_table_entry ITEM_BLUE_FLUTE, gItemEffect_BlueFlute
	item_effect_table_entry ITEM_YELLOW_FLUTE, gItemEffect_YellowFlute
	item_effect_table_entry ITEM_RED_FLUTE, gItemEffect_RedFlute
	item_effect_table_entry ITEM_BLACK_FLUTE, NULL
	item_effect_table_entry ITEM_WHITE_FLUTE, NULL
	item_effect_table_entry ITEM_BERRY_JUICE, gItemEffect_BerryJuice
	item_effect_table_entry ITEM_SACRED_ASH, gItemEffect_SacredAsh
	item_effect_table_entry ITEM_SHOAL_SALT, NULL
	item_effect_table_entry ITEM_SHOAL_SHELL, NULL
	item_effect_table_entry ITEM_RED_SHARD, NULL
	item_effect_table_entry ITEM_BLUE_SHARD, NULL
	item_effect_table_entry ITEM_YELLOW_SHARD, NULL
	item_effect_table_entry ITEM_GREEN_SHARD, NULL
	item_effect_table_entry ITEM_UNUSED_034, NULL
	item_effect_table_entry ITEM_UNUSED_035, NULL
	item_effect_table_entry ITEM_UNUSED_036, NULL
	item_effect_table_entry ITEM_UNUSED_037, NULL
	item_effect_table_entry ITEM_UNUSED_038, NULL
	item_effect_table_entry ITEM_UNUSED_039, NULL
	item_effect_table_entry ITEM_UNUSED_03A, NULL
	item_effect_table_entry ITEM_UNUSED_03B, NULL
	item_effect_table_entry ITEM_UNUSED_03C, NULL
	item_effect_table_entry ITEM_UNUSED_03D, NULL
	item_effect_table_entry ITEM_UNUSED_03E, NULL
	item_effect_table_entry ITEM_HP_UP, gItemEffect_HPUp
	item_effect_table_entry ITEM_PROTEIN, gItemEffect_Protein
	item_effect_table_entry ITEM_IRON, gItemEffect_Iron
	item_effect_table_entry ITEM_CARBOS, gItemEffect_Carbos
	item_effect_table_entry ITEM_CALCIUM, gItemEffect_Calcium
	item_effect_table_entry ITEM_RARE_CANDY, gItemEffect_RareCandy
	item_effect_table_entry ITEM_PP_UP, gItemEffect_PPUp
	item_effect_table_entry ITEM_ZINC, gItemEffect_Zinc
	item_effect_table_entry ITEM_PP_MAX, gItemEffect_PPMax
	item_effect_table_entry ITEM_UNUSED_048, NULL
	item_effect_table_entry ITEM_GUARD_SPEC, gItemEffect_GuardSpec
	item_effect_table_entry ITEM_DIRE_HIT, gItemEffect_DireHit
	item_effect_table_entry ITEM_X_ATTACK, gItemEffect_XAttack
	item_effect_table_entry ITEM_X_DEFEND, gItemEffect_XDefend
	item_effect_table_entry ITEM_X_SPEED, gItemEffect_XSpeed
	item_effect_table_entry ITEM_X_ACCURACY, gItemEffect_XAccuracy
	item_effect_table_entry ITEM_X_SPECIAL, gItemEffect_XSpecial
	item_effect_table_entry ITEM_POKE_DOLL, NULL
	item_effect_table_entry ITEM_FLUFFY_TAIL, NULL
	item_effect_table_entry ITEM_UNUSED_052, NULL
	item_effect_table_entry ITEM_SUPER_REPEL, NULL
	item_effect_table_entry ITEM_MAX_REPEL, NULL
	item_effect_table_entry ITEM_ESCAPE_ROPE, NULL
	item_effect_table_entry ITEM_REPEL, NULL
	item_effect_table_entry ITEM_UNUSED_057, NULL
	item_effect_table_entry ITEM_UNUSED_058, NULL
	item_effect_table_entry ITEM_UNUSED_059, NULL
	item_effect_table_entry ITEM_UNUSED_05A, NULL
	item_effect_table_entry ITEM_UNUSED_05B, NULL
	item_effect_table_entry ITEM_UNUSED_05C, NULL
	item_effect_table_entry ITEM_SUN_STONE, gItemEffect_SunStone
	item_effect_table_entry ITEM_MOON_STONE, gItemEffect_MoonStone
	item_effect_table_entry ITEM_FIRE_STONE, gItemEffect_FireStone
	item_effect_table_entry ITEM_THUNDER_STONE, gItemEffect_ThunderStone
	item_effect_table_entry ITEM_WATER_STONE, gItemEffect_WaterStone
	item_effect_table_entry ITEM_LEAF_STONE, gItemEffect_LeafStone
	item_effect_table_entry ITEM_UNUSED_063, NULL
	item_effect_table_entry ITEM_UNUSED_064, NULL
	item_effect_table_entry ITEM_UNUSED_065, NULL
	item_effect_table_entry ITEM_UNUSED_066, NULL
	item_effect_table_entry ITEM_TINY_MUSHROOM, NULL
	item_effect_table_entry ITEM_BIG_MUSHROOM, NULL
	item_effect_table_entry ITEM_UNUSED_069, NULL
	item_effect_table_entry ITEM_PEARL, NULL
	item_effect_table_entry ITEM_BIG_PEARL, NULL
	item_effect_table_entry ITEM_STARDUST, NULL
	item_effect_table_entry ITEM_STAR_PIECE, NULL
	item_effect_table_entry ITEM_NUGGET, NULL
	item_effect_table_entry ITEM_HEART_SCALE, NULL
	item_effect_table_entry ITEM_UNUSED_070, NULL
	item_effect_table_entry ITEM_UNUSED_071, NULL
	item_effect_table_entry ITEM_UNUSED_072, NULL
	item_effect_table_entry ITEM_UNUSED_073, NULL
	item_effect_table_entry ITEM_UNUSED_074, NULL
	item_effect_table_entry ITEM_UNUSED_075, NULL
	item_effect_table_entry ITEM_UNUSED_076, NULL
	item_effect_table_entry ITEM_UNUSED_077, NULL
	item_effect_table_entry ITEM_UNUSED_078, NULL
	item_effect_table_entry ITEM_ORANGE_MAIL, NULL
	item_effect_table_entry ITEM_HARBOR_MAIL, NULL
	item_effect_table_entry ITEM_GLITTER_MAIL, NULL
	item_effect_table_entry ITEM_MECH_MAIL, NULL
	item_effect_table_entry ITEM_WOOD_MAIL, NULL
	item_effect_table_entry ITEM_WAVE_MAIL, NULL
	item_effect_table_entry ITEM_BEAD_MAIL, NULL
	item_effect_table_entry ITEM_SHADOW_MAIL, NULL
	item_effect_table_entry ITEM_TROPIC_MAIL, NULL
	item_effect_table_entry ITEM_DREAM_MAIL, NULL
	item_effect_table_entry ITEM_FAB_MAIL, NULL
	item_effect_table_entry ITEM_RETRO_MAIL, NULL
	item_effect_table_entry ITEM_CHERI_BERRY, gItemEffect_CheriBerry
	item_effect_table_entry ITEM_CHESTO_BERRY, gItemEffect_ChestoBerry
	item_effect_table_entry ITEM_PECHA_BERRY, gItemEffect_PechaBerry
	item_effect_table_entry ITEM_RAWST_BERRY, gItemEffect_RawstBerry
	item_effect_table_entry ITEM_ASPEAR_BERRY, gItemEffect_AspearBerry
	item_effect_table_entry ITEM_LEPPA_BERRY, gItemEffect_LeppaBerry
	item_effect_table_entry ITEM_ORAN_BERRY, gItemEffect_OranBerry
	item_effect_table_entry ITEM_PERSIM_BERRY, gItemEffect_PersimBerry
	item_effect_table_entry ITEM_LUM_BERRY, gItemEffect_LumBerry
	item_effect_table_entry ITEM_SITRUS_BERRY, gItemEffect_SitrusBerry
	item_effect_table_entry ITEM_FIGY_BERRY, NULL
	item_effect_table_entry ITEM_WIKI_BERRY, NULL
	item_effect_table_entry ITEM_MAGO_BERRY, NULL
	item_effect_table_entry ITEM_AGUAV_BERRY, NULL
	item_effect_table_entry ITEM_IAPAPA_BERRY, NULL
	item_effect_table_entry ITEM_RAZZ_BERRY, NULL
	item_effect_table_entry ITEM_BLUK_BERRY, NULL
	item_effect_table_entry ITEM_NANAB_BERRY, NULL
	item_effect_table_entry ITEM_WEPEAR_BERRY, NULL
	item_effect_table_entry ITEM_PINAP_BERRY, NULL
	item_effect_table_entry ITEM_POMEG_BERRY, gItemEffect_PomegBerry
	item_effect_table_entry ITEM_KELPSY_BERRY, gItemEffect_KelpsyBerry
	item_effect_table_entry ITEM_QUALOT_BERRY, gItemEffect_QualotBerry
	item_effect_table_entry ITEM_HONDEW_BERRY, gItemEffect_HondewBerry
	item_effect_table_entry ITEM_GREPA_BERRY, gItemEffect_GrepaBerry
	item_effect_table_entry ITEM_TAMATO_BERRY, gItemEffect_TamatoBerry
	item_effect_table_entry ITEM_CORNN_BERRY, NULL
	item_effect_table_entry ITEM_MAGOST_BERRY, NULL
	item_effect_table_entry ITEM_RABUTA_BERRY, NULL
	item_effect_table_entry ITEM_NOMEL_BERRY, NULL
	item_effect_table_entry ITEM_SPELON_BERRY, NULL
	item_effect_table_entry ITEM_PAMTRE_BERRY, NULL
	item_effect_table_entry ITEM_WATMEL_BERRY, NULL
	item_effect_table_entry ITEM_DURIN_BERRY, NULL
	item_effect_table_entry ITEM_BELUE_BERRY, NULL
	item_effect_table_entry ITEM_LIECHI_BERRY, NULL
	item_effect_table_entry ITEM_GANLON_BERRY, NULL
	item_effect_table_entry ITEM_SALAC_BERRY, NULL
	item_effect_table_entry ITEM_PETAYA_BERRY, NULL
	item_effect_table_entry ITEM_APICOT_BERRY, NULL
	item_effect_table_entry ITEM_LANSAT_BERRY, NULL
	item_effect_table_entry ITEM_STARF_BERRY, NULL
	item_effect_table_entry ITEM_ENIGMA_BERRY, NULL

	.if (. - gItemEffectTable) != ((ITEM_ENIGMA_BERRY - ITEM_POTION + 1) * 4)
	.error "gItemEffectTable must cover ITEM_POTION through ITEM_ENIGMA_BERRY"
	.endif
