	.globl gUnknown_85430F0
gUnknown_85430F0: @ 0x085430F0
	.space 0x20, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08543110: pokedex.s: sub_080BE0C0
	.globl gPokedexData_08543110
gPokedexData_08543110: @ 0x08543110
	@ analyzed canonical ROM range 0x08543110-0x0854311F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x10
	.2byte 0x30C8, 0x0000, 0x00D1, 0x0000, 0x10EA, 0x0000, 0x20F3, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08543120: pokedex.s: sub_080BE0C0
	.globl gPokedexData_08543120
gPokedexData_08543120: @ 0x08543120
	@ analyzed canonical ROM range 0x08543120-0x08543147
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x28
	.2byte 0x0002, 0x2000, 0x0014, 0x0001, 0x1902, 0x0208, 0x0F02, 0x0281
	.2byte 0x0000, 0x200C, 0x0807, 0x0285, 0x1202, 0x0A03, 0x0908, 0x0365
	.2byte 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08543148: pokedex.s: sub_080BF6F4
	.globl gPokedexData_08543148
gPokedexData_08543148: @ 0x08543148
	@ analyzed canonical ROM range 0x08543148-0x0854314F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x20EA, 0x0000, 0x30F7, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08543150: pokedex.s: sub_080BF6F4
	.globl gPokedexData_08543150
gPokedexData_08543150: @ 0x08543150
	@ analyzed canonical ROM range 0x08543150-0x08543167
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x18
	.2byte 0x0002, 0x2000, 0x0014, 0x0001, 0x1902, 0x0208, 0x0F02, 0x0281
	.2byte 0x00FF, 0x0000, 0x0000, 0x0000
	.globl gMonFootprintTable
	@ duplicate Pokédex footprint/palette semantic group removed; canonical definitions follow
	.globl gMonFootprintTable
