	.globl gPokemonDataBlock_Rom_5430F0
gPokemonDataBlock_Rom_5430F0: @ 0x085430F0
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
	.4byte gMonFootprint_Wartortle @ [SPECIES_WARTORTLE]
	.4byte gMonFootprint_Blastoise @ [SPECIES_BLASTOISE]
	.4byte gMonFootprint_Caterpie @ [SPECIES_CATERPIE]
	.4byte gMonFootprint_Metapod @ [SPECIES_METAPOD]
	.4byte gMonFootprint_Butterfree @ [SPECIES_BUTTERFREE]
	.4byte gMonFootprint_Weedle @ [SPECIES_WEEDLE]
	.4byte gMonFootprint_Kakuna @ [SPECIES_KAKUNA]
	.4byte gMonFootprint_Beedrill @ [SPECIES_BEEDRILL]
	.4byte gMonFootprint_Pidgey @ [SPECIES_PIDGEY]
	.4byte gMonFootprint_Pidgeotto @ [SPECIES_PIDGEOTTO]
	.4byte gMonFootprint_Pidgeot @ [SPECIES_PIDGEOT]
	.4byte gMonFootprint_Rattata @ [SPECIES_RATTATA]
	.4byte gMonFootprint_Raticate @ [SPECIES_RATICATE]
	.4byte gMonFootprint_Spearow @ [SPECIES_SPEAROW]
	.4byte gMonFootprint_Fearow @ [SPECIES_FEAROW]
	.4byte gMonFootprint_Ekans @ [SPECIES_EKANS]
	.4byte gMonFootprint_Arbok @ [SPECIES_ARBOK]
	.4byte gMonFootprint_Pikachu @ [SPECIES_PIKACHU]
	.4byte gMonFootprint_Raichu @ [SPECIES_RAICHU]
	.4byte gMonFootprint_Sandshrew @ [SPECIES_SANDSHREW]
	.4byte gMonFootprint_Sandslash @ [SPECIES_SANDSLASH]
	.4byte gMonFootprint_NidoranF @ [SPECIES_NIDORAN_F]
	.4byte gMonFootprint_Nidorina @ [SPECIES_NIDORINA]
	.4byte gMonFootprint_Nidoqueen @ [SPECIES_NIDOQUEEN]
	.4byte gMonFootprint_NidoranM @ [SPECIES_NIDORAN_M]
	.4byte gMonFootprint_Nidorino @ [SPECIES_NIDORINO]
	.4byte gMonFootprint_Nidoking @ [SPECIES_NIDOKING]
	.4byte gMonFootprint_Clefairy @ [SPECIES_CLEFAIRY]
	.4byte gMonFootprint_Clefable @ [SPECIES_CLEFABLE]
	.4byte gMonFootprint_Vulpix @ [SPECIES_VULPIX]
	.4byte gMonFootprint_Ninetales @ [SPECIES_NINETALES]
	.4byte gMonFootprint_Jigglypuff @ [SPECIES_JIGGLYPUFF]
	.4byte gMonFootprint_Wigglytuff @ [SPECIES_WIGGLYTUFF]
	.4byte gMonFootprint_Zubat @ [SPECIES_ZUBAT]
	.4byte gMonFootprint_Golbat @ [SPECIES_GOLBAT]
	.4byte gMonFootprint_Oddish @ [SPECIES_ODDISH]
	.4byte gMonFootprint_Gloom @ [SPECIES_GLOOM]
	.4byte gMonFootprint_Vileplume @ [SPECIES_VILEPLUME]
	.4byte gMonFootprint_Paras @ [SPECIES_PARAS]
	.4byte gMonFootprint_Parasect @ [SPECIES_PARASECT]
	.4byte gMonFootprint_Venonat @ [SPECIES_VENONAT]
	.4byte gMonFootprint_Venomoth @ [SPECIES_VENOMOTH]
	.4byte gMonFootprint_Diglett @ [SPECIES_DIGLETT]
	.4byte gMonFootprint_Dugtrio @ [SPECIES_DUGTRIO]
	.4byte gMonFootprint_Meowth @ [SPECIES_MEOWTH]
	.4byte gMonFootprint_Persian @ [SPECIES_PERSIAN]
	.4byte gMonFootprint_Psyduck @ [SPECIES_PSYDUCK]
	.4byte gMonFootprint_Golduck @ [SPECIES_GOLDUCK]
	.4byte gMonFootprint_Mankey @ [SPECIES_MANKEY]
	.4byte gMonFootprint_Primeape @ [SPECIES_PRIMEAPE]
	.4byte gMonFootprint_Growlithe @ [SPECIES_GROWLITHE]
	.4byte gMonFootprint_Arcanine @ [SPECIES_ARCANINE]
	.4byte gMonFootprint_Poliwag @ [SPECIES_POLIWAG]
	.4byte gMonFootprint_Poliwhirl @ [SPECIES_POLIWHIRL]
	.4byte gMonFootprint_Poliwrath @ [SPECIES_POLIWRATH]
	.4byte gMonFootprint_Abra @ [SPECIES_ABRA]
	.4byte gMonFootprint_Kadabra @ [SPECIES_KADABRA]
	.4byte gMonFootprint_Alakazam @ [SPECIES_ALAKAZAM]
	.4byte gMonFootprint_Machop @ [SPECIES_MACHOP]
	.4byte gMonFootprint_Machoke @ [SPECIES_MACHOKE]
	.4byte gMonFootprint_Machamp @ [SPECIES_MACHAMP]
	.4byte gMonFootprint_Bellsprout @ [SPECIES_BELLSPROUT]
	.4byte gMonFootprint_Weepinbell @ [SPECIES_WEEPINBELL]
	.4byte gMonFootprint_Victreebel @ [SPECIES_VICTREEBEL]
	.4byte gMonFootprint_Tentacool @ [SPECIES_TENTACOOL]
	.4byte gMonFootprint_Tentacruel @ [SPECIES_TENTACRUEL]
	.4byte gMonFootprint_Geodude @ [SPECIES_GEODUDE]
	.4byte gMonFootprint_Graveler @ [SPECIES_GRAVELER]
	.4byte gMonFootprint_Golem @ [SPECIES_GOLEM]
	.4byte gMonFootprint_Ponyta @ [SPECIES_PONYTA]
	.4byte gMonFootprint_Rapidash @ [SPECIES_RAPIDASH]
	.4byte gMonFootprint_Slowpoke @ [SPECIES_SLOWPOKE]
	.4byte gMonFootprint_Slowbro @ [SPECIES_SLOWBRO]
	.4byte gMonFootprint_Magnemite @ [SPECIES_MAGNEMITE]
	.4byte gMonFootprint_Magneton @ [SPECIES_MAGNETON]
	.4byte gMonFootprint_Farfetchd @ [SPECIES_FARFETCHD]
	.4byte gMonFootprint_Doduo @ [SPECIES_DODUO]
	.4byte gMonFootprint_Dodrio @ [SPECIES_DODRIO]
	.4byte gMonFootprint_Seel @ [SPECIES_SEEL]
	.4byte gMonFootprint_Dewgong @ [SPECIES_DEWGONG]
	.4byte gMonFootprint_Grimer @ [SPECIES_GRIMER]
	.4byte gMonFootprint_Muk @ [SPECIES_MUK]
	.4byte gMonFootprint_Shellder @ [SPECIES_SHELLDER]
	.4byte gMonFootprint_Cloyster @ [SPECIES_CLOYSTER]
	.4byte gMonFootprint_Gastly @ [SPECIES_GASTLY]
	.4byte gMonFootprint_Haunter @ [SPECIES_HAUNTER]
	.4byte gMonFootprint_Gengar @ [SPECIES_GENGAR]
	.4byte gMonFootprint_Onix @ [SPECIES_ONIX]
	.4byte gMonFootprint_Drowzee @ [SPECIES_DROWZEE]
	.4byte gMonFootprint_Hypno @ [SPECIES_HYPNO]
	.4byte gMonFootprint_Krabby @ [SPECIES_KRABBY]
	.4byte gMonFootprint_Kingler @ [SPECIES_KINGLER]
	.4byte gMonFootprint_Voltorb @ [SPECIES_VOLTORB]
	.4byte gMonFootprint_Electrode @ [SPECIES_ELECTRODE]
	.4byte gMonFootprint_Exeggcute @ [SPECIES_EXEGGCUTE]
	.4byte gMonFootprint_Exeggutor @ [SPECIES_EXEGGUTOR]
	.4byte gMonFootprint_Cubone @ [SPECIES_CUBONE]
	.4byte gMonFootprint_Marowak @ [SPECIES_MAROWAK]
	.4byte gMonFootprint_Hitmonlee @ [SPECIES_HITMONLEE]
	.4byte gMonFootprint_Hitmonchan @ [SPECIES_HITMONCHAN]
	.4byte gMonFootprint_Lickitung @ [SPECIES_LICKITUNG]
	.4byte gMonFootprint_Koffing @ [SPECIES_KOFFING]
	.4byte gMonFootprint_Weezing @ [SPECIES_WEEZING]
	.4byte gMonFootprint_Rhyhorn @ [SPECIES_RHYHORN]
	.4byte gMonFootprint_Rhydon @ [SPECIES_RHYDON]
	.4byte gMonFootprint_Chansey @ [SPECIES_CHANSEY]
	.4byte gMonFootprint_Tangela @ [SPECIES_TANGELA]
	.4byte gMonFootprint_Kangaskhan @ [SPECIES_KANGASKHAN]
	.4byte gMonFootprint_Horsea @ [SPECIES_HORSEA]
	.4byte gMonFootprint_Seadra @ [SPECIES_SEADRA]
	.4byte gMonFootprint_Goldeen @ [SPECIES_GOLDEEN]
	.4byte gMonFootprint_Seaking @ [SPECIES_SEAKING]
	.4byte gMonFootprint_Staryu @ [SPECIES_STARYU]
	.4byte gMonFootprint_Starmie @ [SPECIES_STARMIE]
	.4byte gMonFootprint_MrMime @ [SPECIES_MR_MIME]
	.4byte gMonFootprint_Scyther @ [SPECIES_SCYTHER]
	.4byte gMonFootprint_Jynx @ [SPECIES_JYNX]
	.4byte gMonFootprint_Electabuzz @ [SPECIES_ELECTABUZZ]
	.4byte gMonFootprint_Magmar @ [SPECIES_MAGMAR]
	.4byte gMonFootprint_Pinsir @ [SPECIES_PINSIR]
	.4byte gMonFootprint_Tauros @ [SPECIES_TAUROS]
	.4byte gMonFootprint_Magikarp @ [SPECIES_MAGIKARP]
	.4byte gMonFootprint_Gyarados @ [SPECIES_GYARADOS]
	.4byte gMonFootprint_Lapras @ [SPECIES_LAPRAS]
	.4byte gMonFootprint_Ditto @ [SPECIES_DITTO]
	.4byte gMonFootprint_Eevee @ [SPECIES_EEVEE]
	.4byte gMonFootprint_Vaporeon @ [SPECIES_VAPOREON]
	.4byte gMonFootprint_Jolteon @ [SPECIES_JOLTEON]
	.4byte gMonFootprint_Flareon @ [SPECIES_FLAREON]
	.4byte gMonFootprint_Porygon @ [SPECIES_PORYGON]
	.4byte gMonFootprint_Omanyte @ [SPECIES_OMANYTE]
	.4byte gMonFootprint_Omastar @ [SPECIES_OMASTAR]
	.4byte gMonFootprint_Kabuto @ [SPECIES_KABUTO]
	.4byte gMonFootprint_Kabutops @ [SPECIES_KABUTOPS]
	.4byte gMonFootprint_Aerodactyl @ [SPECIES_AERODACTYL]
	.4byte gMonFootprint_Snorlax @ [SPECIES_SNORLAX]
	.4byte gMonFootprint_Articuno @ [SPECIES_ARTICUNO]
	.4byte gMonFootprint_Zapdos @ [SPECIES_ZAPDOS]
	.4byte gMonFootprint_Moltres @ [SPECIES_MOLTRES]
	.4byte gMonFootprint_Dratini @ [SPECIES_DRATINI]
	.4byte gMonFootprint_Dragonair @ [SPECIES_DRAGONAIR]
	.4byte gMonFootprint_Dragonite @ [SPECIES_DRAGONITE]
	.4byte gMonFootprint_Mewtwo @ [SPECIES_MEWTWO]
	.4byte gMonFootprint_Mew @ [SPECIES_MEW]
	.4byte gMonFootprint_Chikorita @ [SPECIES_CHIKORITA]
	.4byte gMonFootprint_Bayleef @ [SPECIES_BAYLEEF]
	.4byte gMonFootprint_Meganium @ [SPECIES_MEGANIUM]
	.4byte gMonFootprint_Cyndaquil @ [SPECIES_CYNDAQUIL]
	.4byte gMonFootprint_Quilava @ [SPECIES_QUILAVA]
	.4byte gMonFootprint_Typhlosion @ [SPECIES_TYPHLOSION]
	.4byte gMonFootprint_Totodile @ [SPECIES_TOTODILE]
	.4byte gMonFootprint_Croconaw @ [SPECIES_CROCONAW]
	.4byte gMonFootprint_Feraligatr @ [SPECIES_FERALIGATR]
	.4byte gMonFootprint_Sentret @ [SPECIES_SENTRET]
	.4byte gMonFootprint_Furret @ [SPECIES_FURRET]
	.4byte gMonFootprint_Hoothoot @ [SPECIES_HOOTHOOT]
	.4byte gMonFootprint_Noctowl @ [SPECIES_NOCTOWL]
	.4byte gMonFootprint_Ledyba @ [SPECIES_LEDYBA]
	.4byte gMonFootprint_Ledian @ [SPECIES_LEDIAN]
	.4byte gMonFootprint_Spinarak @ [SPECIES_SPINARAK]
	.4byte gMonFootprint_Ariados @ [SPECIES_ARIADOS]
	.4byte gMonFootprint_Crobat @ [SPECIES_CROBAT]
	.4byte gMonFootprint_Chinchou @ [SPECIES_CHINCHOU]
	.4byte gMonFootprint_Lanturn @ [SPECIES_LANTURN]
	.4byte gMonFootprint_Pichu @ [SPECIES_PICHU]
	.4byte gMonFootprint_Cleffa @ [SPECIES_CLEFFA]
	.4byte gMonFootprint_Igglybuff @ [SPECIES_IGGLYBUFF]
	.4byte gMonFootprint_Togepi @ [SPECIES_TOGEPI]
	.4byte gMonFootprint_Togetic @ [SPECIES_TOGETIC]
	.4byte gMonFootprint_Natu @ [SPECIES_NATU]
	.4byte gMonFootprint_Xatu @ [SPECIES_XATU]
	.4byte gMonFootprint_Mareep @ [SPECIES_MAREEP]
	.4byte gMonFootprint_Flaaffy @ [SPECIES_FLAAFFY]
	.4byte gMonFootprint_Ampharos @ [SPECIES_AMPHAROS]
	.4byte gMonFootprint_Bellossom @ [SPECIES_BELLOSSOM]
	.4byte gMonFootprint_Marill @ [SPECIES_MARILL]
	.4byte gMonFootprint_Azumarill @ [SPECIES_AZUMARILL]
	.4byte gMonFootprint_Sudowoodo @ [SPECIES_SUDOWOODO]
	.4byte gMonFootprint_Politoed @ [SPECIES_POLITOED]
	.4byte gMonFootprint_Hoppip @ [SPECIES_HOPPIP]
	.4byte gMonFootprint_Skiploom @ [SPECIES_SKIPLOOM]
	.4byte gMonFootprint_Jumpluff @ [SPECIES_JUMPLUFF]
	.4byte gMonFootprint_Aipom @ [SPECIES_AIPOM]
	.4byte gMonFootprint_Sunkern @ [SPECIES_SUNKERN]
	.4byte gMonFootprint_Sunflora @ [SPECIES_SUNFLORA]
	.4byte gMonFootprint_Yanma @ [SPECIES_YANMA]
	.4byte gMonFootprint_Wooper @ [SPECIES_WOOPER]
	.4byte gMonFootprint_Quagsire @ [SPECIES_QUAGSIRE]
	.4byte gMonFootprint_Espeon @ [SPECIES_ESPEON]
	.4byte gMonFootprint_Umbreon @ [SPECIES_UMBREON]
	.4byte gMonFootprint_Murkrow @ [SPECIES_MURKROW]
	.4byte gMonFootprint_Slowking @ [SPECIES_SLOWKING]
	.4byte gMonFootprint_Misdreavus @ [SPECIES_MISDREAVUS]
	.4byte gMonFootprint_Unown @ [SPECIES_UNOWN]
	.4byte gMonFootprint_Wobbuffet @ [SPECIES_WOBBUFFET]
	.4byte gMonFootprint_Girafarig @ [SPECIES_GIRAFARIG]
	.4byte gMonFootprint_Pineco @ [SPECIES_PINECO]
	.4byte gMonFootprint_Forretress @ [SPECIES_FORRETRESS]
	.4byte gMonFootprint_Dunsparce @ [SPECIES_DUNSPARCE]
	.4byte gMonFootprint_Gligar @ [SPECIES_GLIGAR]
	.4byte gMonFootprint_Steelix @ [SPECIES_STEELIX]
	.4byte gMonFootprint_Snubbull @ [SPECIES_SNUBBULL]
	.4byte gMonFootprint_Granbull @ [SPECIES_GRANBULL]
	.4byte gMonFootprint_Qwilfish @ [SPECIES_QWILFISH]
	.4byte gMonFootprint_Scizor @ [SPECIES_SCIZOR]
	.4byte gMonFootprint_Shuckle @ [SPECIES_SHUCKLE]
	.4byte gMonFootprint_Heracross @ [SPECIES_HERACROSS]
	.4byte gMonFootprint_Sneasel @ [SPECIES_SNEASEL]
	.4byte gMonFootprint_Teddiursa @ [SPECIES_TEDDIURSA]
	.4byte gMonFootprint_Ursaring @ [SPECIES_URSARING]
	.4byte gMonFootprint_Slugma @ [SPECIES_SLUGMA]
	.4byte gMonFootprint_Magcargo @ [SPECIES_MAGCARGO]
	.4byte gMonFootprint_Swinub @ [SPECIES_SWINUB]
	.4byte gMonFootprint_Piloswine @ [SPECIES_PILOSWINE]
	.4byte gMonFootprint_Corsola @ [SPECIES_CORSOLA]
	.4byte gMonFootprint_Remoraid @ [SPECIES_REMORAID]
	.4byte gMonFootprint_Octillery @ [SPECIES_OCTILLERY]
	.4byte gMonFootprint_Delibird @ [SPECIES_DELIBIRD]
	.4byte gMonFootprint_Mantine @ [SPECIES_MANTINE]
	.4byte gMonFootprint_Skarmory @ [SPECIES_SKARMORY]
	.4byte gMonFootprint_Houndour @ [SPECIES_HOUNDOUR]
	.4byte gMonFootprint_Houndoom @ [SPECIES_HOUNDOOM]
	.4byte gMonFootprint_Kingdra @ [SPECIES_KINGDRA]
	.4byte gMonFootprint_Phanpy @ [SPECIES_PHANPY]
	.4byte gMonFootprint_Donphan @ [SPECIES_DONPHAN]
	.4byte gMonFootprint_Porygon2 @ [SPECIES_PORYGON2]
	.4byte gMonFootprint_Stantler @ [SPECIES_STANTLER]
	.4byte gMonFootprint_Smeargle @ [SPECIES_SMEARGLE]
	.4byte gMonFootprint_Tyrogue @ [SPECIES_TYROGUE]
	.4byte gMonFootprint_Hitmontop @ [SPECIES_HITMONTOP]
	.4byte gMonFootprint_Smoochum @ [SPECIES_SMOOCHUM]
	.4byte gMonFootprint_Elekid @ [SPECIES_ELEKID]
	.4byte gMonFootprint_Magby @ [SPECIES_MAGBY]
	.4byte gMonFootprint_Miltank @ [SPECIES_MILTANK]
	.4byte gMonFootprint_Blissey @ [SPECIES_BLISSEY]
	.4byte gMonFootprint_Raikou @ [SPECIES_RAIKOU]
	.4byte gMonFootprint_Entei @ [SPECIES_ENTEI]
	.4byte gMonFootprint_Suicune @ [SPECIES_SUICUNE]
	.4byte gMonFootprint_Larvitar @ [SPECIES_LARVITAR]
	.4byte gMonFootprint_Pupitar @ [SPECIES_PUPITAR]
	.4byte gMonFootprint_Tyranitar @ [SPECIES_TYRANITAR]
	.4byte gMonFootprint_Lugia @ [SPECIES_LUGIA]
	.4byte gMonFootprint_HoOh @ [SPECIES_HO_OH]
	.4byte 0x08CDD39C @ [SPECIES_CELEBI]
	.4byte gMonFootprint_OldUnownB @ [SPECIES_OLD_UNOWN_B]
	.4byte gMonFootprint_OldUnownC @ [SPECIES_OLD_UNOWN_C]
	.4byte gMonFootprint_OldUnownD @ [SPECIES_OLD_UNOWN_D]
	.4byte gMonFootprint_OldUnownE @ [SPECIES_OLD_UNOWN_E]
	.4byte gMonFootprint_OldUnownF @ [SPECIES_OLD_UNOWN_F]
	.4byte gMonFootprint_OldUnownG @ [SPECIES_OLD_UNOWN_G]
	.4byte gMonFootprint_OldUnownH @ [SPECIES_OLD_UNOWN_H]
	.4byte gMonFootprint_OldUnownI @ [SPECIES_OLD_UNOWN_I]
	.4byte gMonFootprint_OldUnownJ @ [SPECIES_OLD_UNOWN_J]
	.4byte gMonFootprint_OldUnownK @ [SPECIES_OLD_UNOWN_K]
	.4byte gMonFootprint_OldUnownL @ [SPECIES_OLD_UNOWN_L]
	.4byte gMonFootprint_OldUnownM @ [SPECIES_OLD_UNOWN_M]
	.4byte gMonFootprint_OldUnownN @ [SPECIES_OLD_UNOWN_N]
	.4byte gMonFootprint_OldUnownO @ [SPECIES_OLD_UNOWN_O]
	.4byte gMonFootprint_OldUnownP @ [SPECIES_OLD_UNOWN_P]
	.4byte gMonFootprint_OldUnownQ @ [SPECIES_OLD_UNOWN_Q]
	.4byte gMonFootprint_OldUnownR @ [SPECIES_OLD_UNOWN_R]
	.4byte gMonFootprint_OldUnownS @ [SPECIES_OLD_UNOWN_S]
	.4byte gMonFootprint_OldUnownT @ [SPECIES_OLD_UNOWN_T]
	.4byte gMonFootprint_OldUnownU @ [SPECIES_OLD_UNOWN_U]
	.4byte gMonFootprint_OldUnownV @ [SPECIES_OLD_UNOWN_V]
	.4byte gMonFootprint_OldUnownW @ [SPECIES_OLD_UNOWN_W]
	.4byte gMonFootprint_OldUnownX @ [SPECIES_OLD_UNOWN_X]
	.4byte gMonFootprint_OldUnownY @ [SPECIES_OLD_UNOWN_Y]
	.4byte gMonFootprint_OldUnownZ @ [SPECIES_OLD_UNOWN_Z]
	.4byte gMonFootprint_Treecko @ [SPECIES_TREECKO]
	.4byte gMonFootprint_Grovyle @ [SPECIES_GROVYLE]
	.4byte gMonFootprint_Sceptile @ [SPECIES_SCEPTILE]
	.4byte gMonFootprint_Torchic @ [SPECIES_TORCHIC]
	.4byte gMonFootprint_Combusken @ [SPECIES_COMBUSKEN]
	.4byte gMonFootprint_Blaziken @ [SPECIES_BLAZIKEN]
	.4byte gMonFootprint_Mudkip @ [SPECIES_MUDKIP]
	.4byte gMonFootprint_Marshtomp @ [SPECIES_MARSHTOMP]
	.4byte gMonFootprint_Swampert @ [SPECIES_SWAMPERT]
	.4byte gMonFootprint_Poochyena @ [SPECIES_POOCHYENA]
	.4byte gMonFootprint_Mightyena @ [SPECIES_MIGHTYENA]
	.4byte gMonFootprint_Zigzagoon @ [SPECIES_ZIGZAGOON]
	.4byte gMonFootprint_Linoone @ [SPECIES_LINOONE]
	.4byte gMonFootprint_Wurmple @ [SPECIES_WURMPLE]
	.4byte gMonFootprint_Silcoon @ [SPECIES_SILCOON]
	.4byte gMonFootprint_Beautifly @ [SPECIES_BEAUTIFLY]
	.4byte gMonFootprint_Cascoon @ [SPECIES_CASCOON]
	.4byte gMonFootprint_Dustox @ [SPECIES_DUSTOX]
	.4byte gMonFootprint_Lotad @ [SPECIES_LOTAD]
	.4byte gMonFootprint_Lombre @ [SPECIES_LOMBRE]
	.4byte gMonFootprint_Ludicolo @ [SPECIES_LUDICOLO]
	.4byte gMonFootprint_Seedot @ [SPECIES_SEEDOT]
	.4byte gMonFootprint_Nuzleaf @ [SPECIES_NUZLEAF]
	.4byte gMonFootprint_Shiftry @ [SPECIES_SHIFTRY]
	.4byte gMonFootprint_Nincada @ [SPECIES_NINCADA]
	.4byte gMonFootprint_Ninjask @ [SPECIES_NINJASK]
	.4byte gMonFootprint_Shedinja @ [SPECIES_SHEDINJA]
	.4byte gMonFootprint_Taillow @ [SPECIES_TAILLOW]
	.4byte gMonFootprint_Swellow @ [SPECIES_SWELLOW]
	.4byte gMonFootprint_Shroomish @ [SPECIES_SHROOMISH]
	.4byte gMonFootprint_Breloom @ [SPECIES_BRELOOM]
	.4byte gMonFootprint_Spinda @ [SPECIES_SPINDA]
	.4byte gMonFootprint_Wingull @ [SPECIES_WINGULL]
	.4byte gMonFootprint_Pelipper @ [SPECIES_PELIPPER]
	.4byte gMonFootprint_Surskit @ [SPECIES_SURSKIT]
	.4byte gMonFootprint_Masquerain @ [SPECIES_MASQUERAIN]
	.4byte gMonFootprint_Wailmer @ [SPECIES_WAILMER]
	.4byte gMonFootprint_Wailord @ [SPECIES_WAILORD]
	.4byte gMonFootprint_Skitty @ [SPECIES_SKITTY]
	.4byte gMonFootprint_Delcatty @ [SPECIES_DELCATTY]
	.4byte gMonFootprint_Kecleon @ [SPECIES_KECLEON]
	.4byte gMonFootprint_Baltoy @ [SPECIES_BALTOY]
	.4byte gMonFootprint_Claydol @ [SPECIES_CLAYDOL]
	.4byte gMonFootprint_Nosepass @ [SPECIES_NOSEPASS]
	.4byte gMonFootprint_Torkoal @ [SPECIES_TORKOAL]
	.4byte gMonFootprint_Sableye @ [SPECIES_SABLEYE]
	.4byte gMonFootprint_Barboach @ [SPECIES_BARBOACH]
	.4byte gMonFootprint_Whiscash @ [SPECIES_WHISCASH]
	.4byte gMonFootprint_Luvdisc @ [SPECIES_LUVDISC]
	.4byte gMonFootprint_Corphish @ [SPECIES_CORPHISH]
	.4byte gMonFootprint_Crawdaunt @ [SPECIES_CRAWDAUNT]
	.4byte gMonFootprint_Feebas @ [SPECIES_FEEBAS]
	.4byte gMonFootprint_Milotic @ [SPECIES_MILOTIC]
	.4byte gMonFootprint_Carvanha @ [SPECIES_CARVANHA]
	.4byte gMonFootprint_Sharpedo @ [SPECIES_SHARPEDO]
	.4byte gMonFootprint_Trapinch @ [SPECIES_TRAPINCH]
	.4byte gMonFootprint_Vibrava @ [SPECIES_VIBRAVA]
	.4byte gMonFootprint_Flygon @ [SPECIES_FLYGON]
	.4byte gMonFootprint_Makuhita @ [SPECIES_MAKUHITA]
	.4byte gMonFootprint_Hariyama @ [SPECIES_HARIYAMA]
	.4byte gMonFootprint_Electrike @ [SPECIES_ELECTRIKE]
	.4byte gMonFootprint_Manectric @ [SPECIES_MANECTRIC]
	.4byte gMonFootprint_Numel @ [SPECIES_NUMEL]
	.4byte gMonFootprint_Camerupt @ [SPECIES_CAMERUPT]
	.4byte gMonFootprint_Spheal @ [SPECIES_SPHEAL]
	.4byte gMonFootprint_Sealeo @ [SPECIES_SEALEO]
	.4byte gMonFootprint_Walrein @ [SPECIES_WALREIN]
	.4byte gMonFootprint_Cacnea @ [SPECIES_CACNEA]
	.4byte gMonFootprint_Cacturne @ [SPECIES_CACTURNE]
	.4byte gMonFootprint_Snorunt @ [SPECIES_SNORUNT]
	.4byte gMonFootprint_Glalie @ [SPECIES_GLALIE]
	.4byte gMonFootprint_Lunatone @ [SPECIES_LUNATONE]
	.4byte gMonFootprint_Solrock @ [SPECIES_SOLROCK]
	.4byte gMonFootprint_Azurill @ [SPECIES_AZURILL]
	.4byte gMonFootprint_Spoink @ [SPECIES_SPOINK]
	.4byte gMonFootprint_Grumpig @ [SPECIES_GRUMPIG]
	.4byte gMonFootprint_Plusle @ [SPECIES_PLUSLE]
	.4byte gMonFootprint_Minun @ [SPECIES_MINUN]
	.4byte gMonFootprint_Mawile @ [SPECIES_MAWILE]
	.4byte gMonFootprint_Meditite @ [SPECIES_MEDITITE]
	.4byte gMonFootprint_Medicham @ [SPECIES_MEDICHAM]
	.4byte gMonFootprint_Swablu @ [SPECIES_SWABLU]
	.4byte gMonFootprint_Altaria @ [SPECIES_ALTARIA]
	.4byte gMonFootprint_Wynaut @ [SPECIES_WYNAUT]
	.4byte gMonFootprint_Duskull @ [SPECIES_DUSKULL]
	.4byte gMonFootprint_Dusclops @ [SPECIES_DUSCLOPS]
	.4byte gMonFootprint_Roselia @ [SPECIES_ROSELIA]
	.4byte gMonFootprint_Slakoth @ [SPECIES_SLAKOTH]
	.4byte gMonFootprint_Vigoroth @ [SPECIES_VIGOROTH]
	.4byte gMonFootprint_Slaking @ [SPECIES_SLAKING]
	.4byte gMonFootprint_Gulpin @ [SPECIES_GULPIN]
	.4byte gMonFootprint_Swalot @ [SPECIES_SWALOT]
	.4byte gMonFootprint_Tropius @ [SPECIES_TROPIUS]
	.4byte gMonFootprint_Whismur @ [SPECIES_WHISMUR]
	.4byte gMonFootprint_Loudred @ [SPECIES_LOUDRED]
	.4byte gMonFootprint_Exploud @ [SPECIES_EXPLOUD]
	.4byte gMonFootprint_Clamperl @ [SPECIES_CLAMPERL]
	.4byte gMonFootprint_Huntail @ [SPECIES_HUNTAIL]
	.4byte gMonFootprint_Gorebyss @ [SPECIES_GOREBYSS]
	.4byte gMonFootprint_Absol @ [SPECIES_ABSOL]
	.4byte gMonFootprint_Shuppet @ [SPECIES_SHUPPET]
	.4byte gMonFootprint_Banette @ [SPECIES_BANETTE]
	.4byte gMonFootprint_Seviper @ [SPECIES_SEVIPER]
	.4byte gMonFootprint_Zangoose @ [SPECIES_ZANGOOSE]
	.4byte gMonFootprint_Relicanth @ [SPECIES_RELICANTH]
	.4byte gMonFootprint_Aron @ [SPECIES_ARON]
	.4byte gMonFootprint_Lairon @ [SPECIES_LAIRON]
	.4byte gMonFootprint_Aggron @ [SPECIES_AGGRON]
	.4byte gMonFootprint_CastformNormal @ [SPECIES_CASTFORM_NORMAL]
	.4byte gMonFootprint_Volbeat @ [SPECIES_VOLBEAT]
	.4byte gMonFootprint_Illumise @ [SPECIES_ILLUMISE]
	.4byte gMonFootprint_Lileep @ [SPECIES_LILEEP]
	.4byte gMonFootprint_Cradily @ [SPECIES_CRADILY]
	.4byte gMonFootprint_Anorith @ [SPECIES_ANORITH]
	.4byte gMonFootprint_Armaldo @ [SPECIES_ARMALDO]
	.4byte gMonFootprint_Ralts @ [SPECIES_RALTS]
	.4byte gMonFootprint_Kirlia @ [SPECIES_KIRLIA]
	.4byte gMonFootprint_Gardevoir @ [SPECIES_GARDEVOIR]
	.4byte gMonFootprint_Bagon @ [SPECIES_BAGON]
	.4byte gMonFootprint_Shelgon @ [SPECIES_SHELGON]
	.4byte gMonFootprint_Salamence @ [SPECIES_SALAMENCE]
	.4byte gMonFootprint_Beldum @ [SPECIES_BELDUM]
	.4byte gMonFootprint_Metang @ [SPECIES_METANG]
	.4byte gMonFootprint_Metagross @ [SPECIES_METAGROSS]
	.4byte gMonFootprint_Regirock @ [SPECIES_REGIROCK]
	.4byte gMonFootprint_Regice @ [SPECIES_REGICE]
	.4byte gMonFootprint_Registeel @ [SPECIES_REGISTEEL]
	.4byte gMonFootprint_Kyogre @ [SPECIES_KYOGRE]
	.4byte gMonFootprint_Groudon @ [SPECIES_GROUDON]
	.4byte gMonFootprint_Rayquaza @ [SPECIES_RAYQUAZA]
	.4byte gMonFootprint_Latias @ [SPECIES_LATIAS]
	.4byte gMonFootprint_Latios @ [SPECIES_LATIOS]
	.4byte gMonFootprint_Jirachi @ [SPECIES_JIRACHI]
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
	@ semantic exact asset for 0x0854385C: Pokedex search-menu graphics
	.globl gPokedexSearchMenu_Gfx
