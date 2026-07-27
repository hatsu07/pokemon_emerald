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
	.set GENDER_MALE_ONLY,       0x00
	.set GENDER_FEMALE_12_5,     0x1F
	.set GENDER_FEMALE_25,       0x3F
	.set GENDER_FEMALE_50,       0x7F
	.set GENDER_FEMALE_75,       0xBF
	.set GENDER_FEMALE_87_5,     0xDF
	.set GENDER_FEMALE_ONLY,     0xFE
	.set GENDERLESS,             0xFF

@ ==================================================
@ タマゴグループ定数
@ ==================================================
	.set EGG_GROUP_NONE,         0x00
	.set EGG_GROUP_MONSTER,      0x01
	.set EGG_GROUP_WATER_1,      0x02
	.set EGG_GROUP_BUG,          0x03
	.set EGG_GROUP_FLYING,       0x04
	.set EGG_GROUP_FIELD,        0x05
	.set EGG_GROUP_FAIRY,        0x06
	.set EGG_GROUP_GRASS,        0x07
	.set EGG_GROUP_HUMAN_LIKE,   0x08
	.set EGG_GROUP_WATER_3,      0x09
	.set EGG_GROUP_MINERAL,      0x0A
	.set EGG_GROUP_AMORPHOUS,    0x0B
	.set EGG_GROUP_WATER_2,      0x0C
	.set EGG_GROUP_DITTO,        0x0D
	.set EGG_GROUP_DRAGON,       0x0E
	.set EGG_GROUP_UNDISCOVERED, 0x0F

@ ==================================================
@ 特性定数
@ ==================================================
	.set ABILITY_NONE,             0x00
	.set ABILITY_STENCH,           0x01
	.set ABILITY_DRIZZLE,          0x02
	.set ABILITY_SPEED_BOOST,      0x03
	.set ABILITY_BATTLE_ARMOR,     0x04
	.set ABILITY_STURDY,           0x05
	.set ABILITY_DAMP,             0x06
	.set ABILITY_LIMBER,           0x07
	.set ABILITY_SAND_VEIL,        0x08
	.set ABILITY_STATIC,           0x09
	.set ABILITY_VOLT_ABSORB,      0x0A
	.set ABILITY_WATER_ABSORB,     0x0B
	.set ABILITY_OBLIVIOUS,        0x0C
	.set ABILITY_CLOUD_NINE,       0x0D
	.set ABILITY_COMPOUND_EYES,    0x0E
	.set ABILITY_INSOMNIA,         0x0F
	.set ABILITY_COLOR_CHANGE,     0x10
	.set ABILITY_IMMUNITY,         0x11
	.set ABILITY_FLASH_FIRE,       0x12
	.set ABILITY_SHIELD_DUST,      0x13
	.set ABILITY_OWN_TEMPO,        0x14
	.set ABILITY_SUCTION_CUPS,     0x15
	.set ABILITY_INTIMIDATE,       0x16
	.set ABILITY_SHADOW_TAG,       0x17
	.set ABILITY_ROUGH_SKIN,       0x18
	.set ABILITY_WONDER_GUARD,     0x19
	.set ABILITY_LEVITATE,         0x1A
	.set ABILITY_EFFECT_SPORE,     0x1B
	.set ABILITY_SYNCHRONIZE,      0x1C
	.set ABILITY_CLEAR_BODY,       0x1D
	.set ABILITY_NATURAL_CURE,     0x1E
	.set ABILITY_LIGHTNING_ROD,    0x1F
	.set ABILITY_SERENE_GRACE,     0x20
	.set ABILITY_SWIFT_SWIM,       0x21
	.set ABILITY_CHLOROPHYLL,      0x22
	.set ABILITY_ILLUMINATE,       0x23
	.set ABILITY_TRACE,            0x24
	.set ABILITY_HUGE_POWER,       0x25
	.set ABILITY_POISON_POINT,     0x26
	.set ABILITY_INNER_FOCUS,      0x27
	.set ABILITY_MAGMA_ARMOR,      0x28
	.set ABILITY_WATER_VEIL,       0x29
	.set ABILITY_MAGNET_PULL,      0x2A
	.set ABILITY_SOUNDPROOF,       0x2B
	.set ABILITY_RAIN_DISH,        0x2C
	.set ABILITY_SAND_STREAM,      0x2D
	.set ABILITY_PRESSURE,         0x2E
	.set ABILITY_THICK_FAT,        0x2F
	.set ABILITY_EARLY_BIRD,       0x30
	.set ABILITY_FLAME_BODY,       0x31
	.set ABILITY_RUN_AWAY,         0x32
	.set ABILITY_KEEN_EYE,         0x33
	.set ABILITY_HYPER_CUTTER,     0x34
	.set ABILITY_PICKUP,           0x35
	.set ABILITY_TRUANT,           0x36
	.set ABILITY_HUSTLE,           0x37
	.set ABILITY_CUTE_CHARM,       0x38
	.set ABILITY_PLUS,             0x39
	.set ABILITY_MINUS,            0x3A
	.set ABILITY_FORECAST,         0x3B
	.set ABILITY_STICKY_HOLD,      0x3C
	.set ABILITY_SHED_SKIN,        0x3D
	.set ABILITY_GUTS,             0x3E
	.set ABILITY_MARVEL_SCALE,     0x3F
	.set ABILITY_LIQUID_OOZE,      0x40
	.set ABILITY_OVERGROW,         0x41
	.set ABILITY_BLAZE,            0x42
	.set ABILITY_TORRENT,          0x43
	.set ABILITY_SWARM,            0x44
	.set ABILITY_ROCK_HEAD,        0x45
	.set ABILITY_DROUGHT,          0x46
	.set ABILITY_ARENA_TRAP,       0x47
	.set ABILITY_VITAL_SPIRIT,     0x48
	.set ABILITY_WHITE_SMOKE,      0x49
	.set ABILITY_PURE_POWER,       0x4A
	.set ABILITY_SHELL_ARMOR,      0x4B
	.set ABILITY_CACOPHONY,        0x4C
	.set ABILITY_AIR_LOCK,         0x4D

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

@ ==================================================
@ 体色定数
@ ==================================================
	.set BODY_COLOR_RED,          0x00
	.set BODY_COLOR_BLUE,         0x01
	.set BODY_COLOR_YELLOW,       0x02
	.set BODY_COLOR_GREEN,        0x03
	.set BODY_COLOR_BLACK,        0x04
	.set BODY_COLOR_BROWN,        0x05
	.set BODY_COLOR_PURPLE,       0x06
	.set BODY_COLOR_GRAY,         0x07
	.set BODY_COLOR_WHITE,        0x08
	.set BODY_COLOR_PINK,         0x09

@ 反転フラグ込み
	.set BODY_COLOR_RED_FLIP,     0x80
	.set BODY_COLOR_BLUE_FLIP,    0x81
	.set BODY_COLOR_YELLOW_FLIP,  0x82
	.set BODY_COLOR_GREEN_FLIP,   0x83
	.set BODY_COLOR_BLACK_FLIP,   0x84
	.set BODY_COLOR_BROWN_FLIP,   0x85
	.set BODY_COLOR_PURPLE_FLIP,  0x86
	.set BODY_COLOR_GRAY_FLIP,    0x87
	.set BODY_COLOR_WHITE_FLIP,   0x88
	.set BODY_COLOR_PINK_FLIP,    0x89