gMonFootprintTable: @ 0x08543168
	@ 413 species-indexed footprint pointers through SPECIES_EGG.
	.4byte 0x08C30444 @ [SPECIES_NONE]
	.4byte 0x08C30444 @ [SPECIES_BULBASAUR]
	.4byte 0x08C30FB4 @ [SPECIES_IVYSAUR]
	.4byte 0x08C31E80 @ [SPECIES_VENUSAUR]
	.4byte 0x08C32834 @ [SPECIES_CHARMANDER]
	.4byte 0x08C3332C @ [SPECIES_CHARMELEON]
	.4byte 0x08C34108 @ [SPECIES_CHARIZARD]
	.4byte 0x08C34AD4 @ [SPECIES_SQUIRTLE]
	.4byte 0x08C355F4 @ [SPECIES_WARTORTLE]
	.4byte 0x08C36384 @ [SPECIES_BLASTOISE]
	.4byte 0x08C36CDC @ [SPECIES_CATERPIE]
	.4byte 0x08C37594 @ [SPECIES_METAPOD]
	.4byte 0x08C38174 @ [SPECIES_BUTTERFREE]
	.4byte 0x08C38A8C @ [SPECIES_WEEDLE]
	.4byte 0x08C393C4 @ [SPECIES_KAKUNA]
	.4byte 0x08C39FB8 @ [SPECIES_BEEDRILL]
	.4byte 0x08C3AA68 @ [SPECIES_PIDGEY]
	.4byte 0x08C3B598 @ [SPECIES_PIDGEOTTO]
	.4byte 0x08C3C28C @ [SPECIES_PIDGEOT]
	.4byte 0x08C3CC24 @ [SPECIES_RATTATA]
	.4byte 0x08C3D74C @ [SPECIES_RATICATE]
	.4byte 0x08C3E120 @ [SPECIES_SPEAROW]
	.4byte 0x08C3ED1C @ [SPECIES_FEAROW]
	.4byte 0x08C3F77C @ [SPECIES_EKANS]
	.4byte 0x08C402D8 @ [SPECIES_ARBOK]
	.4byte 0x08C40CF0 @ [SPECIES_PIKACHU]
	.4byte 0x08C4182C @ [SPECIES_RAICHU]
	.4byte 0x08C42284 @ [SPECIES_SANDSHREW]
	.4byte 0x08C42EFC @ [SPECIES_SANDSLASH]
	.4byte 0x08C438BC @ [SPECIES_NIDORAN_F]
	.4byte 0x08C443EC @ [SPECIES_NIDORINA]
	.4byte 0x08C450AC @ [SPECIES_NIDOQUEEN]
	.4byte 0x08C45B20 @ [SPECIES_NIDORAN_M]
	.4byte 0x08C466E0 @ [SPECIES_NIDORINO]
	.4byte 0x08C47484 @ [SPECIES_NIDOKING]
	.4byte 0x08C47E4C @ [SPECIES_CLEFAIRY]
	.4byte 0x08C48930 @ [SPECIES_CLEFABLE]
	.4byte 0x08C493D8 @ [SPECIES_VULPIX]
	.4byte 0x08C49FF4 @ [SPECIES_NINETALES]
	.4byte 0x08C4A938 @ [SPECIES_JIGGLYPUFF]
	.4byte 0x08C4B3A4 @ [SPECIES_WIGGLYTUFF]
	.4byte 0x08C4BDA8 @ [SPECIES_ZUBAT]
	.4byte 0x08C4C870 @ [SPECIES_GOLBAT]
	.4byte 0x08C4D18C @ [SPECIES_ODDISH]
	.4byte 0x08C4DCDC @ [SPECIES_GLOOM]
	.4byte 0x08C4E8E0 @ [SPECIES_VILEPLUME]
	.4byte 0x08C4F25C @ [SPECIES_PARAS]
	.4byte 0x08C4FD8C @ [SPECIES_PARASECT]
	.4byte 0x08C508A4 @ [SPECIES_VENONAT]
	.4byte 0x08C5157C @ [SPECIES_VENOMOTH]
	.4byte 0x08C51E04 @ [SPECIES_DIGLETT]
	.4byte 0x08C52844 @ [SPECIES_DUGTRIO]
	.4byte 0x08C53284 @ [SPECIES_MEOWTH]
	.4byte 0x08C53E0C @ [SPECIES_PERSIAN]
	.4byte 0x08C547F0 @ [SPECIES_PSYDUCK]
	.4byte 0x08C55364 @ [SPECIES_GOLDUCK]
	.4byte 0x08C55E54 @ [SPECIES_MANKEY]
	.4byte 0x08C569E4 @ [SPECIES_PRIMEAPE]
	.4byte 0x08C574E8 @ [SPECIES_GROWLITHE]
	.4byte 0x08C5826C @ [SPECIES_ARCANINE]
	.4byte 0x08C58BD4 @ [SPECIES_POLIWAG]
	.4byte 0x08C596C8 @ [SPECIES_POLIWHIRL]
	.4byte 0x08C5A220 @ [SPECIES_POLIWRATH]
	.4byte 0x08C5AC80 @ [SPECIES_ABRA]
	.4byte 0x08C5B930 @ [SPECIES_KADABRA]
	.4byte 0x08C5C5E0 @ [SPECIES_ALAKAZAM]
	.4byte 0x08C5CFD4 @ [SPECIES_MACHOP]
	.4byte 0x08C5DB44 @ [SPECIES_MACHOKE]
	.4byte 0x08C5E960 @ [SPECIES_MACHAMP]
	.4byte 0x08C5F2EC @ [SPECIES_BELLSPROUT]
	.4byte 0x08C5FD7C @ [SPECIES_WEEPINBELL]
	.4byte 0x08C609B0 @ [SPECIES_VICTREEBEL]
	.4byte 0x08C6138C @ [SPECIES_TENTACOOL]
	.4byte 0x08C62034 @ [SPECIES_TENTACRUEL]
	.4byte 0x08C6298C @ [SPECIES_GEODUDE]
	.4byte 0x08C63470 @ [SPECIES_GRAVELER]
	.4byte 0x08C6401C @ [SPECIES_GOLEM]
	.4byte 0x08C64B70 @ [SPECIES_PONYTA]
	.4byte 0x08C658C0 @ [SPECIES_RAPIDASH]
	.4byte 0x08C662A0 @ [SPECIES_SLOWPOKE]
	.4byte 0x08C66F6C @ [SPECIES_SLOWBRO]
	.4byte 0x08C67798 @ [SPECIES_MAGNEMITE]
	.4byte 0x08C6838C @ [SPECIES_MAGNETON]
	.4byte 0x08C68EE4 @ [SPECIES_FARFETCHD]
	.4byte 0x08C699B8 @ [SPECIES_DODUO]
	.4byte 0x08C6A768 @ [SPECIES_DODRIO]
	.4byte 0x08C6B1CC @ [SPECIES_SEEL]
	.4byte 0x08C6BC88 @ [SPECIES_DEWGONG]
	.4byte 0x08C6C6F0 @ [SPECIES_GRIMER]
	.4byte 0x08C6D2FC @ [SPECIES_MUK]
	.4byte 0x08C6DCE0 @ [SPECIES_SHELLDER]
	.4byte 0x08C6E98C @ [SPECIES_CLOYSTER]
	.4byte 0x08C6F4D8 @ [SPECIES_GASTLY]
	.4byte 0x08C70068 @ [SPECIES_HAUNTER]
	.4byte 0x08C70B54 @ [SPECIES_GENGAR]
	.4byte 0x08C717A0 @ [SPECIES_ONIX]
	.4byte 0x08C721DC @ [SPECIES_DROWZEE]
	.4byte 0x08C72D60 @ [SPECIES_HYPNO]
	.4byte 0x08C73814 @ [SPECIES_KRABBY]
	.4byte 0x08C74534 @ [SPECIES_KINGLER]
	.4byte 0x08C74E18 @ [SPECIES_VOLTORB]
	.4byte 0x08C7575C @ [SPECIES_ELECTRODE]
	.4byte 0x08C762D0 @ [SPECIES_EXEGGCUTE]
	.4byte 0x08C770E0 @ [SPECIES_EXEGGUTOR]
	.4byte 0x08C77B60 @ [SPECIES_CUBONE]
	.4byte 0x08C786A0 @ [SPECIES_MAROWAK]
	.4byte 0x08C791B4 @ [SPECIES_HITMONLEE]
	.4byte 0x08C79CA8 @ [SPECIES_HITMONCHAN]
	.4byte 0x08C7A790 @ [SPECIES_LICKITUNG]
	.4byte 0x08C7B25C @ [SPECIES_KOFFING]
	.4byte 0x08C7BE84 @ [SPECIES_WEEZING]
	.4byte 0x08C7CA30 @ [SPECIES_RHYHORN]
	.4byte 0x08C7D7F8 @ [SPECIES_RHYDON]
	.4byte 0x08C7E288 @ [SPECIES_CHANSEY]
	.4byte 0x08C7EE70 @ [SPECIES_TANGELA]
	.4byte 0x08C7FC08 @ [SPECIES_KANGASKHAN]
	.4byte 0x08C805D0 @ [SPECIES_HORSEA]
	.4byte 0x08C811A0 @ [SPECIES_SEADRA]
	.4byte 0x08C81CE8 @ [SPECIES_GOLDEEN]
	.4byte 0x08C8291C @ [SPECIES_SEAKING]
	.4byte 0x08C832FC @ [SPECIES_STARYU]
	.4byte 0x08C83E38 @ [SPECIES_STARMIE]
	.4byte 0x08C8498C @ [SPECIES_MR_MIME]
	.4byte 0x08C85650 @ [SPECIES_SCYTHER]
	.4byte 0x08C86254 @ [SPECIES_JYNX]
	.4byte 0x08C86E50 @ [SPECIES_ELECTABUZZ]
	.4byte 0x08C87AB0 @ [SPECIES_MAGMAR]
	.4byte 0x08C88694 @ [SPECIES_PINSIR]
	.4byte 0x08C89288 @ [SPECIES_TAUROS]
	.4byte 0x08C89D78 @ [SPECIES_MAGIKARP]
	.4byte 0x08C8AC24 @ [SPECIES_GYARADOS]
	.4byte 0x08C8B798 @ [SPECIES_LAPRAS]
	.4byte 0x08C8BFE8 @ [SPECIES_DITTO]
	.4byte 0x08C8CA1C @ [SPECIES_EEVEE]
	.4byte 0x08C8D4E8 @ [SPECIES_VAPOREON]
	.4byte 0x08C8E088 @ [SPECIES_JOLTEON]
	.4byte 0x08C8EC04 @ [SPECIES_FLAREON]
	.4byte 0x08C8F5E0 @ [SPECIES_PORYGON]
	.4byte 0x08C90044 @ [SPECIES_OMANYTE]
	.4byte 0x08C90BB4 @ [SPECIES_OMASTAR]
	.4byte 0x08C9152C @ [SPECIES_KABUTO]
	.4byte 0x08C92138 @ [SPECIES_KABUTOPS]
	.4byte 0x08C92D2C @ [SPECIES_AERODACTYL]
	.4byte 0x08C937FC @ [SPECIES_SNORLAX]
	.4byte 0x08C943C0 @ [SPECIES_ARTICUNO]
	.4byte 0x08C94FE0 @ [SPECIES_ZAPDOS]
	.4byte 0x08C95D3C @ [SPECIES_MOLTRES]
	.4byte 0x08C966EC @ [SPECIES_DRATINI]
	.4byte 0x08C971CC @ [SPECIES_DRAGONAIR]
	.4byte 0x08C97EA8 @ [SPECIES_DRAGONITE]
	.4byte 0x08C98B18 @ [SPECIES_MEWTWO]
	.4byte 0x08C994CC @ [SPECIES_MEW]
	.4byte 0x08C99E68 @ [SPECIES_CHIKORITA]
	.4byte 0x08C9AA3C @ [SPECIES_BAYLEEF]
	.4byte 0x08C9B758 @ [SPECIES_MEGANIUM]
	.4byte 0x08C9C180 @ [SPECIES_CYNDAQUIL]
	.4byte 0x08C9CC80 @ [SPECIES_QUILAVA]
	.4byte 0x08C9D91C @ [SPECIES_TYPHLOSION]
	.4byte 0x08C9E310 @ [SPECIES_TOTODILE]
	.4byte 0x08C9EE38 @ [SPECIES_CROCONAW]
	.4byte 0x08C9FCE0 @ [SPECIES_FERALIGATR]
	.4byte 0x08CA06D0 @ [SPECIES_SENTRET]
	.4byte 0x08CA119C @ [SPECIES_FURRET]
	.4byte 0x08CA1B98 @ [SPECIES_HOOTHOOT]
	.4byte 0x08CA26B8 @ [SPECIES_NOCTOWL]
	.4byte 0x08CA314C @ [SPECIES_LEDYBA]
	.4byte 0x08CA3C9C @ [SPECIES_LEDIAN]
	.4byte 0x08CA45E4 @ [SPECIES_SPINARAK]
	.4byte 0x08CA518C @ [SPECIES_ARIADOS]
	.4byte 0x08CA5CB4 @ [SPECIES_CROBAT]
	.4byte 0x08CA66F4 @ [SPECIES_CHINCHOU]
	.4byte 0x08CA71D4 @ [SPECIES_LANTURN]
	.4byte 0x08CA7ABC @ [SPECIES_PICHU]
	.4byte 0x08CA8348 @ [SPECIES_CLEFFA]
	.4byte 0x08CA8BDC @ [SPECIES_IGGLYBUFF]
	.4byte 0x08CA9494 @ [SPECIES_TOGEPI]
	.4byte 0x08CA9EA4 @ [SPECIES_TOGETIC]
	.4byte 0x08CAA6F4 @ [SPECIES_NATU]
	.4byte 0x08CAB1B8 @ [SPECIES_XATU]
	.4byte 0x08CABBD0 @ [SPECIES_MAREEP]
	.4byte 0x08CAC65C @ [SPECIES_FLAAFFY]
	.4byte 0x08CAD1A0 @ [SPECIES_AMPHAROS]
	.4byte 0x08CADBA4 @ [SPECIES_BELLOSSOM]
	.4byte 0x08CAE584 @ [SPECIES_MARILL]
	.4byte 0x08CAEFB0 @ [SPECIES_AZUMARILL]
	.4byte 0x08CAFA94 @ [SPECIES_SUDOWOODO]
	.4byte 0x08CB04FC @ [SPECIES_POLITOED]
	.4byte 0x08CB0F00 @ [SPECIES_HOPPIP]
	.4byte 0x08CB18D8 @ [SPECIES_SKIPLOOM]
	.4byte 0x08CB24AC @ [SPECIES_JUMPLUFF]
	.4byte 0x08CB2F0C @ [SPECIES_AIPOM]
	.4byte 0x08CB3878 @ [SPECIES_SUNKERN]
	.4byte 0x08CB43E0 @ [SPECIES_SUNFLORA]
	.4byte 0x08CB4F88 @ [SPECIES_YANMA]
	.4byte 0x08CB58C4 @ [SPECIES_WOOPER]
	.4byte 0x08CB63A4 @ [SPECIES_QUAGSIRE]
	.4byte 0x08CB6E28 @ [SPECIES_ESPEON]
	.4byte 0x08CB78C0 @ [SPECIES_UMBREON]
	.4byte 0x08CB8328 @ [SPECIES_MURKROW]
	.4byte 0x08CB8ED8 @ [SPECIES_SLOWKING]
	.4byte 0x08CB992C @ [SPECIES_MISDREAVUS]
	.4byte 0x08CBA160 @ [SPECIES_UNOWN]
	.4byte 0x08CBAB64 @ [SPECIES_WOBBUFFET]
	.4byte 0x08CBB784 @ [SPECIES_GIRAFARIG]
	.4byte 0x08CBC204 @ [SPECIES_PINECO]
	.4byte 0x08CBCD50 @ [SPECIES_FORRETRESS]
	.4byte 0x08CBD7CC @ [SPECIES_DUNSPARCE]
	.4byte 0x08CBE43C @ [SPECIES_GLIGAR]
	.4byte 0x08CBF178 @ [SPECIES_STEELIX]
	.4byte 0x08CBFBE4 @ [SPECIES_SNUBBULL]
	.4byte 0x08CC0704 @ [SPECIES_GRANBULL]
	.4byte 0x08CC1114 @ [SPECIES_QWILFISH]
	.4byte 0x08CC1DEC @ [SPECIES_SCIZOR]
	.4byte 0x08CC277C @ [SPECIES_SHUCKLE]
	.4byte 0x08CC334C @ [SPECIES_HERACROSS]
	.4byte 0x08CC3E24 @ [SPECIES_SNEASEL]
	.4byte 0x08CC4778 @ [SPECIES_TEDDIURSA]
	.4byte 0x08CC53A8 @ [SPECIES_URSARING]
	.4byte 0x08CC5D6C @ [SPECIES_SLUGMA]
	.4byte 0x08CC693C @ [SPECIES_MAGCARGO]
	.4byte 0x08CC71E4 @ [SPECIES_SWINUB]
	.4byte 0x08CC7BC8 @ [SPECIES_PILOSWINE]
	.4byte 0x08CC85E0 @ [SPECIES_CORSOLA]
	.4byte 0x08CC8FCC @ [SPECIES_REMORAID]
	.4byte 0x08CC9A28 @ [SPECIES_OCTILLERY]
	.4byte 0x08CCA5C8 @ [SPECIES_DELIBIRD]
	.4byte 0x08CCB174 @ [SPECIES_MANTINE]
	.4byte 0x08CCBDC8 @ [SPECIES_SKARMORY]
	.4byte 0x08CCC770 @ [SPECIES_HOUNDOUR]
	.4byte 0x08CCD304 @ [SPECIES_HOUNDOOM]
	.4byte 0x08CCDF48 @ [SPECIES_KINGDRA]
	.4byte 0x08CCE8D8 @ [SPECIES_PHANPY]
	.4byte 0x08CCF4B8 @ [SPECIES_DONPHAN]
	.4byte 0x08CCFECC @ [SPECIES_PORYGON2]
	.4byte 0x08CD0A9C @ [SPECIES_STANTLER]
	.4byte 0x08CD15C4 @ [SPECIES_SMEARGLE]
	.4byte 0x08CD1FDC @ [SPECIES_TYROGUE]
	.4byte 0x08CD2C00 @ [SPECIES_HITMONTOP]
	.4byte 0x08CD3540 @ [SPECIES_SMOOCHUM]
	.4byte 0x08CD4010 @ [SPECIES_ELEKID]
	.4byte 0x08CD49B0 @ [SPECIES_MAGBY]
	.4byte 0x08CD556C @ [SPECIES_MILTANK]
	.4byte 0x08CD6090 @ [SPECIES_BLISSEY]
	.4byte 0x08CD6E24 @ [SPECIES_RAIKOU]
	.4byte 0x08CD7CB4 @ [SPECIES_ENTEI]
	.4byte 0x08CD8B84 @ [SPECIES_SUICUNE]
	.4byte 0x08CD94FC @ [SPECIES_LARVITAR]
	.4byte 0x08CD9F94 @ [SPECIES_PUPITAR]
	.4byte 0x08CDAD2C @ [SPECIES_TYRANITAR]
	.4byte 0x08CDBA34 @ [SPECIES_LUGIA]
	.4byte 0x08CDC908 @ [SPECIES_HO_OH]
	.4byte 0x08CDD39C @ [SPECIES_CELEBI]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_B]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_C]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_D]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_E]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_F]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_G]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_H]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_I]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_J]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_K]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_L]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_M]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_N]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_O]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_P]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_Q]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_R]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_S]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_T]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_U]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_V]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_W]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_X]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_Y]
	.4byte 0x08D77974 @ [SPECIES_OLD_UNOWN_Z]
	.4byte 0x08CDE140 @ [SPECIES_TREECKO]
	.4byte 0x08CDED78 @ [SPECIES_GROVYLE]
	.4byte 0x08CDFAE8 @ [SPECIES_SCEPTILE]
	.4byte 0x08CE04CC @ [SPECIES_TORCHIC]
	.4byte 0x08CE10F8 @ [SPECIES_COMBUSKEN]
	.4byte 0x08CE2094 @ [SPECIES_BLAZIKEN]
	.4byte 0x08CE2A9C @ [SPECIES_MUDKIP]
	.4byte 0x08CE391C @ [SPECIES_MARSHTOMP]
	.4byte 0x08CE46BC @ [SPECIES_SWAMPERT]
	.4byte 0x08CE53FC @ [SPECIES_POOCHYENA]
	.4byte 0x08CE601C @ [SPECIES_MIGHTYENA]
	.4byte 0x08CE6B9C @ [SPECIES_ZIGZAGOON]
	.4byte 0x08CE7650 @ [SPECIES_LINOONE]
	.4byte 0x08CE7F94 @ [SPECIES_WURMPLE]
	.4byte 0x08CE88A0 @ [SPECIES_SILCOON]
	.4byte 0x08CE9418 @ [SPECIES_BEAUTIFLY]
	.4byte 0x08CE9D04 @ [SPECIES_CASCOON]
	.4byte 0x08CEA734 @ [SPECIES_DUSTOX]
	.4byte 0x08CEB0EC @ [SPECIES_LOTAD]
	.4byte 0x08CEBB70 @ [SPECIES_LOMBRE]
	.4byte 0x08CEC7C0 @ [SPECIES_LUDICOLO]
	.4byte 0x08CED1A4 @ [SPECIES_SEEDOT]
	.4byte 0x08CEDBC8 @ [SPECIES_NUZLEAF]
	.4byte 0x08CEE7B8 @ [SPECIES_SHIFTRY]
	.4byte 0x08CEF180 @ [SPECIES_NINCADA]
	.4byte 0x08CEFD2C @ [SPECIES_NINJASK]
	.4byte 0x08CF085C @ [SPECIES_SHEDINJA]
	.4byte 0x08CF1144 @ [SPECIES_TAILLOW]
	.4byte 0x08CF1CB0 @ [SPECIES_SWELLOW]
	.4byte 0x08CF2668 @ [SPECIES_SHROOMISH]
	.4byte 0x08CF32A0 @ [SPECIES_BRELOOM]
	.4byte 0x08CF3D40 @ [SPECIES_SPINDA]
	.4byte 0x08CF473C @ [SPECIES_WINGULL]
	.4byte 0x08CF52C4 @ [SPECIES_PELIPPER]
	.4byte 0x08CF5B78 @ [SPECIES_SURSKIT]
	.4byte 0x08CF66DC @ [SPECIES_MASQUERAIN]
	.4byte 0x08CF7010 @ [SPECIES_WAILMER]
	.4byte 0x08CF7A5C @ [SPECIES_WAILORD]
	.4byte 0x08CF8514 @ [SPECIES_SKITTY]
	.4byte 0x08CF90AC @ [SPECIES_DELCATTY]
	.4byte 0x08CF9C74 @ [SPECIES_KECLEON]
	.4byte 0x08CFA5A0 @ [SPECIES_BALTOY]
	.4byte 0x08CFB19C @ [SPECIES_CLAYDOL]
	.4byte 0x08CFBB78 @ [SPECIES_NOSEPASS]
	.4byte 0x08CFC75C @ [SPECIES_TORKOAL]
	.4byte 0x08CFD1C8 @ [SPECIES_SABLEYE]
	.4byte 0x08CFDB58 @ [SPECIES_BARBOACH]
	.4byte 0x08CFE68C @ [SPECIES_WHISCASH]
	.4byte 0x08CFEE88 @ [SPECIES_LUVDISC]
	.4byte 0x08CFF970 @ [SPECIES_CORPHISH]
	.4byte 0x08D00654 @ [SPECIES_CRAWDAUNT]
	.4byte 0x08D01088 @ [SPECIES_FEEBAS]
	.4byte 0x08D01C7C @ [SPECIES_MILOTIC]
	.4byte 0x08D02728 @ [SPECIES_CARVANHA]
	.4byte 0x08D03280 @ [SPECIES_SHARPEDO]
	.4byte 0x08D03B2C @ [SPECIES_TRAPINCH]
	.4byte 0x08D04584 @ [SPECIES_VIBRAVA]
	.4byte 0x08D05320 @ [SPECIES_FLYGON]
	.4byte 0x08D05D94 @ [SPECIES_MAKUHITA]
	.4byte 0x08D06A94 @ [SPECIES_HARIYAMA]
	.4byte 0x08D07420 @ [SPECIES_ELECTRIKE]
	.4byte 0x08D07DEC @ [SPECIES_MANECTRIC]
	.4byte 0x08D087E8 @ [SPECIES_NUMEL]
	.4byte 0x08D09334 @ [SPECIES_CAMERUPT]
	.4byte 0x08D09C14 @ [SPECIES_SPHEAL]
	.4byte 0x08D0A680 @ [SPECIES_SEALEO]
	.4byte 0x08D0B5EC @ [SPECIES_WALREIN]
	.4byte 0x08D0C0CC @ [SPECIES_CACNEA]
	.4byte 0x08D0CC74 @ [SPECIES_CACTURNE]
	.4byte 0x08D0D68C @ [SPECIES_SNORUNT]
	.4byte 0x08D0E274 @ [SPECIES_GLALIE]
	.4byte 0x08D0ED64 @ [SPECIES_LUNATONE]
	.4byte 0x08D0FA0C @ [SPECIES_SOLROCK]
	.4byte 0x08D1045C @ [SPECIES_AZURILL]
	.4byte 0x08D10D78 @ [SPECIES_SPOINK]
	.4byte 0x08D11904 @ [SPECIES_GRUMPIG]
	.4byte 0x08D122B8 @ [SPECIES_PLUSLE]
	.4byte 0x08D12C58 @ [SPECIES_MINUN]
	.4byte 0x08D13884 @ [SPECIES_MAWILE]
	.4byte 0x08D14270 @ [SPECIES_MEDITITE]
	.4byte 0x08D14D48 @ [SPECIES_MEDICHAM]
	.4byte 0x08D15B20 @ [SPECIES_SWABLU]
	.4byte 0x08D166E4 @ [SPECIES_ALTARIA]
	.4byte 0x08D1707C @ [SPECIES_WYNAUT]
	.4byte 0x08D17A8C @ [SPECIES_DUSKULL]
	.4byte 0x08D18588 @ [SPECIES_DUSCLOPS]
	.4byte 0x08D1912C @ [SPECIES_ROSELIA]
	.4byte 0x08D19B6C @ [SPECIES_SLAKOTH]
	.4byte 0x08D1A6A0 @ [SPECIES_VIGOROTH]
	.4byte 0x08D1B3A8 @ [SPECIES_SLAKING]
	.4byte 0x08D1BCB4 @ [SPECIES_GULPIN]
	.4byte 0x08D1C7B0 @ [SPECIES_SWALOT]
	.4byte 0x08D1D4BC @ [SPECIES_TROPIUS]
	.4byte 0x08D1DE30 @ [SPECIES_WHISMUR]
	.4byte 0x08D1EA88 @ [SPECIES_LOUDRED]
	.4byte 0x08D1F86C @ [SPECIES_EXPLOUD]
	.4byte 0x08D20248 @ [SPECIES_CLAMPERL]
	.4byte 0x08D20DD8 @ [SPECIES_HUNTAIL]
	.4byte 0x08D21840 @ [SPECIES_GOREBYSS]
	.4byte 0x08D22440 @ [SPECIES_ABSOL]
	.4byte 0x08D22D80 @ [SPECIES_SHUPPET]
	.4byte 0x08D23720 @ [SPECIES_BANETTE]
	.4byte 0x08D2443C @ [SPECIES_SEVIPER]
	.4byte 0x08D24FEC @ [SPECIES_ZANGOOSE]
	.4byte 0x08D25B48 @ [SPECIES_RELICANTH]
	.4byte 0x08D263C8 @ [SPECIES_ARON]
	.4byte 0x08D26EF0 @ [SPECIES_LAIRON]
	.4byte 0x08D27D04 @ [SPECIES_AGGRON]
	.4byte 0x08D29664 @ [SPECIES_CASTFORM_NORMAL]
	.4byte 0x08D2A1C4 @ [SPECIES_VOLBEAT]
	.4byte 0x08D2ACC4 @ [SPECIES_ILLUMISE]
	.4byte 0x08D2B7BC @ [SPECIES_LILEEP]
	.4byte 0x08D2C444 @ [SPECIES_CRADILY]
	.4byte 0x08D2CE20 @ [SPECIES_ANORITH]
	.4byte 0x08D2DC48 @ [SPECIES_ARMALDO]
	.4byte 0x08D2E524 @ [SPECIES_RALTS]
	.4byte 0x08D2F004 @ [SPECIES_KIRLIA]
	.4byte 0x08D2FB24 @ [SPECIES_GARDEVOIR]
	.4byte 0x08D304F4 @ [SPECIES_BAGON]
	.4byte 0x08D30F50 @ [SPECIES_SHELGON]
	.4byte 0x08D31B08 @ [SPECIES_SALAMENCE]
	.4byte 0x08D324D8 @ [SPECIES_BELDUM]
	.4byte 0x08D330C8 @ [SPECIES_METANG]
	.4byte 0x08D33C68 @ [SPECIES_METAGROSS]
	.4byte 0x08D349E0 @ [SPECIES_REGIROCK]
	.4byte 0x08D35588 @ [SPECIES_REGICE]
	.4byte 0x08D361B8 @ [SPECIES_REGISTEEL]
	.4byte 0x08D36D10 @ [SPECIES_KYOGRE]
	.4byte 0x08D37B7C @ [SPECIES_GROUDON]
	.4byte 0x08D38B10 @ [SPECIES_RAYQUAZA]
	.4byte 0x08D396A0 @ [SPECIES_LATIAS]
	.4byte 0x08D3A2C4 @ [SPECIES_LATIOS]
	.4byte 0x08D3ADE0 @ [SPECIES_JIRACHI]
	.4byte 0x08D43C9C @ [SPECIES_DEOXYS_NORMAL]
	.4byte 0x08D445CC @ [SPECIES_CHIMECHO]
	.4byte 0x08C30444 @ [SPECIES_EGG]
