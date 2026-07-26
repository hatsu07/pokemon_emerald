@ ポケモン種族データ用定数
@ tools/extract_base_stats.py によって自動生成・使用

@ ==================================================
@ タイプ定数
@ ==================================================
	.set TYPE_NORMAL,      0x00
	.set TYPE_FIGHT,       0x01
	.set TYPE_FLYING,      0x02
	.set TYPE_POISON,      0x03
	.set TYPE_GROUND,      0x04
	.set TYPE_ROCK,        0x05
	.set TYPE_BUG,         0x06
	.set TYPE_GHOST,       0x07
	.set TYPE_STEEL,       0x08
	.set TYPE_FIRE,        0x0a
	.set TYPE_WATER,       0x0b
	.set TYPE_GRASS,       0x0c
	.set TYPE_ELECTRIC,    0x0d
	.set TYPE_PSYCHIC,     0x0e
	.set TYPE_ICE,         0x0f
	.set TYPE_DRAGON,      0x10
	.set TYPE_DARK,        0x11

@ ==================================================
@ 努力値定数 (EV_YIELD)
@ ==================================================
	.set EV_YIELD_NONE,            0x00
	.set EV_YIELD_HP,              0x01
	.set EV_YIELD_ATTACK,          0x02
	.set EV_YIELD_DEFENSE,         0x04
	.set EV_YIELD_SPEED,           0x08
	.set EV_YIELD_SP_ATTACK,       0x10
	.set EV_YIELD_SP_DEFENSE,      0x20
	.set EV_YIELD_HP_2,            0x40
	.set EV_YIELD_SP_ATTACK_2,     0x80

@ ==================================================
@ 成長率定数
@ ==================================================
	.set GROWTH_MEDIUM_FAST,   0x00
	.set GROWTH_ERRATIC,       0x01
	.set GROWTH_FLUCTUATING,   0x02
	.set GROWTH_MEDIUM_SLOW,   0x03
	.set GROWTH_FAST,          0x04
	.set GROWTH_SLOW,          0x05

@ ==================================================
@ 性別比率定数
@ ==================================================
	.set GENDER_RATIO_MALE_ONLY,        0x00
	.set GENDER_RATIO_FEMALE_12_5,      0x01
	.set GENDER_RATIO_MALE_25,          0x02
	.set GENDER_RATIO_MALE_50,          0x04
	.set GENDER_RATIO_FEMALE_25,        0x06
	.set GENDER_RATIO_FEMALE_50,        0x08
	.set GENDER_RATIO_FEMALE_75,        0x0c
	.set GENDER_RATIO_FEMALE_ONLY,      0x0e
	.set GENDER_RATIO_NO_GENDER,        0x0f

@ ==================================================
@ タマゴグループ定数
@ ==================================================
	.set EGG_GROUP_NONE,         0x00
	.set EGG_GROUP_MONSTER,      0x01
	.set EGG_GROUP_WATER_1,      0x02
	.set EGG_GROUP_BUG,          0x03
	.set EGG_GROUP_FLYING,       0x04
	.set EGG_GROUP_GRASS,        0x05
	.set EGG_GROUP_HUMAN_LIKE,   0x06
	.set EGG_GROUP_FAIRY,        0x07
	.set EGG_GROUP_UNDISCOVERED, 0x08
	.set EGG_GROUP_MINERAL,      0x09
	.set EGG_GROUP_AMORPHOUS,    0x0a
	.set EGG_GROUP_WATER_2,      0x0b
	.set EGG_GROUP_DITTO,        0x0c
	.set EGG_GROUP_DRAGON,       0x0d
	.set EGG_GROUP_FIELD,        0x0e

