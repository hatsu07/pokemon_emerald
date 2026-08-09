@ Pokédex conversion tables. 411 u16 entries each.

@ Semantic table helpers.  The checks make the species/order index part of the
@ source contract while emitting the original u16 values unchanged.
.macro pokedex_species_value table, species, value
	.if ((\species) - 1) != ((. - \table) / 2)
	.error "Pokedex species table is out of species-ID order"
	.endif
	.2byte \value
.endm

.macro pokedex_order_value table, index, value
	.if ((\index) - 1) != ((. - \table) / 2)
	.error "Pokedex order table is out of order"
	.endif
	.2byte \value
.endm

	.globl gUnknown_82EE2D4
sSpeciesToHoennPokedexNum: @ 0x082EE2D4
gUnknown_82EE2D4:
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BULBASAUR             , 0x00CB
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_IVYSAUR               , 0x00CC
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_VENUSAUR              , 0x00CD
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CHARMANDER            , 0x00CE
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CHARMELEON            , 0x00CF
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CHARIZARD             , 0x00D0
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SQUIRTLE              , 0x00D1
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WARTORTLE             , 0x00D2
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BLASTOISE             , 0x00D3
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CATERPIE              , 0x00D4
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_METAPOD               , 0x00D5
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BUTTERFREE            , 0x00D6
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WEEDLE                , 0x00D7
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_KAKUNA                , 0x00D8
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BEEDRILL              , 0x00D9
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PIDGEY                , 0x00DA
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PIDGEOTTO             , 0x00DB
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PIDGEOT               , 0x00DC
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_RATTATA               , 0x00DD
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_RATICATE              , 0x00DE
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SPEAROW               , 0x00DF
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_FEAROW                , 0x00E0
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_EKANS                 , 0x00E1
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ARBOK                 , 0x00E2
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PIKACHU               , 0x009C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_RAICHU                , 0x009D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SANDSHREW             , 0x0070
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SANDSLASH             , 0x0071
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_NIDORAN_F             , 0x00E3
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_NIDORINA              , 0x00E4
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_NIDOQUEEN             , 0x00E5
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_NIDORAN_M             , 0x00E6
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_NIDORINO              , 0x00E7
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_NIDOKING              , 0x00E8
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CLEFAIRY              , 0x00E9
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CLEFABLE              , 0x00EA
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_VULPIX                , 0x0099
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_NINETALES             , 0x009A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_JIGGLYPUFF            , 0x008A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WIGGLYTUFF            , 0x008B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ZUBAT                 , 0x003F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GOLBAT                , 0x0040
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ODDISH                , 0x0058
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GLOOM                 , 0x0059
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_VILEPLUME             , 0x005A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PARAS                 , 0x00EB
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PARASECT              , 0x00EC
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_VENONAT               , 0x00ED
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_VENOMOTH              , 0x00EE
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DIGLETT               , 0x00EF
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DUGTRIO               , 0x00F0
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MEOWTH                , 0x00F1
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PERSIAN               , 0x00F2
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PSYDUCK               , 0x009E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GOLDUCK               , 0x009F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MANKEY                , 0x00F3
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PRIMEAPE              , 0x00F4
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GROWLITHE             , 0x00F5
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ARCANINE              , 0x00F6
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_POLIWAG               , 0x00F7
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_POLIWHIRL             , 0x00F8
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_POLIWRATH             , 0x00F9
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ABRA                  , 0x0027
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_KADABRA               , 0x0028
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ALAKAZAM              , 0x0029
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MACHOP                , 0x0049
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MACHOKE               , 0x004A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MACHAMP               , 0x004B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BELLSPROUT            , 0x00FA
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WEEPINBELL            , 0x00FB
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_VICTREEBEL            , 0x00FC
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TENTACOOL             , 0x0042
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TENTACRUEL            , 0x0043
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GEODUDE               , 0x0039
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GRAVELER              , 0x003A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GOLEM                 , 0x003B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PONYTA                , 0x00FD
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_RAPIDASH              , 0x00FE
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SLOWPOKE              , 0x00FF
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SLOWBRO               , 0x0100
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MAGNEMITE             , 0x0052
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MAGNETON              , 0x0053
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_FARFETCHD             , 0x0101
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DODUO                 , 0x005C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DODRIO                , 0x005D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SEEL                  , 0x0102
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DEWGONG               , 0x0103
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GRIMER                , 0x006A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MUK                   , 0x006B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SHELLDER              , 0x0104
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CLOYSTER              , 0x0105
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GASTLY                , 0x0106
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_HAUNTER               , 0x0107
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GENGAR                , 0x0108
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ONIX                  , 0x0109
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DROWZEE               , 0x010A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_HYPNO                 , 0x010B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_KRABBY                , 0x010C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_KINGLER               , 0x010D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_VOLTORB               , 0x0054
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ELECTRODE             , 0x0055
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_EXEGGCUTE             , 0x010E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_EXEGGUTOR             , 0x010F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CUBONE                , 0x0110
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MAROWAK               , 0x0111
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_HITMONLEE             , 0x0112
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_HITMONCHAN            , 0x0113
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LICKITUNG             , 0x0114
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_KOFFING               , 0x006C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WEEZING               , 0x006D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_RHYHORN               , 0x00A9
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_RHYDON                , 0x00AA
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CHANSEY               , 0x0115
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TANGELA               , 0x0116
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_KANGASKHAN            , 0x0117
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_HORSEA                , 0x00B8
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SEADRA                , 0x00B9
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GOLDEEN               , 0x0032
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SEAKING               , 0x0033
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_STARYU                , 0x008F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_STARMIE               , 0x0090
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MR_MIME               , 0x0118
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SCYTHER               , 0x0119
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_JYNX                  , 0x011A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ELECTABUZZ            , 0x011B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MAGMAR                , 0x011C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PINSIR                , 0x00A7
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TAUROS                , 0x011D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MAGIKARP              , 0x0034
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GYARADOS              , 0x0035
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LAPRAS                , 0x011E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DITTO                 , 0x011F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_EEVEE                 , 0x0120
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_VAPOREON              , 0x0121
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_JOLTEON               , 0x0122
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_FLAREON               , 0x0123
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PORYGON               , 0x0124
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OMANYTE               , 0x0125
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OMASTAR               , 0x0126
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_KABUTO                , 0x0127
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_KABUTOPS              , 0x0128
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_AERODACTYL            , 0x0129
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SNORLAX               , 0x012A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ARTICUNO              , 0x012B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ZAPDOS                , 0x012C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MOLTRES               , 0x012D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DRATINI               , 0x012E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DRAGONAIR             , 0x012F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DRAGONITE             , 0x0130
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MEWTWO                , 0x0131
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MEW                   , 0x0132
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CHIKORITA             , 0x0133
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BAYLEEF               , 0x0134
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MEGANIUM              , 0x0135
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CYNDAQUIL             , 0x0136
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_QUILAVA               , 0x0137
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TYPHLOSION            , 0x0138
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TOTODILE              , 0x0139
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CROCONAW              , 0x013A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_FERALIGATR            , 0x013B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SENTRET               , 0x013C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_FURRET                , 0x013D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_HOOTHOOT              , 0x013E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_NOCTOWL               , 0x013F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LEDYBA                , 0x0140
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LEDIAN                , 0x0141
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SPINARAK              , 0x0142
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ARIADOS               , 0x0143
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CROBAT                , 0x0041
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CHINCHOU              , 0x00B5
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LANTURN               , 0x00B6
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PICHU                 , 0x009B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CLEFFA                , 0x0144
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_IGGLYBUFF             , 0x0089
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TOGEPI                , 0x0145
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TOGETIC               , 0x0146
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_NATU                  , 0x00A2
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_XATU                  , 0x00A3
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MAREEP                , 0x0147
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_FLAAFFY               , 0x0148
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_AMPHAROS              , 0x0149
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BELLOSSOM             , 0x005B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MARILL                , 0x0037
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_AZUMARILL             , 0x0038
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SUDOWOODO             , 0x014A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_POLITOED              , 0x014B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_HOPPIP                , 0x014C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SKIPLOOM              , 0x014D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_JUMPLUFF              , 0x014E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_AIPOM                 , 0x014F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SUNKERN               , 0x0150
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SUNFLORA              , 0x0151
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_YANMA                 , 0x0152
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WOOPER                , 0x0153
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_QUAGSIRE              , 0x0154
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ESPEON                , 0x0155
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_UMBREON               , 0x0156
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MURKROW               , 0x0157
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SLOWKING              , 0x0158
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MISDREAVUS            , 0x0159
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_UNOWN                 , 0x015A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WOBBUFFET             , 0x00A1
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GIRAFARIG             , 0x00A4
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PINECO                , 0x015B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_FORRETRESS            , 0x015C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DUNSPARCE             , 0x015D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GLIGAR                , 0x015E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_STEELIX               , 0x015F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SNUBBULL              , 0x0160
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GRANBULL              , 0x0161
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_QWILFISH              , 0x0162
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SCIZOR                , 0x0163
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SHUCKLE               , 0x0164
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_HERACROSS             , 0x00A8
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SNEASEL               , 0x0165
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TEDDIURSA             , 0x0166
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_URSARING              , 0x0167
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SLUGMA                , 0x0067
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MAGCARGO              , 0x0068
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SWINUB                , 0x0168
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PILOSWINE             , 0x0169
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CORSOLA               , 0x00B4
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_REMORAID              , 0x016A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OCTILLERY             , 0x016B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DELIBIRD              , 0x016C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MANTINE               , 0x016D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SKARMORY              , 0x0073
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_HOUNDOUR              , 0x016E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_HOUNDOOM              , 0x016F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_KINGDRA               , 0x00BA
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PHANPY                , 0x00A5
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DONPHAN               , 0x00A6
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PORYGON2              , 0x0170
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_STANTLER              , 0x0171
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SMEARGLE              , 0x0172
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TYROGUE               , 0x0173
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_HITMONTOP             , 0x0174
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SMOOCHUM              , 0x0175
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ELEKID                , 0x0176
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MAGBY                 , 0x0177
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MILTANK               , 0x0178
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BLISSEY               , 0x0179
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_RAIKOU                , 0x017A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ENTEI                 , 0x017B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SUICUNE               , 0x017C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LARVITAR              , 0x017D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PUPITAR               , 0x017E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TYRANITAR             , 0x017F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LUGIA                 , 0x0180
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_HO_OH                 , 0x0181
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CELEBI                , 0x0182
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_B           , 0x0183
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_C           , 0x0184
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_D           , 0x0185
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_E           , 0x0186
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_F           , 0x0187
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_G           , 0x0188
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_H           , 0x0189
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_I           , 0x018A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_J           , 0x018B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_K           , 0x018C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_L           , 0x018D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_M           , 0x018E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_N           , 0x018F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_O           , 0x0190
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_P           , 0x0191
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_Q           , 0x0192
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_R           , 0x0193
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_S           , 0x0194
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_T           , 0x0195
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_U           , 0x0196
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_V           , 0x0197
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_W           , 0x0198
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_X           , 0x0199
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_Y           , 0x019A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_OLD_UNOWN_Z           , 0x019B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TREECKO               , 0x0001
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GROVYLE               , 0x0002
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SCEPTILE              , 0x0003
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TORCHIC               , 0x0004
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_COMBUSKEN             , 0x0005
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BLAZIKEN              , 0x0006
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MUDKIP                , 0x0007
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MARSHTOMP             , 0x0008
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SWAMPERT              , 0x0009
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_POOCHYENA             , 0x000A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MIGHTYENA             , 0x000B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ZIGZAGOON             , 0x000C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LINOONE               , 0x000D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WURMPLE               , 0x000E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SILCOON               , 0x000F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BEAUTIFLY             , 0x0010
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CASCOON               , 0x0011
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DUSTOX                , 0x0012
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LOTAD                 , 0x0013
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LOMBRE                , 0x0014
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LUDICOLO              , 0x0015
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SEEDOT                , 0x0016
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_NUZLEAF               , 0x0017
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SHIFTRY               , 0x0018
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_NINCADA               , 0x002A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_NINJASK               , 0x002B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SHEDINJA              , 0x002C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TAILLOW               , 0x0019
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SWELLOW               , 0x001A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SHROOMISH             , 0x0022
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BRELOOM               , 0x0023
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SPINDA                , 0x0072
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WINGULL               , 0x001B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PELIPPER              , 0x001C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SURSKIT               , 0x0020
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MASQUERAIN            , 0x0021
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WAILMER               , 0x0063
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WAILORD               , 0x0064
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SKITTY                , 0x003D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DELCATTY              , 0x003E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_KECLEON               , 0x0091
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BALTOY                , 0x0083
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CLAYDOL               , 0x0084
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_NOSEPASS              , 0x003C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TORKOAL               , 0x0069
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SABLEYE               , 0x0044
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BARBOACH              , 0x007F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WHISCASH              , 0x0080
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LUVDISC               , 0x00B7
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CORPHISH              , 0x0081
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CRAWDAUNT             , 0x0082
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_FEEBAS                , 0x008C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MILOTIC               , 0x008D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CARVANHA              , 0x0061
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SHARPEDO              , 0x0062
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TRAPINCH              , 0x0074
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_VIBRAVA               , 0x0075
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_FLYGON                , 0x0076
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MAKUHITA              , 0x0030
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_HARIYAMA              , 0x0031
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ELECTRIKE             , 0x004E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MANECTRIC             , 0x004F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_NUMEL                 , 0x0065
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CAMERUPT              , 0x0066
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SPHEAL                , 0x00AD
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SEALEO                , 0x00AE
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WALREIN               , 0x00AF
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CACNEA                , 0x0077
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CACTURNE              , 0x0078
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SNORUNT               , 0x00AB
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GLALIE                , 0x00AC
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LUNATONE              , 0x007D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SOLROCK               , 0x007E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_AZURILL               , 0x0036
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SPOINK                , 0x006E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GRUMPIG               , 0x006F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_PLUSLE                , 0x0050
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MINUN                 , 0x0051
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MAWILE                , 0x0045
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MEDITITE              , 0x004C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_MEDICHAM              , 0x004D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SWABLU                , 0x0079
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ALTARIA               , 0x007A
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WYNAUT                , 0x00A0
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DUSKULL               , 0x0094
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DUSCLOPS              , 0x0095
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ROSELIA               , 0x005E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SLAKOTH               , 0x0024
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_VIGOROTH              , 0x0025
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SLAKING               , 0x0026
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GULPIN                , 0x005F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SWALOT                , 0x0060
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_TROPIUS               , 0x0096
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_WHISMUR               , 0x002D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LOUDRED               , 0x002E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_EXPLOUD               , 0x002F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CLAMPERL              , 0x00B0
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_HUNTAIL               , 0x00B1
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GOREBYSS              , 0x00B2
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ABSOL                 , 0x0098
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SHUPPET               , 0x0092
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BANETTE               , 0x0093
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SEVIPER               , 0x007C
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ZANGOOSE              , 0x007B
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_RELICANTH             , 0x00B3
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ARON                  , 0x0046
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LAIRON                , 0x0047
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_AGGRON                , 0x0048
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CASTFORM_NORMAL       , 0x008E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_VOLBEAT               , 0x0056
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ILLUMISE              , 0x0057
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LILEEP                , 0x0085
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CRADILY               , 0x0086
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ANORITH               , 0x0087
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_ARMALDO               , 0x0088
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_RALTS                 , 0x001D
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_KIRLIA                , 0x001E
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GARDEVOIR             , 0x001F
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BAGON                 , 0x00BB
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SHELGON               , 0x00BC
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_SALAMENCE             , 0x00BD
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_BELDUM                , 0x00BE
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_METANG                , 0x00BF
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_METAGROSS             , 0x00C0
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_REGIROCK              , 0x00C1
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_REGICE                , 0x00C2
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_REGISTEEL             , 0x00C3
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_KYOGRE                , 0x00C6
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_GROUDON               , 0x00C7
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_RAYQUAZA              , 0x00C8
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LATIAS                , 0x00C4
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_LATIOS                , 0x00C5
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_JIRACHI               , 0x00C9
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_DEOXYS_NORMAL         , 0x00CA
	pokedex_species_value sSpeciesToHoennPokedexNum, SPECIES_CHIMECHO              , 0x0097
	.if (. - sSpeciesToHoennPokedexNum) != (411 * 2)
	.error "sSpeciesToHoennPokedexNum size mismatch"
	.endif

	.globl gUnknown_82EE60A