sPokedexUiPalettes: @ 0x085437DC, 4 banks x 16 RGB555 colors
	rodata_rgb5 15, 16,  0 @ [00] raw=0x020F
	.globl sPokedexUiPalettes_Continuation
sPokedexUiPalettes_Continuation:
	@ Continuation of sPokedexUiPalettes; entry 0 is at 0x085437DC.
	rodata_rgb5  0,  0,  0 @ [01] raw=0x0000
	rodata_rgb5 21, 21, 21 @ [02] raw=0x56B5
	rodata_rgb5 31, 31, 31 @ [03] raw=0x7FFF
	rodata_rgb5 31, 31, 31 @ [04] raw=0x7FFF
	rodata_rgb5 12, 12, 14 @ [05] raw=0x398C
	rodata_rgb5  7,  7,  7 @ [06] raw=0x1CE7
	rodata_rgb5 15, 14,  9 @ [07] raw=0x25CF
	rodata_rgb5 19, 28,  0 @ [08] raw=0x0393
	rodata_rgb5  7, 14,  0 @ [09] raw=0x01C7
	rodata_rgb5 31, 21,  0 @ [10] raw=0x02BF
	rodata_rgb5 16,  4,  4 @ [11] raw=0x1090
	rodata_rgb5 10, 23, 11 @ [12] raw=0x2EEA
	rodata_rgb5  3, 16,  4 @ [13] raw=0x1203
	rodata_rgb5 31,  4,  4 @ [14] raw=0x109F
	rodata_rgb5  0,  0,  0 @ [15] raw=0x0000
	rodata_rgb5 15, 16,  0 @ [16] raw=0x020F
	rodata_rgb5  0,  0,  0 @ [17] raw=0x0000
	rodata_rgb5 21, 21, 21 @ [18] raw=0x56B5
	rodata_rgb5 31, 31, 31 @ [19] raw=0x7FFF
	rodata_rgb5 31, 31, 31 @ [20] raw=0x7FFF
	rodata_rgb5 12, 12, 14 @ [21] raw=0x398C
	rodata_rgb5  7,  7,  7 @ [22] raw=0x1CE7
	rodata_rgb5 15, 14,  9 @ [23] raw=0x25CF
	rodata_rgb5  5, 14,  0 @ [24] raw=0x01C5
	rodata_rgb5  4,  6,  4 @ [25] raw=0x10C4
	rodata_rgb5 22, 13,  0 @ [26] raw=0x01B6
	rodata_rgb5  2,  0,  0 @ [27] raw=0x0002
	rodata_rgb5 10, 23, 11 @ [28] raw=0x2EEA
	rodata_rgb5  3, 16,  4 @ [29] raw=0x1203
	rodata_rgb5  0,  0,  0 @ [30] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [31] raw=0x0000
	rodata_rgb5 15, 16,  0 @ [32] raw=0x020F
	rodata_rgb5  0,  0,  0 @ [33] raw=0x0000
	rodata_rgb5 21, 21, 21 @ [34] raw=0x56B5
	rodata_rgb5 21, 21, 21 @ [35] raw=0x56B5
	rodata_rgb5 21, 21, 21 @ [36] raw=0x56B5
	rodata_rgb5 12, 12, 14 @ [37] raw=0x398C
	rodata_rgb5  7,  7,  7 @ [38] raw=0x1CE7
	rodata_rgb5 15, 14,  9 @ [39] raw=0x25CF
	rodata_rgb5  4,  6,  4 @ [40] raw=0x10C4
	rodata_rgb5  4,  4,  4 @ [41] raw=0x1084
	rodata_rgb5  9,  4,  4 @ [42] raw=0x1089
	rodata_rgb5  4,  4,  4 @ [43] raw=0x1084
	rodata_rgb5 10, 23, 11 @ [44] raw=0x2EEA
	rodata_rgb5  3, 16,  4 @ [45] raw=0x1203
	rodata_rgb5 31,  4,  4 @ [46] raw=0x109F
	rodata_rgb5  0,  0,  0 @ [47] raw=0x0000
	rodata_rgb5 15, 16,  0 @ [48] raw=0x020F
	rodata_rgb5  0,  0,  0 @ [49] raw=0x0000
	rodata_rgb5 21, 21, 21 @ [50] raw=0x56B5
	rodata_rgb5 21, 21, 21 @ [51] raw=0x56B5
	rodata_rgb5 21, 21, 21 @ [52] raw=0x56B5
	rodata_rgb5 12, 12, 14 @ [53] raw=0x398C
	rodata_rgb5  7,  7,  7 @ [54] raw=0x1CE7
	rodata_rgb5 15, 14,  9 @ [55] raw=0x25CF
	rodata_rgb5  4,  6,  4 @ [56] raw=0x10C4
	rodata_rgb5  4,  4,  4 @ [57] raw=0x1084
	rodata_rgb5  9,  4,  4 @ [58] raw=0x1089
	rodata_rgb5  4,  4,  4 @ [59] raw=0x1084
	rodata_rgb5 10, 23, 11 @ [60] raw=0x2EEA
	rodata_rgb5  3, 16,  4 @ [61] raw=0x1203
	rodata_rgb5  0,  0,  0 @ [62] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [63] raw=0x0000
	.globl sPokedexUi854385C
