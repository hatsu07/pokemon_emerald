@ Japanese Emerald trainer constants.
@ Values are compatible with the corresponding pret/pokeemerald constants.

.set TRAINER_PARTY_FLAGS_NONE, 0
.set F_TRAINER_PARTY_CUSTOM_MOVESET, 1 << 0
.set F_TRAINER_PARTY_HELD_ITEM,      1 << 1

.set TRAINER_CLASS_PKMN_TRAINER_1          , 0x00
.set TRAINER_CLASS_PKMN_TRAINER_2          , 0x01
.set TRAINER_CLASS_HIKER                   , 0x02
.set TRAINER_CLASS_TEAM_AQUA               , 0x03
.set TRAINER_CLASS_PKMN_BREEDER            , 0x04
.set TRAINER_CLASS_COOLTRAINER             , 0x05
.set TRAINER_CLASS_BIRD_KEEPER             , 0x06
.set TRAINER_CLASS_COLLECTOR               , 0x07
.set TRAINER_CLASS_SWIMMER_M               , 0x08
.set TRAINER_CLASS_TEAM_MAGMA              , 0x09
.set TRAINER_CLASS_EXPERT                  , 0x0A
.set TRAINER_CLASS_AQUA_ADMIN              , 0x0B
.set TRAINER_CLASS_BLACK_BELT              , 0x0C
.set TRAINER_CLASS_AQUA_LEADER             , 0x0D
.set TRAINER_CLASS_HEX_MANIAC              , 0x0E
.set TRAINER_CLASS_AROMA_LADY              , 0x0F
.set TRAINER_CLASS_RUIN_MANIAC             , 0x10
.set TRAINER_CLASS_INTERVIEWER             , 0x11
.set TRAINER_CLASS_TUBER_F                 , 0x12
.set TRAINER_CLASS_TUBER_M                 , 0x13
.set TRAINER_CLASS_LADY                    , 0x14
.set TRAINER_CLASS_BEAUTY                  , 0x15
.set TRAINER_CLASS_RICH_BOY                , 0x16
.set TRAINER_CLASS_POKEMANIAC              , 0x17
.set TRAINER_CLASS_GUITARIST               , 0x18
.set TRAINER_CLASS_KINDLER                 , 0x19
.set TRAINER_CLASS_CAMPER                  , 0x1A
.set TRAINER_CLASS_PICNICKER               , 0x1B
.set TRAINER_CLASS_BUG_MANIAC              , 0x1C
.set TRAINER_CLASS_PSYCHIC                 , 0x1D
.set TRAINER_CLASS_GENTLEMAN               , 0x1E
.set TRAINER_CLASS_ELITE_FOUR              , 0x1F
.set TRAINER_CLASS_LEADER                  , 0x20
.set TRAINER_CLASS_SCHOOL_KID              , 0x21
.set TRAINER_CLASS_SR_AND_JR               , 0x22
.set TRAINER_CLASS_WINSTRATE               , 0x23
.set TRAINER_CLASS_POKEFAN                 , 0x24
.set TRAINER_CLASS_YOUNGSTER               , 0x25
.set TRAINER_CLASS_CHAMPION                , 0x26
.set TRAINER_CLASS_FISHERMAN               , 0x27
.set TRAINER_CLASS_TRIATHLETE              , 0x28
.set TRAINER_CLASS_DRAGON_TAMER            , 0x29
.set TRAINER_CLASS_NINJA_BOY               , 0x2A
.set TRAINER_CLASS_BATTLE_GIRL             , 0x2B
.set TRAINER_CLASS_PARASOL_LADY            , 0x2C
.set TRAINER_CLASS_SWIMMER_F               , 0x2D
.set TRAINER_CLASS_TWINS                   , 0x2E
.set TRAINER_CLASS_SAILOR                  , 0x2F
.set TRAINER_CLASS_COOLTRAINER_2           , 0x30
.set TRAINER_CLASS_MAGMA_ADMIN             , 0x31
.set TRAINER_CLASS_RIVAL                   , 0x32
.set TRAINER_CLASS_BUG_CATCHER             , 0x33
.set TRAINER_CLASS_PKMN_RANGER             , 0x34
.set TRAINER_CLASS_MAGMA_LEADER            , 0x35
.set TRAINER_CLASS_LASS                    , 0x36
.set TRAINER_CLASS_YOUNG_COUPLE            , 0x37
.set TRAINER_CLASS_OLD_COUPLE              , 0x38
.set TRAINER_CLASS_SIS_AND_BRO             , 0x39
.set TRAINER_CLASS_SALON_MAIDEN            , 0x3A
.set TRAINER_CLASS_DOME_ACE                , 0x3B
.set TRAINER_CLASS_PALACE_MAVEN            , 0x3C
.set TRAINER_CLASS_ARENA_TYCOON            , 0x3D
.set TRAINER_CLASS_FACTORY_HEAD            , 0x3E
.set TRAINER_CLASS_PIKE_QUEEN              , 0x3F
.set TRAINER_CLASS_PYRAMID_KING            , 0x40
.set TRAINER_CLASS_RS_PROTAG               , 0x41

