	.set MON_ICON_PAL_0, 0
	.set MON_ICON_PAL_1, 1
	.set MON_ICON_PAL_2, 2
	.set MON_ICON_PAL_3, 3
	.set MON_ICON_PAL_4, 4
	.set MON_ICON_PAL_5, 5

	.globl gMonIconPalette0
gMonIconPalette0: @ 0x085567A4
	.incbin "build/graphics/pokemon/icon/icon_palette_0.gbapal"

	.globl gMonIconPalette1
gMonIconPalette1: @ 0x085567C4
	.incbin "build/graphics/pokemon/icon/icon_palette_1.gbapal"

	.globl gMonIconPalette2
gMonIconPalette2: @ 0x085567E4
	.incbin "build/graphics/pokemon/icon/icon_palette_2.gbapal"

	.globl gMonIconPalette3
	.globl gMonIconTable
gMonIconPalette3:
gMonIconTable: @ 0x08556804
	.4byte gMonIcon_None 			 @ [000] ROM 0xC30044
	.4byte gMonIcon_Bulbasaur  @ [001] ROM 0xC30044
	.4byte gMonIcon_Ivysaur    @ [002] ROM 0xC30BB4
	.4byte gMonIcon_Venusaur   @ [003] ROM 0xC31A80
	.4byte gMonIcon_Charmander @ [004] ROM 0xC32434
	.4byte gMonIcon_Charmeleon @ [005] ROM 0xC32F2C
	.4byte gMonIcon_Charizard  @ [006] ROM 0xC33D08
	.4byte gMonIcon_Squirtle   @ [007] ROM 0xC346D4

	.globl gMonIconPalette4
gMonIconPalette4: @ 0x08556824
	.4byte gMonIcon_Wartortle  @ [008] ROM 0x556824 -> 0xC351F4
	.4byte gMonIcon_Blastoise  @ [009] ROM 0x556828 -> 0xC35F84
	.4byte gMonIcon_Caterpie   @ [010] ROM 0x55682C -> 0xC368DC
	.4byte gMonIcon_Metapod 	 @ [011] ROM 0x556830 -> 0xC37194
	.4byte gMonIcon_Butterfree @ [012] ROM 0x556834 -> 0xC37D74
	.4byte gMonIcon_Weedle 		 @ [013] ROM 0x556838 -> 0xC3868C
	.4byte gMonIcon_Kakuna 		 @ [014] ROM 0x55683C -> 0xC38FC4
	.4byte gMonIcon_Beedrill   @ [015] ROM 0x556840 -> 0xC39BB8

	.globl gMonIconPalette5