sPokedexUi854385C:
	.incbin "build/graphics/analyzed/pokedex_ui_854385c.4bpp.lz"
	.if (. - sPokedexUi854385C) != 0x58C
	.error "sPokedexUi854385C compressed size mismatch"
	.endif
	.globl sPokedexUi8543De8
sPokedexUi8543De8:
	.incbin "build/graphics/analyzed/pokedex_ui_8543de8.4bpp.lz"
	.if (. - sPokedexUi8543De8) != 0x19C
	.error "sPokedexUi8543De8 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08543F84: pokedex.s: sub_080C0850
	.globl gPokedexData_08543F84
gPokedexData_08543F84:
	.globl sLz77Block_08543F84
	@ confirmed GBA LZ77 stream: compressed=0x188, decompressed=0x500
sLz77Block_08543F84:
	@ analyzed canonical ROM range 0x08543F84-0x0854410B
	.incbin "build/graphics/analyzed/gunknown_8543f84_08543f84.4bpp.lz"
	.if (. - sLz77Block_08543F84) != 0x188
	.error "sLz77Block_08543F84 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0854410C: pokedex.s: sub_080C0488
	.globl gPokedexData_0854410C
gPokedexData_0854410C: @ 0x0854410C
	@ analyzed canonical ROM range 0x0854410C-0x08544133
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x28
	.2byte 0x0000, 0x0000, 0x0551, 0x0000, 0x0556, 0x0587, 0x055B, 0x058C
	.2byte 0x0560, 0x0591, 0x0565, 0x0000, 0x056A, 0x0A96, 0x056F, 0x0000
	.2byte 0x0577, 0x0000, 0x0374, 0x037C
	@ pret/pokeemerald-jp direct xref for 0x08544134: pokedex.s: sub_080C1440, sub_080C1684
	.globl gPokedexData_08544134