@ Encounter music in low 7 bits; bit 7 is trainer gender.
.set TRAINER_ENCOUNTER_MUSIC_MALE          , 0
.set TRAINER_ENCOUNTER_MUSIC_FEMALE        , 1
.set TRAINER_ENCOUNTER_MUSIC_GIRL          , 2
.set TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS    , 3
.set TRAINER_ENCOUNTER_MUSIC_INTENSE       , 4
.set TRAINER_ENCOUNTER_MUSIC_COOL          , 5
.set TRAINER_ENCOUNTER_MUSIC_AQUA          , 6
.set TRAINER_ENCOUNTER_MUSIC_MAGMA         , 7
.set TRAINER_ENCOUNTER_MUSIC_SWIMMER       , 8
.set TRAINER_ENCOUNTER_MUSIC_TWINS         , 9
.set TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR    , 10
.set TRAINER_ENCOUNTER_MUSIC_HIKER         , 11
.set TRAINER_ENCOUNTER_MUSIC_INTERVIEWER   , 12
.set TRAINER_ENCOUNTER_MUSIC_RICH          , 13
.set F_TRAINER_FEMALE, 1 << 7

@ Trainer front-picture IDs.
.set TRAINER_PIC_HIKER                         , 0
.set TRAINER_PIC_AQUA_GRUNT_M                  , 1
.set TRAINER_PIC_POKEMON_BREEDER_F             , 2
.set TRAINER_PIC_COOLTRAINER_M                 , 3
.set TRAINER_PIC_BIRD_KEEPER                   , 4
.set TRAINER_PIC_COLLECTOR                     , 5
.set TRAINER_PIC_AQUA_GRUNT_F                  , 6
.set TRAINER_PIC_SWIMMER_M                     , 7
.set TRAINER_PIC_MAGMA_GRUNT_M                 , 8
.set TRAINER_PIC_EXPERT_M                      , 9
.set TRAINER_PIC_AQUA_ADMIN_M                  , 10
.set TRAINER_PIC_BLACK_BELT                    , 11
.set TRAINER_PIC_AQUA_ADMIN_F                  , 12
.set TRAINER_PIC_AQUA_LEADER_ARCHIE            , 13
.set TRAINER_PIC_HEX_MANIAC                    , 14
.set TRAINER_PIC_AROMA_LADY                    , 15
.set TRAINER_PIC_RUIN_MANIAC                   , 16
.set TRAINER_PIC_INTERVIEWER                   , 17
.set TRAINER_PIC_TUBER_F                       , 18
.set TRAINER_PIC_TUBER_M                       , 19
.set TRAINER_PIC_COOLTRAINER_F                 , 20
.set TRAINER_PIC_LADY                          , 21
.set TRAINER_PIC_BEAUTY                        , 22
.set TRAINER_PIC_RICH_BOY                      , 23
.set TRAINER_PIC_EXPERT_F                      , 24
.set TRAINER_PIC_POKEMANIAC                    , 25
.set TRAINER_PIC_MAGMA_GRUNT_F                 , 26
.set TRAINER_PIC_GUITARIST                     , 27
.set TRAINER_PIC_KINDLER                       , 28
.set TRAINER_PIC_CAMPER                        , 29
.set TRAINER_PIC_PICNICKER                     , 30
.set TRAINER_PIC_BUG_MANIAC                    , 31
.set TRAINER_PIC_POKEMON_BREEDER_M             , 32
.set TRAINER_PIC_PSYCHIC_M                     , 33
.set TRAINER_PIC_PSYCHIC_F                     , 34
.set TRAINER_PIC_GENTLEMAN                     , 35
.set TRAINER_PIC_ELITE_FOUR_SIDNEY             , 36
.set TRAINER_PIC_ELITE_FOUR_PHOEBE             , 37
.set TRAINER_PIC_ELITE_FOUR_GLACIA             , 38
.set TRAINER_PIC_ELITE_FOUR_DRAKE              , 39
.set TRAINER_PIC_LEADER_ROXANNE                , 40
.set TRAINER_PIC_LEADER_BRAWLY                 , 41
.set TRAINER_PIC_LEADER_WATTSON                , 42
.set TRAINER_PIC_LEADER_FLANNERY               , 43
.set TRAINER_PIC_LEADER_NORMAN                 , 44
.set TRAINER_PIC_LEADER_WINONA                 , 45
.set TRAINER_PIC_LEADER_TATE_AND_LIZA          , 46
.set TRAINER_PIC_LEADER_JUAN                   , 47
.set TRAINER_PIC_SCHOOL_KID_M                  , 48
.set TRAINER_PIC_SCHOOL_KID_F                  , 49
.set TRAINER_PIC_SR_AND_JR                     , 50
.set TRAINER_PIC_POKEFAN_M                     , 51
.set TRAINER_PIC_POKEFAN_F                     , 52
.set TRAINER_PIC_YOUNGSTER                     , 53
.set TRAINER_PIC_CHAMPION_WALLACE              , 54
.set TRAINER_PIC_FISHERMAN                     , 55
.set TRAINER_PIC_CYCLING_TRIATHLETE_M          , 56
.set TRAINER_PIC_CYCLING_TRIATHLETE_F          , 57
.set TRAINER_PIC_RUNNING_TRIATHLETE_M          , 58
.set TRAINER_PIC_RUNNING_TRIATHLETE_F          , 59
.set TRAINER_PIC_SWIMMING_TRIATHLETE_M         , 60
.set TRAINER_PIC_SWIMMING_TRIATHLETE_F         , 61
.set TRAINER_PIC_DRAGON_TAMER                  , 62
.set TRAINER_PIC_NINJA_BOY                     , 63
.set TRAINER_PIC_BATTLE_GIRL                   , 64
.set TRAINER_PIC_PARASOL_LADY                  , 65
.set TRAINER_PIC_SWIMMER_F                     , 66
.set TRAINER_PIC_TWINS                         , 67
.set TRAINER_PIC_SAILOR                        , 68
.set TRAINER_PIC_MAGMA_ADMIN                   , 69
.set TRAINER_PIC_WALLY                         , 70
.set TRAINER_PIC_BRENDAN                       , 71
.set TRAINER_PIC_MAY                           , 72
.set TRAINER_PIC_BUG_CATCHER                   , 73
.set TRAINER_PIC_POKEMON_RANGER_M              , 74
.set TRAINER_PIC_POKEMON_RANGER_F              , 75
.set TRAINER_PIC_MAGMA_LEADER_MAXIE            , 76
.set TRAINER_PIC_LASS                          , 77
.set TRAINER_PIC_YOUNG_COUPLE                  , 78
.set TRAINER_PIC_OLD_COUPLE                    , 79
.set TRAINER_PIC_SIS_AND_BRO                   , 80
.set TRAINER_PIC_STEVEN                        , 81
.set TRAINER_PIC_SALON_MAIDEN_ANABEL           , 82
.set TRAINER_PIC_DOME_ACE_TUCKER               , 83
.set TRAINER_PIC_PALACE_MAVEN_SPENSER          , 84
.set TRAINER_PIC_ARENA_TYCOON_GRETA            , 85
.set TRAINER_PIC_FACTORY_HEAD_NOLAND           , 86
.set TRAINER_PIC_PIKE_QUEEN_LUCY               , 87
.set TRAINER_PIC_PYRAMID_KING_BRANDON          , 88
.set TRAINER_PIC_RED                           , 89
.set TRAINER_PIC_LEAF                          , 90
.set TRAINER_PIC_RS_BRENDAN                    , 91
.set TRAINER_PIC_RS_MAY                        , 92

@ Battle AI script flags used by this table.
.set AI_SCRIPT_NONE,             0
.set AI_SCRIPT_CHECK_BAD_MOVE,   1 << 0
.set AI_SCRIPT_TRY_TO_FAINT,     1 << 1
.set AI_SCRIPT_CHECK_VIABILITY,  1 << 2
.set AI_SCRIPT_SETUP_FIRST_TURN, 1 << 3
.set AI_SCRIPT_RISKY,            1 << 4