gMonIconPalette5: @ 0x08556844
	.4byte gMonIcon_Pidgey @ [016] ROM 0x556844 -> 0xC3A668
	.4byte gMonIcon_Pidgeotto @ [017] ROM 0x556848 -> 0xC3B198
	.4byte gMonIcon_Pidgeot @ [018] ROM 0x55684C -> 0xC3BE8C
	.4byte gMonIcon_Rattata @ [019] ROM 0x556850 -> 0xC3C824
	.4byte gMonIcon_Raticate @ [020] ROM 0x556854 -> 0xC3D34C
	.4byte gMonIcon_Spearow @ [021] ROM 0x556858 -> 0xC3DD20
	.4byte gMonIcon_Fearow @ [022] ROM 0x55685C -> 0xC3E91C
	.4byte gMonIcon_Ekans @ [023] ROM 0x556860 -> 0xC3F37C
	.4byte gMonIcon_Arbok @ [024] ROM 0x556864 -> 0xC3FED8
	.4byte gMonIcon_Pikachu @ [025] ROM 0x556868 -> 0xC408F0
	.4byte gMonIcon_Raichu @ [026] ROM 0x55686C -> 0xC4142C
	.4byte gMonIcon_Sandshrew @ [027] ROM 0x556870 -> 0xC41E84
	.4byte gMonIcon_Sandslash @ [028] ROM 0x556874 -> 0xC42AFC
	.4byte gMonIcon_NidoranF @ [029] ROM 0x556878 -> 0xC434BC
	.4byte gMonIcon_Nidorina @ [030] ROM 0x55687C -> 0xC43FEC
	.4byte gMonIcon_Nidoqueen @ [031] ROM 0x556880 -> 0xC44CAC
	.4byte gMonIcon_NidoranM @ [032] ROM 0x556884 -> 0xC45720
	.4byte gMonIcon_Nidorino @ [033] ROM 0x556888 -> 0xC462E0
	.4byte gMonIcon_Nidoking @ [034] ROM 0x55688C -> 0xC47084
	.4byte gMonIcon_Clefairy @ [035] ROM 0x556890 -> 0xC47A4C
	.4byte gMonIcon_Clefable @ [036] ROM 0x556894 -> 0xC48530
	.4byte gMonIcon_Vulpix @ [037] ROM 0x556898 -> 0xC48FD8
	.4byte gMonIcon_Ninetales @ [038] ROM 0x55689C -> 0xC49BF4
	.4byte gMonIcon_Jigglypuff @ [039] ROM 0x5568A0 -> 0xC4A538
	.4byte gMonIcon_Wigglytuff @ [040] ROM 0x5568A4 -> 0xC4AFA4
	.4byte gMonIcon_Zubat @ [041] ROM 0x5568A8 -> 0xC4B9A8
	.4byte gMonIcon_Golbat @ [042] ROM 0x5568AC -> 0xC4C470
	.4byte gMonIcon_Oddish @ [043] ROM 0x5568B0 -> 0xC4CD8C
	.4byte gMonIcon_Gloom @ [044] ROM 0x5568B4 -> 0xC4D8DC
	.4byte gMonIcon_Vileplume @ [045] ROM 0x5568B8 -> 0xC4E4E0
	.4byte gMonIcon_Paras @ [046] ROM 0x5568BC -> 0xC4EE5C
	.4byte gMonIcon_Parasect @ [047] ROM 0x5568C0 -> 0xC4F98C
	.4byte gMonIcon_Venonat @ [048] ROM 0x5568C4 -> 0xC504A4
	.4byte gMonIcon_Venomoth @ [049] ROM 0x5568C8 -> 0xC5117C
	.4byte gMonIcon_Diglett @ [050] ROM 0x5568CC -> 0xC51A04
	.4byte gMonIcon_Dugtrio @ [051] ROM 0x5568D0 -> 0xC52444
	.4byte gMonIcon_Meowth @ [052] ROM 0x5568D4 -> 0xC52E84
	.4byte gMonIcon_Persian @ [053] ROM 0x5568D8 -> 0xC53A0C
	.4byte gMonIcon_Psyduck @ [054] ROM 0x5568DC -> 0xC543F0
	.4byte gMonIcon_Golduck @ [055] ROM 0x5568E0 -> 0xC54F64
	.4byte gMonIcon_Mankey @ [056] ROM 0x5568E4 -> 0xC55A54
	.4byte gMonIcon_Primeape @ [057] ROM 0x5568E8 -> 0xC565E4
	.4byte gMonIcon_Growlithe @ [058] ROM 0x5568EC -> 0xC570E8
	.4byte gMonIcon_Arcanine @ [059] ROM 0x5568F0 -> 0xC57E6C
	.4byte gMonIcon_Poliwag @ [060] ROM 0x5568F4 -> 0xC587D4
	.4byte gMonIcon_Poliwhirl @ [061] ROM 0x5568F8 -> 0xC592C8
	.4byte gMonIcon_Poliwrath @ [062] ROM 0x5568FC -> 0xC59E20
	.4byte gMonIcon_Abra @ [063] ROM 0x556900 -> 0xC5A880
	.4byte gMonIcon_Kadabra @ [064] ROM 0x556904 -> 0xC5B530
	.4byte gMonIcon_Alakazam @ [065] ROM 0x556908 -> 0xC5C1E0
	.4byte gMonIcon_Machop @ [066] ROM 0x55690C -> 0xC5CBD4
	.4byte gMonIcon_Machoke @ [067] ROM 0x556910 -> 0xC5D744
	.4byte gMonIcon_Machamp @ [068] ROM 0x556914 -> 0xC5E560
	.4byte gMonIcon_Bellsprout @ [069] ROM 0x556918 -> 0xC5EEEC
	.4byte gMonIcon_Weepinbell @ [070] ROM 0x55691C -> 0xC5F97C
	.4byte gMonIcon_Victreebel @ [071] ROM 0x556920 -> 0xC605B0
	.4byte gMonIcon_Tentacool @ [072] ROM 0x556924 -> 0xC60F8C
	.4byte gMonIcon_Tentacruel @ [073] ROM 0x556928 -> 0xC61C34
	.4byte gMonIcon_Geodude @ [074] ROM 0x55692C -> 0xC6258C
	.4byte gMonIcon_Graveler @ [075] ROM 0x556930 -> 0xC63070
	.4byte gMonIcon_Golem @ [076] ROM 0x556934 -> 0xC63C1C
	.4byte gMonIcon_Ponyta @ [077] ROM 0x556938 -> 0xC64770
	.4byte gMonIcon_Rapidash @ [078] ROM 0x55693C -> 0xC654C0
	.4byte gMonIcon_Slowpoke @ [079] ROM 0x556940 -> 0xC65EA0
	.4byte gMonIcon_Slowbro @ [080] ROM 0x556944 -> 0xC66B6C
	.4byte gMonIcon_Magnemite @ [081] ROM 0x556948 -> 0xC67398
	.4byte gMonIcon_Magneton @ [082] ROM 0x55694C -> 0xC67F8C
	.4byte gMonIcon_Farfetchd @ [083] ROM 0x556950 -> 0xC68AE4
	.4byte gMonIcon_Doduo @ [084] ROM 0x556954 -> 0xC695B8
	.4byte gMonIcon_Dodrio @ [085] ROM 0x556958 -> 0xC6A368
	.4byte gMonIcon_Seel @ [086] ROM 0x55695C -> 0xC6ADCC
	.4byte gMonIcon_Dewgong @ [087] ROM 0x556960 -> 0xC6B888
	.4byte gMonIcon_Grimer @ [088] ROM 0x556964 -> 0xC6C2F0
	.4byte gMonIcon_Muk @ [089] ROM 0x556968 -> 0xC6CEFC
	.4byte gMonIcon_Shellder @ [090] ROM 0x55696C -> 0xC6D8E0
	.4byte gMonIcon_Cloyster @ [091] ROM 0x556970 -> 0xC6E58C
	.4byte gMonIcon_Gastly @ [092] ROM 0x556974 -> 0xC6F0D8
	.4byte gMonIcon_Haunter @ [093] ROM 0x556978 -> 0xC6FC68
	.4byte gMonIcon_Gengar @ [094] ROM 0x55697C -> 0xC70754
	.4byte gMonIcon_Onix @ [095] ROM 0x556980 -> 0xC713A0
	.4byte gMonIcon_Drowzee @ [096] ROM 0x556984 -> 0xC71DDC
	.4byte gMonIcon_Hypno @ [097] ROM 0x556988 -> 0xC72960
	.4byte gMonIcon_Krabby @ [098] ROM 0x55698C -> 0xC73414
	.4byte gMonIcon_Kingler @ [099] ROM 0x556990 -> 0xC74134
	.4byte gMonIcon_Voltorb @ [100] ROM 0x556994 -> 0xC74A18
	.4byte gMonIcon_Electrode @ [101] ROM 0x556998 -> 0xC7535C
	.4byte gMonIcon_Exeggcute @ [102] ROM 0x55699C -> 0xC75ED0
	.4byte gMonIcon_Exeggutor @ [103] ROM 0x5569A0 -> 0xC76CE0
	.4byte gMonIcon_Cubone @ [104] ROM 0x5569A4 -> 0xC77760
	.4byte gMonIcon_Marowak @ [105] ROM 0x5569A8 -> 0xC782A0
	.4byte gMonIcon_Hitmonlee @ [106] ROM 0x5569AC -> 0xC78DB4
	.4byte gMonIcon_Hitmonchan @ [107] ROM 0x5569B0 -> 0xC798A8
	.4byte gMonIcon_Lickitung @ [108] ROM 0x5569B4 -> 0xC7A390
	.4byte gMonIcon_Koffing @ [109] ROM 0x5569B8 -> 0xC7AE5C
	.4byte gMonIcon_Weezing @ [110] ROM 0x5569BC -> 0xC7BA84
	.4byte gMonIcon_Rhyhorn @ [111] ROM 0x5569C0 -> 0xC7C630
	.4byte gMonIcon_Rhydon @ [112] ROM 0x5569C4 -> 0xC7D3F8
	.4byte gMonIcon_Chansey @ [113] ROM 0x5569C8 -> 0xC7DE88
	.4byte gMonIcon_Tangela @ [114] ROM 0x5569CC -> 0xC7EA70
	.4byte gMonIcon_Kangaskhan @ [115] ROM 0x5569D0 -> 0xC7F808
	.4byte gMonIcon_Horsea @ [116] ROM 0x5569D4 -> 0xC801D0
	.4byte gMonIcon_Seadra @ [117] ROM 0x5569D8 -> 0xC80DA0
	.4byte gMonIcon_Goldeen @ [118] ROM 0x5569DC -> 0xC818E8
	.4byte gMonIcon_Seaking @ [119] ROM 0x5569E0 -> 0xC8251C
	.4byte gMonIcon_Staryu @ [120] ROM 0x5569E4 -> 0xC82EFC
	.4byte gMonIcon_Starmie @ [121] ROM 0x5569E8 -> 0xC83A38
	.4byte gMonIcon_MrMime @ [122] ROM 0x5569EC -> 0xC8458C
	.4byte gMonIcon_Scyther @ [123] ROM 0x5569F0 -> 0xC85250
	.4byte gMonIcon_Jynx @ [124] ROM 0x5569F4 -> 0xC85E54
	.4byte gMonIcon_Electabuzz @ [125] ROM 0x5569F8 -> 0xC86A50
	.4byte gMonIcon_Magmar @ [126] ROM 0x5569FC -> 0xC876B0
	.4byte gMonIcon_Pinsir @ [127] ROM 0x556A00 -> 0xC88294
	.4byte gMonIcon_Tauros @ [128] ROM 0x556A04 -> 0xC88E88
	.4byte gMonIcon_Magikarp @ [129] ROM 0x556A08 -> 0xC89978
	.4byte gMonIcon_Gyarados @ [130] ROM 0x556A0C -> 0xC8A824
	.4byte gMonIcon_Lapras @ [131] ROM 0x556A10 -> 0xC8B398
	.4byte gMonIcon_Ditto @ [132] ROM 0x556A14 -> 0xC8BBE8
	.4byte gMonIcon_Eevee @ [133] ROM 0x556A18 -> 0xC8C61C
	.4byte gMonIcon_Vaporeon @ [134] ROM 0x556A1C -> 0xC8D0E8
	.4byte gMonIcon_Jolteon @ [135] ROM 0x556A20 -> 0xC8DC88
	.4byte gMonIcon_Flareon @ [136] ROM 0x556A24 -> 0xC8E804
	.4byte gMonIcon_Porygon @ [137] ROM 0x556A28 -> 0xC8F1E0
	.4byte gMonIcon_Omanyte @ [138] ROM 0x556A2C -> 0xC8FC44
	.4byte gMonIcon_Omastar @ [139] ROM 0x556A30 -> 0xC907B4
	.4byte gMonIcon_Kabuto @ [140] ROM 0x556A34 -> 0xC9112C
	.4byte gMonIcon_Kabutops @ [141] ROM 0x556A38 -> 0xC91D38
	.4byte gMonIcon_Aerodactyl @ [142] ROM 0x556A3C -> 0xC9292C
	.4byte gMonIcon_Snorlax @ [143] ROM 0x556A40 -> 0xC933FC
	.4byte gMonIcon_Articuno @ [144] ROM 0x556A44 -> 0xC93FC0
	.4byte gMonIcon_Zapdos @ [145] ROM 0x556A48 -> 0xC94BE0
	.4byte gMonIcon_Moltres @ [146] ROM 0x556A4C -> 0xC9593C
	.4byte gMonIcon_Dratini @ [147] ROM 0x556A50 -> 0xC962EC
	.4byte gMonIcon_Dragonair @ [148] ROM 0x556A54 -> 0xC96DCC
	.4byte gMonIcon_Dragonite @ [149] ROM 0x556A58 -> 0xC97AA8
	.4byte gMonIcon_Mewtwo @ [150] ROM 0x556A5C -> 0xC98718
	.4byte gMonIcon_Mew @ [151] ROM 0x556A60 -> 0xC990CC
	.4byte gMonIcon_Chikorita @ [152] ROM 0x556A64 -> 0xC99A68
	.4byte gMonIcon_Bayleef @ [153] ROM 0x556A68 -> 0xC9A63C
	.4byte gMonIcon_Meganium @ [154] ROM 0x556A6C -> 0xC9B358
	.4byte gMonIcon_Cyndaquil @ [155] ROM 0x556A70 -> 0xC9BD80
	.4byte gMonIcon_Quilava @ [156] ROM 0x556A74 -> 0xC9C880
	.4byte gMonIcon_Typhlosion @ [157] ROM 0x556A78 -> 0xC9D51C
	.4byte gMonIcon_Totodile @ [158] ROM 0x556A7C -> 0xC9DF10
	.4byte gMonIcon_Croconaw @ [159] ROM 0x556A80 -> 0xC9EA38
	.4byte gMonIcon_Feraligatr @ [160] ROM 0x556A84 -> 0xC9F8E0
	.4byte gMonIcon_Sentret @ [161] ROM 0x556A88 -> 0xCA02D0
	.4byte gMonIcon_Furret @ [162] ROM 0x556A8C -> 0xCA0D9C
	.4byte gMonIcon_Hoothoot @ [163] ROM 0x556A90 -> 0xCA1798
	.4byte gMonIcon_Noctowl @ [164] ROM 0x556A94 -> 0xCA22B8
	.4byte gMonIcon_Ledyba @ [165] ROM 0x556A98 -> 0xCA2D4C
	.4byte gMonIcon_Ledian @ [166] ROM 0x556A9C -> 0xCA389C
	.4byte gMonIcon_Spinarak @ [167] ROM 0x556AA0 -> 0xCA41E4
	.4byte gMonIcon_Ariados @ [168] ROM 0x556AA4 -> 0xCA4D8C
	.4byte gMonIcon_Crobat @ [169] ROM 0x556AA8 -> 0xCA58B4
	.4byte gMonIcon_Chinchou @ [170] ROM 0x556AAC -> 0xCA62F4
	.4byte gMonIcon_Lanturn @ [171] ROM 0x556AB0 -> 0xCA6DD4
	.4byte gMonIcon_Pichu @ [172] ROM 0x556AB4 -> 0xCA76BC
	.4byte gMonIcon_Cleffa @ [173] ROM 0x556AB8 -> 0xCA7F48
	.4byte gMonIcon_Igglybuff @ [174] ROM 0x556ABC -> 0xCA87DC
	.4byte gMonIcon_Togepi @ [175] ROM 0x556AC0 -> 0xCA9094
	.4byte gMonIcon_Togetic @ [176] ROM 0x556AC4 -> 0xCA9AA4
	.4byte gMonIcon_Natu @ [177] ROM 0x556AC8 -> 0xCAA2F4
	.4byte gMonIcon_Xatu @ [178] ROM 0x556ACC -> 0xCAADB8
	.4byte gMonIcon_Mareep @ [179] ROM 0x556AD0 -> 0xCAB7D0
	.4byte gMonIcon_Flaaffy @ [180] ROM 0x556AD4 -> 0xCAC25C
	.4byte gMonIcon_Ampharos @ [181] ROM 0x556AD8 -> 0xCACDA0
	.4byte gMonIcon_Bellossom @ [182] ROM 0x556ADC -> 0xCAD7A4
	.4byte gMonIcon_Marill @ [183] ROM 0x556AE0 -> 0xCAE184
	.4byte gMonIcon_Azumarill @ [184] ROM 0x556AE4 -> 0xCAEBB0
	.4byte gMonIcon_Sudowoodo @ [185] ROM 0x556AE8 -> 0xCAF694
	.4byte gMonIcon_Politoed @ [186] ROM 0x556AEC -> 0xCB00FC
	.4byte gMonIcon_Hoppip @ [187] ROM 0x556AF0 -> 0xCB0B00
	.4byte gMonIcon_Skiploom @ [188] ROM 0x556AF4 -> 0xCB14D8
	.4byte gMonIcon_Jumpluff @ [189] ROM 0x556AF8 -> 0xCB20AC
	.4byte gMonIcon_Aipom @ [190] ROM 0x556AFC -> 0xCB2B0C
	.4byte gMonIcon_Sunkern @ [191] ROM 0x556B00 -> 0xCB3478
	.4byte gMonIcon_Sunflora @ [192] ROM 0x556B04 -> 0xCB3FE0
	.4byte gMonIcon_Yanma @ [193] ROM 0x556B08 -> 0xCB4B88
	.4byte gMonIcon_Wooper @ [194] ROM 0x556B0C -> 0xCB54C4
	.4byte gMonIcon_Quagsire @ [195] ROM 0x556B10 -> 0xCB5FA4
	.4byte gMonIcon_Espeon @ [196] ROM 0x556B14 -> 0xCB6A28
	.4byte gMonIcon_Umbreon @ [197] ROM 0x556B18 -> 0xCB74C0
	.4byte gMonIcon_Murkrow @ [198] ROM 0x556B1C -> 0xCB7F28
	.4byte gMonIcon_Slowking @ [199] ROM 0x556B20 -> 0xCB8AD8
	.4byte gMonIcon_Misdreavus @ [200] ROM 0x556B24 -> 0xCB952C
	.4byte gMonIcon_Unown @ [201] ROM 0x556B28 -> 0xCB9D60
	.4byte gMonIcon_Wobbuffet @ [202] ROM 0x556B2C -> 0xCBA764
	.4byte gMonIcon_Girafarig @ [203] ROM 0x556B30 -> 0xCBB384
	.4byte gMonIcon_Pineco @ [204] ROM 0x556B34 -> 0xCBBE04
	.4byte gMonIcon_Forretress @ [205] ROM 0x556B38 -> 0xCBC950
	.4byte gMonIcon_Dunsparce @ [206] ROM 0x556B3C -> 0xCBD3CC
	.4byte gMonIcon_Gligar @ [207] ROM 0x556B40 -> 0xCBE03C
	.4byte gMonIcon_Steelix @ [208] ROM 0x556B44 -> 0xCBED78
	.4byte gMonIcon_Snubbull @ [209] ROM 0x556B48 -> 0xCBF7E4
	.4byte gMonIcon_Granbull @ [210] ROM 0x556B4C -> 0xCC0304
	.4byte gMonIcon_Qwilfish @ [211] ROM 0x556B50 -> 0xCC0D14
	.4byte gMonIcon_Scizor @ [212] ROM 0x556B54 -> 0xCC19EC
	.4byte gMonIcon_Shuckle @ [213] ROM 0x556B58 -> 0xCC237C
	.4byte gMonIcon_Heracross @ [214] ROM 0x556B5C -> 0xCC2F4C
	.4byte gMonIcon_Sneasel @ [215] ROM 0x556B60 -> 0xCC3A24
	.4byte gMonIcon_Teddiursa @ [216] ROM 0x556B64 -> 0xCC4378
	.4byte gMonIcon_Ursaring @ [217] ROM 0x556B68 -> 0xCC4FA8
	.4byte gMonIcon_Slugma @ [218] ROM 0x556B6C -> 0xCC596C
	.4byte gMonIcon_Magcargo @ [219] ROM 0x556B70 -> 0xCC653C
	.4byte gMonIcon_Swinub @ [220] ROM 0x556B74 -> 0xCC6DE4
	.4byte gMonIcon_Piloswine @ [221] ROM 0x556B78 -> 0xCC77C8
	.4byte gMonIcon_Corsola @ [222] ROM 0x556B7C -> 0xCC81E0
	.4byte gMonIcon_Remoraid @ [223] ROM 0x556B80 -> 0xCC8BCC
	.4byte gMonIcon_Octillery @ [224] ROM 0x556B84 -> 0xCC9628
	.4byte gMonIcon_Delibird @ [225] ROM 0x556B88 -> 0xCCA1C8
	.4byte gMonIcon_Mantine @ [226] ROM 0x556B8C -> 0xCCAD74
	.4byte gMonIcon_Skarmory @ [227] ROM 0x556B90 -> 0xCCB9C8
	.4byte gMonIcon_Houndour @ [228] ROM 0x556B94 -> 0xCCC370
	.4byte gMonIcon_Houndoom @ [229] ROM 0x556B98 -> 0xCCCF04
	.4byte gMonIcon_Kingdra @ [230] ROM 0x556B9C -> 0xCCDB48
	.4byte gMonIcon_Phanpy @ [231] ROM 0x556BA0 -> 0xCCE4D8
	.4byte gMonIcon_Donphan @ [232] ROM 0x556BA4 -> 0xCCF0B8
	.4byte gMonIcon_Porygon2 @ [233] ROM 0x556BA8 -> 0xCCFACC
	.4byte gMonIcon_Stantler @ [234] ROM 0x556BAC -> 0xCD069C
	.4byte gMonIcon_Smeargle @ [235] ROM 0x556BB0 -> 0xCD11C4
	.4byte gMonIcon_Tyrogue @ [236] ROM 0x556BB4 -> 0xCD1BDC
	.4byte gMonIcon_Hitmontop @ [237] ROM 0x556BB8 -> 0xCD2800
	.4byte gMonIcon_Smoochum @ [238] ROM 0x556BBC -> 0xCD3140
	.4byte gMonIcon_Elekid @ [239] ROM 0x556BC0 -> 0xCD3C10
	.4byte gMonIcon_Magby @ [240] ROM 0x556BC4 -> 0xCD45B0
	.4byte gMonIcon_Miltank @ [241] ROM 0x556BC8 -> 0xCD516C
	.4byte gMonIcon_Blissey @ [242] ROM 0x556BCC -> 0xCD5C90
	.4byte gMonIcon_Raikou @ [243] ROM 0x556BD0 -> 0xCD6A24
	.4byte gMonIcon_Entei @ [244] ROM 0x556BD4 -> 0xCD78B4
	.4byte gMonIcon_Suicune @ [245] ROM 0x556BD8 -> 0xCD8784
	.4byte gMonIcon_Larvitar @ [246] ROM 0x556BDC -> 0xCD90FC
	.4byte gMonIcon_Pupitar @ [247] ROM 0x556BE0 -> 0xCD9B94
	.4byte gMonIcon_Tyranitar @ [248] ROM 0x556BE4 -> 0xCDA92C
	.4byte gMonIcon_Lugia @ [249] ROM 0x556BE8 -> 0xCDB634
	.4byte gMonIcon_HoOh @ [250] ROM 0x556BEC -> 0xCDC508
	.4byte gMonIcon_Celebi @ [251] ROM 0x556BF0 -> 0xCDCF9C
	.4byte gMonIcon_OldUnownB @ [252] ROM 0x556BF4 -> 0xD77574
	.4byte gMonIcon_OldUnownC @ [253] ROM 0x556BF8 -> 0xD77574
	.4byte gMonIcon_OldUnownD @ [254] ROM 0x556BFC -> 0xD77574
	.4byte gMonIcon_OldUnownE @ [255] ROM 0x556C00 -> 0xD77574
	.4byte gMonIcon_OldUnownF @ [256] ROM 0x556C04 -> 0xD77574
	.4byte gMonIcon_OldUnownG @ [257] ROM 0x556C08 -> 0xD77574
	.4byte gMonIcon_OldUnownH @ [258] ROM 0x556C0C -> 0xD77574
	.4byte gMonIcon_OldUnownI @ [259] ROM 0x556C10 -> 0xD77574
	.4byte gMonIcon_OldUnownJ @ [260] ROM 0x556C14 -> 0xD77574
	.4byte gMonIcon_OldUnownK @ [261] ROM 0x556C18 -> 0xD77574
	.4byte gMonIcon_OldUnownL @ [262] ROM 0x556C1C -> 0xD77574
	.4byte gMonIcon_OldUnownM @ [263] ROM 0x556C20 -> 0xD77574
	.4byte gMonIcon_OldUnownN @ [264] ROM 0x556C24 -> 0xD77574
	.4byte gMonIcon_OldUnownO @ [265] ROM 0x556C28 -> 0xD77574
	.4byte gMonIcon_OldUnownP @ [266] ROM 0x556C2C -> 0xD77574
	.4byte gMonIcon_OldUnownQ @ [267] ROM 0x556C30 -> 0xD77574
	.4byte gMonIcon_OldUnownR @ [268] ROM 0x556C34 -> 0xD77574
	.4byte gMonIcon_OldUnownS @ [269] ROM 0x556C38 -> 0xD77574
	.4byte gMonIcon_OldUnownT @ [270] ROM 0x556C3C -> 0xD77574
	.4byte gMonIcon_OldUnownU @ [271] ROM 0x556C40 -> 0xD77574
	.4byte gMonIcon_OldUnownV @ [272] ROM 0x556C44 -> 0xD77574
	.4byte gMonIcon_OldUnownW @ [273] ROM 0x556C48 -> 0xD77574
	.4byte gMonIcon_OldUnownX @ [274] ROM 0x556C4C -> 0xD77574
	.4byte gMonIcon_OldUnownY @ [275] ROM 0x556C50 -> 0xD77574
	.4byte gMonIcon_OldUnownZ @ [276] ROM 0x556C54 -> 0xD77574
	.4byte gMonIcon_Treecko @ [277] ROM 0x556C58 -> 0xCDDD40
	.4byte gMonIcon_Grovyle @ [278] ROM 0x556C5C -> 0xCDE978
	.4byte gMonIcon_Sceptile @ [279] ROM 0x556C60 -> 0xCDF6E8
	.4byte gMonIcon_Torchic @ [280] ROM 0x556C64 -> 0xCE00CC
	.4byte gMonIcon_Combusken @ [281] ROM 0x556C68 -> 0xCE0CF8
	.4byte gMonIcon_Blaziken @ [282] ROM 0x556C6C -> 0xCE1C94
	.4byte gMonIcon_Mudkip @ [283] ROM 0x556C70 -> 0xCE269C
	.4byte gMonIcon_Marshtomp @ [284] ROM 0x556C74 -> 0xCE351C
	.4byte gMonIcon_Swampert @ [285] ROM 0x556C78 -> 0xCE42BC
	.4byte gMonIcon_Poochyena @ [286] ROM 0x556C7C -> 0xCE4FFC
	.4byte gMonIcon_Mightyena @ [287] ROM 0x556C80 -> 0xCE5C1C
	.4byte gMonIcon_Zigzagoon @ [288] ROM 0x556C84 -> 0xCE679C
	.4byte gMonIcon_Linoone @ [289] ROM 0x556C88 -> 0xCE7250
	.4byte gMonIcon_Wurmple @ [290] ROM 0x556C8C -> 0xCE7B94
	.4byte gMonIcon_Silcoon @ [291] ROM 0x556C90 -> 0xCE84A0
	.4byte gMonIcon_Beautifly @ [292] ROM 0x556C94 -> 0xCE9018
	.4byte gMonIcon_Cascoon @ [293] ROM 0x556C98 -> 0xCE9904
	.4byte gMonIcon_Dustox @ [294] ROM 0x556C9C -> 0xCEA334
	.4byte gMonIcon_Lotad @ [295] ROM 0x556CA0 -> 0xCEACEC
	.4byte gMonIcon_Lombre @ [296] ROM 0x556CA4 -> 0xCEB770
	.4byte gMonIcon_Ludicolo @ [297] ROM 0x556CA8 -> 0xCEC3C0
	.4byte gMonIcon_Seedot @ [298] ROM 0x556CAC -> 0xCECDA4
	.4byte gMonIcon_Nuzleaf @ [299] ROM 0x556CB0 -> 0xCED7C8
	.4byte gMonIcon_Shiftry @ [300] ROM 0x556CB4 -> 0xCEE3B8
	.4byte gMonIcon_Nincada @ [301] ROM 0x556CB8 -> 0xCEED80
	.4byte gMonIcon_Ninjask @ [302] ROM 0x556CBC -> 0xCEF92C
	.4byte gMonIcon_Shedinja @ [303] ROM 0x556CC0 -> 0xCF045C
	.4byte gMonIcon_Taillow @ [304] ROM 0x556CC4 -> 0xCF0D44
	.4byte gMonIcon_Swellow @ [305] ROM 0x556CC8 -> 0xCF18B0
	.4byte gMonIcon_Shroomish @ [306] ROM 0x556CCC -> 0xCF2268
	.4byte gMonIcon_Breloom @ [307] ROM 0x556CD0 -> 0xCF2EA0
	.4byte gMonIcon_Spinda @ [308] ROM 0x556CD4 -> 0xCF3940
	.4byte gMonIcon_Wingull @ [309] ROM 0x556CD8 -> 0xCF433C
	.4byte gMonIcon_Pelipper @ [310] ROM 0x556CDC -> 0xCF4EC4
	.4byte gMonIcon_Surskit @ [311] ROM 0x556CE0 -> 0xCF5778
	.4byte gMonIcon_Masquerain @ [312] ROM 0x556CE4 -> 0xCF62DC
	.4byte gMonIcon_Wailmer @ [313] ROM 0x556CE8 -> 0xCF6C10
	.4byte gMonIcon_Wailord @ [314] ROM 0x556CEC -> 0xCF765C
	.4byte gMonIcon_Skitty @ [315] ROM 0x556CF0 -> 0xCF8114
	.4byte gMonIcon_Delcatty @ [316] ROM 0x556CF4 -> 0xCF8CAC
	.4byte gMonIcon_Kecleon @ [317] ROM 0x556CF8 -> 0xCF9874
	.4byte gMonIcon_Baltoy @ [318] ROM 0x556CFC -> 0xCFA1A0
	.4byte gMonIcon_Claydol @ [319] ROM 0x556D00 -> 0xCFAD9C
	.4byte gMonIcon_Nosepass @ [320] ROM 0x556D04 -> 0xCFB778
	.4byte gMonIcon_Torkoal @ [321] ROM 0x556D08 -> 0xCFC35C
	.4byte gMonIcon_Sableye @ [322] ROM 0x556D0C -> 0xCFCDC8
	.4byte gMonIcon_Barboach @ [323] ROM 0x556D10 -> 0xCFD758
	.4byte gMonIcon_Whiscash @ [324] ROM 0x556D14 -> 0xCFE28C
	.4byte gMonIcon_Luvdisc @ [325] ROM 0x556D18 -> 0xCFEA88
	.4byte gMonIcon_Corphish @ [326] ROM 0x556D1C -> 0xCFF570
	.4byte gMonIcon_Crawdaunt @ [327] ROM 0x556D20 -> 0xD00254
	.4byte gMonIcon_Feebas @ [328] ROM 0x556D24 -> 0xD00C88
	.4byte gMonIcon_Milotic @ [329] ROM 0x556D28 -> 0xD0187C
	.4byte gMonIcon_Carvanha @ [330] ROM 0x556D2C -> 0xD02328
	.4byte gMonIcon_Sharpedo @ [331] ROM 0x556D30 -> 0xD02E80
	.4byte gMonIcon_Trapinch @ [332] ROM 0x556D34 -> 0xD0372C
	.4byte gMonIcon_Vibrava @ [333] ROM 0x556D38 -> 0xD04184
	.4byte gMonIcon_Flygon @ [334] ROM 0x556D3C -> 0xD04F20
	.4byte gMonIcon_Makuhita @ [335] ROM 0x556D40 -> 0xD05994
	.4byte gMonIcon_Hariyama @ [336] ROM 0x556D44 -> 0xD06694
	.4byte gMonIcon_Electrike @ [337] ROM 0x556D48 -> 0xD07020
	.4byte gMonIcon_Manectric @ [338] ROM 0x556D4C -> 0xD079EC
	.4byte gMonIcon_Numel @ [339] ROM 0x556D50 -> 0xD083E8
	.4byte gMonIcon_Camerupt @ [340] ROM 0x556D54 -> 0xD08F34
	.4byte gMonIcon_Spheal @ [341] ROM 0x556D58 -> 0xD09814
	.4byte gMonIcon_Sealeo @ [342] ROM 0x556D5C -> 0xD0A280
	.4byte gMonIcon_Walrein @ [343] ROM 0x556D60 -> 0xD0B1EC
	.4byte gMonIcon_Cacnea @ [344] ROM 0x556D64 -> 0xD0BCCC
	.4byte gMonIcon_Cacturne @ [345] ROM 0x556D68 -> 0xD0C874
	.4byte gMonIcon_Snorunt @ [346] ROM 0x556D6C -> 0xD0D28C
	.4byte gMonIcon_Glalie @ [347] ROM 0x556D70 -> 0xD0DE74
	.4byte gMonIcon_Lunatone @ [348] ROM 0x556D74 -> 0xD0E964
	.4byte gMonIcon_Solrock @ [349] ROM 0x556D78 -> 0xD0F60C
	.4byte gMonIcon_Azurill @ [350] ROM 0x556D7C -> 0xD1005C
	.4byte gMonIcon_Spoink @ [351] ROM 0x556D80 -> 0xD10978
	.4byte gMonIcon_Grumpig @ [352] ROM 0x556D84 -> 0xD11504
	.4byte gMonIcon_Plusle @ [353] ROM 0x556D88 -> 0xD11EB8
	.4byte gMonIcon_Minun @ [354] ROM 0x556D8C -> 0xD12858
	.4byte gMonIcon_Mawile @ [355] ROM 0x556D90 -> 0xD13484
	.4byte gMonIcon_Meditite @ [356] ROM 0x556D94 -> 0xD13E70
	.4byte gMonIcon_Medicham @ [357] ROM 0x556D98 -> 0xD14948
	.4byte gMonIcon_Swablu @ [358] ROM 0x556D9C -> 0xD15720
	.4byte gMonIcon_Altaria @ [359] ROM 0x556DA0 -> 0xD162E4
	.4byte gMonIcon_Wynaut @ [360] ROM 0x556DA4 -> 0xD16C7C
	.4byte gMonIcon_Duskull @ [361] ROM 0x556DA8 -> 0xD1768C
	.4byte gMonIcon_Dusclops @ [362] ROM 0x556DAC -> 0xD18188
	.4byte gMonIcon_Roselia @ [363] ROM 0x556DB0 -> 0xD18D2C
	.4byte gMonIcon_Slakoth @ [364] ROM 0x556DB4 -> 0xD1976C
	.4byte gMonIcon_Vigoroth @ [365] ROM 0x556DB8 -> 0xD1A2A0
	.4byte gMonIcon_Slaking @ [366] ROM 0x556DBC -> 0xD1AFA8
	.4byte gMonIcon_Gulpin @ [367] ROM 0x556DC0 -> 0xD1B8B4
	.4byte gMonIcon_Swalot @ [368] ROM 0x556DC4 -> 0xD1C3B0
	.4byte gMonIcon_Tropius @ [369] ROM 0x556DC8 -> 0xD1D0BC
	.4byte gMonIcon_Whismur @ [370] ROM 0x556DCC -> 0xD1DA30
	.4byte gMonIcon_Loudred @ [371] ROM 0x556DD0 -> 0xD1E688
	.4byte gMonIcon_Exploud @ [372] ROM 0x556DD4 -> 0xD1F46C
	.4byte gMonIcon_Clamperl @ [373] ROM 0x556DD8 -> 0xD1FE48
	.4byte gMonIcon_Huntail @ [374] ROM 0x556DDC -> 0xD209D8
	.4byte gMonIcon_Gorebyss @ [375] ROM 0x556DE0 -> 0xD21440
	.4byte gMonIcon_Absol @ [376] ROM 0x556DE4 -> 0xD22040
	.4byte gMonIcon_Shuppet @ [377] ROM 0x556DE8 -> 0xD22980
	.4byte gMonIcon_Banette @ [378] ROM 0x556DEC -> 0xD23320
	.4byte gMonIcon_Seviper @ [379] ROM 0x556DF0 -> 0xD2403C
	.4byte gMonIcon_Zangoose @ [380] ROM 0x556DF4 -> 0xD24BEC
	.4byte gMonIcon_Relicanth @ [381] ROM 0x556DF8 -> 0xD25748
	.4byte gMonIcon_Aron @ [382] ROM 0x556DFC -> 0xD25FC8
	.4byte gMonIcon_Lairon @ [383] ROM 0x556E00 -> 0xD26AF0
	.4byte gMonIcon_Aggron @ [384] ROM 0x556E04 -> 0xD27904
	.4byte gMonIcon_CastformNormal @ [385] ROM 0x556E08 -> 0xD29264
	.4byte gMonIcon_Volbeat @ [386] ROM 0x556E0C -> 0xD29DC4
	.4byte gMonIcon_Illumise @ [387] ROM 0x556E10 -> 0xD2A8C4
	.4byte gMonIcon_Lileep @ [388] ROM 0x556E14 -> 0xD2B3BC
	.4byte gMonIcon_Cradily @ [389] ROM 0x556E18 -> 0xD2C044
	.4byte gMonIcon_Anorith @ [390] ROM 0x556E1C -> 0xD2CA20
	.4byte gMonIcon_Armaldo @ [391] ROM 0x556E20 -> 0xD2D848
	.4byte gMonIcon_Ralts @ [392] ROM 0x556E24 -> 0xD2E124
	.4byte gMonIcon_Kirlia @ [393] ROM 0x556E28 -> 0xD2EC04
	.4byte gMonIcon_Gardevoir @ [394] ROM 0x556E2C -> 0xD2F724
	.4byte gMonIcon_Bagon @ [395] ROM 0x556E30 -> 0xD300F4
	.4byte gMonIcon_Shelgon @ [396] ROM 0x556E34 -> 0xD30B50
	.4byte gMonIcon_Salamence @ [397] ROM 0x556E38 -> 0xD31708
	.4byte gMonIcon_Beldum @ [398] ROM 0x556E3C -> 0xD320D8
	.4byte gMonIcon_Metang @ [399] ROM 0x556E40 -> 0xD32CC8
	.4byte gMonIcon_Metagross @ [400] ROM 0x556E44 -> 0xD33868
	.4byte gMonIcon_Regirock @ [401] ROM 0x556E48 -> 0xD345E0
	.4byte gMonIcon_Regice @ [402] ROM 0x556E4C -> 0xD35188
	.4byte gMonIcon_Registeel @ [403] ROM 0x556E50 -> 0xD35DB8
	.4byte gMonIcon_Kyogre @ [404] ROM 0x556E54 -> 0xD36910
	.4byte gMonIcon_Groudon @ [405] ROM 0x556E58 -> 0xD3777C
	.4byte gMonIcon_Rayquaza @ [406] ROM 0x556E5C -> 0xD38710
	.4byte gMonIcon_Latias @ [407] ROM 0x556E60 -> 0xD392A0
	.4byte gMonIcon_Latios @ [408] ROM 0x556E64 -> 0xD39EC4
	.4byte gMonIcon_Jirachi @ [409] ROM 0x556E68 -> 0xD3A9E0
	.4byte gMonIcon_DeoxysNormal @ [410] ROM 0x556E6C -> 0xD3B89C
	.4byte gMonIcon_Chimecho @ [411] ROM 0x556E70 -> 0xD441CC
	.4byte gMonIcon_Egg @ [412] ROM 0x556E74 -> 0xD8FC28
	.4byte gMonIcon_UnownB @ [413] ROM 0x556E78 -> 0xD44B9C
	.4byte gMonIcon_UnownC @ [414] ROM 0x556E7C -> 0xD4545C
	.4byte gMonIcon_UnownD @ [415] ROM 0x556E80 -> 0xD45CAC
	.4byte gMonIcon_UnownE @ [416] ROM 0x556E84 -> 0xD46464
	.4byte gMonIcon_UnownF @ [417] ROM 0x556E88 -> 0xD46C74
	.4byte gMonIcon_UnownG @ [418] ROM 0x556E8C -> 0xD4749C
	.4byte gMonIcon_UnownH @ [419] ROM 0x556E90 -> 0xD47DA4
	.4byte gMonIcon_UnownI @ [420] ROM 0x556E94 -> 0xD484E4
	.4byte gMonIcon_UnownJ @ [421] ROM 0x556E98 -> 0xD48C90
	.4byte gMonIcon_UnownK @ [422] ROM 0x556E9C -> 0xD49458
	.4byte gMonIcon_UnownL @ [423] ROM 0x556EA0 -> 0xD49BDC
	.4byte gMonIcon_UnownM @ [424] ROM 0x556EA4 -> 0xD4A4A8
	.4byte gMonIcon_UnownN @ [425] ROM 0x556EA8 -> 0xD4AD0C
	.4byte gMonIcon_UnownO @ [426] ROM 0x556EAC -> 0xD4B604
	.4byte gMonIcon_UnownP @ [427] ROM 0x556EB0 -> 0xD4BD68
	.4byte gMonIcon_UnownQ @ [428] ROM 0x556EB4 -> 0xD4C4E8
	.4byte gMonIcon_UnownR @ [429] ROM 0x556EB8 -> 0xD4CC54
	.4byte gMonIcon_UnownS @ [430] ROM 0x556EBC -> 0xD4D490
	.4byte gMonIcon_UnownT @ [431] ROM 0x556EC0 -> 0xD4DBF4
	.4byte gMonIcon_UnownU @ [432] ROM 0x556EC4 -> 0xD4E460
	.4byte gMonIcon_UnownV @ [433] ROM 0x556EC8 -> 0xD4EC74
	.4byte gMonIcon_UnownW @ [434] ROM 0x556ECC -> 0xD4F44C
	.4byte gMonIcon_UnownX @ [435] ROM 0x556ED0 -> 0xD4FC00
	.4byte gMonIcon_UnownY @ [436] ROM 0x556ED4 -> 0xD503CC
	.4byte gMonIcon_UnownZ @ [437] ROM 0x556ED8 -> 0xD50B58
	.4byte gMonIcon_UnownEmark @ [438] ROM 0x556EDC -> 0xD512B0
	.4byte gMonIcon_UnownQmark @ [439] ROM 0x556EE0 -> 0xD51A6C

	.globl gMonIconPaletteIndices