gPokedexData_08544134: @ 0x08544134
	@ analyzed canonical ROM range 0x08544134-0x0854414B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x18
	.byte 0x35, 0x90, 0x5C, 0x08, 0x00, 0x00, 0x05, 0x00, 0x52, 0x90, 0x5C, 0x08, 0x06, 0x00, 0x05, 0x00
	.byte 0x66, 0x90, 0x5C, 0x08, 0x0C, 0x00, 0x05, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0854414C: pokedex.s: sub_080C1440, sub_080C16B8
	.globl gPokedexData_0854414C
gPokedexData_0854414C: @ 0x0854414C
	@ analyzed canonical ROM range 0x0854414C-0x0854419F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x54
	.2byte 0x9093, 0x085C, 0x0200, 0x0505, 0x0C02, 0x0000, 0x90B7, 0x085C
	.2byte 0x0400, 0x0505, 0x0C04, 0x0000, 0x90D5, 0x085C, 0x0600, 0x0505
	.2byte 0x0606, 0x0000, 0x90D5, 0x085C, 0x0600, 0x0B05, 0x0606, 0x0000
	.2byte 0x9081, 0x085C, 0x0800, 0x0505, 0x0C08, 0x0000, 0x9071, 0x085C
	.2byte 0x0A00, 0x0505, 0x0C0A, 0x0000, 0x90F0, 0x085C, 0x0C00, 0x0005
	.2byte 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085441A0: pokedex.s: sub_080C0C7C
	.globl gPokedexData_085441A0