@ ==================================================
@ 特性定数
@ ==================================================
	.set ABILITY_NONE,           0x00
	.set ABILITY_STENCH,         0x01
	.set ABILITY_DRIZZLE,        0x02
	.set ABILITY_SPEED_BOOST,    0x03
	.set ABILITY_BATTLE_ARMOR,   0x04
	.set ABILITY_STURDY,         0x05
	.set ABILITY_DAMP,           0x06
	.set ABILITY_LIMBER,         0x07
	.set ABILITY_SAND_VEIL,      0x08
	.set ABILITY_STATIC,         0x09
	.set ABILITY_VOLT_ABSORB,    0x0a
	.set ABILITY_WATER_ABSORB,   0x0b
	.set ABILITY_OBLIVIOUS,      0x0c
	.set ABILITY_CLOUD_NINE,     0x0d
	.set ABILITY_COMPOUND_EYES,  0x0e
	.set ABILITY_INSOMNIA,       0x0f
	.set ABILITY_COLOR_CHANGE,   0x10
	.set ABILITY_IMMUNITY,       0x11
	.set ABILITY_FLASH_FIRE,     0x12
	.set ABILITY_SHIELD_DUST,    0x13
	.set ABILITY_EARLY_BIRD,     0x15
	.set ABILITY_FLAME_BODY,     0x16
	.set ABILITY_RUN_AWAY,       0x17
	.set ABILITY_KEEN_EYE,       0x18
	.set ABILITY_HYPER_CUTTER,   0x19
	.set ABILITY_PICKUP,         0x1a
	.set ABILITY_TRUANT,         0x1b
	.set ABILITY_HUSTLE,         0x1c
	.set ABILITY_CUTE_CHARM,     0x1d
	.set ABILITY_PLUS,           0x1e
	.set ABILITY_MINUS,          0x1f
	.set ABILITY_FORECAST,       0x20
	.set ABILITY_STICKY_HOLD,    0x21
	.set ABILITY_SHED_SKIN,      0x22
	.set ABILITY_GUTS,           0x23
	.set ABILITY_MAREL_SCALE,    0x24
	.set ABILITY_LIQUID_OOZE,    0x25
	.set ABILITY_OVERGROW,       0x26
	.set ABILITY_BLAZE,          0x27
	.set ABILITY_TORRENT,        0x28
	.set ABILITY_SWARM,          0x29
	.set ABILITY_ROCK_HEAD,      0x2a
	.set ABILITY_DROUGHT,        0x2b
	.set ABILITY_ARENA_TRAP,     0x2c
	.set ABILITY_VITAL_SPIRIT,   0x2d
	.set ABILITY_WHITE_SMOKE,    0x2e
	.set ABILITY_PURE_POWER,     0x2f
	.set ABILITY_SHELL_ARMOR,    0x30
	.set ABILITY_CACOPHONY,      0x31
	.set ABILITY_AIR_LOCK,       0x32
	.set ABILITY_TINTED_LENS,    0x33
	.set ABILITY_HYPER_VOICE,    0x34
	.set ABILITY_POISON_POINT,   0x35
	.set ABILITY_RIVALRY,        0x36
	.set ABILITY_FORCE_FIELD,    0x37
	.set ABILITY_QUICK_FEET,     0x38
	.set ABILITY_NATURAL_CURE,   0x39
	.set ABILITY_INSIGHT,        0x3a
	.set ABILITY_FILTER,         0x3b
	.set ABILITY_SLOW_START,     0x3c
	.set ABILITY_SCRAPPY,        0x3d
	.set ABILITY_OUT_OF_REACH,   0x3e
	.set ABILITY_SOUNDPROOF,     0x3f
	.set ABILITY_UPLIFTED_FROM_G, 0x40
	.set ABILITY_RAIN_DISH,      0x41
	.set ABILITY_SAND_STREAM,    0x42
	.set ABILITY_PRESSURE,       0x43
	.set ABILITY_THICK_FAT,      0x44
	.set ABILITY_LEVITATE,       0x83
	.set ABILITY_TIMID,          0x8f
	.set ABILITY_MAGIC_GUARD,    0x91
	.set ABILITY_ANGER_POINT,    0x92
	.set ABILITY_SCRATCH,        0x93
	.set ABILITY_SUCTION_CUPS,   0x94
	.set ABILITY_INTIMIDATE,     0x95
	.set ABILITY_SHADOW_TAG,     0x96
	.set ABILITY_ROUGH_SKIN,     0x97
	.set ABILITY_WONDER_GUARD,   0x98
	.set ABILITY_LEVITATE_ALT,   0x99
	.set ABILITY_EFFECT_SPORE,   0x9a
	.set ABILITY_SYNCHRONIZE,    0x9b
	.set ABILITY_CLEAR_BODY,     0x9c
	.set ABILITY_LIGHTNING_ROD,  0x9e
	.set ABILITY_SERENE_GRACE,   0x9f
	.set ABILITY_SWIFT_SWIM,     0xa0
	.set ABILITY_CHLOROPHYLL,    0xa1
	.set ABILITY_ILLUMINATE,     0xa2
	.set ABILITY_TRACE,          0xa3
	.set ABILITY_HONEY_GATHER,   0xa4
	.set ABILITY_FRISK,          0xa5
	.set ABILITY_RECKLESS,       0xa6
	.set ABILITY_MULTITYPE,      0xa7
	.set ABILITY_FLOWER_GIFT,    0xa8
	.set ABILITY_BAD_DREAMS,     0xa9
	.set ABILITY_PICKPOCKET,     0xaa
	.set ABILITY_UNKNOWN,        0xfe
	.set ABILITY_INVALID,        0xff