sSpeciesToNationalPokedexNum: @ 0x082EE60A
gUnknown_82EE60A:
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BULBASAUR             , 0x0001
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_IVYSAUR               , 0x0002
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_VENUSAUR              , 0x0003
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CHARMANDER            , 0x0004
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CHARMELEON            , 0x0005
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CHARIZARD             , 0x0006
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SQUIRTLE              , 0x0007
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WARTORTLE             , 0x0008
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BLASTOISE             , 0x0009
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CATERPIE              , 0x000A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_METAPOD               , 0x000B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BUTTERFREE            , 0x000C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WEEDLE                , 0x000D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_KAKUNA                , 0x000E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BEEDRILL              , 0x000F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PIDGEY                , 0x0010
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PIDGEOTTO             , 0x0011
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PIDGEOT               , 0x0012
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_RATTATA               , 0x0013
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_RATICATE              , 0x0014
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SPEAROW               , 0x0015
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_FEAROW                , 0x0016
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_EKANS                 , 0x0017
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ARBOK                 , 0x0018
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PIKACHU               , 0x0019
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_RAICHU                , 0x001A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SANDSHREW             , 0x001B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SANDSLASH             , 0x001C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_NIDORAN_F             , 0x001D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_NIDORINA              , 0x001E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_NIDOQUEEN             , 0x001F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_NIDORAN_M             , 0x0020
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_NIDORINO              , 0x0021
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_NIDOKING              , 0x0022
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CLEFAIRY              , 0x0023
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CLEFABLE              , 0x0024
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_VULPIX                , 0x0025
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_NINETALES             , 0x0026
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_JIGGLYPUFF            , 0x0027
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WIGGLYTUFF            , 0x0028
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ZUBAT                 , 0x0029
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GOLBAT                , 0x002A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ODDISH                , 0x002B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GLOOM                 , 0x002C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_VILEPLUME             , 0x002D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PARAS                 , 0x002E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PARASECT              , 0x002F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_VENONAT               , 0x0030
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_VENOMOTH              , 0x0031
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DIGLETT               , 0x0032
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DUGTRIO               , 0x0033
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MEOWTH                , 0x0034
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PERSIAN               , 0x0035
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PSYDUCK               , 0x0036
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GOLDUCK               , 0x0037
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MANKEY                , 0x0038
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PRIMEAPE              , 0x0039
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GROWLITHE             , 0x003A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ARCANINE              , 0x003B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_POLIWAG               , 0x003C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_POLIWHIRL             , 0x003D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_POLIWRATH             , 0x003E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ABRA                  , 0x003F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_KADABRA               , 0x0040
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ALAKAZAM              , 0x0041
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MACHOP                , 0x0042
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MACHOKE               , 0x0043
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MACHAMP               , 0x0044
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BELLSPROUT            , 0x0045
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WEEPINBELL            , 0x0046
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_VICTREEBEL            , 0x0047
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TENTACOOL             , 0x0048
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TENTACRUEL            , 0x0049
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GEODUDE               , 0x004A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GRAVELER              , 0x004B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GOLEM                 , 0x004C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PONYTA                , 0x004D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_RAPIDASH              , 0x004E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SLOWPOKE              , 0x004F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SLOWBRO               , 0x0050
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MAGNEMITE             , 0x0051
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MAGNETON              , 0x0052
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_FARFETCHD             , 0x0053
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DODUO                 , 0x0054
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DODRIO                , 0x0055
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SEEL                  , 0x0056
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DEWGONG               , 0x0057
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GRIMER                , 0x0058
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MUK                   , 0x0059
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SHELLDER              , 0x005A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CLOYSTER              , 0x005B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GASTLY                , 0x005C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_HAUNTER               , 0x005D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GENGAR                , 0x005E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ONIX                  , 0x005F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DROWZEE               , 0x0060
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_HYPNO                 , 0x0061
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_KRABBY                , 0x0062
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_KINGLER               , 0x0063
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_VOLTORB               , 0x0064
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ELECTRODE             , 0x0065
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_EXEGGCUTE             , 0x0066
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_EXEGGUTOR             , 0x0067
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CUBONE                , 0x0068
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MAROWAK               , 0x0069
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_HITMONLEE             , 0x006A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_HITMONCHAN            , 0x006B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LICKITUNG             , 0x006C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_KOFFING               , 0x006D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WEEZING               , 0x006E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_RHYHORN               , 0x006F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_RHYDON                , 0x0070
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CHANSEY               , 0x0071
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TANGELA               , 0x0072
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_KANGASKHAN            , 0x0073
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_HORSEA                , 0x0074
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SEADRA                , 0x0075
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GOLDEEN               , 0x0076
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SEAKING               , 0x0077
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_STARYU                , 0x0078
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_STARMIE               , 0x0079
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MR_MIME               , 0x007A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SCYTHER               , 0x007B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_JYNX                  , 0x007C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ELECTABUZZ            , 0x007D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MAGMAR                , 0x007E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PINSIR                , 0x007F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TAUROS                , 0x0080
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MAGIKARP              , 0x0081
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GYARADOS              , 0x0082
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LAPRAS                , 0x0083
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DITTO                 , 0x0084
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_EEVEE                 , 0x0085
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_VAPOREON              , 0x0086
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_JOLTEON               , 0x0087
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_FLAREON               , 0x0088
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PORYGON               , 0x0089
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OMANYTE               , 0x008A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OMASTAR               , 0x008B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_KABUTO                , 0x008C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_KABUTOPS              , 0x008D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_AERODACTYL            , 0x008E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SNORLAX               , 0x008F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ARTICUNO              , 0x0090
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ZAPDOS                , 0x0091
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MOLTRES               , 0x0092
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DRATINI               , 0x0093
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DRAGONAIR             , 0x0094
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DRAGONITE             , 0x0095
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MEWTWO                , 0x0096
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MEW                   , 0x0097
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CHIKORITA             , 0x0098
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BAYLEEF               , 0x0099
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MEGANIUM              , 0x009A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CYNDAQUIL             , 0x009B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_QUILAVA               , 0x009C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TYPHLOSION            , 0x009D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TOTODILE              , 0x009E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CROCONAW              , 0x009F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_FERALIGATR            , 0x00A0
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SENTRET               , 0x00A1
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_FURRET                , 0x00A2
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_HOOTHOOT              , 0x00A3
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_NOCTOWL               , 0x00A4
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LEDYBA                , 0x00A5
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LEDIAN                , 0x00A6
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SPINARAK              , 0x00A7
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ARIADOS               , 0x00A8
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CROBAT                , 0x00A9
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CHINCHOU              , 0x00AA
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LANTURN               , 0x00AB
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PICHU                 , 0x00AC
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CLEFFA                , 0x00AD
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_IGGLYBUFF             , 0x00AE
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TOGEPI                , 0x00AF
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TOGETIC               , 0x00B0
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_NATU                  , 0x00B1
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_XATU                  , 0x00B2
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MAREEP                , 0x00B3
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_FLAAFFY               , 0x00B4
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_AMPHAROS              , 0x00B5
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BELLOSSOM             , 0x00B6
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MARILL                , 0x00B7
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_AZUMARILL             , 0x00B8
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SUDOWOODO             , 0x00B9
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_POLITOED              , 0x00BA
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_HOPPIP                , 0x00BB
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SKIPLOOM              , 0x00BC
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_JUMPLUFF              , 0x00BD
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_AIPOM                 , 0x00BE
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SUNKERN               , 0x00BF
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SUNFLORA              , 0x00C0
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_YANMA                 , 0x00C1
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WOOPER                , 0x00C2
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_QUAGSIRE              , 0x00C3
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ESPEON                , 0x00C4
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_UMBREON               , 0x00C5
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MURKROW               , 0x00C6
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SLOWKING              , 0x00C7
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MISDREAVUS            , 0x00C8
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_UNOWN                 , 0x00C9
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WOBBUFFET             , 0x00CA
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GIRAFARIG             , 0x00CB
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PINECO                , 0x00CC
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_FORRETRESS            , 0x00CD
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DUNSPARCE             , 0x00CE
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GLIGAR                , 0x00CF
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_STEELIX               , 0x00D0
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SNUBBULL              , 0x00D1
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GRANBULL              , 0x00D2
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_QWILFISH              , 0x00D3
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SCIZOR                , 0x00D4
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SHUCKLE               , 0x00D5
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_HERACROSS             , 0x00D6
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SNEASEL               , 0x00D7
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TEDDIURSA             , 0x00D8
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_URSARING              , 0x00D9
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SLUGMA                , 0x00DA
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MAGCARGO              , 0x00DB
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SWINUB                , 0x00DC
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PILOSWINE             , 0x00DD
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CORSOLA               , 0x00DE
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_REMORAID              , 0x00DF
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OCTILLERY             , 0x00E0
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DELIBIRD              , 0x00E1
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MANTINE               , 0x00E2
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SKARMORY              , 0x00E3
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_HOUNDOUR              , 0x00E4
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_HOUNDOOM              , 0x00E5
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_KINGDRA               , 0x00E6
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PHANPY                , 0x00E7
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DONPHAN               , 0x00E8
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PORYGON2              , 0x00E9
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_STANTLER              , 0x00EA
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SMEARGLE              , 0x00EB
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TYROGUE               , 0x00EC
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_HITMONTOP             , 0x00ED
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SMOOCHUM              , 0x00EE
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ELEKID                , 0x00EF
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MAGBY                 , 0x00F0
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MILTANK               , 0x00F1
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BLISSEY               , 0x00F2
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_RAIKOU                , 0x00F3
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ENTEI                 , 0x00F4
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SUICUNE               , 0x00F5
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LARVITAR              , 0x00F6
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PUPITAR               , 0x00F7
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TYRANITAR             , 0x00F8
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LUGIA                 , 0x00F9
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_HO_OH                 , 0x00FA
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CELEBI                , 0x00FB
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_B           , 0x0183
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_C           , 0x0184
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_D           , 0x0185
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_E           , 0x0186
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_F           , 0x0187
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_G           , 0x0188
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_H           , 0x0189
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_I           , 0x018A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_J           , 0x018B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_K           , 0x018C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_L           , 0x018D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_M           , 0x018E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_N           , 0x018F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_O           , 0x0190
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_P           , 0x0191
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_Q           , 0x0192
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_R           , 0x0193
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_S           , 0x0194
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_T           , 0x0195
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_U           , 0x0196
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_V           , 0x0197
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_W           , 0x0198
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_X           , 0x0199
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_Y           , 0x019A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_OLD_UNOWN_Z           , 0x019B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TREECKO               , 0x00FC
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GROVYLE               , 0x00FD
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SCEPTILE              , 0x00FE
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TORCHIC               , 0x00FF
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_COMBUSKEN             , 0x0100
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BLAZIKEN              , 0x0101
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MUDKIP                , 0x0102
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MARSHTOMP             , 0x0103
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SWAMPERT              , 0x0104
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_POOCHYENA             , 0x0105
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MIGHTYENA             , 0x0106
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ZIGZAGOON             , 0x0107
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LINOONE               , 0x0108
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WURMPLE               , 0x0109
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SILCOON               , 0x010A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BEAUTIFLY             , 0x010B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CASCOON               , 0x010C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DUSTOX                , 0x010D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LOTAD                 , 0x010E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LOMBRE                , 0x010F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LUDICOLO              , 0x0110
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SEEDOT                , 0x0111
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_NUZLEAF               , 0x0112
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SHIFTRY               , 0x0113
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_NINCADA               , 0x0122
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_NINJASK               , 0x0123
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SHEDINJA              , 0x0124
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TAILLOW               , 0x0114
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SWELLOW               , 0x0115
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SHROOMISH             , 0x011D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BRELOOM               , 0x011E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SPINDA                , 0x0147
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WINGULL               , 0x0116
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PELIPPER              , 0x0117
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SURSKIT               , 0x011B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MASQUERAIN            , 0x011C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WAILMER               , 0x0140
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WAILORD               , 0x0141
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SKITTY                , 0x012C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DELCATTY              , 0x012D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_KECLEON               , 0x0160
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BALTOY                , 0x0157
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CLAYDOL               , 0x0158
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_NOSEPASS              , 0x012B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TORKOAL               , 0x0144
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SABLEYE               , 0x012E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BARBOACH              , 0x0153
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WHISCASH              , 0x0154
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LUVDISC               , 0x0172
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CORPHISH              , 0x0155
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CRAWDAUNT             , 0x0156
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_FEEBAS                , 0x015D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MILOTIC               , 0x015E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CARVANHA              , 0x013E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SHARPEDO              , 0x013F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TRAPINCH              , 0x0148
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_VIBRAVA               , 0x0149
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_FLYGON                , 0x014A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MAKUHITA              , 0x0128
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_HARIYAMA              , 0x0129
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ELECTRIKE             , 0x0135
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MANECTRIC             , 0x0136
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_NUMEL                 , 0x0142
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CAMERUPT              , 0x0143
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SPHEAL                , 0x016B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SEALEO                , 0x016C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WALREIN               , 0x016D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CACNEA                , 0x014B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CACTURNE              , 0x014C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SNORUNT               , 0x0169
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GLALIE                , 0x016A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LUNATONE              , 0x0151
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SOLROCK               , 0x0152
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_AZURILL               , 0x012A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SPOINK                , 0x0145
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GRUMPIG               , 0x0146
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_PLUSLE                , 0x0137
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MINUN                 , 0x0138
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MAWILE                , 0x012F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MEDITITE              , 0x0133
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_MEDICHAM              , 0x0134
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SWABLU                , 0x014D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ALTARIA               , 0x014E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WYNAUT                , 0x0168
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DUSKULL               , 0x0163
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DUSCLOPS              , 0x0164
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ROSELIA               , 0x013B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SLAKOTH               , 0x011F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_VIGOROTH              , 0x0120
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SLAKING               , 0x0121
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GULPIN                , 0x013C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SWALOT                , 0x013D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_TROPIUS               , 0x0165
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_WHISMUR               , 0x0125
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LOUDRED               , 0x0126
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_EXPLOUD               , 0x0127
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CLAMPERL              , 0x016E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_HUNTAIL               , 0x016F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GOREBYSS              , 0x0170
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ABSOL                 , 0x0167
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SHUPPET               , 0x0161
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BANETTE               , 0x0162
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SEVIPER               , 0x0150
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ZANGOOSE              , 0x014F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_RELICANTH             , 0x0171
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ARON                  , 0x0130
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LAIRON                , 0x0131
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_AGGRON                , 0x0132
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CASTFORM_NORMAL       , 0x015F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_VOLBEAT               , 0x0139
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ILLUMISE              , 0x013A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LILEEP                , 0x0159
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CRADILY               , 0x015A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ANORITH               , 0x015B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_ARMALDO               , 0x015C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_RALTS                 , 0x0118
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_KIRLIA                , 0x0119
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GARDEVOIR             , 0x011A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BAGON                 , 0x0173
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SHELGON               , 0x0174
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_SALAMENCE             , 0x0175
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_BELDUM                , 0x0176
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_METANG                , 0x0177
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_METAGROSS             , 0x0178
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_REGIROCK              , 0x0179
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_REGICE                , 0x017A
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_REGISTEEL             , 0x017B
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_KYOGRE                , 0x017E
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_GROUDON               , 0x017F
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_RAYQUAZA              , 0x0180
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LATIAS                , 0x017C
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_LATIOS                , 0x017D
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_JIRACHI               , 0x0181
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_DEOXYS_NORMAL         , 0x0182
	pokedex_species_value sSpeciesToNationalPokedexNum, SPECIES_CHIMECHO              , 0x0166
	.if (. - sSpeciesToNationalPokedexNum) != (411 * 2)
	.error "sSpeciesToNationalPokedexNum size mismatch"
	.endif

	.globl gUnknown_82EE940