gPokedexData_085441A0: @ 0x085441A0
	@ analyzed canonical ROM range 0x085441A0-0x085441BB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x1C
	.2byte 0xFFFF, 0x01FF, 0xFFFF, 0x0200, 0x03FF, 0x0401, 0xFF02, 0x0401
	.2byte 0xFFFF, 0x0502, 0xFFFF, 0x0604, 0xFFFF, 0xFF05
	@ pret/pokeemerald-jp direct xref for 0x085441BC: pokedex.s: sub_080C0C7C
	.globl gPokedexData_085441BC
gPokedexData_085441BC: @ 0x085441BC
	@ analyzed canonical ROM range 0x085441BC-0x085441D7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x1C
	.2byte 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF
	.2byte 0xFFFF, 0x05FF, 0xFFFF, 0x0604, 0xFFFF, 0xFF05
	@ pret/pokeemerald-jp direct xref for 0x085441D8: pokedex.s: sub_080C0C7C
	.globl gPokedexData_085441D8
gPokedexData_085441D8: @ 0x085441D8
	@ analyzed canonical ROM range 0x085441D8-0x085441F3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x1C
	.2byte 0xFFFF, 0x01FF, 0xFFFF, 0x0200, 0x03FF, 0x0401, 0xFF02, 0x0401
	.2byte 0xFFFF, 0x0602, 0xFFFF, 0xFFFF, 0xFFFF, 0xFF04
	@ pret/pokeemerald-jp direct xref for 0x085441F4: pokedex.s: sub_080C0C7C
	.globl gPokedexData_085441F4
