@ Item structure constants used by data/items/items.inc.
@ Keep these values synchronized with struct Item.

 @ Item importance
.set ITEM_IMPORTANCE_NONE,    0
.set ITEM_IMPORTANCE_KEY,     1
.set ITEM_IMPORTANCE_SPECIAL, 2

.set HOLD_EFFECT_NONE                    , 0
.set HOLD_EFFECT_RESTORE_HP              , 1
.set HOLD_EFFECT_CURE_PAR                , 2
.set HOLD_EFFECT_CURE_SLP                , 3
.set HOLD_EFFECT_CURE_PSN                , 4
.set HOLD_EFFECT_CURE_BRN                , 5
.set HOLD_EFFECT_CURE_FRZ                , 6
.set HOLD_EFFECT_RESTORE_PP              , 7
.set HOLD_EFFECT_CURE_CONFUSION          , 8
.set HOLD_EFFECT_CURE_STATUS             , 9
.set HOLD_EFFECT_CONFUSE_SPICY           , 10
.set HOLD_EFFECT_CONFUSE_DRY             , 11
.set HOLD_EFFECT_CONFUSE_SWEET           , 12
.set HOLD_EFFECT_CONFUSE_BITTER          , 13
.set HOLD_EFFECT_CONFUSE_SOUR            , 14
.set HOLD_EFFECT_ATTACK_UP               , 15
.set HOLD_EFFECT_DEFENSE_UP              , 16
.set HOLD_EFFECT_SPEED_UP                , 17
.set HOLD_EFFECT_SP_ATTACK_UP            , 18
.set HOLD_EFFECT_SP_DEFENSE_UP           , 19
.set HOLD_EFFECT_CRITICAL_UP             , 20
.set HOLD_EFFECT_RANDOM_STAT_UP          , 21
.set HOLD_EFFECT_EVASION_UP              , 22
.set HOLD_EFFECT_RESTORE_STATS           , 23
.set HOLD_EFFECT_MACHO_BRACE             , 24
.set HOLD_EFFECT_EXP_SHARE               , 25
.set HOLD_EFFECT_QUICK_CLAW              , 26
.set HOLD_EFFECT_FRIENDSHIP_UP           , 27
.set HOLD_EFFECT_CURE_ATTRACT            , 28
.set HOLD_EFFECT_CHOICE_BAND             , 29
.set HOLD_EFFECT_FLINCH                  , 30
.set HOLD_EFFECT_BUG_POWER               , 31
.set HOLD_EFFECT_DOUBLE_PRIZE            , 32
.set HOLD_EFFECT_REPEL                   , 33
.set HOLD_EFFECT_SOUL_DEW                , 34
.set HOLD_EFFECT_DEEP_SEA_TOOTH          , 35
.set HOLD_EFFECT_DEEP_SEA_SCALE          , 36
.set HOLD_EFFECT_CAN_ALWAYS_RUN          , 37
.set HOLD_EFFECT_PREVENT_EVOLVE          , 38
.set HOLD_EFFECT_FOCUS_BAND              , 39
.set HOLD_EFFECT_LUCKY_EGG               , 40
.set HOLD_EFFECT_SCOPE_LENS              , 41
.set HOLD_EFFECT_STEEL_POWER             , 42
.set HOLD_EFFECT_LEFTOVERS               , 43
.set HOLD_EFFECT_DRAGON_SCALE            , 44
.set HOLD_EFFECT_LIGHT_BALL              , 45
.set HOLD_EFFECT_GROUND_POWER            , 46
.set HOLD_EFFECT_ROCK_POWER              , 47
.set HOLD_EFFECT_GRASS_POWER             , 48
.set HOLD_EFFECT_DARK_POWER              , 49
.set HOLD_EFFECT_FIGHTING_POWER          , 50
.set HOLD_EFFECT_ELECTRIC_POWER          , 51
.set HOLD_EFFECT_WATER_POWER             , 52
.set HOLD_EFFECT_FLYING_POWER            , 53
.set HOLD_EFFECT_POISON_POWER            , 54
.set HOLD_EFFECT_ICE_POWER               , 55
.set HOLD_EFFECT_GHOST_POWER             , 56
.set HOLD_EFFECT_PSYCHIC_POWER           , 57
.set HOLD_EFFECT_FIRE_POWER              , 58
.set HOLD_EFFECT_DRAGON_POWER            , 59
.set HOLD_EFFECT_NORMAL_POWER            , 60
.set HOLD_EFFECT_UP_GRADE                , 61
.set HOLD_EFFECT_SHELL_BELL              , 62
.set HOLD_EFFECT_LUCKY_PUNCH             , 63
.set HOLD_EFFECT_METAL_POWDER            , 64
.set HOLD_EFFECT_THICK_CLUB              , 65
.set HOLD_EFFECT_STICK                   , 66

.set HOLD_EFFECT_PARAM_FULL, 0xFF