gMonIconPaletteIndices: @ 0x08556EE4
	.byte   MON_ICON_PAL_0 @ SPECIES_NONE
	.byte   MON_ICON_PAL_1 @ SPECIES_BULBASAUR
	.byte   MON_ICON_PAL_1 @ SPECIES_IVYSAUR
	.byte   MON_ICON_PAL_1 @ SPECIES_VENUSAUR
	.byte   MON_ICON_PAL_0 @ SPECIES_CHARMANDER
	.byte   MON_ICON_PAL_0 @ SPECIES_CHARMELEON
	.byte   MON_ICON_PAL_0 @ SPECIES_CHARIZARD
	.byte   MON_ICON_PAL_0 @ SPECIES_SQUIRTLE
	.byte   MON_ICON_PAL_2 @ SPECIES_WARTORTLE
	.byte   MON_ICON_PAL_2 @ SPECIES_BLASTOISE
	.byte   MON_ICON_PAL_1 @ SPECIES_CATERPIE
	.byte   MON_ICON_PAL_1 @ SPECIES_METAPOD
	.byte   MON_ICON_PAL_0 @ SPECIES_BUTTERFREE
	.byte   MON_ICON_PAL_1 @ SPECIES_WEEDLE
	.byte   MON_ICON_PAL_2 @ SPECIES_KAKUNA
	.byte   MON_ICON_PAL_2 @ SPECIES_BEEDRILL
	.byte   MON_ICON_PAL_0 @ SPECIES_PIDGEY
	.byte   MON_ICON_PAL_0 @ SPECIES_PIDGEOTTO
	.byte   MON_ICON_PAL_0 @ SPECIES_PIDGEOT
	.byte   MON_ICON_PAL_2 @ SPECIES_RATTATA
	.byte   MON_ICON_PAL_1 @ SPECIES_RATICATE
	.byte   MON_ICON_PAL_0 @ SPECIES_SPEAROW
	.byte   MON_ICON_PAL_0 @ SPECIES_FEAROW
	.byte   MON_ICON_PAL_2 @ SPECIES_EKANS
	.byte   MON_ICON_PAL_2 @ SPECIES_ARBOK
	.byte   MON_ICON_PAL_2 @ SPECIES_PIKACHU
	.byte   MON_ICON_PAL_0 @ SPECIES_RAICHU
	.byte   MON_ICON_PAL_2 @ SPECIES_SANDSHREW
	.byte   MON_ICON_PAL_2 @ SPECIES_SANDSLASH
	.byte   MON_ICON_PAL_2 @ SPECIES_NIDORAN_F
	.byte   MON_ICON_PAL_2 @ SPECIES_NIDORINA
	.byte   MON_ICON_PAL_2 @ SPECIES_NIDOQUEEN
	.byte   MON_ICON_PAL_2 @ SPECIES_NIDORAN_M
	.byte   MON_ICON_PAL_2 @ SPECIES_NIDORINO
	.byte   MON_ICON_PAL_2 @ SPECIES_NIDOKING
	.byte   MON_ICON_PAL_0 @ SPECIES_CLEFAIRY
	.byte   MON_ICON_PAL_0 @ SPECIES_CLEFABLE
	.byte   MON_ICON_PAL_2 @ SPECIES_VULPIX
	.byte   MON_ICON_PAL_1 @ SPECIES_NINETALES
	.byte   MON_ICON_PAL_0 @ SPECIES_JIGGLYPUFF
	.byte   MON_ICON_PAL_0 @ SPECIES_WIGGLYTUFF
	.byte   MON_ICON_PAL_2 @ SPECIES_ZUBAT
	.byte   MON_ICON_PAL_2 @ SPECIES_GOLBAT
	.byte   MON_ICON_PAL_1 @ SPECIES_ODDISH
	.byte   MON_ICON_PAL_0 @ SPECIES_GLOOM
	.byte   MON_ICON_PAL_0 @ SPECIES_VILEPLUME
	.byte   MON_ICON_PAL_0 @ SPECIES_PARAS
	.byte   MON_ICON_PAL_0 @ SPECIES_PARASECT
	.byte   MON_ICON_PAL_0 @ SPECIES_VENONAT
	.byte   MON_ICON_PAL_2 @ SPECIES_VENOMOTH
	.byte   MON_ICON_PAL_2 @ SPECIES_DIGLETT
	.byte   MON_ICON_PAL_2 @ SPECIES_DUGTRIO
	.byte   MON_ICON_PAL_1 @ SPECIES_MEOWTH
	.byte   MON_ICON_PAL_1 @ SPECIES_PERSIAN
	.byte   MON_ICON_PAL_1 @ SPECIES_PSYDUCK
	.byte   MON_ICON_PAL_2 @ SPECIES_GOLDUCK
	.byte   MON_ICON_PAL_1 @ SPECIES_MANKEY
	.byte   MON_ICON_PAL_2 @ SPECIES_PRIMEAPE
	.byte   MON_ICON_PAL_0 @ SPECIES_GROWLITHE
	.byte   MON_ICON_PAL_0 @ SPECIES_ARCANINE
	.byte   MON_ICON_PAL_0 @ SPECIES_POLIWAG
	.byte   MON_ICON_PAL_0 @ SPECIES_POLIWHIRL
	.byte   MON_ICON_PAL_0 @ SPECIES_POLIWRATH
	.byte   MON_ICON_PAL_2 @ SPECIES_ABRA
	.byte   MON_ICON_PAL_2 @ SPECIES_KADABRA
	.byte   MON_ICON_PAL_2 @ SPECIES_ALAKAZAM
	.byte   MON_ICON_PAL_0 @ SPECIES_MACHOP
	.byte   MON_ICON_PAL_2 @ SPECIES_MACHOKE
	.byte   MON_ICON_PAL_0 @ SPECIES_MACHAMP
	.byte   MON_ICON_PAL_1 @ SPECIES_BELLSPROUT
	.byte   MON_ICON_PAL_1 @ SPECIES_WEEPINBELL
	.byte   MON_ICON_PAL_1 @ SPECIES_VICTREEBEL
	.byte   MON_ICON_PAL_2 @ SPECIES_TENTACOOL
	.byte   MON_ICON_PAL_2 @ SPECIES_TENTACRUEL
	.byte   MON_ICON_PAL_1 @ SPECIES_GEODUDE
	.byte   MON_ICON_PAL_1 @ SPECIES_GRAVELER
	.byte   MON_ICON_PAL_1 @ SPECIES_GOLEM
	.byte   MON_ICON_PAL_0 @ SPECIES_PONYTA
	.byte   MON_ICON_PAL_0 @ SPECIES_RAPIDASH
	.byte   MON_ICON_PAL_0 @ SPECIES_SLOWPOKE
	.byte   MON_ICON_PAL_0 @ SPECIES_SLOWBRO
	.byte   MON_ICON_PAL_0 @ SPECIES_MAGNEMITE
	.byte   MON_ICON_PAL_0 @ SPECIES_MAGNETON
	.byte   MON_ICON_PAL_1 @ SPECIES_FARFETCHD
	.byte   MON_ICON_PAL_2 @ SPECIES_DODUO
	.byte   MON_ICON_PAL_2 @ SPECIES_DODRIO
	.byte   MON_ICON_PAL_2 @ SPECIES_SEEL
	.byte   MON_ICON_PAL_2 @ SPECIES_DEWGONG
	.byte   MON_ICON_PAL_2 @ SPECIES_GRIMER
	.byte   MON_ICON_PAL_2 @ SPECIES_MUK
	.byte   MON_ICON_PAL_2 @ SPECIES_SHELLDER
	.byte   MON_ICON_PAL_2 @ SPECIES_CLOYSTER
	.byte   MON_ICON_PAL_2 @ SPECIES_GASTLY
	.byte   MON_ICON_PAL_2 @ SPECIES_HAUNTER
	.byte   MON_ICON_PAL_2 @ SPECIES_GENGAR
	.byte   MON_ICON_PAL_2 @ SPECIES_ONIX
	.byte   MON_ICON_PAL_2 @ SPECIES_DROWZEE
	.byte   MON_ICON_PAL_1 @ SPECIES_HYPNO
	.byte   MON_ICON_PAL_2 @ SPECIES_KRABBY
	.byte   MON_ICON_PAL_2 @ SPECIES_KINGLER
	.byte   MON_ICON_PAL_0 @ SPECIES_VOLTORB
	.byte   MON_ICON_PAL_0 @ SPECIES_ELECTRODE
	.byte   MON_ICON_PAL_0 @ SPECIES_EXEGGCUTE
	.byte   MON_ICON_PAL_1 @ SPECIES_EXEGGUTOR
	.byte   MON_ICON_PAL_1 @ SPECIES_CUBONE
	.byte   MON_ICON_PAL_1 @ SPECIES_MAROWAK
	.byte   MON_ICON_PAL_2 @ SPECIES_HITMONLEE
	.byte   MON_ICON_PAL_2 @ SPECIES_HITMONCHAN
	.byte   MON_ICON_PAL_1 @ SPECIES_LICKITUNG
	.byte   MON_ICON_PAL_2 @ SPECIES_KOFFING
	.byte   MON_ICON_PAL_2 @ SPECIES_WEEZING
	.byte   MON_ICON_PAL_1 @ SPECIES_RHYHORN
	.byte   MON_ICON_PAL_1 @ SPECIES_RHYDON
	.byte   MON_ICON_PAL_0 @ SPECIES_CHANSEY
	.byte   MON_ICON_PAL_0 @ SPECIES_TANGELA
	.byte   MON_ICON_PAL_1 @ SPECIES_KANGASKHAN
	.byte   MON_ICON_PAL_0 @ SPECIES_HORSEA
	.byte   MON_ICON_PAL_0 @ SPECIES_SEADRA
	.byte   MON_ICON_PAL_0 @ SPECIES_GOLDEEN
	.byte   MON_ICON_PAL_0 @ SPECIES_SEAKING
	.byte   MON_ICON_PAL_2 @ SPECIES_STARYU
	.byte   MON_ICON_PAL_2 @ SPECIES_STARMIE
	.byte   MON_ICON_PAL_0 @ SPECIES_MR_MIME
	.byte   MON_ICON_PAL_1 @ SPECIES_SCYTHER
	.byte   MON_ICON_PAL_2 @ SPECIES_JYNX
	.byte   MON_ICON_PAL_1 @ SPECIES_ELECTABUZZ
	.byte   MON_ICON_PAL_0 @ SPECIES_MAGMAR
	.byte   MON_ICON_PAL_2 @ SPECIES_PINSIR
	.byte   MON_ICON_PAL_2 @ SPECIES_TAUROS
	.byte   MON_ICON_PAL_0 @ SPECIES_MAGIKARP
	.byte   MON_ICON_PAL_0 @ SPECIES_GYARADOS
	.byte   MON_ICON_PAL_2 @ SPECIES_LAPRAS
	.byte   MON_ICON_PAL_2 @ SPECIES_DITTO
	.byte   MON_ICON_PAL_2 @ SPECIES_EEVEE
	.byte   MON_ICON_PAL_0 @ SPECIES_VAPOREON
	.byte   MON_ICON_PAL_0 @ SPECIES_JOLTEON
	.byte   MON_ICON_PAL_0 @ SPECIES_FLAREON
	.byte   MON_ICON_PAL_0 @ SPECIES_PORYGON
	.byte   MON_ICON_PAL_0 @ SPECIES_OMANYTE
	.byte   MON_ICON_PAL_0 @ SPECIES_OMASTAR
	.byte   MON_ICON_PAL_2 @ SPECIES_KABUTO
	.byte   MON_ICON_PAL_2 @ SPECIES_KABUTOPS
	.byte   MON_ICON_PAL_0 @ SPECIES_AERODACTYL
	.byte   MON_ICON_PAL_1 @ SPECIES_SNORLAX
	.byte   MON_ICON_PAL_0 @ SPECIES_ARTICUNO
	.byte   MON_ICON_PAL_0 @ SPECIES_ZAPDOS
	.byte   MON_ICON_PAL_0 @ SPECIES_MOLTRES
	.byte   MON_ICON_PAL_0 @ SPECIES_DRATINI
	.byte   MON_ICON_PAL_0 @ SPECIES_DRAGONAIR
	.byte   MON_ICON_PAL_2 @ SPECIES_DRAGONITE
	.byte   MON_ICON_PAL_2 @ SPECIES_MEWTWO
	.byte   MON_ICON_PAL_0 @ SPECIES_MEW
	.byte   MON_ICON_PAL_1 @ SPECIES_CHIKORITA
	.byte   MON_ICON_PAL_1 @ SPECIES_BAYLEEF
	.byte   MON_ICON_PAL_1 @ SPECIES_MEGANIUM
	.byte   MON_ICON_PAL_1 @ SPECIES_CYNDAQUIL
	.byte   MON_ICON_PAL_1 @ SPECIES_QUILAVA
	.byte   MON_ICON_PAL_1 @ SPECIES_TYPHLOSION
	.byte   MON_ICON_PAL_2 @ SPECIES_TOTODILE
	.byte   MON_ICON_PAL_2 @ SPECIES_CROCONAW
	.byte   MON_ICON_PAL_2 @ SPECIES_FERALIGATR
	.byte   MON_ICON_PAL_2 @ SPECIES_SENTRET
	.byte   MON_ICON_PAL_2 @ SPECIES_FURRET
	.byte   MON_ICON_PAL_2 @ SPECIES_HOOTHOOT
	.byte   MON_ICON_PAL_2 @ SPECIES_NOCTOWL
	.byte   MON_ICON_PAL_0 @ SPECIES_LEDYBA
	.byte   MON_ICON_PAL_0 @ SPECIES_LEDIAN
	.byte   MON_ICON_PAL_1 @ SPECIES_SPINARAK
	.byte   MON_ICON_PAL_0 @ SPECIES_ARIADOS
	.byte   MON_ICON_PAL_2 @ SPECIES_CROBAT
	.byte   MON_ICON_PAL_2 @ SPECIES_CHINCHOU
	.byte   MON_ICON_PAL_0 @ SPECIES_LANTURN
	.byte   MON_ICON_PAL_0 @ SPECIES_PICHU
	.byte   MON_ICON_PAL_0 @ SPECIES_CLEFFA
	.byte   MON_ICON_PAL_1 @ SPECIES_IGGLYBUFF
	.byte   MON_ICON_PAL_2 @ SPECIES_TOGEPI
	.byte   MON_ICON_PAL_2 @ SPECIES_TOGETIC
	.byte   MON_ICON_PAL_0 @ SPECIES_NATU
	.byte   MON_ICON_PAL_0 @ SPECIES_XATU
	.byte   MON_ICON_PAL_2 @ SPECIES_MAREEP
	.byte   MON_ICON_PAL_0 @ SPECIES_FLAAFFY
	.byte   MON_ICON_PAL_0 @ SPECIES_AMPHAROS
	.byte   MON_ICON_PAL_1 @ SPECIES_BELLOSSOM
	.byte   MON_ICON_PAL_2 @ SPECIES_MARILL
	.byte   MON_ICON_PAL_2 @ SPECIES_AZUMARILL
	.byte   MON_ICON_PAL_1 @ SPECIES_SUDOWOODO
	.byte   MON_ICON_PAL_1 @ SPECIES_POLITOED
	.byte   MON_ICON_PAL_1 @ SPECIES_HOPPIP
	.byte   MON_ICON_PAL_1 @ SPECIES_SKIPLOOM
	.byte   MON_ICON_PAL_2 @ SPECIES_JUMPLUFF
	.byte   MON_ICON_PAL_2 @ SPECIES_AIPOM
	.byte   MON_ICON_PAL_1 @ SPECIES_SUNKERN
	.byte   MON_ICON_PAL_1 @ SPECIES_SUNFLORA
	.byte   MON_ICON_PAL_1 @ SPECIES_YANMA
	.byte   MON_ICON_PAL_0 @ SPECIES_WOOPER
	.byte   MON_ICON_PAL_0 @ SPECIES_QUAGSIRE
	.byte   MON_ICON_PAL_2 @ SPECIES_ESPEON
	.byte   MON_ICON_PAL_2 @ SPECIES_UMBREON
	.byte   MON_ICON_PAL_2 @ SPECIES_MURKROW
	.byte   MON_ICON_PAL_0 @ SPECIES_SLOWKING
	.byte   MON_ICON_PAL_0 @ SPECIES_MISDREAVUS
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN
	.byte   MON_ICON_PAL_0 @ SPECIES_WOBBUFFET
	.byte   MON_ICON_PAL_1 @ SPECIES_GIRAFARIG
	.byte   MON_ICON_PAL_0 @ SPECIES_PINECO
	.byte   MON_ICON_PAL_2 @ SPECIES_FORRETRESS
	.byte   MON_ICON_PAL_2 @ SPECIES_DUNSPARCE
	.byte   MON_ICON_PAL_2 @ SPECIES_GLIGAR
	.byte   MON_ICON_PAL_0 @ SPECIES_STEELIX
	.byte   MON_ICON_PAL_0 @ SPECIES_SNUBBULL
	.byte   MON_ICON_PAL_2 @ SPECIES_GRANBULL
	.byte   MON_ICON_PAL_0 @ SPECIES_QWILFISH
	.byte   MON_ICON_PAL_0 @ SPECIES_SCIZOR
	.byte   MON_ICON_PAL_1 @ SPECIES_SHUCKLE
	.byte   MON_ICON_PAL_2 @ SPECIES_HERACROSS
	.byte   MON_ICON_PAL_0 @ SPECIES_SNEASEL
	.byte   MON_ICON_PAL_0 @ SPECIES_TEDDIURSA
	.byte   MON_ICON_PAL_2 @ SPECIES_URSARING
	.byte   MON_ICON_PAL_0 @ SPECIES_SLUGMA
	.byte   MON_ICON_PAL_0 @ SPECIES_MAGCARGO
	.byte   MON_ICON_PAL_2 @ SPECIES_SWINUB
	.byte   MON_ICON_PAL_2 @ SPECIES_PILOSWINE
	.byte   MON_ICON_PAL_0 @ SPECIES_CORSOLA
	.byte   MON_ICON_PAL_0 @ SPECIES_REMORAID
	.byte   MON_ICON_PAL_0 @ SPECIES_OCTILLERY
	.byte   MON_ICON_PAL_0 @ SPECIES_DELIBIRD
	.byte   MON_ICON_PAL_2 @ SPECIES_MANTINE
	.byte   MON_ICON_PAL_0 @ SPECIES_SKARMORY
	.byte   MON_ICON_PAL_0 @ SPECIES_HOUNDOUR
	.byte   MON_ICON_PAL_0 @ SPECIES_HOUNDOOM
	.byte   MON_ICON_PAL_0 @ SPECIES_KINGDRA
	.byte   MON_ICON_PAL_0 @ SPECIES_PHANPY
	.byte   MON_ICON_PAL_0 @ SPECIES_DONPHAN
	.byte   MON_ICON_PAL_0 @ SPECIES_PORYGON2
	.byte   MON_ICON_PAL_2 @ SPECIES_STANTLER
	.byte   MON_ICON_PAL_1 @ SPECIES_SMEARGLE
	.byte   MON_ICON_PAL_2 @ SPECIES_TYROGUE
	.byte   MON_ICON_PAL_2 @ SPECIES_HITMONTOP
	.byte   MON_ICON_PAL_1 @ SPECIES_SMOOCHUM
	.byte   MON_ICON_PAL_1 @ SPECIES_ELEKID
	.byte   MON_ICON_PAL_1 @ SPECIES_MAGBY
	.byte   MON_ICON_PAL_1 @ SPECIES_MILTANK
	.byte   MON_ICON_PAL_1 @ SPECIES_BLISSEY
	.byte   MON_ICON_PAL_0 @ SPECIES_RAIKOU
	.byte   MON_ICON_PAL_2 @ SPECIES_ENTEI
	.byte   MON_ICON_PAL_0 @ SPECIES_SUICUNE
	.byte   MON_ICON_PAL_1 @ SPECIES_LARVITAR
	.byte   MON_ICON_PAL_0 @ SPECIES_PUPITAR
	.byte   MON_ICON_PAL_1 @ SPECIES_TYRANITAR
	.byte   MON_ICON_PAL_0 @ SPECIES_LUGIA
	.byte   MON_ICON_PAL_1 @ SPECIES_HO_OH
	.byte   MON_ICON_PAL_1 @ SPECIES_CELEBI
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_B
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_C
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_D
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_E
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_F
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_G
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_H
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_I
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_J
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_K
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_L
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_M
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_N
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_O
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_P
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_Q
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_R
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_S
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_T
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_U
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_V
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_W
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_X
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_Y
	.byte   MON_ICON_PAL_0 @ SPECIES_OLD_UNOWN_Z
	.byte   MON_ICON_PAL_1 @ SPECIES_TREECKO
	.byte   MON_ICON_PAL_0 @ SPECIES_GROVYLE
	.byte   MON_ICON_PAL_1 @ SPECIES_SCEPTILE
	.byte   MON_ICON_PAL_0 @ SPECIES_TORCHIC
	.byte   MON_ICON_PAL_0 @ SPECIES_COMBUSKEN
	.byte   MON_ICON_PAL_0 @ SPECIES_BLAZIKEN
	.byte   MON_ICON_PAL_0 @ SPECIES_MUDKIP
	.byte   MON_ICON_PAL_0 @ SPECIES_MARSHTOMP
	.byte   MON_ICON_PAL_0 @ SPECIES_SWAMPERT
	.byte   MON_ICON_PAL_2 @ SPECIES_POOCHYENA
	.byte   MON_ICON_PAL_2 @ SPECIES_MIGHTYENA
	.byte   MON_ICON_PAL_2 @ SPECIES_ZIGZAGOON
	.byte   MON_ICON_PAL_2 @ SPECIES_LINOONE
	.byte   MON_ICON_PAL_0 @ SPECIES_WURMPLE
	.byte   MON_ICON_PAL_2 @ SPECIES_SILCOON
	.byte   MON_ICON_PAL_0 @ SPECIES_BEAUTIFLY
	.byte   MON_ICON_PAL_2 @ SPECIES_CASCOON
	.byte   MON_ICON_PAL_1 @ SPECIES_DUSTOX
	.byte   MON_ICON_PAL_1 @ SPECIES_LOTAD
	.byte   MON_ICON_PAL_1 @ SPECIES_LOMBRE
	.byte   MON_ICON_PAL_1 @ SPECIES_LUDICOLO
	.byte   MON_ICON_PAL_1 @ SPECIES_SEEDOT
	.byte   MON_ICON_PAL_1 @ SPECIES_NUZLEAF
	.byte   MON_ICON_PAL_0 @ SPECIES_SHIFTRY
	.byte   MON_ICON_PAL_1 @ SPECIES_NINCADA
	.byte   MON_ICON_PAL_1 @ SPECIES_NINJASK
	.byte   MON_ICON_PAL_1 @ SPECIES_SHEDINJA
	.byte   MON_ICON_PAL_2 @ SPECIES_TAILLOW
	.byte   MON_ICON_PAL_2 @ SPECIES_SWELLOW
	.byte   MON_ICON_PAL_1 @ SPECIES_SHROOMISH
	.byte   MON_ICON_PAL_1 @ SPECIES_BRELOOM
	.byte   MON_ICON_PAL_1 @ SPECIES_SPINDA
	.byte   MON_ICON_PAL_0 @ SPECIES_WINGULL
	.byte   MON_ICON_PAL_0 @ SPECIES_PELIPPER
	.byte   MON_ICON_PAL_2 @ SPECIES_SURSKIT
	.byte   MON_ICON_PAL_0 @ SPECIES_MASQUERAIN
	.byte   MON_ICON_PAL_2 @ SPECIES_WAILMER
	.byte   MON_ICON_PAL_0 @ SPECIES_WAILORD
	.byte   MON_ICON_PAL_0 @ SPECIES_SKITTY
	.byte   MON_ICON_PAL_2 @ SPECIES_DELCATTY
	.byte   MON_ICON_PAL_1 @ SPECIES_KECLEON
	.byte   MON_ICON_PAL_1 @ SPECIES_BALTOY
	.byte   MON_ICON_PAL_0 @ SPECIES_CLAYDOL
	.byte   MON_ICON_PAL_0 @ SPECIES_NOSEPASS
	.byte   MON_ICON_PAL_1 @ SPECIES_TORKOAL
	.byte   MON_ICON_PAL_2 @ SPECIES_SABLEYE
	.byte   MON_ICON_PAL_0 @ SPECIES_BARBOACH
	.byte   MON_ICON_PAL_0 @ SPECIES_WHISCASH
	.byte   MON_ICON_PAL_0 @ SPECIES_LUVDISC
	.byte   MON_ICON_PAL_0 @ SPECIES_CORPHISH
	.byte   MON_ICON_PAL_0 @ SPECIES_CRAWDAUNT
	.byte   MON_ICON_PAL_2 @ SPECIES_FEEBAS
	.byte   MON_ICON_PAL_0 @ SPECIES_MILOTIC
	.byte   MON_ICON_PAL_0 @ SPECIES_CARVANHA
	.byte   MON_ICON_PAL_0 @ SPECIES_SHARPEDO
	.byte   MON_ICON_PAL_1 @ SPECIES_TRAPINCH
	.byte   MON_ICON_PAL_1 @ SPECIES_VIBRAVA
	.byte   MON_ICON_PAL_1 @ SPECIES_FLYGON
	.byte   MON_ICON_PAL_2 @ SPECIES_MAKUHITA
	.byte   MON_ICON_PAL_1 @ SPECIES_HARIYAMA
	.byte   MON_ICON_PAL_1 @ SPECIES_ELECTRIKE
	.byte   MON_ICON_PAL_0 @ SPECIES_MANECTRIC
	.byte   MON_ICON_PAL_1 @ SPECIES_NUMEL
	.byte   MON_ICON_PAL_0 @ SPECIES_CAMERUPT
	.byte   MON_ICON_PAL_2 @ SPECIES_SPHEAL
	.byte   MON_ICON_PAL_2 @ SPECIES_SEALEO
	.byte   MON_ICON_PAL_0 @ SPECIES_WALREIN
	.byte   MON_ICON_PAL_1 @ SPECIES_CACNEA
	.byte   MON_ICON_PAL_1 @ SPECIES_CACTURNE
	.byte   MON_ICON_PAL_2 @ SPECIES_SNORUNT
	.byte   MON_ICON_PAL_0 @ SPECIES_GLALIE
	.byte   MON_ICON_PAL_1 @ SPECIES_LUNATONE
	.byte   MON_ICON_PAL_0 @ SPECIES_SOLROCK
	.byte   MON_ICON_PAL_2 @ SPECIES_AZURILL
	.byte   MON_ICON_PAL_0 @ SPECIES_SPOINK
	.byte   MON_ICON_PAL_2 @ SPECIES_GRUMPIG
	.byte   MON_ICON_PAL_0 @ SPECIES_PLUSLE
	.byte   MON_ICON_PAL_0 @ SPECIES_MINUN
	.byte   MON_ICON_PAL_2 @ SPECIES_MAWILE
	.byte   MON_ICON_PAL_0 @ SPECIES_MEDITITE
	.byte   MON_ICON_PAL_0 @ SPECIES_MEDICHAM
	.byte   MON_ICON_PAL_0 @ SPECIES_SWABLU
	.byte   MON_ICON_PAL_0 @ SPECIES_ALTARIA
	.byte   MON_ICON_PAL_0 @ SPECIES_WYNAUT
	.byte   MON_ICON_PAL_0 @ SPECIES_DUSKULL
	.byte   MON_ICON_PAL_0 @ SPECIES_DUSCLOPS
	.byte   MON_ICON_PAL_0 @ SPECIES_ROSELIA
	.byte   MON_ICON_PAL_2 @ SPECIES_SLAKOTH
	.byte   MON_ICON_PAL_2 @ SPECIES_VIGOROTH
	.byte   MON_ICON_PAL_1 @ SPECIES_SLAKING
	.byte   MON_ICON_PAL_1 @ SPECIES_GULPIN
	.byte   MON_ICON_PAL_2 @ SPECIES_SWALOT
	.byte   MON_ICON_PAL_1 @ SPECIES_TROPIUS
	.byte   MON_ICON_PAL_0 @ SPECIES_WHISMUR
	.byte   MON_ICON_PAL_2 @ SPECIES_LOUDRED
	.byte   MON_ICON_PAL_2 @ SPECIES_EXPLOUD
	.byte   MON_ICON_PAL_0 @ SPECIES_CLAMPERL
	.byte   MON_ICON_PAL_0 @ SPECIES_HUNTAIL
	.byte   MON_ICON_PAL_0 @ SPECIES_GOREBYSS
	.byte   MON_ICON_PAL_0 @ SPECIES_ABSOL
	.byte   MON_ICON_PAL_0 @ SPECIES_SHUPPET
	.byte   MON_ICON_PAL_0 @ SPECIES_BANETTE
	.byte   MON_ICON_PAL_2 @ SPECIES_SEVIPER
	.byte   MON_ICON_PAL_0 @ SPECIES_ZANGOOSE
	.byte   MON_ICON_PAL_1 @ SPECIES_RELICANTH
	.byte   MON_ICON_PAL_2 @ SPECIES_ARON
	.byte   MON_ICON_PAL_2 @ SPECIES_LAIRON
	.byte   MON_ICON_PAL_2 @ SPECIES_AGGRON
	.byte   MON_ICON_PAL_0 @ SPECIES_CASTFORM_NORMAL
	.byte   MON_ICON_PAL_0 @ SPECIES_VOLBEAT
	.byte   MON_ICON_PAL_2 @ SPECIES_ILLUMISE
	.byte   MON_ICON_PAL_2 @ SPECIES_LILEEP
	.byte   MON_ICON_PAL_0 @ SPECIES_CRADILY
	.byte   MON_ICON_PAL_0 @ SPECIES_ANORITH
	.byte   MON_ICON_PAL_0 @ SPECIES_ARMALDO
	.byte   MON_ICON_PAL_1 @ SPECIES_RALTS
	.byte   MON_ICON_PAL_1 @ SPECIES_KIRLIA
	.byte   MON_ICON_PAL_1 @ SPECIES_GARDEVOIR
	.byte   MON_ICON_PAL_2 @ SPECIES_BAGON
	.byte   MON_ICON_PAL_2 @ SPECIES_SHELGON
	.byte   MON_ICON_PAL_0 @ SPECIES_SALAMENCE
	.byte   MON_ICON_PAL_0 @ SPECIES_BELDUM
	.byte   MON_ICON_PAL_0 @ SPECIES_METANG
	.byte   MON_ICON_PAL_0 @ SPECIES_METAGROSS
	.byte   MON_ICON_PAL_2 @ SPECIES_REGIROCK
	.byte   MON_ICON_PAL_2 @ SPECIES_REGICE
	.byte   MON_ICON_PAL_2 @ SPECIES_REGISTEEL
	.byte   MON_ICON_PAL_2 @ SPECIES_KYOGRE
	.byte   MON_ICON_PAL_0 @ SPECIES_GROUDON
	.byte   MON_ICON_PAL_1 @ SPECIES_RAYQUAZA
	.byte   MON_ICON_PAL_0 @ SPECIES_LATIAS
	.byte   MON_ICON_PAL_2 @ SPECIES_LATIOS
	.byte   MON_ICON_PAL_0 @ SPECIES_JIRACHI
	.byte   MON_ICON_PAL_0 @ SPECIES_DEOXYS_NORMAL
	.byte   MON_ICON_PAL_0 @ SPECIES_CHIMECHO
	.byte   MON_ICON_PAL_1 @ SPECIES_EGG
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_B
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_C
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_D
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_E
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_F
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_G
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_H
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_I
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_J
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_K
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_L
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_M
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_N
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_O
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_P
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_Q
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_R
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_S
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_T
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_U
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_V
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_W
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_X
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_Y
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_Z
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_EMARK
	.byte   MON_ICON_PAL_0 @ SPECIES_UNOWN_QMARK

	.globl gMonIconPaletteTable
gMonIconPaletteTable: @ 0x0855709C
	mon_icon_palette gMonIconPalette0, MON_ICON_PAL_0
	mon_icon_palette gMonIconPalette1, MON_ICON_PAL_1
	mon_icon_palette gMonIconPalette2, MON_ICON_PAL_2
	mon_icon_palette gMonIconPalette3, MON_ICON_PAL_3
	mon_icon_palette gMonIconPalette4, MON_ICON_PAL_4
	mon_icon_palette gMonIconPalette5, MON_ICON_PAL_5