gPokedexData_085441F4: @ 0x085441F4
	@ analyzed canonical ROM range 0x085441F4-0x0854420F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x1C
	.2byte 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF
	.2byte 0xFFFF, 0x06FF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFF04
	.globl gUnknown_8544210
gUnknown_8544210: @ 0x08544210
	.4byte gText_Rom_5C91A7
	.4byte gText_Rom_5C9103
	.4byte gText_Rom_5C91BA
	.4byte gText_Rom_5C910C
	.4byte NULL
	.4byte NULL
	.globl gUnknown_8544228
gUnknown_8544228: @ 0x08544228
	.4byte gText_Rom_5C91CA
	.4byte gText_Rom_5C9115
	.4byte gText_Rom_5C91E2
	.4byte gText_Rom_5C911E
	.4byte gText_Rom_5C9205
	.4byte gText_Rom_5C9129
	.4byte gText_Rom_5C9224
	.4byte gText_Rom_5C9131
	.4byte gText_Rom_5C9243
	.4byte gText_Rom_5C9139
	.4byte gText_Rom_5C9268
	.4byte gText_Rom_5C9141
	.4byte NULL
	.4byte NULL
	@ pret/pokeemerald-jp direct xref for 0x08544260: pokedex.s: sub_080C175C
	.globl gPokedexData_08544260