gPokedexSearchMenu_Gfx:
	.incbin "build/graphics/pokedex/search_menu.4bpp.lz"
	.if (. - gPokedexSearchMenu_Gfx) != 0x58C
	.error "gPokedexSearchMenu_Gfx compressed size mismatch"
	.endif
	@ semantic exact asset for 0x08543DE8: National Pokedex search-menu tilemap
	.globl gPokedexSearchMenuNational_Tilemap
gPokedexSearchMenuNational_Tilemap:
	.incbin "build/graphics/pokedex/search_menu_national.bin.lz"
	.if (. - gPokedexSearchMenuNational_Tilemap) != 0x19C
	.error "gPokedexSearchMenuNational_Tilemap compressed size mismatch"
	.endif
	@ semantic exact asset for 0x08543F84: gPokedexSearchMenuHoenn_Tilemap
	.globl gPokedexSearchMenuHoenn_Tilemap
gPokedexSearchMenuHoenn_Tilemap:
	.incbin "build/graphics/pokedex/search_menu_hoenn.bin.lz"
	.if (. - gPokedexSearchMenuHoenn_Tilemap) != 0x188
	.error "gPokedexSearchMenuHoenn_Tilemap compressed size mismatch"
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
	.globl gPokemonPointerTable_Rom_544210
gPokemonPointerTable_Rom_544210: @ 0x08544210
	.4byte gText_Rom_5C91A7
	.4byte gText_Rom_5C9103
	.4byte gText_Rom_5C91BA
	.4byte gText_Rom_5C910C
	.4byte NULL
	.4byte NULL
	.globl gPokemonPointerTable_Rom_544228
gPokemonPointerTable_Rom_544228: @ 0x08544228
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
	.globl gPokemonDataBlock_Rom_5443B2
gPokemonDataBlock_Rom_5443B2: @ 0x085443B2
	.space 0x1, 0x00