sHoennToNationalOrder: @ 0x082EE940
gUnknown_82EE940:
	pokedex_order_value sHoennToNationalOrder,   1, 0x00FC
	pokedex_order_value sHoennToNationalOrder,   2, 0x00FD
	pokedex_order_value sHoennToNationalOrder,   3, 0x00FE
	pokedex_order_value sHoennToNationalOrder,   4, 0x00FF
	pokedex_order_value sHoennToNationalOrder,   5, 0x0100
	pokedex_order_value sHoennToNationalOrder,   6, 0x0101
	pokedex_order_value sHoennToNationalOrder,   7, 0x0102
	pokedex_order_value sHoennToNationalOrder,   8, 0x0103
	pokedex_order_value sHoennToNationalOrder,   9, 0x0104
	pokedex_order_value sHoennToNationalOrder,  10, 0x0105
	pokedex_order_value sHoennToNationalOrder,  11, 0x0106
	pokedex_order_value sHoennToNationalOrder,  12, 0x0107
	pokedex_order_value sHoennToNationalOrder,  13, 0x0108
	pokedex_order_value sHoennToNationalOrder,  14, 0x0109
	pokedex_order_value sHoennToNationalOrder,  15, 0x010A
	pokedex_order_value sHoennToNationalOrder,  16, 0x010B
	pokedex_order_value sHoennToNationalOrder,  17, 0x010C
	pokedex_order_value sHoennToNationalOrder,  18, 0x010D
	pokedex_order_value sHoennToNationalOrder,  19, 0x010E
	pokedex_order_value sHoennToNationalOrder,  20, 0x010F
	pokedex_order_value sHoennToNationalOrder,  21, 0x0110
	pokedex_order_value sHoennToNationalOrder,  22, 0x0111
	pokedex_order_value sHoennToNationalOrder,  23, 0x0112
	pokedex_order_value sHoennToNationalOrder,  24, 0x0113
	pokedex_order_value sHoennToNationalOrder,  25, 0x0114
	pokedex_order_value sHoennToNationalOrder,  26, 0x0115
	pokedex_order_value sHoennToNationalOrder,  27, 0x0116
	pokedex_order_value sHoennToNationalOrder,  28, 0x0117
	pokedex_order_value sHoennToNationalOrder,  29, 0x0118
	pokedex_order_value sHoennToNationalOrder,  30, 0x0119
	pokedex_order_value sHoennToNationalOrder,  31, 0x011A
	pokedex_order_value sHoennToNationalOrder,  32, 0x011B
	pokedex_order_value sHoennToNationalOrder,  33, 0x011C
	pokedex_order_value sHoennToNationalOrder,  34, 0x011D
	pokedex_order_value sHoennToNationalOrder,  35, 0x011E
	pokedex_order_value sHoennToNationalOrder,  36, 0x011F
	pokedex_order_value sHoennToNationalOrder,  37, 0x0120
	pokedex_order_value sHoennToNationalOrder,  38, 0x0121
	pokedex_order_value sHoennToNationalOrder,  39, 0x003F
	pokedex_order_value sHoennToNationalOrder,  40, 0x0040
	pokedex_order_value sHoennToNationalOrder,  41, 0x0041
	pokedex_order_value sHoennToNationalOrder,  42, 0x0122
	pokedex_order_value sHoennToNationalOrder,  43, 0x0123
	pokedex_order_value sHoennToNationalOrder,  44, 0x0124
	pokedex_order_value sHoennToNationalOrder,  45, 0x0125
	pokedex_order_value sHoennToNationalOrder,  46, 0x0126
	pokedex_order_value sHoennToNationalOrder,  47, 0x0127
	pokedex_order_value sHoennToNationalOrder,  48, 0x0128
	pokedex_order_value sHoennToNationalOrder,  49, 0x0129
	pokedex_order_value sHoennToNationalOrder,  50, 0x0076
	pokedex_order_value sHoennToNationalOrder,  51, 0x0077
	pokedex_order_value sHoennToNationalOrder,  52, 0x0081
	pokedex_order_value sHoennToNationalOrder,  53, 0x0082
	pokedex_order_value sHoennToNationalOrder,  54, 0x012A
	pokedex_order_value sHoennToNationalOrder,  55, 0x00B7
	pokedex_order_value sHoennToNationalOrder,  56, 0x00B8
	pokedex_order_value sHoennToNationalOrder,  57, 0x004A
	pokedex_order_value sHoennToNationalOrder,  58, 0x004B
	pokedex_order_value sHoennToNationalOrder,  59, 0x004C
	pokedex_order_value sHoennToNationalOrder,  60, 0x012B
	pokedex_order_value sHoennToNationalOrder,  61, 0x012C
	pokedex_order_value sHoennToNationalOrder,  62, 0x012D
	pokedex_order_value sHoennToNationalOrder,  63, 0x0029
	pokedex_order_value sHoennToNationalOrder,  64, 0x002A
	pokedex_order_value sHoennToNationalOrder,  65, 0x00A9
	pokedex_order_value sHoennToNationalOrder,  66, 0x0048
	pokedex_order_value sHoennToNationalOrder,  67, 0x0049
	pokedex_order_value sHoennToNationalOrder,  68, 0x012E
	pokedex_order_value sHoennToNationalOrder,  69, 0x012F
	pokedex_order_value sHoennToNationalOrder,  70, 0x0130
	pokedex_order_value sHoennToNationalOrder,  71, 0x0131
	pokedex_order_value sHoennToNationalOrder,  72, 0x0132
	pokedex_order_value sHoennToNationalOrder,  73, 0x0042
	pokedex_order_value sHoennToNationalOrder,  74, 0x0043
	pokedex_order_value sHoennToNationalOrder,  75, 0x0044
	pokedex_order_value sHoennToNationalOrder,  76, 0x0133
	pokedex_order_value sHoennToNationalOrder,  77, 0x0134
	pokedex_order_value sHoennToNationalOrder,  78, 0x0135
	pokedex_order_value sHoennToNationalOrder,  79, 0x0136
	pokedex_order_value sHoennToNationalOrder,  80, 0x0137
	pokedex_order_value sHoennToNationalOrder,  81, 0x0138
	pokedex_order_value sHoennToNationalOrder,  82, 0x0051
	pokedex_order_value sHoennToNationalOrder,  83, 0x0052
	pokedex_order_value sHoennToNationalOrder,  84, 0x0064
	pokedex_order_value sHoennToNationalOrder,  85, 0x0065
	pokedex_order_value sHoennToNationalOrder,  86, 0x0139
	pokedex_order_value sHoennToNationalOrder,  87, 0x013A
	pokedex_order_value sHoennToNationalOrder,  88, 0x002B
	pokedex_order_value sHoennToNationalOrder,  89, 0x002C
	pokedex_order_value sHoennToNationalOrder,  90, 0x002D
	pokedex_order_value sHoennToNationalOrder,  91, 0x00B6
	pokedex_order_value sHoennToNationalOrder,  92, 0x0054
	pokedex_order_value sHoennToNationalOrder,  93, 0x0055
	pokedex_order_value sHoennToNationalOrder,  94, 0x013B
	pokedex_order_value sHoennToNationalOrder,  95, 0x013C
	pokedex_order_value sHoennToNationalOrder,  96, 0x013D
	pokedex_order_value sHoennToNationalOrder,  97, 0x013E
	pokedex_order_value sHoennToNationalOrder,  98, 0x013F
	pokedex_order_value sHoennToNationalOrder,  99, 0x0140
	pokedex_order_value sHoennToNationalOrder, 100, 0x0141
	pokedex_order_value sHoennToNationalOrder, 101, 0x0142
	pokedex_order_value sHoennToNationalOrder, 102, 0x0143
	pokedex_order_value sHoennToNationalOrder, 103, 0x00DA
	pokedex_order_value sHoennToNationalOrder, 104, 0x00DB
	pokedex_order_value sHoennToNationalOrder, 105, 0x0144
	pokedex_order_value sHoennToNationalOrder, 106, 0x0058
	pokedex_order_value sHoennToNationalOrder, 107, 0x0059
	pokedex_order_value sHoennToNationalOrder, 108, 0x006D
	pokedex_order_value sHoennToNationalOrder, 109, 0x006E
	pokedex_order_value sHoennToNationalOrder, 110, 0x0145
	pokedex_order_value sHoennToNationalOrder, 111, 0x0146
	pokedex_order_value sHoennToNationalOrder, 112, 0x001B
	pokedex_order_value sHoennToNationalOrder, 113, 0x001C
	pokedex_order_value sHoennToNationalOrder, 114, 0x0147
	pokedex_order_value sHoennToNationalOrder, 115, 0x00E3
	pokedex_order_value sHoennToNationalOrder, 116, 0x0148
	pokedex_order_value sHoennToNationalOrder, 117, 0x0149
	pokedex_order_value sHoennToNationalOrder, 118, 0x014A
	pokedex_order_value sHoennToNationalOrder, 119, 0x014B
	pokedex_order_value sHoennToNationalOrder, 120, 0x014C
	pokedex_order_value sHoennToNationalOrder, 121, 0x014D
	pokedex_order_value sHoennToNationalOrder, 122, 0x014E
	pokedex_order_value sHoennToNationalOrder, 123, 0x014F
	pokedex_order_value sHoennToNationalOrder, 124, 0x0150
	pokedex_order_value sHoennToNationalOrder, 125, 0x0151
	pokedex_order_value sHoennToNationalOrder, 126, 0x0152
	pokedex_order_value sHoennToNationalOrder, 127, 0x0153
	pokedex_order_value sHoennToNationalOrder, 128, 0x0154
	pokedex_order_value sHoennToNationalOrder, 129, 0x0155
	pokedex_order_value sHoennToNationalOrder, 130, 0x0156
	pokedex_order_value sHoennToNationalOrder, 131, 0x0157
	pokedex_order_value sHoennToNationalOrder, 132, 0x0158
	pokedex_order_value sHoennToNationalOrder, 133, 0x0159
	pokedex_order_value sHoennToNationalOrder, 134, 0x015A
	pokedex_order_value sHoennToNationalOrder, 135, 0x015B
	pokedex_order_value sHoennToNationalOrder, 136, 0x015C
	pokedex_order_value sHoennToNationalOrder, 137, 0x00AE
	pokedex_order_value sHoennToNationalOrder, 138, 0x0027
	pokedex_order_value sHoennToNationalOrder, 139, 0x0028
	pokedex_order_value sHoennToNationalOrder, 140, 0x015D
	pokedex_order_value sHoennToNationalOrder, 141, 0x015E
	pokedex_order_value sHoennToNationalOrder, 142, 0x015F
	pokedex_order_value sHoennToNationalOrder, 143, 0x0078
	pokedex_order_value sHoennToNationalOrder, 144, 0x0079
	pokedex_order_value sHoennToNationalOrder, 145, 0x0160
	pokedex_order_value sHoennToNationalOrder, 146, 0x0161
	pokedex_order_value sHoennToNationalOrder, 147, 0x0162
	pokedex_order_value sHoennToNationalOrder, 148, 0x0163
	pokedex_order_value sHoennToNationalOrder, 149, 0x0164
	pokedex_order_value sHoennToNationalOrder, 150, 0x0165
	pokedex_order_value sHoennToNationalOrder, 151, 0x0166
	pokedex_order_value sHoennToNationalOrder, 152, 0x0167
	pokedex_order_value sHoennToNationalOrder, 153, 0x0025
	pokedex_order_value sHoennToNationalOrder, 154, 0x0026
	pokedex_order_value sHoennToNationalOrder, 155, 0x00AC
	pokedex_order_value sHoennToNationalOrder, 156, 0x0019
	pokedex_order_value sHoennToNationalOrder, 157, 0x001A
	pokedex_order_value sHoennToNationalOrder, 158, 0x0036
	pokedex_order_value sHoennToNationalOrder, 159, 0x0037
	pokedex_order_value sHoennToNationalOrder, 160, 0x0168
	pokedex_order_value sHoennToNationalOrder, 161, 0x00CA
	pokedex_order_value sHoennToNationalOrder, 162, 0x00B1
	pokedex_order_value sHoennToNationalOrder, 163, 0x00B2
	pokedex_order_value sHoennToNationalOrder, 164, 0x00CB
	pokedex_order_value sHoennToNationalOrder, 165, 0x00E7
	pokedex_order_value sHoennToNationalOrder, 166, 0x00E8
	pokedex_order_value sHoennToNationalOrder, 167, 0x007F
	pokedex_order_value sHoennToNationalOrder, 168, 0x00D6
	pokedex_order_value sHoennToNationalOrder, 169, 0x006F
	pokedex_order_value sHoennToNationalOrder, 170, 0x0070
	pokedex_order_value sHoennToNationalOrder, 171, 0x0169
	pokedex_order_value sHoennToNationalOrder, 172, 0x016A
	pokedex_order_value sHoennToNationalOrder, 173, 0x016B
	pokedex_order_value sHoennToNationalOrder, 174, 0x016C
	pokedex_order_value sHoennToNationalOrder, 175, 0x016D
	pokedex_order_value sHoennToNationalOrder, 176, 0x016E
	pokedex_order_value sHoennToNationalOrder, 177, 0x016F
	pokedex_order_value sHoennToNationalOrder, 178, 0x0170
	pokedex_order_value sHoennToNationalOrder, 179, 0x0171
	pokedex_order_value sHoennToNationalOrder, 180, 0x00DE
	pokedex_order_value sHoennToNationalOrder, 181, 0x00AA
	pokedex_order_value sHoennToNationalOrder, 182, 0x00AB
	pokedex_order_value sHoennToNationalOrder, 183, 0x0172
	pokedex_order_value sHoennToNationalOrder, 184, 0x0074
	pokedex_order_value sHoennToNationalOrder, 185, 0x0075
	pokedex_order_value sHoennToNationalOrder, 186, 0x00E6
	pokedex_order_value sHoennToNationalOrder, 187, 0x0173
	pokedex_order_value sHoennToNationalOrder, 188, 0x0174
	pokedex_order_value sHoennToNationalOrder, 189, 0x0175
	pokedex_order_value sHoennToNationalOrder, 190, 0x0176
	pokedex_order_value sHoennToNationalOrder, 191, 0x0177
	pokedex_order_value sHoennToNationalOrder, 192, 0x0178
	pokedex_order_value sHoennToNationalOrder, 193, 0x0179
	pokedex_order_value sHoennToNationalOrder, 194, 0x017A
	pokedex_order_value sHoennToNationalOrder, 195, 0x017B
	pokedex_order_value sHoennToNationalOrder, 196, 0x017C
	pokedex_order_value sHoennToNationalOrder, 197, 0x017D
	pokedex_order_value sHoennToNationalOrder, 198, 0x017E
	pokedex_order_value sHoennToNationalOrder, 199, 0x017F
	pokedex_order_value sHoennToNationalOrder, 200, 0x0180
	pokedex_order_value sHoennToNationalOrder, 201, 0x0181
	pokedex_order_value sHoennToNationalOrder, 202, 0x0182
	pokedex_order_value sHoennToNationalOrder, 203, 0x0001
	pokedex_order_value sHoennToNationalOrder, 204, 0x0002
	pokedex_order_value sHoennToNationalOrder, 205, 0x0003
	pokedex_order_value sHoennToNationalOrder, 206, 0x0004
	pokedex_order_value sHoennToNationalOrder, 207, 0x0005
	pokedex_order_value sHoennToNationalOrder, 208, 0x0006
	pokedex_order_value sHoennToNationalOrder, 209, 0x0007
	pokedex_order_value sHoennToNationalOrder, 210, 0x0008
	pokedex_order_value sHoennToNationalOrder, 211, 0x0009
	pokedex_order_value sHoennToNationalOrder, 212, 0x000A
	pokedex_order_value sHoennToNationalOrder, 213, 0x000B
	pokedex_order_value sHoennToNationalOrder, 214, 0x000C
	pokedex_order_value sHoennToNationalOrder, 215, 0x000D
	pokedex_order_value sHoennToNationalOrder, 216, 0x000E
	pokedex_order_value sHoennToNationalOrder, 217, 0x000F
	pokedex_order_value sHoennToNationalOrder, 218, 0x0010
	pokedex_order_value sHoennToNationalOrder, 219, 0x0011
	pokedex_order_value sHoennToNationalOrder, 220, 0x0012
	pokedex_order_value sHoennToNationalOrder, 221, 0x0013
	pokedex_order_value sHoennToNationalOrder, 222, 0x0014
	pokedex_order_value sHoennToNationalOrder, 223, 0x0015
	pokedex_order_value sHoennToNationalOrder, 224, 0x0016
	pokedex_order_value sHoennToNationalOrder, 225, 0x0017
	pokedex_order_value sHoennToNationalOrder, 226, 0x0018
	pokedex_order_value sHoennToNationalOrder, 227, 0x001D
	pokedex_order_value sHoennToNationalOrder, 228, 0x001E
	pokedex_order_value sHoennToNationalOrder, 229, 0x001F
	pokedex_order_value sHoennToNationalOrder, 230, 0x0020
	pokedex_order_value sHoennToNationalOrder, 231, 0x0021
	pokedex_order_value sHoennToNationalOrder, 232, 0x0022
	pokedex_order_value sHoennToNationalOrder, 233, 0x0023
	pokedex_order_value sHoennToNationalOrder, 234, 0x0024
	pokedex_order_value sHoennToNationalOrder, 235, 0x002E
	pokedex_order_value sHoennToNationalOrder, 236, 0x002F
	pokedex_order_value sHoennToNationalOrder, 237, 0x0030
	pokedex_order_value sHoennToNationalOrder, 238, 0x0031
	pokedex_order_value sHoennToNationalOrder, 239, 0x0032
	pokedex_order_value sHoennToNationalOrder, 240, 0x0033
	pokedex_order_value sHoennToNationalOrder, 241, 0x0034
	pokedex_order_value sHoennToNationalOrder, 242, 0x0035
	pokedex_order_value sHoennToNationalOrder, 243, 0x0038
	pokedex_order_value sHoennToNationalOrder, 244, 0x0039
	pokedex_order_value sHoennToNationalOrder, 245, 0x003A
	pokedex_order_value sHoennToNationalOrder, 246, 0x003B
	pokedex_order_value sHoennToNationalOrder, 247, 0x003C
	pokedex_order_value sHoennToNationalOrder, 248, 0x003D
	pokedex_order_value sHoennToNationalOrder, 249, 0x003E
	pokedex_order_value sHoennToNationalOrder, 250, 0x0045
	pokedex_order_value sHoennToNationalOrder, 251, 0x0046
	pokedex_order_value sHoennToNationalOrder, 252, 0x0047
	pokedex_order_value sHoennToNationalOrder, 253, 0x004D
	pokedex_order_value sHoennToNationalOrder, 254, 0x004E
	pokedex_order_value sHoennToNationalOrder, 255, 0x004F
	pokedex_order_value sHoennToNationalOrder, 256, 0x0050
	pokedex_order_value sHoennToNationalOrder, 257, 0x0053
	pokedex_order_value sHoennToNationalOrder, 258, 0x0056
	pokedex_order_value sHoennToNationalOrder, 259, 0x0057
	pokedex_order_value sHoennToNationalOrder, 260, 0x005A
	pokedex_order_value sHoennToNationalOrder, 261, 0x005B
	pokedex_order_value sHoennToNationalOrder, 262, 0x005C
	pokedex_order_value sHoennToNationalOrder, 263, 0x005D
	pokedex_order_value sHoennToNationalOrder, 264, 0x005E
	pokedex_order_value sHoennToNationalOrder, 265, 0x005F
	pokedex_order_value sHoennToNationalOrder, 266, 0x0060
	pokedex_order_value sHoennToNationalOrder, 267, 0x0061
	pokedex_order_value sHoennToNationalOrder, 268, 0x0062
	pokedex_order_value sHoennToNationalOrder, 269, 0x0063
	pokedex_order_value sHoennToNationalOrder, 270, 0x0066
	pokedex_order_value sHoennToNationalOrder, 271, 0x0067
	pokedex_order_value sHoennToNationalOrder, 272, 0x0068
	pokedex_order_value sHoennToNationalOrder, 273, 0x0069
	pokedex_order_value sHoennToNationalOrder, 274, 0x006A
	pokedex_order_value sHoennToNationalOrder, 275, 0x006B
	pokedex_order_value sHoennToNationalOrder, 276, 0x006C
	pokedex_order_value sHoennToNationalOrder, 277, 0x0071
	pokedex_order_value sHoennToNationalOrder, 278, 0x0072
	pokedex_order_value sHoennToNationalOrder, 279, 0x0073
	pokedex_order_value sHoennToNationalOrder, 280, 0x007A
	pokedex_order_value sHoennToNationalOrder, 281, 0x007B
	pokedex_order_value sHoennToNationalOrder, 282, 0x007C
	pokedex_order_value sHoennToNationalOrder, 283, 0x007D
	pokedex_order_value sHoennToNationalOrder, 284, 0x007E
	pokedex_order_value sHoennToNationalOrder, 285, 0x0080
	pokedex_order_value sHoennToNationalOrder, 286, 0x0083
	pokedex_order_value sHoennToNationalOrder, 287, 0x0084
	pokedex_order_value sHoennToNationalOrder, 288, 0x0085
	pokedex_order_value sHoennToNationalOrder, 289, 0x0086
	pokedex_order_value sHoennToNationalOrder, 290, 0x0087
	pokedex_order_value sHoennToNationalOrder, 291, 0x0088
	pokedex_order_value sHoennToNationalOrder, 292, 0x0089
	pokedex_order_value sHoennToNationalOrder, 293, 0x008A
	pokedex_order_value sHoennToNationalOrder, 294, 0x008B
	pokedex_order_value sHoennToNationalOrder, 295, 0x008C
	pokedex_order_value sHoennToNationalOrder, 296, 0x008D
	pokedex_order_value sHoennToNationalOrder, 297, 0x008E
	pokedex_order_value sHoennToNationalOrder, 298, 0x008F
	pokedex_order_value sHoennToNationalOrder, 299, 0x0090
	pokedex_order_value sHoennToNationalOrder, 300, 0x0091
	pokedex_order_value sHoennToNationalOrder, 301, 0x0092
	pokedex_order_value sHoennToNationalOrder, 302, 0x0093
	pokedex_order_value sHoennToNationalOrder, 303, 0x0094
	pokedex_order_value sHoennToNationalOrder, 304, 0x0095
	pokedex_order_value sHoennToNationalOrder, 305, 0x0096
	pokedex_order_value sHoennToNationalOrder, 306, 0x0097
	pokedex_order_value sHoennToNationalOrder, 307, 0x0098
	pokedex_order_value sHoennToNationalOrder, 308, 0x0099
	pokedex_order_value sHoennToNationalOrder, 309, 0x009A
	pokedex_order_value sHoennToNationalOrder, 310, 0x009B
	pokedex_order_value sHoennToNationalOrder, 311, 0x009C
	pokedex_order_value sHoennToNationalOrder, 312, 0x009D
	pokedex_order_value sHoennToNationalOrder, 313, 0x009E
	pokedex_order_value sHoennToNationalOrder, 314, 0x009F
	pokedex_order_value sHoennToNationalOrder, 315, 0x00A0
	pokedex_order_value sHoennToNationalOrder, 316, 0x00A1
	pokedex_order_value sHoennToNationalOrder, 317, 0x00A2
	pokedex_order_value sHoennToNationalOrder, 318, 0x00A3
	pokedex_order_value sHoennToNationalOrder, 319, 0x00A4
	pokedex_order_value sHoennToNationalOrder, 320, 0x00A5
	pokedex_order_value sHoennToNationalOrder, 321, 0x00A6
	pokedex_order_value sHoennToNationalOrder, 322, 0x00A7
	pokedex_order_value sHoennToNationalOrder, 323, 0x00A8
	pokedex_order_value sHoennToNationalOrder, 324, 0x00AD
	pokedex_order_value sHoennToNationalOrder, 325, 0x00AF
	pokedex_order_value sHoennToNationalOrder, 326, 0x00B0
	pokedex_order_value sHoennToNationalOrder, 327, 0x00B3
	pokedex_order_value sHoennToNationalOrder, 328, 0x00B4
	pokedex_order_value sHoennToNationalOrder, 329, 0x00B5
	pokedex_order_value sHoennToNationalOrder, 330, 0x00B9
	pokedex_order_value sHoennToNationalOrder, 331, 0x00BA
	pokedex_order_value sHoennToNationalOrder, 332, 0x00BB
	pokedex_order_value sHoennToNationalOrder, 333, 0x00BC
	pokedex_order_value sHoennToNationalOrder, 334, 0x00BD
	pokedex_order_value sHoennToNationalOrder, 335, 0x00BE
	pokedex_order_value sHoennToNationalOrder, 336, 0x00BF
	pokedex_order_value sHoennToNationalOrder, 337, 0x00C0
	pokedex_order_value sHoennToNationalOrder, 338, 0x00C1
	pokedex_order_value sHoennToNationalOrder, 339, 0x00C2
	pokedex_order_value sHoennToNationalOrder, 340, 0x00C3
	pokedex_order_value sHoennToNationalOrder, 341, 0x00C4
	pokedex_order_value sHoennToNationalOrder, 342, 0x00C5
	pokedex_order_value sHoennToNationalOrder, 343, 0x00C6
	pokedex_order_value sHoennToNationalOrder, 344, 0x00C7
	pokedex_order_value sHoennToNationalOrder, 345, 0x00C8
	pokedex_order_value sHoennToNationalOrder, 346, 0x00C9
	pokedex_order_value sHoennToNationalOrder, 347, 0x00CC
	pokedex_order_value sHoennToNationalOrder, 348, 0x00CD
	pokedex_order_value sHoennToNationalOrder, 349, 0x00CE
	pokedex_order_value sHoennToNationalOrder, 350, 0x00CF
	pokedex_order_value sHoennToNationalOrder, 351, 0x00D0
	pokedex_order_value sHoennToNationalOrder, 352, 0x00D1
	pokedex_order_value sHoennToNationalOrder, 353, 0x00D2
	pokedex_order_value sHoennToNationalOrder, 354, 0x00D3
	pokedex_order_value sHoennToNationalOrder, 355, 0x00D4
	pokedex_order_value sHoennToNationalOrder, 356, 0x00D5
	pokedex_order_value sHoennToNationalOrder, 357, 0x00D7
	pokedex_order_value sHoennToNationalOrder, 358, 0x00D8
	pokedex_order_value sHoennToNationalOrder, 359, 0x00D9
	pokedex_order_value sHoennToNationalOrder, 360, 0x00DC
	pokedex_order_value sHoennToNationalOrder, 361, 0x00DD
	pokedex_order_value sHoennToNationalOrder, 362, 0x00DF
	pokedex_order_value sHoennToNationalOrder, 363, 0x00E0
	pokedex_order_value sHoennToNationalOrder, 364, 0x00E1
	pokedex_order_value sHoennToNationalOrder, 365, 0x00E2
	pokedex_order_value sHoennToNationalOrder, 366, 0x00E4
	pokedex_order_value sHoennToNationalOrder, 367, 0x00E5
	pokedex_order_value sHoennToNationalOrder, 368, 0x00E9
	pokedex_order_value sHoennToNationalOrder, 369, 0x00EA
	pokedex_order_value sHoennToNationalOrder, 370, 0x00EB
	pokedex_order_value sHoennToNationalOrder, 371, 0x00EC
	pokedex_order_value sHoennToNationalOrder, 372, 0x00ED
	pokedex_order_value sHoennToNationalOrder, 373, 0x00EE
	pokedex_order_value sHoennToNationalOrder, 374, 0x00EF
	pokedex_order_value sHoennToNationalOrder, 375, 0x00F0
	pokedex_order_value sHoennToNationalOrder, 376, 0x00F1
	pokedex_order_value sHoennToNationalOrder, 377, 0x00F2
	pokedex_order_value sHoennToNationalOrder, 378, 0x00F3
	pokedex_order_value sHoennToNationalOrder, 379, 0x00F4
	pokedex_order_value sHoennToNationalOrder, 380, 0x00F5
	pokedex_order_value sHoennToNationalOrder, 381, 0x00F6
	pokedex_order_value sHoennToNationalOrder, 382, 0x00F7
	pokedex_order_value sHoennToNationalOrder, 383, 0x00F8
	pokedex_order_value sHoennToNationalOrder, 384, 0x00F9
	pokedex_order_value sHoennToNationalOrder, 385, 0x00FA
	pokedex_order_value sHoennToNationalOrder, 386, 0x00FB
	pokedex_order_value sHoennToNationalOrder, 387, 0x0183
	pokedex_order_value sHoennToNationalOrder, 388, 0x0184
	pokedex_order_value sHoennToNationalOrder, 389, 0x0185
	pokedex_order_value sHoennToNationalOrder, 390, 0x0186
	pokedex_order_value sHoennToNationalOrder, 391, 0x0187
	pokedex_order_value sHoennToNationalOrder, 392, 0x0188
	pokedex_order_value sHoennToNationalOrder, 393, 0x0189
	pokedex_order_value sHoennToNationalOrder, 394, 0x018A
	pokedex_order_value sHoennToNationalOrder, 395, 0x018B
	pokedex_order_value sHoennToNationalOrder, 396, 0x018C
	pokedex_order_value sHoennToNationalOrder, 397, 0x018D
	pokedex_order_value sHoennToNationalOrder, 398, 0x018E
	pokedex_order_value sHoennToNationalOrder, 399, 0x018F
	pokedex_order_value sHoennToNationalOrder, 400, 0x0190
	pokedex_order_value sHoennToNationalOrder, 401, 0x0191
	pokedex_order_value sHoennToNationalOrder, 402, 0x0192
	pokedex_order_value sHoennToNationalOrder, 403, 0x0193
	pokedex_order_value sHoennToNationalOrder, 404, 0x0194
	pokedex_order_value sHoennToNationalOrder, 405, 0x0195
	pokedex_order_value sHoennToNationalOrder, 406, 0x0196
	pokedex_order_value sHoennToNationalOrder, 407, 0x0197
	pokedex_order_value sHoennToNationalOrder, 408, 0x0198
	pokedex_order_value sHoennToNationalOrder, 409, 0x0199
	pokedex_order_value sHoennToNationalOrder, 410, 0x019A
	pokedex_order_value sHoennToNationalOrder, 411, 0x019B
	.if (. - sHoennToNationalOrder) != (411 * 2)
	.error "sHoennToNationalOrder size mismatch"
	.endif

	@ 0x082EEC76-0x082EEC77 alignment
	.2byte 0