.set POCKET_NONE,       0
.set POCKET_ITEMS,      1
.set POCKET_POKE_BALLS, 2
.set POCKET_TM_HM,      3
.set POCKET_BERRIES,    4
.set POCKET_KEY_ITEMS,  5

.set ITEM_USE_MAIL,        0
.set ITEM_USE_PARTY_MENU,  1
.set ITEM_USE_FIELD,       2
.set ITEM_USE_PBLOCK_CASE, 3
.set ITEM_USE_BAG_MENU,    4

.set ITEM_B_USE_NONE,     0
.set ITEM_B_USE_MEDICINE, 1
.set ITEM_B_USE_OTHER,    2

.set ITEM_USE_FUNC_NONE, 0
.set ITEM_SECONDARY_ID_NONE, 0

.set OLD_ROD,   0
.set GOOD_ROD,  1
.set SUPER_ROD, 2
.set MACH_BIKE, 0
.set ACRO_BIKE, 1
.set EON_TICKET_SECONDARY_ID, 1

.set ITEM_RED_SCARF           , ITEM_00FE
.set ITEM_BLUE_SCARF          , ITEM_00FF
.set ITEM_PINK_SCARF          , ITEM_0100
.set ITEM_GREEN_SCARF         , ITEM_0101
.set ITEM_YELLOW_SCARF        , ITEM_0102
.set ITEM_MACH_BIKE           , ITEM_0103
.set ITEM_COIN_CASE           , ITEM_0104
.set ITEM_ITEMFINDER          , ITEM_0105
.set ITEM_OLD_ROD             , ITEM_0106
.set ITEM_GOOD_ROD            , ITEM_0107
.set ITEM_SUPER_ROD           , ITEM_0108
.set ITEM_SS_TICKET           , ITEM_0109
.set ITEM_CONTEST_PASS        , ITEM_010A
.set ITEM_WAILMER_PAIL        , ITEM_010C
.set ITEM_DEVON_GOODS         , ITEM_010D
.set ITEM_SOOT_SACK           , ITEM_010E
.set ITEM_BASEMENT_KEY        , ITEM_010F
.set ITEM_ACRO_BIKE           , ITEM_0110
.set ITEM_POKEBLOCK_CASE      , ITEM_0111
.set ITEM_LETTER              , ITEM_0112
.set ITEM_EON_TICKET          , ITEM_0113
.set ITEM_RED_ORB             , ITEM_0114
.set ITEM_BLUE_ORB            , ITEM_0115
.set ITEM_SCANNER             , ITEM_0116
.set ITEM_GO_GOGGLES          , ITEM_0117
.set ITEM_METEORITE           , ITEM_0118
.set ITEM_ROOM_1_KEY          , ITEM_0119
.set ITEM_ROOM_2_KEY          , ITEM_011A
.set ITEM_ROOM_4_KEY          , ITEM_011B
.set ITEM_ROOM_6_KEY          , ITEM_011C
.set ITEM_STORAGE_KEY         , ITEM_011D
.set ITEM_ROOT_FOSSIL         , ITEM_011E
.set ITEM_CLAW_FOSSIL         , ITEM_011F
.set ITEM_DEVON_SCOPE         , ITEM_0120
.set ITEM_OAKS_PARCEL         , ITEM_015D
.set ITEM_POKE_FLUTE          , ITEM_015E
.set ITEM_SECRET_KEY          , ITEM_015F
.set ITEM_BIKE_VOUCHER        , ITEM_0160
.set ITEM_GOLD_TEETH          , ITEM_0161
.set ITEM_OLD_AMBER           , ITEM_0162
.set ITEM_CARD_KEY            , ITEM_0163
.set ITEM_LIFT_KEY            , ITEM_0164
.set ITEM_HELIX_FOSSIL        , ITEM_0165
.set ITEM_DOME_FOSSIL         , ITEM_0166
.set ITEM_SILPH_SCOPE         , ITEM_0167
.set ITEM_BICYCLE             , ITEM_0168
.set ITEM_TOWN_MAP            , ITEM_0169
.set ITEM_VS_SEEKER           , ITEM_016A
.set ITEM_FAME_CHECKER        , ITEM_016B
.set ITEM_BERRY_POUCH         , ITEM_016D
.set ITEM_TEACHY_TV           , ITEM_016E
.set ITEM_TRI_PASS            , ITEM_016F
.set ITEM_RAINBOW_PASS        , ITEM_0170
.set ITEM_TEA                 , ITEM_0171
.set ITEM_MYSTIC_TICKET       , ITEM_0172
.set ITEM_AURORA_TICKET       , ITEM_0173
.set ITEM_POWDER_JAR          , ITEM_0174
.set ITEM_RUBY                , ITEM_0175
.set ITEM_SAPPHIRE            , ITEM_0176
.set ITEM_MAGMA_EMBLEM        , ITEM_0177