@ ==================================================
@ アイテム定数
@ ==================================================
	.set ITEM_NONE,              0x0000
	.set ITEM_POTION,            0x0004
	.set ITEM_ANTIDOTE,          0x0007
	.set ITEM_SUPER_POTION,      0x0008
	.set ITEM_FULL_HEAL,         0x000f
	.set ITEM_REVIVE,            0x0010
	.set ITEM_RARE_CANDY,        0x0013
	.set ITEM_MASTER_BALL,       0x0014
	.set ITEM_ULTRA_BALL,        0x0015
	.set ITEM_GREAT_BALL,        0x0016
	.set ITEM_POKE_BALL,         0x0017
	.set ITEM_SAFARI_BALL,       0x0018
	.set ITEM_NET_BALL,          0x0019
	.set ITEM_DIVE_BALL,         0x001a
	.set ITEM_NEST_BALL,         0x001b
	.set ITEM_REPEAT_BALL,       0x001c
	.set ITEM_TIMER_BALL,        0x001d
	.set ITEM_LUXURY_BALL,       0x001e
	.set ITEM_PREMIER_BALL,      0x001f
	.set ITEM_LEFTOVERS,         0x00c2
	.set ITEM_ORAN_BERRY,        0x00f4
	.set ITEM_PERSIM_BERRY,      0x00f5
	.set ITEM_SITRUS_BERRY,      0x00f6
	.set ITEM_PECHA_BERRY,       0x00f7
	.set ITEM_CHESTO_BERRY,      0x00f8
	.set ITEM_RAWST_BERRY,       0x00f9
	.set ITEM_ASPEAR_BERRY,      0x00fa
	.set ITEM_LIECHI_BERRY,      0x00fb
	.set ITEM_GANLON_BERRY,      0x00fc
	.set ITEM_SALAC_BERRY,       0x00fd
	.set ITEM_PETAYA_BERRY,      0x00fe
	.set ITEM_APICOT_BERRY,      0x00ff
	.set ITEM_LANSAT_BERRY,      0x0100
	.set ITEM_STARF_BERRY,       0x0101
	.set ITEM_ENIGMA_BERRY,      0x0102
	.set ITEM_CUSTAP_BERRY,      0x0103
	.set ITEM_KINGS_ROCK,        0x00d1
	.set ITEM_LUCKY_PUNCH,       0x01bd
	.set ITEM_METAL_COAT,        0x00e4
	.set ITEM_DRAGON_SCALE,      0x00f0
	.set ITEM_UPGRADE,           0x00f1
	.set ITEM_SOUL_DEW,          0x0190
	.set ITEM_DEEP_SEA_TOOTH,    0x01a5
	.set ITEM_DEEP_SEA_SCALE,    0x01a6
	.set ITEM_WHITE_HERB,        0x01aa
	.set ITEM_THICK_CLUB,        0x01b4
	.set ITEM_LIGHT_BALL,        0x01b6
	.set ITEM_LEEK,              0x01b8
	.set ITEM_CHOICE_BAND,       0x01b9
	.set ITEM_CHOICE_SPECS,      0x01ba
	.set ITEM_CHOICE_SCARF,      0x01bb
	.set ITEM_FOCUS_SASH,        0x01bc
	.set ITEM_EXPERT_BELT,       0x01be
	.set ITEM_SCOPE_LENS,        0x01bf
	.set ITEM_WIDE_LENS,         0x01c0
	.set ITEM_ZOOM_LENS,         0x01c1
	.set ITEM_BIG_ROOT,          0x01c2
	.set ITEM_RAZOR_FANG,        0x01c4
	.set ITEM_GRIP_CLAW,         0x01c5
	.set ITEM_LAGGING_TAIL,      0x01c6
	.set ITEM_RED_CARD,          0x01c7
	.set ITEM_QUICK_CLAW,        0x01c8

@ ==================================================
@ Safari Zone 逃走率
@ ==================================================
	.set SAFARI_FLEE_RATE_0,  0x00
	.set SAFARI_FLEE_RATE_25, 0x25
	.set SAFARI_FLEE_RATE_50, 0x50
	.set SAFARI_FLEE_RATE_75, 0x75
	.set SAFARI_FLEE_RATE_100,0x64

@ ==================================================
@ 図鑑反転フラグ
@ ==================================================
	.set NO_FLIP,              0x00
	.set FLIP_BACKWARDS,       0x80