gPokedexData_08544260: @ 0x08544260
	@ confirmed contiguous ROM pointer table: 20 entries from this address
sPointerTable_08544260:
	@ analyzed canonical ROM range 0x08544260-0x085442B7
	@ pointer/nullable table
	.4byte 0x085C928D @ +0x0
	.4byte gText_Rom_5C928E @ +0x4
	.4byte 0x085C928D @ +0x8
	.4byte gText_Rom_5C9149 @ +0xC
	.4byte 0x085C928D @ +0x10
	.4byte gText_Rom_5C914F @ +0x14
	.4byte 0x085C928D @ +0x18
	.4byte gText_Rom_5C9155 @ +0x1C
	.4byte 0x085C928D @ +0x20
	.4byte gText_Rom_5C915B @ +0x24
	.4byte 0x085C928D @ +0x28
	.4byte gText_Rom_5C9161 @ +0x2C
	.4byte 0x085C928D @ +0x30
	.4byte gText_Rom_5C9167 @ +0x34
	.4byte 0x085C928D @ +0x38
	.4byte gText_Rom_5C916D @ +0x3C
	.4byte 0x085C928D @ +0x40
	.4byte gText_Rom_5C9173 @ +0x44
	.4byte 0x085C928D @ +0x48
	.4byte gText_Rom_5C9179 @ +0x4C
	.4byte 0 @ +0x50
	.4byte 0 @ +0x54
	@ pret/pokeemerald-jp direct xref for 0x085442B8: pokedex.s: sub_080C175C
	.globl gPokedexData_085442B8
gPokedexData_085442B8: @ 0x085442B8
	@ confirmed contiguous ROM pointer table: 22 entries from this address
sPointerTable_085442B8:
	@ analyzed canonical ROM range 0x085442B8-0x08544317
	@ pointer/nullable table
	.4byte 0x085C928D @ +0x0
	.4byte gText_Rom_5C928E @ +0x4
	.4byte 0x085C928D @ +0x8
	.4byte 0x085C9180 @ +0xC
	.4byte 0x085C928D @ +0x10
	.4byte 0x085C9183 @ +0x14
	.4byte 0x085C928D @ +0x18
	.4byte gText_Rom_5C9186 @ +0x1C
	.4byte 0x085C928D @ +0x20
	.4byte gText_Rom_5C918A @ +0x24
	.4byte 0x085C928D @ +0x28
	.4byte 0x085C918E @ +0x2C
	.4byte 0x085C928D @ +0x30
	.4byte gText_Rom_5C9191 @ +0x34
	.4byte 0x085C928D @ +0x38
	.4byte gText_Rom_5C9196 @ +0x3C
	.4byte 0x085C928D @ +0x40
	.4byte gText_Rom_5C919B @ +0x44
	.4byte 0x085C928D @ +0x48
	.4byte 0x085C91A0 @ +0x4C
	.4byte 0x085C928D @ +0x50
	.4byte gText_Rom_5C91A3 @ +0x54
	.4byte 0 @ +0x58
	.4byte 0 @ +0x5C
	@ pret/pokeemerald-jp direct xref for 0x08544318: pokedex.s: sub_080C175C
	.globl gPokedexData_08544318
gPokedexData_08544318: @ 0x08544318
	@ confirmed contiguous ROM pointer table: 36 entries from this address
sPointerTable_08544318:
	@ analyzed canonical ROM range 0x08544318-0x085443AF
	@ pointer/nullable table
	.4byte 0x085C928D @ +0x0
	.4byte 0x085C9296 @ +0x4
	.4byte 0x085C928D @ +0x8
	.4byte gTypeNames @ +0xC
	.4byte 0x085C928D @ +0x10
	.4byte gTypeName_Fighting @ +0x14
	.4byte 0x085C928D @ +0x18
	.4byte gTypeName_Flying @ +0x1C
	.4byte 0x085C928D @ +0x20
	.4byte gTypeName_Poison @ +0x24
	.4byte 0x085C928D @ +0x28
	.4byte gTypeName_Ground @ +0x2C
	.4byte 0x085C928D @ +0x30
	.4byte gTypeName_Rock @ +0x34
	.4byte 0x085C928D @ +0x38
	.4byte gTypeName_Bug @ +0x3C
	.4byte 0x085C928D @ +0x40
	.4byte gTypeName_Ghost @ +0x44
	.4byte 0x085C928D @ +0x48
	.4byte gTypeName_Steel @ +0x4C
	.4byte 0x085C928D @ +0x50
	.4byte gTypeName_Fire @ +0x54
	.4byte 0x085C928D @ +0x58
	.4byte gTypeName_Water @ +0x5C
	.4byte 0x085C928D @ +0x60
	.4byte gTypeName_Grass @ +0x64
	.4byte 0x085C928D @ +0x68
	.4byte gTypeName_Electric @ +0x6C
	.4byte 0x085C928D @ +0x70
	.4byte gTypeName_Psychic @ +0x74
	.4byte 0x085C928D @ +0x78
	.4byte gTypeName_Ice @ +0x7C
	.4byte 0x085C928D @ +0x80
	.4byte gTypeName_Dragon @ +0x84
	.4byte 0x085C928D @ +0x88
	.4byte gTypeName_Dark @ +0x8C
	.4byte 0 @ +0x90
	.4byte 0 @ +0x94
	@ pret/pokeemerald-jp direct xref for 0x085443B0: pokedex.s: sub_080C19BC
	.globl gPokedexData_085443B0
gPokedexData_085443B0: @ 0x085443B0
	@ analyzed canonical ROM range 0x085443B0-0x085443B1
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x2
	.byte 0x00, 0x01
	.globl gUnknown_85443B2
gUnknown_85443B2: @ 0x085443B2
	.space 0x1, 0x00
