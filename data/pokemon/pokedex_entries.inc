@ Pokedex entry table.  JP category-name bytes remain explicit because they are
@ fixed 6-byte fields; the rest of each 0x1C-byte record is named structurally.

.macro pokedex_entry c0, c1, c2, c3, c4, c5, height, weight, description, pokemon_scale, pokemon_offset, trainer_scale, trainer_offset
	.byte \c0, \c1, \c2, \c3, \c4, \c5
	.2byte \height, \weight
	.2byte 0 @ ABI padding
	.4byte \description
	.2byte 0 @ unused
	.2byte \pokemon_scale, \pokemon_offset
	.2byte \trainer_scale, \trainer_offset
	.2byte 0 @ ABI padding
.endm

gPokedexEntries:: @ 0x0854069C

	@   0: NATIONAL_DEX_NONE @ 0x0854069C
	@ categoryName: みかくにん
	pokedex_entry 0x20, 0x06, 0x08, 0x16, 0x2E, 0x00, 0, 0, gNonePokedexText, 256, 0, 256, 0

	@   1: SPECIES_BULBASAUR @ 0x085406B8
	@ categoryName: たね
	pokedex_entry 0x10, 0x18, 0x00, 0x00, 0x00, 0x00, 7, 69, gPokedexDescription_1, 356, 17, 256, 0

	@   2: SPECIES_IVYSAUR @ 0x085406D4
	@ categoryName: たね
	pokedex_entry 0x10, 0x18, 0x00, 0x00, 0x00, 0x00, 10, 130, gPokedexDescription_2, 335, 13, 256, 0

	@   3: SPECIES_VENUSAUR @ 0x085406F0
	@ categoryName: たね
	pokedex_entry 0x10, 0x18, 0x00, 0x00, 0x00, 0x00, 20, 1000, gPokedexDescription_3, 256, 0, 388, 6

	@   4: SPECIES_CHARMANDER @ 0x0854070C
	@ categoryName: とかげ
	pokedex_entry 0x14, 0x06, 0x3A, 0x00, 0x00, 0x00, 6, 85, gPokedexDescription_4, 444, 18, 256, 0

	@   5: SPECIES_CHARMELEON @ 0x08540728
	@ categoryName: かえん
	pokedex_entry 0x06, 0x04, 0x2E, 0x00, 0x00, 0x00, 11, 190, gPokedexDescription_5, 302, 9, 256, 0

	@   6: SPECIES_CHARIZARD @ 0x08540744
	@ categoryName: かえん
	pokedex_entry 0x06, 0x04, 0x2E, 0x00, 0x00, 0x00, 17, 905, gPokedexDescription_6, 256, 1, 302, 3

	@   7: SPECIES_SQUIRTLE @ 0x08540760
	@ categoryName: かめのこ
	pokedex_entry 0x06, 0x22, 0x19, 0x0A, 0x00, 0x00, 5, 90, gPokedexDescription_7, 412, 18, 256, 0

	@   8: SPECIES_WARTORTLE @ 0x0854077C
	@ categoryName: かめ
	pokedex_entry 0x06, 0x22, 0x00, 0x00, 0x00, 0x00, 10, 225, gPokedexDescription_8, 332, 10, 256, 0

	@   9: SPECIES_BLASTOISE @ 0x08540798
	@ categoryName: こうら
	pokedex_entry 0x0A, 0x03, 0x27, 0x00, 0x00, 0x00, 16, 855, gPokedexDescription_9, 256, -1, 293, 2

	@  10: SPECIES_CATERPIE @ 0x085407B4
	@ categoryName: いもむし
	pokedex_entry 0x02, 0x23, 0x21, 0x0C, 0x00, 0x00, 3, 29, gPokedexDescription_10, 549, 22, 256, 0

	@  11: SPECIES_METAPOD @ 0x085407D0
	@ categoryName: さなぎ
	pokedex_entry 0x0B, 0x15, 0x38, 0x00, 0x00, 0x00, 7, 99, gPokedexDescription_11, 350, 18, 256, 0

	@  12: SPECIES_BUTTERFREE @ 0x085407EC
	@ categoryName: ちょうちょ
	pokedex_entry 0x11, 0x36, 0x03, 0x11, 0x36, 0x00, 11, 320, gPokedexDescription_12, 312, 2, 256, 0

	@  13: SPECIES_WEEDLE @ 0x08540808
	@ categoryName: けむし
	pokedex_entry 0x09, 0x21, 0x0C, 0x00, 0x00, 0x00, 3, 32, gPokedexDescription_13, 455, 22, 256, 0

	@  14: SPECIES_KAKUNA @ 0x08540824
	@ categoryName: さなぎ
	pokedex_entry 0x0B, 0x15, 0x38, 0x00, 0x00, 0x00, 6, 100, gPokedexDescription_14, 424, 17, 256, 0

	@  15: SPECIES_BEEDRILL @ 0x08540840
	@ categoryName: どくばち
	pokedex_entry 0x45, 0x08, 0x46, 0x11, 0x00, 0x00, 10, 295, gPokedexDescription_15, 366, 2, 256, 0

	@  16: SPECIES_PIDGEY @ 0x0854085C
	@ categoryName: ことり
	pokedex_entry 0x0A, 0x14, 0x28, 0x00, 0x00, 0x00, 3, 18, gPokedexDescription_16, 508, -3, 256, 0

	@  17: SPECIES_PIDGEOTTO @ 0x08540878
	@ categoryName: とり
	pokedex_entry 0x14, 0x28, 0x00, 0x00, 0x00, 0x00, 11, 300, gPokedexDescription_17, 331, 10, 256, 0

	@  18: SPECIES_PIDGEOT @ 0x08540894
	@ categoryName: とり
	pokedex_entry 0x14, 0x28, 0x00, 0x00, 0x00, 0x00, 15, 395, gPokedexDescription_18, 269, 0, 256, 0

	@  19: SPECIES_RATTATA @ 0x085408B0
	@ categoryName: ねずみ
	pokedex_entry 0x18, 0x3E, 0x20, 0x00, 0x00, 0x00, 3, 35, gPokedexDescription_19, 481, 21, 256, 0

	@  20: SPECIES_RATICATE @ 0x085408CC
	@ categoryName: ねずみ
	pokedex_entry 0x18, 0x3E, 0x20, 0x00, 0x00, 0x00, 7, 185, gPokedexDescription_20, 459, 18, 256, 0

	@  21: SPECIES_SPEAROW @ 0x085408E8
	@ categoryName: ことり
	pokedex_entry 0x0A, 0x14, 0x28, 0x00, 0x00, 0x00, 3, 20, gPokedexDescription_21, 571, 22, 256, 0

	@  22: SPECIES_FEAROW @ 0x08540904
	@ categoryName: くちばし
	pokedex_entry 0x08, 0x11, 0x46, 0x0C, 0x00, 0x00, 12, 380, gPokedexDescription_22, 278, 1, 256, 0

	@  23: SPECIES_EKANS @ 0x08540920
	@ categoryName: へび
	pokedex_entry 0x1D, 0x47, 0x00, 0x00, 0x00, 0x00, 20, 69, gPokedexDescription_23, 298, 12, 256, 0

	@  24: SPECIES_ARBOK @ 0x0854093C
	@ categoryName: コブラ
	pokedex_entry 0x5A, 0x98, 0x77, 0x00, 0x00, 0x00, 35, 650, gPokedexDescription_24, 256, 0, 296, 2

	@  25: SPECIES_PIKACHU @ 0x08540958
	@ categoryName: ねずみ
	pokedex_entry 0x18, 0x3E, 0x20, 0x00, 0x00, 0x00, 4, 60, gPokedexDescription_25, 479, 19, 256, 0

	@  26: SPECIES_RAICHU @ 0x08540974
	@ categoryName: ねずみ
	pokedex_entry 0x18, 0x3E, 0x20, 0x00, 0x00, 0x00, 8, 300, gPokedexDescription_26, 426, 13, 256, 0

	@  27: SPECIES_SANDSHREW @ 0x08540990
	@ categoryName: ねずみ
	pokedex_entry 0x18, 0x3E, 0x20, 0x00, 0x00, 0x00, 6, 120, gPokedexDescription_27, 365, 18, 256, 0

	@  28: SPECIES_SANDSLASH @ 0x085409AC
	@ categoryName: ねずみ
	pokedex_entry 0x18, 0x3E, 0x20, 0x00, 0x00, 0x00, 10, 295, gPokedexDescription_28, 341, 11, 256, 0

	@  29: SPECIES_NIDORAN_F @ 0x085409C8
	@ categoryName: どくばり
	pokedex_entry 0x45, 0x08, 0x46, 0x28, 0x00, 0x00, 4, 70, gPokedexDescription_29, 488, 21, 256, 0

	@  30: SPECIES_NIDORINA @ 0x085409E4
	@ categoryName: どくばり
	pokedex_entry 0x45, 0x08, 0x46, 0x28, 0x00, 0x00, 8, 200, gPokedexDescription_30, 381, 15, 256, 0

	@  31: SPECIES_NIDOQUEEN @ 0x08540A00
	@ categoryName: ドリル
	pokedex_entry 0x95, 0x78, 0x79, 0x00, 0x00, 0x00, 13, 600, gPokedexDescription_31, 293, 4, 256, 0

	@  32: SPECIES_NIDORAN_M @ 0x08540A1C
	@ categoryName: どくばり
	pokedex_entry 0x45, 0x08, 0x46, 0x28, 0x00, 0x00, 5, 90, gPokedexDescription_32, 511, 20, 256, 0

	@  33: SPECIES_NIDORINO @ 0x08540A38
	@ categoryName: どくばり
	pokedex_entry 0x45, 0x08, 0x46, 0x28, 0x00, 0x00, 9, 195, gPokedexDescription_33, 408, 15, 256, 0

	@  34: SPECIES_NIDOKING @ 0x08540A54
	@ categoryName: ドリル
	pokedex_entry 0x95, 0x78, 0x79, 0x00, 0x00, 0x00, 14, 620, gPokedexDescription_34, 256, 0, 256, 0

	@  35: SPECIES_CLEFAIRY @ 0x08540A70
	@ categoryName: ようせい
	pokedex_entry 0x26, 0x03, 0x0E, 0x02, 0x00, 0x00, 6, 75, gPokedexDescription_35, 441, 20, 256, 0

	@  36: SPECIES_CLEFABLE @ 0x08540A8C
	@ categoryName: ようせい
	pokedex_entry 0x26, 0x03, 0x0E, 0x02, 0x00, 0x00, 13, 400, gPokedexDescription_36, 256, 5, 256, 0

	@  37: SPECIES_VULPIX @ 0x08540AA8
	@ categoryName: きつね
	pokedex_entry 0x07, 0x12, 0x18, 0x00, 0x00, 0x00, 6, 99, gPokedexDescription_37, 542, 19, 256, 0

	@  38: SPECIES_NINETALES @ 0x08540AC4
	@ categoryName: きつね
	pokedex_entry 0x07, 0x12, 0x18, 0x00, 0x00, 0x00, 11, 199, gPokedexDescription_38, 339, 10, 256, 0

	@  39: SPECIES_JIGGLYPUFF @ 0x08540AE0
	@ categoryName: ふうせん
	pokedex_entry 0x1C, 0x03, 0x0E, 0x2E, 0x00, 0x00, 5, 55, gPokedexDescription_39, 433, 2, 256, 0

	@  40: SPECIES_WIGGLYTUFF @ 0x08540AFC
	@ categoryName: ふうせん
	pokedex_entry 0x1C, 0x03, 0x0E, 0x2E, 0x00, 0x00, 10, 120, gPokedexDescription_40, 328, 11, 256, 0

	@  41: SPECIES_ZUBAT @ 0x08540B18
	@ categoryName: こうもり
	pokedex_entry 0x0A, 0x03, 0x23, 0x28, 0x00, 0x00, 8, 75, gPokedexDescription_41, 362, -5, 256, 0

	@  42: SPECIES_GOLBAT @ 0x08540B34
	@ categoryName: こうもり
	pokedex_entry 0x0A, 0x03, 0x23, 0x28, 0x00, 0x00, 16, 550, gPokedexDescription_42, 256, 1, 256, 0

	@  43: SPECIES_ODDISH @ 0x08540B50
	@ categoryName: ざっそう
	pokedex_entry 0x3C, 0x50, 0x0F, 0x03, 0x00, 0x00, 5, 54, gPokedexDescription_43, 423, 19, 256, 0

	@  44: SPECIES_GLOOM @ 0x08540B6C
	@ categoryName: ざっそう
	pokedex_entry 0x3C, 0x50, 0x0F, 0x03, 0x00, 0x00, 8, 86, gPokedexDescription_44, 329, 13, 256, 0

	@  45: SPECIES_VILEPLUME @ 0x08540B88
	@ categoryName: フラワー
	pokedex_entry 0x6C, 0x77, 0x7C, 0xAE, 0x00, 0x00, 12, 186, gPokedexDescription_45, 256, 4, 256, 0

	@  46: SPECIES_PARAS @ 0x08540BA4
	@ categoryName: きのこ
	pokedex_entry 0x07, 0x19, 0x0A, 0x00, 0x00, 0x00, 3, 54, gPokedexDescription_46, 593, 22, 256, 0

	@  47: SPECIES_PARASECT @ 0x08540BC0
	@ categoryName: きのこ
	pokedex_entry 0x07, 0x19, 0x0A, 0x00, 0x00, 0x00, 10, 295, gPokedexDescription_47, 307, 8, 256, 0

	@  48: SPECIES_VENONAT @ 0x08540BDC
	@ categoryName: こんちゅう
	pokedex_entry 0x0A, 0x2E, 0x11, 0x35, 0x03, 0x00, 10, 300, gPokedexDescription_48, 360, 0, 256, -1

	@  49: SPECIES_VENOMOTH @ 0x08540BF8
	@ categoryName: どくが
	pokedex_entry 0x45, 0x08, 0x37, 0x00, 0x00, 0x00, 15, 125, gPokedexDescription_49, 285, 2, 256, 1

	@  50: SPECIES_DIGLETT @ 0x08540C14
	@ categoryName: もぐら
	pokedex_entry 0x23, 0x39, 0x27, 0x00, 0x00, 0x00, 2, 8, gPokedexDescription_50, 833, 25, 256, 0

	@  51: SPECIES_DUGTRIO @ 0x08540C30
	@ categoryName: もぐら
	pokedex_entry 0x23, 0x39, 0x27, 0x00, 0x00, 0x00, 7, 333, gPokedexDescription_51, 406, 18, 256, 0

	@  52: SPECIES_MEOWTH @ 0x08540C4C
	@ categoryName: ばけねこ
	pokedex_entry 0x46, 0x09, 0x18, 0x0A, 0x00, 0x00, 4, 42, gPokedexDescription_52, 480, 19, 256, 0

	@  53: SPECIES_PERSIAN @ 0x08540C68
	@ categoryName: シャムネコ
	pokedex_entry 0x5C, 0x84, 0x71, 0x68, 0x5A, 0x00, 10, 320, gPokedexDescription_53, 320, 10, 256, 0

	@  54: SPECIES_PSYDUCK @ 0x08540C84
	@ categoryName: あひる
	pokedex_entry 0x01, 0x1B, 0x29, 0x00, 0x00, 0x00, 8, 196, gPokedexDescription_54, 369, 15, 256, 0

	@  55: SPECIES_GOLDUCK @ 0x08540CA0
	@ categoryName: あひる
	pokedex_entry 0x01, 0x1B, 0x29, 0x00, 0x00, 0x00, 17, 766, gPokedexDescription_55, 256, 1, 273, 1

	@  56: SPECIES_MANKEY @ 0x08540CBC
	@ categoryName: ぶたざる
	pokedex_entry 0x48, 0x10, 0x3C, 0x29, 0x00, 0x00, 5, 280, gPokedexDescription_56, 404, 19, 256, 0

	@  57: SPECIES_PRIMEAPE @ 0x08540CD8
	@ categoryName: ぶたざる
	pokedex_entry 0x48, 0x10, 0x3C, 0x29, 0x00, 0x00, 10, 320, gPokedexDescription_57, 326, 10, 256, 0

	@  58: SPECIES_GROWLITHE @ 0x08540CF4
	@ categoryName: こいぬ
	pokedex_entry 0x0A, 0x02, 0x17, 0x00, 0x00, 0x00, 7, 190, gPokedexDescription_58, 346, 14, 256, 0

	@  59: SPECIES_ARCANINE @ 0x08540D10
	@ categoryName: でんせつ
	pokedex_entry 0x44, 0x2E, 0x0E, 0x12, 0x00, 0x00, 19, 1550, gPokedexDescription_59, 256, 1, 312, 4

	@  60: SPECIES_POLIWAG @ 0x08540D2C
	@ categoryName: おたま
	pokedex_entry 0x05, 0x10, 0x1F, 0x00, 0x00, 0x00, 6, 124, gPokedexDescription_60, 369, 20, 256, 0

	@  61: SPECIES_POLIWHIRL @ 0x08540D48
	@ categoryName: おたま
	pokedex_entry 0x05, 0x10, 0x1F, 0x00, 0x00, 0x00, 10, 200, gPokedexDescription_61, 288, 11, 256, 0

	@  62: SPECIES_POLIWRATH @ 0x08540D64
	@ categoryName: おたま
	pokedex_entry 0x05, 0x10, 0x1F, 0x00, 0x00, 0x00, 13, 540, gPokedexDescription_62, 256, 6, 256, 0

	@  63: SPECIES_ABRA @ 0x08540D80
	@ categoryName: ねんりき
	pokedex_entry 0x18, 0x2E, 0x28, 0x07, 0x00, 0x00, 9, 195, gPokedexDescription_63, 363, 14, 256, 0

	@  64: SPECIES_KADABRA @ 0x08540D9C
	@ categoryName: ねんりき
	pokedex_entry 0x18, 0x2E, 0x28, 0x07, 0x00, 0x00, 13, 565, gPokedexDescription_64, 256, 3, 256, 0

	@  65: SPECIES_ALAKAZAM @ 0x08540DB8
	@ categoryName: ねんりき
	pokedex_entry 0x18, 0x2E, 0x28, 0x07, 0x00, 0x00, 15, 480, gPokedexDescription_65, 256, 3, 256, 0

	@  66: SPECIES_MACHOP @ 0x08540DD4
	@ categoryName: かいりき
	pokedex_entry 0x06, 0x02, 0x28, 0x07, 0x00, 0x00, 8, 195, gPokedexDescription_66, 342, 14, 256, 0

	@  67: SPECIES_MACHOKE @ 0x08540DF0
	@ categoryName: かいりき
	pokedex_entry 0x06, 0x02, 0x28, 0x07, 0x00, 0x00, 15, 705, gPokedexDescription_67, 323, 9, 257, 0

	@  68: SPECIES_MACHAMP @ 0x08540E0C
	@ categoryName: かいりき
	pokedex_entry 0x06, 0x02, 0x28, 0x07, 0x00, 0x00, 16, 1300, gPokedexDescription_68, 280, 1, 269, -1

	@  69: SPECIES_BELLSPROUT @ 0x08540E28
	@ categoryName: フラワー
	pokedex_entry 0x6C, 0x77, 0x7C, 0xAE, 0x00, 0x00, 7, 40, gPokedexDescription_69, 354, 16, 256, 0

	@  70: SPECIES_WEEPINBELL @ 0x08540E44
	@ categoryName: ハエとり
	pokedex_entry 0x6A, 0x54, 0x14, 0x28, 0x00, 0x00, 10, 64, gPokedexDescription_70, 256, 0, 256, 0

	@  71: SPECIES_VICTREEBEL @ 0x08540E60
	@ categoryName: ハエとり
	pokedex_entry 0x6A, 0x54, 0x14, 0x28, 0x00, 0x00, 17, 155, gPokedexDescription_71, 256, 1, 312, 3

	@  72: SPECIES_TENTACOOL @ 0x08540E7C
	@ categoryName: くらげ
	pokedex_entry 0x08, 0x27, 0x3A, 0x00, 0x00, 0x00, 9, 455, gPokedexDescription_72, 256, 0, 256, 0

	@  73: SPECIES_TENTACRUEL @ 0x08540E98
	@ categoryName: くらげ
	pokedex_entry 0x08, 0x27, 0x3A, 0x00, 0x00, 0x00, 16, 550, gPokedexDescription_73, 256, 0, 312, 1

	@  74: SPECIES_GEODUDE @ 0x08540EB4
	@ categoryName: がんせき
	pokedex_entry 0x37, 0x2E, 0x0E, 0x07, 0x00, 0x00, 4, 200, gPokedexDescription_74, 347, 18, 256, 0

	@  75: SPECIES_GRAVELER @ 0x08540ED0
	@ categoryName: がんせき
	pokedex_entry 0x37, 0x2E, 0x0E, 0x07, 0x00, 0x00, 10, 1050, gPokedexDescription_75, 256, 2, 256, 0

	@  76: SPECIES_GOLEM @ 0x08540EEC
	@ categoryName: メガトン
	pokedex_entry 0x72, 0x87, 0x64, 0x7E, 0x00, 0x00, 14, 3000, gPokedexDescription_76, 256, 3, 296, 2

	@  77: SPECIES_PONYTA @ 0x08540F08
	@ categoryName: ひのうま
	pokedex_entry 0x1B, 0x19, 0x03, 0x1F, 0x00, 0x00, 10, 300, gPokedexDescription_77, 283, 8, 256, 0

	@  78: SPECIES_RAPIDASH @ 0x08540F24
	@ categoryName: ひのうま
	pokedex_entry 0x1B, 0x19, 0x03, 0x1F, 0x00, 0x00, 17, 950, gPokedexDescription_78, 256, 0, 289, 1

	@  79: SPECIES_SLOWPOKE @ 0x08540F40
	@ categoryName: まぬけ
	pokedex_entry 0x1F, 0x17, 0x09, 0x00, 0x00, 0x00, 12, 360, gPokedexDescription_79, 256, 10, 256, 0

	@  80: SPECIES_SLOWBRO @ 0x08540F5C
	@ categoryName: やどかり
	pokedex_entry 0x24, 0x45, 0x06, 0x28, 0x00, 0x00, 16, 785, gPokedexDescription_80, 256, 6, 296, 2

	@  81: SPECIES_MAGNEMITE @ 0x08540F78
	@ categoryName: じしゃく
	pokedex_entry 0x3D, 0x0C, 0x34, 0x08, 0x00, 0x00, 3, 60, gPokedexDescription_81, 288, -9, 256, 0

	@  82: SPECIES_MAGNETON @ 0x08540F94
	@ categoryName: じしゃく
	pokedex_entry 0x3D, 0x0C, 0x34, 0x08, 0x00, 0x00, 10, 600, gPokedexDescription_82, 292, 1, 256, 0

	@  83: SPECIES_FARFETCHD @ 0x08540FB0
	@ categoryName: かるがも
	pokedex_entry 0x06, 0x29, 0x37, 0x23, 0x00, 0x00, 8, 150, gPokedexDescription_83, 330, 2, 293, 2

	@  84: SPECIES_DODUO @ 0x08540FCC
	@ categoryName: ふたごどり
	pokedex_entry 0x1C, 0x10, 0x3B, 0x45, 0x28, 0x00, 14, 392, gPokedexDescription_84, 256, 3, 257, -1

	@  85: SPECIES_DODRIO @ 0x08540FE8
	@ categoryName: みつごどり
	pokedex_entry 0x20, 0x12, 0x3B, 0x45, 0x28, 0x00, 18, 852, gPokedexDescription_85, 256, 0, 268, 0

	@  86: SPECIES_SEEL @ 0x08541004
	@ categoryName: あしか
	pokedex_entry 0x01, 0x0C, 0x06, 0x00, 0x00, 0x00, 11, 900, gPokedexDescription_86, 297, 8, 256, 0

	@  87: SPECIES_DEWGONG @ 0x08541020
	@ categoryName: あしか
	pokedex_entry 0x01, 0x0C, 0x06, 0x00, 0x00, 0x00, 17, 1200, gPokedexDescription_87, 256, 0, 275, 0

	@  88: SPECIES_GRIMER @ 0x0854103C
	@ categoryName: ヘドロ
	pokedex_entry 0x6D, 0x95, 0x7B, 0x00, 0x00, 0x00, 9, 300, gPokedexDescription_88, 258, 10, 256, 0

	@  89: SPECIES_MUK @ 0x08541058
	@ categoryName: ヘドロ
	pokedex_entry 0x6D, 0x95, 0x7B, 0x00, 0x00, 0x00, 12, 300, gPokedexDescription_89, 256, 2, 256, 0

	@  90: SPECIES_SHELLDER @ 0x08541074
	@ categoryName: 2まいがい
	pokedex_entry 0xA3, 0x1F, 0x02, 0x37, 0x02, 0x00, 3, 40, gPokedexDescription_90, 675, 24, 256, 0

	@  91: SPECIES_CLOYSTER @ 0x08541090
	@ categoryName: 2まいがい
	pokedex_entry 0xA3, 0x1F, 0x02, 0x37, 0x02, 0x00, 15, 1325, gPokedexDescription_91, 256, 0, 269, 1

	@  92: SPECIES_GASTLY @ 0x085410AC
	@ categoryName: ガスじょう
	pokedex_entry 0x87, 0x5D, 0x3D, 0x36, 0x03, 0x00, 13, 1, gPokedexDescription_92, 256, 0, 256, 0

	@  93: SPECIES_HAUNTER @ 0x085410C8
	@ categoryName: ガスじょう
	pokedex_entry 0x87, 0x5D, 0x3D, 0x36, 0x03, 0x00, 16, 1, gPokedexDescription_93, 256, 2, 293, 2

	@  94: SPECIES_GENGAR @ 0x085410E4
	@ categoryName: シャドー
	pokedex_entry 0x5C, 0x84, 0x95, 0xAE, 0x00, 0x00, 15, 405, gPokedexDescription_94, 256, 2, 302, 2

	@  95: SPECIES_ONIX @ 0x08541100
	@ categoryName: いわへび
	pokedex_entry 0x02, 0x2C, 0x1D, 0x47, 0x00, 0x00, 88, 2100, gPokedexDescription_95, 256, 1, 515, 14

	@  96: SPECIES_DROWZEE @ 0x0854111C
	@ categoryName: さいみん
	pokedex_entry 0x0B, 0x02, 0x20, 0x2E, 0x00, 0x00, 10, 324, gPokedexDescription_96, 274, 6, 256, 0

	@  97: SPECIES_HYPNO @ 0x08541138
	@ categoryName: さいみん
	pokedex_entry 0x0B, 0x02, 0x20, 0x2E, 0x00, 0x00, 16, 756, gPokedexDescription_97, 256, 3, 257, 0

	@  98: SPECIES_KRABBY @ 0x08541154
	@ categoryName: さわがに
	pokedex_entry 0x0B, 0x2C, 0x37, 0x16, 0x00, 0x00, 4, 65, gPokedexDescription_98, 469, 20, 256, 0

	@  99: SPECIES_KINGLER @ 0x08541170
	@ categoryName: はさみ
	pokedex_entry 0x1A, 0x0B, 0x20, 0x00, 0x00, 0x00, 13, 600, gPokedexDescription_99, 256, 2, 256, 0

	@ 100: SPECIES_VOLTORB @ 0x0854118C
	@ categoryName: ボール
	pokedex_entry 0x9A, 0xAE, 0x79, 0x00, 0x00, 0x00, 5, 104, gPokedexDescription_100, 364, -8, 256, 0

	@ 101: SPECIES_ELECTRODE @ 0x085411A8
	@ categoryName: ボール
	pokedex_entry 0x9A, 0xAE, 0x79, 0x00, 0x00, 0x00, 12, 666, gPokedexDescription_101, 256, 0, 256, 0

	@ 102: SPECIES_EXEGGCUTE @ 0x085411C4
	@ categoryName: たまご
	pokedex_entry 0x10, 0x1F, 0x3B, 0x00, 0x00, 0x00, 4, 25, gPokedexDescription_102, 489, -4, 256, 0

	@ 103: SPECIES_EXEGGUTOR @ 0x085411E0
	@ categoryName: やしのみ
	pokedex_entry 0x24, 0x0C, 0x19, 0x20, 0x00, 0x00, 20, 1200, gPokedexDescription_103, 256, 0, 309, 5

	@ 104: SPECIES_CUBONE @ 0x085411FC
	@ categoryName: こどく
	pokedex_entry 0x0A, 0x45, 0x08, 0x00, 0x00, 0x00, 4, 65, gPokedexDescription_104, 545, 21, 256, 0

	@ 105: SPECIES_MAROWAK @ 0x08541218
	@ categoryName: ほねずき
	pokedex_entry 0x1E, 0x18, 0x3E, 0x07, 0x00, 0x00, 10, 450, gPokedexDescription_105, 293, 12, 256, 0

	@ 106: SPECIES_HITMONLEE @ 0x08541234
	@ categoryName: キック
	pokedex_entry 0x57, 0xA0, 0x58, 0x00, 0x00, 0x00, 15, 498, gPokedexDescription_106, 256, 3, 259, 1

	@ 107: SPECIES_HITMONCHAN @ 0x08541250
	@ categoryName: パンチ
	pokedex_entry 0x9B, 0x7E, 0x61, 0x00, 0x00, 0x00, 14, 502, gPokedexDescription_107, 256, 2, 277, 2

	@ 108: SPECIES_LICKITUNG @ 0x0854126C
	@ categoryName: なめまわし
	pokedex_entry 0x15, 0x22, 0x1F, 0x2C, 0x0C, 0x00, 12, 655, gPokedexDescription_108, 256, 4, 256, 0

	@ 109: SPECIES_KOFFING @ 0x08541288
	@ categoryName: どくガス
	pokedex_entry 0x45, 0x08, 0x87, 0x5D, 0x00, 0x00, 6, 10, gPokedexDescription_109, 369, -1, 256, 0

	@ 110: SPECIES_WEEZING @ 0x085412A4
	@ categoryName: どくガス
	pokedex_entry 0x45, 0x08, 0x87, 0x5D, 0x00, 0x00, 12, 95, gPokedexDescription_110, 305, 3, 256, 0

	@ 111: SPECIES_RHYHORN @ 0x085412C0
	@ categoryName: とげとげ
	pokedex_entry 0x14, 0x3A, 0x14, 0x3A, 0x00, 0x00, 10, 1150, gPokedexDescription_111, 267, 6, 256, 0

	@ 112: SPECIES_RHYDON @ 0x085412DC
	@ categoryName: ドリル
	pokedex_entry 0x95, 0x78, 0x79, 0x00, 0x00, 0x00, 19, 1200, gPokedexDescription_112, 256, 1, 299, 2

	@ 113: SPECIES_CHANSEY @ 0x085412F8
	@ categoryName: たまご
	pokedex_entry 0x10, 0x1F, 0x3B, 0x00, 0x00, 0x00, 11, 346, gPokedexDescription_113, 257, 7, 256, 0

	@ 114: SPECIES_TANGELA @ 0x08541314
	@ categoryName: ツルじょう
	pokedex_entry 0x62, 0x79, 0x3D, 0x36, 0x03, 0x00, 10, 350, gPokedexDescription_114, 304, 1, 256, 0

	@ 115: SPECIES_KANGASKHAN @ 0x08541330
	@ categoryName: おやこ
	pokedex_entry 0x05, 0x24, 0x0A, 0x00, 0x00, 0x00, 22, 800, gPokedexDescription_115, 256, 0, 387, 8

	@ 116: SPECIES_HORSEA @ 0x0854134C
	@ categoryName: ドラゴン
	pokedex_entry 0x95, 0x77, 0x8B, 0x7E, 0x00, 0x00, 4, 80, gPokedexDescription_116, 399, -1, 256, 0

	@ 117: SPECIES_SEADRA @ 0x08541368
	@ categoryName: ドラゴン
	pokedex_entry 0x95, 0x77, 0x8B, 0x7E, 0x00, 0x00, 12, 250, gPokedexDescription_117, 299, 3, 256, 0

	@ 118: SPECIES_GOLDEEN @ 0x08541384
	@ categoryName: きんぎょ
	pokedex_entry 0x07, 0x2E, 0x38, 0x36, 0x00, 0x00, 6, 150, gPokedexDescription_118, 379, 4, 256, 0

	@ 119: SPECIES_SEAKING @ 0x085413A0
	@ categoryName: きんぎょ
	pokedex_entry 0x07, 0x2E, 0x38, 0x36, 0x00, 0x00, 13, 390, gPokedexDescription_119, 256, 3, 256, 0

	@ 120: SPECIES_STARYU @ 0x085413BC
	@ categoryName: ほしがた
	pokedex_entry 0x1E, 0x0C, 0x37, 0x10, 0x00, 0x00, 8, 345, gPokedexDescription_120, 326, 1, 256, 0

	@ 121: SPECIES_STARMIE @ 0x085413D8
	@ categoryName: なぞの
	pokedex_entry 0x15, 0x40, 0x19, 0x00, 0x00, 0x00, 11, 800, gPokedexDescription_121, 301, 3, 256, 0

	@ 122: SPECIES_MR_MIME @ 0x085413F4
	@ categoryName: バリアー
	pokedex_entry 0x96, 0x78, 0x51, 0xAE, 0x00, 0x00, 13, 545, gPokedexDescription_122, 258, 6, 256, 0

	@ 123: SPECIES_SCYTHER @ 0x08541410
	@ categoryName: かまきり
	pokedex_entry 0x06, 0x1F, 0x07, 0x28, 0x00, 0x00, 15, 560, gPokedexDescription_123, 256, 1, 293, 2

	@ 124: SPECIES_JYNX @ 0x0854142C
	@ categoryName: ひとがた
	pokedex_entry 0x1B, 0x14, 0x37, 0x10, 0x00, 0x00, 14, 406, gPokedexDescription_124, 256, 3, 300, 1

	@ 125: SPECIES_ELECTABUZZ @ 0x08541448
	@ categoryName: でんげき
	pokedex_entry 0x44, 0x2E, 0x3A, 0x07, 0x00, 0x00, 11, 300, gPokedexDescription_125, 351, 8, 256, 0

	@ 126: SPECIES_MAGMAR @ 0x08541464
	@ categoryName: ひふき
	pokedex_entry 0x1B, 0x1C, 0x07, 0x00, 0x00, 0x00, 13, 445, gPokedexDescription_126, 277, 5, 256, 0

	@ 127: SPECIES_PINSIR @ 0x08541480
	@ categoryName: くわがた
	pokedex_entry 0x08, 0x2C, 0x37, 0x10, 0x00, 0x00, 15, 550, gPokedexDescription_127, 256, 2, 257, 0

	@ 128: SPECIES_TAUROS @ 0x0854149C
	@ categoryName: あばれうし
	pokedex_entry 0x01, 0x46, 0x2A, 0x03, 0x0C, 0x00, 14, 884, gPokedexDescription_128, 256, 0, 256, 0

	@ 129: SPECIES_MAGIKARP @ 0x085414B8
	@ categoryName: さかな
	pokedex_entry 0x0B, 0x06, 0x15, 0x00, 0x00, 0x00, 9, 100, gPokedexDescription_129, 310, 4, 256, 0

	@ 130: SPECIES_GYARADOS @ 0x085414D4
	@ categoryName: きょうあく
	pokedex_entry 0x07, 0x36, 0x03, 0x01, 0x08, 0x00, 65, 2350, gPokedexDescription_130, 256, 6, 481, 13

	@ 131: SPECIES_LAPRAS @ 0x085414F0
	@ categoryName: のりもの
	pokedex_entry 0x19, 0x28, 0x23, 0x19, 0x00, 0x00, 25, 2200, gPokedexDescription_131, 257, 10, 423, 8

	@ 132: SPECIES_DITTO @ 0x0854150C
	@ categoryName: へんしん
	pokedex_entry 0x1D, 0x2E, 0x0C, 0x2E, 0x00, 0x00, 3, 40, gPokedexDescription_132, 633, 23, 256, 0

	@ 133: SPECIES_EEVEE @ 0x08541528
	@ categoryName: しんか
	pokedex_entry 0x0C, 0x2E, 0x06, 0x00, 0x00, 0x00, 3, 65, gPokedexDescription_133, 476, 18, 256, 0

	@ 134: SPECIES_VAPOREON @ 0x08541544
	@ categoryName: あわはき
	pokedex_entry 0x01, 0x2C, 0x1A, 0x07, 0x00, 0x00, 10, 290, gPokedexDescription_134, 316, 8, 256, 0

	@ 135: SPECIES_JOLTEON @ 0x08541560
	@ categoryName: かみなり
	pokedex_entry 0x06, 0x20, 0x15, 0x28, 0x00, 0x00, 8, 245, gPokedexDescription_135, 283, 8, 256, 0

	@ 136: SPECIES_FLAREON @ 0x0854157C
	@ categoryName: ほのお
	pokedex_entry 0x1E, 0x19, 0x05, 0x00, 0x00, 0x00, 9, 250, gPokedexDescription_136, 306, 12, 256, 0

	@ 137: SPECIES_PORYGON @ 0x08541598
	@ categoryName: バーチャル
	pokedex_entry 0x96, 0xAE, 0x61, 0x84, 0x79, 0x00, 8, 365, gPokedexDescription_137, 328, 15, 256, 0

	@ 138: SPECIES_OMANYTE @ 0x085415B4
	@ categoryName: うずまき
	pokedex_entry 0x03, 0x3E, 0x1F, 0x07, 0x00, 0x00, 4, 75, gPokedexDescription_138, 521, 22, 256, 0

	@ 139: SPECIES_OMASTAR @ 0x085415D0
	@ categoryName: うずまき
	pokedex_entry 0x03, 0x3E, 0x1F, 0x07, 0x00, 0x00, 10, 350, gPokedexDescription_139, 307, 7, 256, 0

	@ 140: SPECIES_KABUTO @ 0x085415EC
	@ categoryName: こうら
	pokedex_entry 0x0A, 0x03, 0x27, 0x00, 0x00, 0x00, 5, 115, gPokedexDescription_140, 454, 21, 256, 0

	@ 141: SPECIES_KABUTOPS @ 0x08541608
	@ categoryName: こうら
	pokedex_entry 0x0A, 0x03, 0x27, 0x00, 0x00, 0x00, 13, 405, gPokedexDescription_141, 271, 3, 256, 0

	@ 142: SPECIES_AERODACTYL @ 0x08541624
	@ categoryName: かせき
	pokedex_entry 0x06, 0x0E, 0x07, 0x00, 0x00, 0x00, 18, 590, gPokedexDescription_142, 256, 0, 302, 4

	@ 143: SPECIES_SNORLAX @ 0x08541640
	@ categoryName: いねむり
	pokedex_entry 0x02, 0x18, 0x21, 0x28, 0x00, 0x00, 21, 4600, gPokedexDescription_143, 256, 4, 423, 11

	@ 144: SPECIES_ARTICUNO @ 0x0854165C
	@ categoryName: れいとう
	pokedex_entry 0x2A, 0x02, 0x14, 0x03, 0x00, 0x00, 17, 554, gPokedexDescription_144, 256, 0, 309, 2

	@ 145: SPECIES_ZAPDOS @ 0x08541678
	@ categoryName: でんげき
	pokedex_entry 0x44, 0x2E, 0x3A, 0x07, 0x00, 0x00, 16, 526, gPokedexDescription_145, 256, 0, 318, 3

	@ 146: SPECIES_MOLTRES @ 0x08541694
	@ categoryName: かえん
	pokedex_entry 0x06, 0x04, 0x2E, 0x00, 0x00, 0x00, 20, 600, gPokedexDescription_146, 270, 0, 387, 8

	@ 147: SPECIES_DRATINI @ 0x085416B0
	@ categoryName: ドラゴン
	pokedex_entry 0x95, 0x77, 0x8B, 0x7E, 0x00, 0x00, 18, 33, gPokedexDescription_147, 256, 8, 386, 6

	@ 148: SPECIES_DRAGONAIR @ 0x085416CC
	@ categoryName: ドラゴン
	pokedex_entry 0x95, 0x77, 0x8B, 0x7E, 0x00, 0x00, 40, 165, gPokedexDescription_148, 256, 0, 411, 5

	@ 149: SPECIES_DRAGONITE @ 0x085416E8
	@ categoryName: ドラゴン
	pokedex_entry 0x95, 0x77, 0x8B, 0x7E, 0x00, 0x00, 22, 2100, gPokedexDescription_149, 256, 0, 309, 4

	@ 150: SPECIES_MEWTWO @ 0x08541704
	@ categoryName: いでんし
	pokedex_entry 0x02, 0x44, 0x2E, 0x0C, 0x00, 0x00, 20, 1220, gPokedexDescription_150, 256, 0, 309, 4

	@ 151: SPECIES_MEW @ 0x08541720
	@ categoryName: しんしゅ
	pokedex_entry 0x0C, 0x2E, 0x0C, 0x35, 0x00, 0x00, 4, 40, gPokedexDescription_151, 457, -2, 256, 0

	@ 152: SPECIES_CHIKORITA @ 0x0854173C
	@ categoryName: はっぱ
	pokedex_entry 0x1A, 0x50, 0x4B, 0x00, 0x00, 0x00, 9, 64, gPokedexDescription_152, 512, 20, 256, 0

	@ 153: SPECIES_BAYLEEF @ 0x08541758
	@ categoryName: はっぱ
	pokedex_entry 0x1A, 0x50, 0x4B, 0x00, 0x00, 0x00, 12, 158, gPokedexDescription_153, 296, 4, 256, 0

	@ 154: SPECIES_MEGANIUM @ 0x08541774
	@ categoryName: ハーブ
	pokedex_entry 0x6A, 0xAE, 0x98, 0x00, 0x00, 0x00, 18, 1005, gPokedexDescription_154, 256, 0, 277, 1

	@ 155: SPECIES_CYNDAQUIL @ 0x08541790
	@ categoryName: ひねずみ
	pokedex_entry 0x1B, 0x18, 0x3E, 0x20, 0x00, 0x00, 5, 79, gPokedexDescription_155, 539, 21, 256, 0

	@ 156: SPECIES_QUILAVA @ 0x085417AC
	@ categoryName: かざん
	pokedex_entry 0x06, 0x3C, 0x2E, 0x00, 0x00, 0x00, 9, 190, gPokedexDescription_156, 329, 11, 256, 0

	@ 157: SPECIES_TYPHLOSION @ 0x085417C8
	@ categoryName: かざん
	pokedex_entry 0x06, 0x3C, 0x2E, 0x00, 0x00, 0x00, 17, 795, gPokedexDescription_157, 256, 0, 268, 1

	@ 158: SPECIES_TOTODILE @ 0x085417E4
	@ categoryName: おおあご
	pokedex_entry 0x05, 0x05, 0x01, 0x3B, 0x00, 0x00, 6, 95, gPokedexDescription_158, 487, 20, 256, 0

	@ 159: SPECIES_CROCONAW @ 0x08541800
	@ categoryName: おおあご
	pokedex_entry 0x05, 0x05, 0x01, 0x3B, 0x00, 0x00, 11, 250, gPokedexDescription_159, 378, 13, 256, 0

	@ 160: SPECIES_FERALIGATR @ 0x0854181C
	@ categoryName: おおあご
	pokedex_entry 0x05, 0x05, 0x01, 0x3B, 0x00, 0x00, 23, 888, gPokedexDescription_160, 256, 0, 342, 7

	@ 161: SPECIES_SENTRET @ 0x08541838
	@ categoryName: みはり
	pokedex_entry 0x20, 0x1A, 0x28, 0x00, 0x00, 0x00, 8, 60, gPokedexDescription_161, 439, 12, 256, 0

	@ 162: SPECIES_FURRET @ 0x08541854
	@ categoryName: どうなが
	pokedex_entry 0x45, 0x03, 0x15, 0x37, 0x00, 0x00, 18, 325, gPokedexDescription_162, 346, 11, 256, 0

	@ 163: SPECIES_HOOTHOOT @ 0x08541870
	@ categoryName: ふくろう
	pokedex_entry 0x1C, 0x08, 0x2B, 0x03, 0x00, 0x00, 7, 212, gPokedexDescription_163, 380, -2, 256, 0

	@ 164: SPECIES_NOCTOWL @ 0x0854188C
	@ categoryName: ふくろう
	pokedex_entry 0x1C, 0x08, 0x2B, 0x03, 0x00, 0x00, 16, 408, gPokedexDescription_164, 278, 3, 256, 0

	@ 165: SPECIES_LEDYBA @ 0x085418A8
	@ categoryName: いつつぼし
	pokedex_entry 0x02, 0x12, 0x12, 0x4A, 0x0C, 0x00, 10, 108, gPokedexDescription_165, 256, 4, 256, 0

	@ 166: SPECIES_LEDIAN @ 0x085418C4
	@ categoryName: いつつぼし
	pokedex_entry 0x02, 0x12, 0x12, 0x4A, 0x0C, 0x00, 14, 356, gPokedexDescription_166, 256, 2, 256, 0

	@ 167: SPECIES_SPINARAK @ 0x085418E0
	@ categoryName: いとはき
	pokedex_entry 0x02, 0x14, 0x1A, 0x07, 0x00, 0x00, 5, 85, gPokedexDescription_167, 414, 21, 256, 0

	@ 168: SPECIES_ARIADOS @ 0x085418FC
	@ categoryName: あしなが
	pokedex_entry 0x01, 0x0C, 0x15, 0x37, 0x00, 0x00, 11, 335, gPokedexDescription_168, 316, 8, 256, 0

	@ 169: SPECIES_CROBAT @ 0x08541918
	@ categoryName: こうもり
	pokedex_entry 0x0A, 0x03, 0x23, 0x28, 0x00, 0x00, 18, 750, gPokedexDescription_169, 256, 0, 281, 1

	@ 170: SPECIES_CHINCHOU @ 0x08541934
	@ categoryName: あんこう
	pokedex_entry 0x01, 0x2E, 0x0A, 0x03, 0x00, 0x00, 5, 120, gPokedexDescription_170, 424, -2, 256, 0

	@ 171: SPECIES_LANTURN @ 0x08541950
	@ categoryName: ライト
	pokedex_entry 0x77, 0x52, 0x64, 0x00, 0x00, 0x00, 12, 225, gPokedexDescription_171, 269, 6, 256, 0

	@ 172: SPECIES_PICHU @ 0x0854196C
	@ categoryName: こねずみ
	pokedex_entry 0x0A, 0x18, 0x3E, 0x20, 0x00, 0x00, 3, 20, gPokedexDescription_172, 508, 20, 256, 0

	@ 173: SPECIES_CLEFFA @ 0x08541988
	@ categoryName: ほしがた
	pokedex_entry 0x1E, 0x0C, 0x37, 0x10, 0x00, 0x00, 3, 30, gPokedexDescription_173, 462, 23, 256, 0

	@ 174: SPECIES_IGGLYBUFF @ 0x085419A4
	@ categoryName: ふうせん
	pokedex_entry 0x1C, 0x03, 0x0E, 0x2E, 0x00, 0x00, 3, 10, gPokedexDescription_174, 457, -1, 256, 0

	@ 175: SPECIES_TOGEPI @ 0x085419C0
	@ categoryName: はりたま
	pokedex_entry 0x1A, 0x28, 0x10, 0x1F, 0x00, 0x00, 3, 15, gPokedexDescription_175, 507, 23, 256, 0

	@ 176: SPECIES_TOGETIC @ 0x085419DC
	@ categoryName: しあわせ
	pokedex_entry 0x0C, 0x01, 0x2C, 0x0E, 0x00, 0x00, 6, 32, gPokedexDescription_176, 424, 17, 256, 0

	@ 177: SPECIES_NATU @ 0x085419F8
	@ categoryName: ことり
	pokedex_entry 0x0A, 0x14, 0x28, 0x00, 0x00, 0x00, 2, 20, gPokedexDescription_177, 610, 25, 256, 0

	@ 178: SPECIES_XATU @ 0x08541A14
	@ categoryName: せいれい
	pokedex_entry 0x0E, 0x02, 0x2A, 0x02, 0x00, 0x00, 15, 150, gPokedexDescription_178, 256, 6, 318, 4

	@ 179: SPECIES_MAREEP @ 0x08541A30
	@ categoryName: わたげ
	pokedex_entry 0x2C, 0x10, 0x3A, 0x00, 0x00, 0x00, 6, 78, gPokedexDescription_179, 379, 18, 256, 0

	@ 180: SPECIES_FLAAFFY @ 0x08541A4C
	@ categoryName: わたげ
	pokedex_entry 0x2C, 0x10, 0x3A, 0x00, 0x00, 0x00, 8, 133, gPokedexDescription_180, 372, 15, 256, 0

	@ 181: SPECIES_AMPHAROS @ 0x08541A68
	@ categoryName: ライト
	pokedex_entry 0x77, 0x52, 0x64, 0x00, 0x00, 0x00, 14, 615, gPokedexDescription_181, 256, 4, 256, 0

	@ 182: SPECIES_BELLOSSOM @ 0x08541A84
	@ categoryName: フラワー
	pokedex_entry 0x6C, 0x77, 0x7C, 0xAE, 0x00, 0x00, 4, 58, gPokedexDescription_182, 472, 21, 256, 0

	@ 183: SPECIES_MARILL @ 0x08541AA0
	@ categoryName: みずねずみ
	pokedex_entry 0x20, 0x3E, 0x18, 0x3E, 0x20, 0x00, 4, 85, gPokedexDescription_183, 476, 20, 256, 0

	@ 184: SPECIES_AZUMARILL @ 0x08541ABC
	@ categoryName: みずうさぎ
	pokedex_entry 0x20, 0x3E, 0x03, 0x0B, 0x38, 0x00, 8, 285, gPokedexDescription_184, 448, 16, 256, 0

	@ 185: SPECIES_SUDOWOODO @ 0x08541AD8
	@ categoryName: まね
	pokedex_entry 0x1F, 0x18, 0x00, 0x00, 0x00, 0x00, 12, 380, gPokedexDescription_185, 305, 8, 256, 0

	@ 186: SPECIES_POLITOED @ 0x08541AF4
	@ categoryName: かえる
	pokedex_entry 0x06, 0x04, 0x29, 0x00, 0x00, 0x00, 11, 339, gPokedexDescription_186, 289, 6, 256, 0

	@ 187: SPECIES_HOPPIP @ 0x08541B10
	@ categoryName: わたくさ
	pokedex_entry 0x2C, 0x10, 0x08, 0x0B, 0x00, 0x00, 4, 5, gPokedexDescription_187, 562, -7, 256, 0

	@ 188: SPECIES_SKIPLOOM @ 0x08541B2C
	@ categoryName: わたくさ
	pokedex_entry 0x2C, 0x10, 0x08, 0x0B, 0x00, 0x00, 6, 10, gPokedexDescription_188, 387, 0, 256, 0

	@ 189: SPECIES_JUMPLUFF @ 0x08541B48
	@ categoryName: わたくさ
	pokedex_entry 0x2C, 0x10, 0x08, 0x0B, 0x00, 0x00, 8, 30, gPokedexDescription_189, 418, -4, 256, 0

	@ 190: SPECIES_AIPOM @ 0x08541B64
	@ categoryName: おなが
	pokedex_entry 0x05, 0x15, 0x37, 0x00, 0x00, 0x00, 8, 115, gPokedexDescription_190, 363, 6, 256, 0

	@ 191: SPECIES_SUNKERN @ 0x08541B80
	@ categoryName: たね
	pokedex_entry 0x10, 0x18, 0x00, 0x00, 0x00, 0x00, 3, 18, gPokedexDescription_191, 541, 0, 256, 0

	@ 192: SPECIES_SUNFLORA @ 0x08541B9C
	@ categoryName: たいよう
	pokedex_entry 0x10, 0x02, 0x26, 0x03, 0x00, 0x00, 8, 85, gPokedexDescription_192, 444, 15, 256, 0

	@ 193: SPECIES_YANMA @ 0x08541BB8
	@ categoryName: うすばね
	pokedex_entry 0x03, 0x0D, 0x46, 0x18, 0x00, 0x00, 12, 380, gPokedexDescription_193, 274, -1, 256, 0

	@ 194: SPECIES_WOOPER @ 0x08541BD4
	@ categoryName: みずうお
	pokedex_entry 0x20, 0x3E, 0x03, 0x05, 0x00, 0x00, 4, 85, gPokedexDescription_194, 479, 21, 256, 0

	@ 195: SPECIES_QUAGSIRE @ 0x08541BF0
	@ categoryName: みずうお
	pokedex_entry 0x20, 0x3E, 0x03, 0x05, 0x00, 0x00, 14, 750, gPokedexDescription_195, 256, 4, 256, 0

	@ 196: SPECIES_ESPEON @ 0x08541C0C
	@ categoryName: たいよう
	pokedex_entry 0x10, 0x02, 0x26, 0x03, 0x00, 0x00, 9, 265, gPokedexDescription_196, 363, 14, 256, 0

	@ 197: SPECIES_UMBREON @ 0x08541C28
	@ categoryName: げっこう
	pokedex_entry 0x3A, 0x50, 0x0A, 0x03, 0x00, 0x00, 10, 270, gPokedexDescription_197, 317, 11, 256, 0

	@ 198: SPECIES_MURKROW @ 0x08541C44
	@ categoryName: くらやみ
	pokedex_entry 0x08, 0x27, 0x24, 0x20, 0x00, 0x00, 5, 21, gPokedexDescription_198, 401, -8, 256, 1

	@ 199: SPECIES_SLOWKING @ 0x08541C60
	@ categoryName: おうじゃ
	pokedex_entry 0x05, 0x03, 0x3D, 0x34, 0x00, 0x00, 20, 795, gPokedexDescription_199, 256, 0, 309, 5

	@ 200: SPECIES_MISDREAVUS @ 0x08541C7C
	@ categoryName: よなき
	pokedex_entry 0x26, 0x15, 0x07, 0x00, 0x00, 0x00, 7, 10, gPokedexDescription_200, 407, -8, 256, 0

	@ 201: SPECIES_UNOWN @ 0x08541C98
	@ categoryName: シンボル
	pokedex_entry 0x5C, 0x7E, 0x9A, 0x79, 0x00, 0x00, 5, 50, gPokedexDescription_201, 411, 2, 256, 0

	@ 202: SPECIES_WOBBUFFET @ 0x08541CB4
	@ categoryName: がまん
	pokedex_entry 0x37, 0x1F, 0x2E, 0x00, 0x00, 0x00, 13, 285, gPokedexDescription_202, 274, 4, 256, 0

	@ 203: SPECIES_GIRAFARIG @ 0x08541CD0
	@ categoryName: くびなが
	pokedex_entry 0x08, 0x47, 0x15, 0x37, 0x00, 0x00, 15, 415, gPokedexDescription_203, 281, 1, 256, 0

	@ 204: SPECIES_PINECO @ 0x08541CEC
	@ categoryName: みのむし
	pokedex_entry 0x20, 0x19, 0x21, 0x0C, 0x00, 0x00, 6, 72, gPokedexDescription_204, 445, 2, 256, 0

	@ 205: SPECIES_FORRETRESS @ 0x08541D08
	@ categoryName: みのむし
	pokedex_entry 0x20, 0x19, 0x21, 0x0C, 0x00, 0x00, 12, 1258, gPokedexDescription_205, 293, 5, 256, 0

	@ 206: SPECIES_DUNSPARCE @ 0x08541D24
	@ categoryName: つちへび
	pokedex_entry 0x12, 0x11, 0x1D, 0x47, 0x00, 0x00, 15, 140, gPokedexDescription_206, 316, 17, 256, 0

	@ 207: SPECIES_GLIGAR @ 0x08541D40
	@ categoryName: とびさそり
	pokedex_entry 0x14, 0x47, 0x0B, 0x0F, 0x28, 0x00, 11, 648, gPokedexDescription_207, 350, -1, 256, 0

	@ 208: SPECIES_STEELIX @ 0x08541D5C
	@ categoryName: てつへび
	pokedex_entry 0x13, 0x12, 0x1D, 0x47, 0x00, 0x00, 92, 4000, gPokedexDescription_208, 256, 0, 516, 13

	@ 209: SPECIES_SNUBBULL @ 0x08541D78
	@ categoryName: ようせい
	pokedex_entry 0x26, 0x03, 0x0E, 0x02, 0x00, 0x00, 6, 78, gPokedexDescription_209, 465, 19, 256, 0

	@ 210: SPECIES_GRANBULL @ 0x08541D94
	@ categoryName: ようせい
	pokedex_entry 0x26, 0x03, 0x0E, 0x02, 0x00, 0x00, 14, 487, gPokedexDescription_210, 256, 4, 256, 0

	@ 211: SPECIES_QWILFISH @ 0x08541DB0
	@ categoryName: ふうせん
	pokedex_entry 0x1C, 0x03, 0x0E, 0x2E, 0x00, 0x00, 5, 39, gPokedexDescription_211, 430, 0, 256, 0

	@ 212: SPECIES_SCIZOR @ 0x08541DCC
	@ categoryName: はさみ
	pokedex_entry 0x1A, 0x0B, 0x20, 0x00, 0x00, 0x00, 18, 1180, gPokedexDescription_212, 278, 1, 256, 0

	@ 213: SPECIES_SHUCKLE @ 0x08541DE8
	@ categoryName: はっこう
	pokedex_entry 0x1A, 0x50, 0x0A, 0x03, 0x00, 0x00, 6, 205, gPokedexDescription_213, 485, 18, 256, 0

	@ 214: SPECIES_HERACROSS @ 0x08541E04
	@ categoryName: 1ぽんヅノ
	pokedex_entry 0xA2, 0x4F, 0x2E, 0x93, 0x69, 0x00, 15, 540, gPokedexDescription_214, 256, 0, 256, 0

	@ 215: SPECIES_SNEASEL @ 0x08541E20
	@ categoryName: かぎづめ
	pokedex_entry 0x06, 0x38, 0x43, 0x22, 0x00, 0x00, 9, 280, gPokedexDescription_215, 413, -3, 256, 0

	@ 216: SPECIES_TEDDIURSA @ 0x08541E3C
	@ categoryName: こぐま
	pokedex_entry 0x0A, 0x39, 0x1F, 0x00, 0x00, 0x00, 6, 88, gPokedexDescription_216, 455, 19, 256, 0

	@ 217: SPECIES_URSARING @ 0x08541E58
	@ categoryName: とうみん
	pokedex_entry 0x14, 0x03, 0x20, 0x2E, 0x00, 0x00, 18, 1258, gPokedexDescription_217, 256, 0, 256, 0

	@ 218: SPECIES_SLUGMA @ 0x08541E74
	@ categoryName: ようがん
	pokedex_entry 0x26, 0x03, 0x37, 0x2E, 0x00, 0x00, 7, 350, gPokedexDescription_218, 329, 15, 256, 0

	@ 219: SPECIES_MAGCARGO @ 0x08541E90
	@ categoryName: ようがん
	pokedex_entry 0x26, 0x03, 0x37, 0x2E, 0x00, 0x00, 8, 550, gPokedexDescription_219, 332, 15, 256, 0

	@ 220: SPECIES_SWINUB @ 0x08541EAC
	@ categoryName: いのぶた
	pokedex_entry 0x02, 0x19, 0x48, 0x10, 0x00, 0x00, 4, 65, gPokedexDescription_220, 324, 20, 256, 0

	@ 221: SPECIES_PILOSWINE @ 0x08541EC8
	@ categoryName: いのしし
	pokedex_entry 0x02, 0x19, 0x0C, 0x0C, 0x00, 0x00, 11, 558, gPokedexDescription_221, 306, 10, 256, 0

	@ 222: SPECIES_CORSOLA @ 0x08541EE4
	@ categoryName: さんご
	pokedex_entry 0x0B, 0x2E, 0x3B, 0x00, 0x00, 0x00, 6, 50, gPokedexDescription_222, 410, 15, 256, 0

	@ 223: SPECIES_REMORAID @ 0x08541F00
	@ categoryName: ふんしゃ
	pokedex_entry 0x1C, 0x2E, 0x0C, 0x34, 0x00, 0x00, 6, 120, gPokedexDescription_223, 316, 4, 256, 0

	@ 224: SPECIES_OCTILLERY @ 0x08541F1C
	@ categoryName: ふんしゃ
	pokedex_entry 0x1C, 0x2E, 0x0C, 0x34, 0x00, 0x00, 9, 285, gPokedexDescription_224, 296, 3, 256, 0

	@ 225: SPECIES_DELIBIRD @ 0x08541F38
	@ categoryName: はこびや
	pokedex_entry 0x1A, 0x0A, 0x47, 0x24, 0x00, 0x00, 9, 160, gPokedexDescription_225, 293, 11, 256, 0

	@ 226: SPECIES_MANTINE @ 0x08541F54
	@ categoryName: カイト
	pokedex_entry 0x56, 0x52, 0x64, 0x00, 0x00, 0x00, 21, 2200, gPokedexDescription_226, 256, 0, 342, 7

	@ 227: SPECIES_SKARMORY @ 0x08541F70
	@ categoryName: よろいどり
	pokedex_entry 0x26, 0x2B, 0x02, 0x45, 0x28, 0x00, 17, 505, gPokedexDescription_227, 256, 0, 271, 1

	@ 228: SPECIES_HOUNDOUR @ 0x08541F8C
	@ categoryName: ダーク
	pokedex_entry 0x91, 0xAE, 0x58, 0x00, 0x00, 0x00, 6, 108, gPokedexDescription_228, 393, 16, 256, 0

	@ 229: SPECIES_HOUNDOOM @ 0x08541FA8
	@ categoryName: ダーク
	pokedex_entry 0x91, 0xAE, 0x58, 0x00, 0x00, 0x00, 14, 350, gPokedexDescription_229, 256, 4, 256, 0

	@ 230: SPECIES_KINGDRA @ 0x08541FC4
	@ categoryName: ドラゴン
	pokedex_entry 0x95, 0x77, 0x8B, 0x7E, 0x00, 0x00, 18, 1520, gPokedexDescription_230, 256, 0, 287, 0

	@ 231: SPECIES_PHANPY @ 0x08541FE0
	@ categoryName: ながはな
	pokedex_entry 0x15, 0x37, 0x1A, 0x15, 0x00, 0x00, 5, 335, gPokedexDescription_231, 465, 21, 256, 0

	@ 232: SPECIES_DONPHAN @ 0x08541FFC
	@ categoryName: よろい
	pokedex_entry 0x26, 0x2B, 0x02, 0x00, 0x00, 0x00, 11, 1200, gPokedexDescription_232, 313, 9, 256, 0

	@ 233: SPECIES_PORYGON2 @ 0x08542018
	@ categoryName: バーチャル
	pokedex_entry 0x96, 0xAE, 0x61, 0x84, 0x79, 0x00, 6, 325, gPokedexDescription_233, 320, 17, 256, 0

	@ 234: SPECIES_STANTLER @ 0x08542034
	@ categoryName: おおツノ
	pokedex_entry 0x05, 0x05, 0x62, 0x69, 0x00, 0x00, 14, 712, gPokedexDescription_234, 256, 0, 256, 0

	@ 235: SPECIES_SMEARGLE @ 0x08542050
	@ categoryName: えかき
	pokedex_entry 0x04, 0x06, 0x07, 0x00, 0x00, 0x00, 12, 580, gPokedexDescription_235, 287, 5, 256, 0

	@ 236: SPECIES_TYROGUE @ 0x0854206C
	@ categoryName: けんか
	pokedex_entry 0x09, 0x2E, 0x06, 0x00, 0x00, 0x00, 7, 210, gPokedexDescription_236, 292, 9, 256, 0

	@ 237: SPECIES_HITMONTOP @ 0x08542088
	@ categoryName: さかだち
	pokedex_entry 0x0B, 0x06, 0x41, 0x11, 0x00, 0x00, 14, 480, gPokedexDescription_237, 256, 2, 257, 0

	@ 238: SPECIES_SMOOCHUM @ 0x085420A4
	@ categoryName: くちづけ
	pokedex_entry 0x08, 0x11, 0x43, 0x09, 0x00, 0x00, 4, 60, gPokedexDescription_238, 440, 20, 256, 0

	@ 239: SPECIES_ELEKID @ 0x085420C0
	@ categoryName: でんき
	pokedex_entry 0x44, 0x2E, 0x07, 0x00, 0x00, 0x00, 6, 235, gPokedexDescription_239, 363, 14, 256, 0

	@ 240: SPECIES_MAGBY @ 0x085420DC
	@ categoryName: ひだね
	pokedex_entry 0x1B, 0x41, 0x18, 0x00, 0x00, 0x00, 7, 214, gPokedexDescription_240, 284, 13, 256, 0

	@ 241: SPECIES_MILTANK @ 0x085420F8
	@ categoryName: ちちうし
	pokedex_entry 0x11, 0x11, 0x03, 0x0C, 0x00, 0x00, 12, 755, gPokedexDescription_241, 280, 5, 256, 0

	@ 242: SPECIES_BLISSEY @ 0x08542114
	@ categoryName: しあわせ
	pokedex_entry 0x0C, 0x01, 0x2C, 0x0E, 0x00, 0x00, 15, 468, gPokedexDescription_242, 256, 4, 310, 3

	@ 243: SPECIES_RAIKOU @ 0x08542130
	@ categoryName: いかずち
	pokedex_entry 0x02, 0x06, 0x3E, 0x11, 0x00, 0x00, 19, 1780, gPokedexDescription_243, 256, 0, 345, 7

	@ 244: SPECIES_ENTEI @ 0x0854214C
	@ categoryName: かざん
	pokedex_entry 0x06, 0x3C, 0x2E, 0x00, 0x00, 0x00, 21, 1980, gPokedexDescription_244, 259, 0, 345, 7

	@ 245: SPECIES_SUICUNE @ 0x08542168
	@ categoryName: オーロラ
	pokedex_entry 0x55, 0xAE, 0x7B, 0x77, 0x00, 0x00, 20, 1870, gPokedexDescription_245, 269, 0, 345, 7

	@ 246: SPECIES_LARVITAR @ 0x08542184
	@ categoryName: いわはだ
	pokedex_entry 0x02, 0x2C, 0x1A, 0x41, 0x00, 0x00, 6, 720, gPokedexDescription_246, 472, 18, 256, 0

	@ 247: SPECIES_PUPITAR @ 0x085421A0
	@ categoryName: だんがん
	pokedex_entry 0x41, 0x2E, 0x37, 0x2E, 0x00, 0x00, 12, 1520, gPokedexDescription_247, 292, 8, 256, 0

	@ 248: SPECIES_TYRANITAR @ 0x085421BC
	@ categoryName: よろい
	pokedex_entry 0x26, 0x2B, 0x02, 0x00, 0x00, 0x00, 20, 2020, gPokedexDescription_248, 256, 0, 345, 7

	@ 249: SPECIES_LUGIA @ 0x085421D8
	@ categoryName: せんすい
	pokedex_entry 0x0E, 0x2E, 0x0D, 0x02, 0x00, 0x00, 52, 2160, gPokedexDescription_249, 256, 0, 721, 19

	@ 250: SPECIES_HO_OH @ 0x085421F4
	@ categoryName: にじいろ
	pokedex_entry 0x16, 0x3D, 0x02, 0x2B, 0x00, 0x00, 38, 1990, gPokedexDescription_250, 256, 0, 610, 17

	@ 251: SPECIES_CELEBI @ 0x08542210
	@ categoryName: ときわたり
	pokedex_entry 0x14, 0x07, 0x2C, 0x10, 0x28, 0x00, 6, 50, gPokedexDescription_251, 393, -10, 256, 0

	@ 252: SPECIES_TREECKO @ 0x0854222C
	@ categoryName: もりトカゲ
	pokedex_entry 0x23, 0x28, 0x64, 0x56, 0x8A, 0x00, 5, 50, gPokedexDescription_252, 541, 19, 256, 0

	@ 253: SPECIES_GROVYLE @ 0x08542248
	@ categoryName: もりトカゲ
	pokedex_entry 0x23, 0x28, 0x64, 0x56, 0x8A, 0x00, 9, 216, gPokedexDescription_253, 360, 5, 256, 0

	@ 254: SPECIES_SCEPTILE @ 0x08542264
	@ categoryName: みつりん
	pokedex_entry 0x20, 0x12, 0x28, 0x2E, 0x00, 0x00, 17, 522, gPokedexDescription_254, 256, -1, 275, 2

	@ 255: SPECIES_TORCHIC @ 0x08542280
	@ categoryName: ひよこ
	pokedex_entry 0x1B, 0x26, 0x0A, 0x00, 0x00, 0x00, 4, 25, gPokedexDescription_255, 566, 19, 256, 0

	@ 256: SPECIES_COMBUSKEN @ 0x0854229C
	@ categoryName: わかどり
	pokedex_entry 0x2C, 0x06, 0x45, 0x28, 0x00, 0x00, 9, 195, gPokedexDescription_256, 343, 5, 256, 0

	@ 257: SPECIES_BLAZIKEN @ 0x085422B8
	@ categoryName: もうか
	pokedex_entry 0x23, 0x03, 0x06, 0x00, 0x00, 0x00, 19, 520, gPokedexDescription_257, 256, 0, 301, 4

	@ 258: SPECIES_MUDKIP @ 0x085422D4
	@ categoryName: ぬまうお
	pokedex_entry 0x17, 0x1F, 0x03, 0x05, 0x00, 0x00, 4, 76, gPokedexDescription_258, 535, 20, 256, 0

	@ 259: SPECIES_MARSHTOMP @ 0x085422F0
	@ categoryName: ぬまうお
	pokedex_entry 0x17, 0x1F, 0x03, 0x05, 0x00, 0x00, 7, 280, gPokedexDescription_259, 340, 7, 256, 0

	@ 260: SPECIES_SWAMPERT @ 0x0854230C
	@ categoryName: ぬまうお
	pokedex_entry 0x17, 0x1F, 0x03, 0x05, 0x00, 0x00, 15, 819, gPokedexDescription_260, 256, 0, 256, 0

	@ 261: SPECIES_POOCHYENA @ 0x08542328
	@ categoryName: かみつき
	pokedex_entry 0x06, 0x20, 0x12, 0x07, 0x00, 0x00, 5, 136, gPokedexDescription_261, 481, 19, 256, 0

	@ 262: SPECIES_MIGHTYENA @ 0x08542344
	@ categoryName: かみつき
	pokedex_entry 0x06, 0x20, 0x12, 0x07, 0x00, 0x00, 10, 370, gPokedexDescription_262, 362, 9, 256, 0

	@ 263: SPECIES_ZIGZAGOON @ 0x08542360
	@ categoryName: まめだぬき
	pokedex_entry 0x1F, 0x22, 0x41, 0x17, 0x07, 0x00, 4, 175, gPokedexDescription_263, 560, 22, 256, 0

	@ 264: SPECIES_LINOONE @ 0x0854237C
	@ categoryName: とっしん
	pokedex_entry 0x14, 0x50, 0x0C, 0x2E, 0x00, 0x00, 5, 325, gPokedexDescription_264, 321, 7, 256, 0

	@ 265: SPECIES_WURMPLE @ 0x08542398
	@ categoryName: いもむし
	pokedex_entry 0x02, 0x23, 0x21, 0x0C, 0x00, 0x00, 3, 36, gPokedexDescription_265, 711, 24, 256, 0

	@ 266: SPECIES_SILCOON @ 0x085423B4
	@ categoryName: さなぎ
	pokedex_entry 0x0B, 0x15, 0x38, 0x00, 0x00, 0x00, 6, 100, gPokedexDescription_266, 431, 19, 256, 0

	@ 267: SPECIES_BEAUTIFLY @ 0x085423D0
	@ categoryName: ちょうちょ
	pokedex_entry 0x11, 0x36, 0x03, 0x11, 0x36, 0x00, 10, 284, gPokedexDescription_267, 298, -1, 256, 0

	@ 268: SPECIES_CASCOON @ 0x085423EC
	@ categoryName: さなぎ
	pokedex_entry 0x0B, 0x15, 0x38, 0x00, 0x00, 0x00, 7, 115, gPokedexDescription_268, 391, 20, 256, 0

	@ 269: SPECIES_DUSTOX @ 0x08542408
	@ categoryName: どくが
	pokedex_entry 0x45, 0x08, 0x37, 0x00, 0x00, 0x00, 12, 316, gPokedexDescription_269, 269, 1, 256, 0

	@ 270: SPECIES_LOTAD @ 0x08542424
	@ categoryName: うきくさ
	pokedex_entry 0x03, 0x07, 0x08, 0x0B, 0x00, 0x00, 5, 26, gPokedexDescription_270, 406, 19, 256, 0

	@ 271: SPECIES_LOMBRE @ 0x08542440
	@ categoryName: ようき
	pokedex_entry 0x26, 0x03, 0x07, 0x00, 0x00, 0x00, 12, 325, gPokedexDescription_271, 277, 9, 256, 0

	@ 272: SPECIES_LUDICOLO @ 0x0854245C
	@ categoryName: のうてんき
	pokedex_entry 0x19, 0x03, 0x13, 0x2E, 0x07, 0x00, 15, 550, gPokedexDescription_272, 256, 0, 268, -1

	@ 273: SPECIES_SEEDOT @ 0x08542478
	@ categoryName: どんぐり
	pokedex_entry 0x45, 0x2E, 0x39, 0x28, 0x00, 0x00, 5, 40, gPokedexDescription_273, 472, 20, 256, 0

	@ 274: SPECIES_NUZLEAF @ 0x08542494
	@ categoryName: いじわる
	pokedex_entry 0x02, 0x3D, 0x2C, 0x29, 0x00, 0x00, 10, 280, gPokedexDescription_274, 299, 10, 256, 0

	@ 275: SPECIES_SHIFTRY @ 0x085424B0
	@ categoryName: よこしま
	pokedex_entry 0x26, 0x0A, 0x0C, 0x1F, 0x00, 0x00, 13, 596, gPokedexDescription_275, 290, 4, 256, 0

	@ 276: SPECIES_TAILLOW @ 0x085424CC
	@ categoryName: こツバメ
	pokedex_entry 0x0A, 0x62, 0x96, 0x72, 0x00, 0x00, 3, 23, gPokedexDescription_276, 465, 21, 256, 0

	@ 277: SPECIES_SWELLOW @ 0x085424E8
	@ categoryName: ツバメ
	pokedex_entry 0x62, 0x96, 0x72, 0x00, 0x00, 0x00, 7, 198, gPokedexDescription_277, 428, 15, 256, 0

	@ 278: SPECIES_WINGULL @ 0x08542504
	@ categoryName: うみねこ
	pokedex_entry 0x03, 0x20, 0x18, 0x0A, 0x00, 0x00, 6, 95, gPokedexDescription_278, 295, -2, 256, 0

	@ 279: SPECIES_PELIPPER @ 0x08542520
	@ categoryName: みずどり
	pokedex_entry 0x20, 0x3E, 0x45, 0x28, 0x00, 0x00, 12, 280, gPokedexDescription_279, 288, 1, 256, 0

	@ 280: SPECIES_RALTS @ 0x0854253C
	@ categoryName: きもち
	pokedex_entry 0x07, 0x23, 0x11, 0x00, 0x00, 0x00, 4, 66, gPokedexDescription_280, 457, -3, 256, 0

	@ 281: SPECIES_KIRLIA @ 0x08542558
	@ categoryName: かんじょう
	pokedex_entry 0x06, 0x2E, 0x3D, 0x36, 0x03, 0x00, 8, 202, gPokedexDescription_281, 354, 0, 256, 0

	@ 282: SPECIES_GARDEVOIR @ 0x08542574
	@ categoryName: ほうよう
	pokedex_entry 0x1E, 0x03, 0x26, 0x03, 0x00, 0x00, 16, 484, gPokedexDescription_282, 256, 0, 256, 0

	@ 283: SPECIES_SURSKIT @ 0x08542590
	@ categoryName: あめんぼ
	pokedex_entry 0x01, 0x22, 0x2E, 0x4A, 0x00, 0x00, 5, 17, gPokedexDescription_283, 375, 17, 256, 0

	@ 284: SPECIES_MASQUERAIN @ 0x085425AC
	@ categoryName: めだま
	pokedex_entry 0x22, 0x41, 0x1F, 0x00, 0x00, 0x00, 8, 36, gPokedexDescription_284, 378, 8, 256, 0

	@ 285: SPECIES_SHROOMISH @ 0x085425C8
	@ categoryName: きのこ
	pokedex_entry 0x07, 0x19, 0x0A, 0x00, 0x00, 0x00, 4, 45, gPokedexDescription_285, 513, 22, 256, 0

	@ 286: SPECIES_BRELOOM @ 0x085425E4
	@ categoryName: きのこ
	pokedex_entry 0x07, 0x19, 0x0A, 0x00, 0x00, 0x00, 12, 392, gPokedexDescription_286, 324, 6, 256, 0

	@ 287: SPECIES_SLAKOTH @ 0x08542600
	@ categoryName: なまけもの
	pokedex_entry 0x15, 0x1F, 0x09, 0x23, 0x19, 0x00, 8, 240, gPokedexDescription_287, 291, 16, 256, 0

	@ 288: SPECIES_VIGOROTH @ 0x0854261C
	@ categoryName: あばれザル
	pokedex_entry 0x01, 0x46, 0x2A, 0x8C, 0x79, 0x00, 14, 465, gPokedexDescription_288, 301, 2, 256, 0

	@ 289: SPECIES_SLAKING @ 0x08542638
	@ categoryName: ものぐさ
	pokedex_entry 0x23, 0x19, 0x39, 0x0B, 0x00, 0x00, 20, 1305, gPokedexDescription_289, 256, 2, 300, 1

	@ 290: SPECIES_NINCADA @ 0x08542654
	@ categoryName: したづみ
	pokedex_entry 0x0C, 0x10, 0x43, 0x20, 0x00, 0x00, 5, 55, gPokedexDescription_290, 405, 21, 256, 0

	@ 291: SPECIES_NINJASK @ 0x08542670
	@ categoryName: しのび
	pokedex_entry 0x0C, 0x19, 0x47, 0x00, 0x00, 0x00, 8, 120, gPokedexDescription_291, 383, -9, 256, 0

	@ 292: SPECIES_SHEDINJA @ 0x0854268C
	@ categoryName: ぬけがら
	pokedex_entry 0x17, 0x09, 0x37, 0x27, 0x00, 0x00, 8, 12, gPokedexDescription_292, 372, -8, 256, 0

	@ 293: SPECIES_WHISMUR @ 0x085426A8
	@ categoryName: ささやき
	pokedex_entry 0x0B, 0x0B, 0x24, 0x07, 0x00, 0x00, 6, 163, gPokedexDescription_293, 373, 17, 256, 0

	@ 294: SPECIES_LOUDRED @ 0x085426C4
	@ categoryName: おおごえ
	pokedex_entry 0x05, 0x05, 0x3B, 0x04, 0x00, 0x00, 10, 405, gPokedexDescription_294, 356, 10, 256, 0

	@ 295: SPECIES_EXPLOUD @ 0x085426E0
	@ categoryName: そうおん
	pokedex_entry 0x0F, 0x03, 0x05, 0x2E, 0x00, 0x00, 15, 840, gPokedexDescription_295, 284, 1, 256, 0

	@ 296: SPECIES_MAKUHITA @ 0x085426FC
	@ categoryName: こんじょう
	pokedex_entry 0x0A, 0x2E, 0x3D, 0x36, 0x03, 0x00, 10, 864, gPokedexDescription_296, 256, 10, 256, 0

	@ 297: SPECIES_HARIYAMA @ 0x08542718
	@ categoryName: つっぱり
	pokedex_entry 0x12, 0x50, 0x4B, 0x28, 0x00, 0x00, 23, 2538, gPokedexDescription_297, 256, 0, 343, 7

	@ 298: SPECIES_AZURILL @ 0x08542734
	@ categoryName: みずたま
	pokedex_entry 0x20, 0x3E, 0x10, 0x1F, 0x00, 0x00, 2, 20, gPokedexDescription_298, 603, 23, 256, 0

	@ 299: SPECIES_NOSEPASS @ 0x08542750
	@ categoryName: コンパス
	pokedex_entry 0x5A, 0x7E, 0x9B, 0x5D, 0x00, 0x00, 10, 970, gPokedexDescription_299, 256, 9, 289, 3

	@ 300: SPECIES_SKITTY @ 0x0854276C
	@ categoryName: こねこ
	pokedex_entry 0x0A, 0x18, 0x0A, 0x00, 0x00, 0x00, 6, 110, gPokedexDescription_300, 492, 19, 256, 0

	@ 301: SPECIES_DELCATTY @ 0x08542788
	@ categoryName: おすまし
	pokedex_entry 0x05, 0x0D, 0x1F, 0x0C, 0x00, 0x00, 11, 326, gPokedexDescription_301, 322, 10, 256, 0

	@ 302: SPECIES_SABLEYE @ 0x085427A4
	@ categoryName: くらやみ
	pokedex_entry 0x08, 0x27, 0x24, 0x20, 0x00, 0x00, 5, 110, gPokedexDescription_302, 451, 17, 256, 0

	@ 303: SPECIES_MAWILE @ 0x085427C0
	@ categoryName: あざむき
	pokedex_entry 0x01, 0x3C, 0x21, 0x07, 0x00, 0x00, 6, 115, gPokedexDescription_303, 466, 17, 256, 0

	@ 304: SPECIES_ARON @ 0x085427DC
	@ categoryName: てつヨロイ
	pokedex_entry 0x13, 0x12, 0x76, 0x7B, 0x52, 0x00, 4, 600, gPokedexDescription_304, 419, 23, 256, 0

	@ 305: SPECIES_LAIRON @ 0x085427F8
	@ categoryName: てつヨロイ
	pokedex_entry 0x13, 0x12, 0x76, 0x7B, 0x52, 0x00, 9, 1200, gPokedexDescription_305, 275, 12, 256, 0

	@ 306: SPECIES_AGGRON @ 0x08542814
	@ categoryName: てつヨロイ
	pokedex_entry 0x13, 0x12, 0x76, 0x7B, 0x52, 0x00, 21, 3600, gPokedexDescription_306, 256, -1, 350, 6

	@ 307: SPECIES_MEDITITE @ 0x08542830
	@ categoryName: めいそう
	pokedex_entry 0x22, 0x02, 0x0F, 0x03, 0x00, 0x00, 6, 112, gPokedexDescription_307, 465, 17, 256, 0

	@ 308: SPECIES_MEDICHAM @ 0x0854284C
	@ categoryName: めいそう
	pokedex_entry 0x22, 0x02, 0x0F, 0x03, 0x00, 0x00, 13, 315, gPokedexDescription_308, 298, 5, 256, 0

	@ 309: SPECIES_ELECTRIKE @ 0x08542868
	@ categoryName: いなずま
	pokedex_entry 0x02, 0x15, 0x3E, 0x1F, 0x00, 0x00, 6, 152, gPokedexDescription_309, 290, 15, 256, 0

	@ 310: SPECIES_MANECTRIC @ 0x08542884
	@ categoryName: ほうでん
	pokedex_entry 0x1E, 0x03, 0x44, 0x2E, 0x00, 0x00, 15, 402, gPokedexDescription_310, 256, 3, 257, 0

	@ 311: SPECIES_PLUSLE @ 0x085428A0
	@ categoryName: おうえん
	pokedex_entry 0x05, 0x03, 0x04, 0x2E, 0x00, 0x00, 4, 42, gPokedexDescription_311, 515, -9, 256, 0

	@ 312: SPECIES_MINUN @ 0x085428BC
	@ categoryName: おうえん
	pokedex_entry 0x05, 0x03, 0x04, 0x2E, 0x00, 0x00, 4, 42, gPokedexDescription_312, 512, -7, 256, 0

	@ 313: SPECIES_VOLBEAT @ 0x085428D8
	@ categoryName: ほたる
	pokedex_entry 0x1E, 0x10, 0x29, 0x00, 0x00, 0x00, 7, 177, gPokedexDescription_313, 442, 16, 256, 0

	@ 314: SPECIES_ILLUMISE @ 0x085428F4
	@ categoryName: ほたる
	pokedex_entry 0x1E, 0x10, 0x29, 0x00, 0x00, 0x00, 6, 177, gPokedexDescription_314, 572, 19, 256, 0

	@ 315: SPECIES_ROSELIA @ 0x08542910
	@ categoryName: いばら
	pokedex_entry 0x02, 0x46, 0x27, 0x00, 0x00, 0x00, 3, 20, gPokedexDescription_315, 677, 20, 256, 0

	@ 316: SPECIES_GULPIN @ 0x0854292C
	@ categoryName: いぶくろ
	pokedex_entry 0x02, 0x48, 0x08, 0x2B, 0x00, 0x00, 4, 103, gPokedexDescription_316, 593, 23, 256, 0

	@ 317: SPECIES_SWALOT @ 0x08542948
	@ categoryName: どくぶくろ
	pokedex_entry 0x45, 0x08, 0x48, 0x08, 0x2B, 0x00, 17, 800, gPokedexDescription_317, 256, 6, 345, 3

	@ 318: SPECIES_CARVANHA @ 0x08542964
	@ categoryName: どうもう
	pokedex_entry 0x45, 0x03, 0x23, 0x03, 0x00, 0x00, 8, 208, gPokedexDescription_318, 362, 0, 256, 0

	@ 319: SPECIES_SHARPEDO @ 0x08542980
	@ categoryName: きょうぼう
	pokedex_entry 0x07, 0x36, 0x03, 0x4A, 0x03, 0x00, 18, 888, gPokedexDescription_319, 256, 0, 317, 3

	@ 320: SPECIES_WAILMER @ 0x0854299C
	@ categoryName: たまくじら
	pokedex_entry 0x10, 0x1F, 0x08, 0x3D, 0x27, 0x00, 20, 1300, gPokedexDescription_320, 256, 2, 493, 0

	@ 321: SPECIES_WAILORD @ 0x085429B8
	@ categoryName: うきくじら
	pokedex_entry 0x03, 0x07, 0x08, 0x3D, 0x27, 0x00, 145, 3980, gPokedexDescription_321, 256, 0, 1352, 18

	@ 322: SPECIES_NUMEL @ 0x085429D4
	@ categoryName: どんかん
	pokedex_entry 0x45, 0x2E, 0x06, 0x2E, 0x00, 0x00, 7, 240, gPokedexDescription_322, 342, 17, 256, 0

	@ 323: SPECIES_CAMERUPT @ 0x085429F0
	@ categoryName: ふんか
	pokedex_entry 0x1C, 0x2E, 0x06, 0x00, 0x00, 0x00, 19, 2200, gPokedexDescription_323, 256, 7, 345, 6

	@ 324: SPECIES_TORKOAL @ 0x08542A0C
	@ categoryName: せきたん
	pokedex_entry 0x0E, 0x07, 0x10, 0x2E, 0x00, 0x00, 5, 804, gPokedexDescription_324, 390, 9, 256, 0

	@ 325: SPECIES_SPOINK @ 0x08542A28
	@ categoryName: とびはね
	pokedex_entry 0x14, 0x47, 0x1A, 0x18, 0x00, 0x00, 7, 306, gPokedexDescription_325, 423, 17, 256, 0

	@ 326: SPECIES_GRUMPIG @ 0x08542A44
	@ categoryName: あやつり
	pokedex_entry 0x01, 0x24, 0x12, 0x28, 0x00, 0x00, 9, 715, gPokedexDescription_326, 358, 10, 256, 0

	@ 327: SPECIES_SPINDA @ 0x08542A60
	@ categoryName: ぶちパンダ
	pokedex_entry 0x48, 0x11, 0x9B, 0x7E, 0x91, 0x00, 11, 50, gPokedexDescription_327, 321, 4, 256, 0

	@ 328: SPECIES_TRAPINCH @ 0x08542A7C
	@ categoryName: ありじごく
	pokedex_entry 0x01, 0x28, 0x3D, 0x3B, 0x08, 0x00, 7, 150, gPokedexDescription_328, 298, 17, 256, 0

	@ 329: SPECIES_VIBRAVA @ 0x08542A98
	@ categoryName: しんどう
	pokedex_entry 0x0C, 0x2E, 0x45, 0x03, 0x00, 0x00, 11, 153, gPokedexDescription_329, 370, 11, 256, 0

	@ 330: SPECIES_FLYGON @ 0x08542AB4
	@ categoryName: せいれい
	pokedex_entry 0x0E, 0x02, 0x2A, 0x02, 0x00, 0x00, 20, 820, gPokedexDescription_330, 256, 0, 268, 1

	@ 331: SPECIES_CACNEA @ 0x08542AD0
	@ categoryName: サボテン
	pokedex_entry 0x5B, 0x9A, 0x63, 0x7E, 0x00, 0x00, 4, 513, gPokedexDescription_331, 455, 20, 256, 0

	@ 332: SPECIES_CACTURNE @ 0x08542AEC
	@ categoryName: カカシぐさ
	pokedex_entry 0x56, 0x56, 0x5C, 0x39, 0x0B, 0x00, 13, 774, gPokedexDescription_332, 327, 5, 256, 0

	@ 333: SPECIES_SWABLU @ 0x08542B08
	@ categoryName: わたどり
	pokedex_entry 0x2C, 0x10, 0x45, 0x28, 0x00, 0x00, 4, 12, gPokedexDescription_333, 422, -8, 256, 0

	@ 334: SPECIES_ALTARIA @ 0x08542B24
	@ categoryName: ハミング
	pokedex_entry 0x6A, 0x70, 0x7E, 0x89, 0x00, 0x00, 11, 206, gPokedexDescription_334, 327, 0, 256, 0

	@ 335: SPECIES_ZANGOOSE @ 0x08542B40
	@ categoryName: ネコイタチ
	pokedex_entry 0x68, 0x5A, 0x52, 0x60, 0x61, 0x00, 13, 403, gPokedexDescription_335, 256, 3, 256, 0

	@ 336: SPECIES_SEVIPER @ 0x08542B5C
	@ categoryName: キバへび
	pokedex_entry 0x57, 0x96, 0x1D, 0x47, 0x00, 0x00, 27, 525, gPokedexDescription_336, 275, 7, 256, 0

	@ 337: SPECIES_LUNATONE @ 0x08542B78
	@ categoryName: いんせき
	pokedex_entry 0x02, 0x2E, 0x0E, 0x07, 0x00, 0x00, 10, 1680, gPokedexDescription_337, 300, 3, 256, 0

	@ 338: SPECIES_SOLROCK @ 0x08542B94
	@ categoryName: いんせき
	pokedex_entry 0x02, 0x2E, 0x0E, 0x07, 0x00, 0x00, 12, 1540, gPokedexDescription_338, 328, 0, 256, 0

	@ 339: SPECIES_BARBOACH @ 0x08542BB0
	@ categoryName: ひげうお
	pokedex_entry 0x1B, 0x3A, 0x03, 0x05, 0x00, 0x00, 4, 19, gPokedexDescription_339, 581, -3, 256, 0

	@ 340: SPECIES_WHISCASH @ 0x08542BCC
	@ categoryName: ひげうお
	pokedex_entry 0x1B, 0x3A, 0x03, 0x05, 0x00, 0x00, 9, 236, gPokedexDescription_340, 317, 1, 256, 0

	@ 341: SPECIES_CORPHISH @ 0x08542BE8
	@ categoryName: ごろつき
	pokedex_entry 0x3B, 0x2B, 0x12, 0x07, 0x00, 0x00, 6, 115, gPokedexDescription_341, 484, 19, 256, 0

	@ 342: SPECIES_CRAWDAUNT @ 0x08542C04
	@ categoryName: ならずもの
	pokedex_entry 0x15, 0x27, 0x3E, 0x23, 0x19, 0x00, 11, 328, gPokedexDescription_342, 365, 9, 256, 0

	@ 343: SPECIES_BALTOY @ 0x08542C20
	@ categoryName: どぐう
	pokedex_entry 0x45, 0x39, 0x03, 0x00, 0x00, 0x00, 5, 215, gPokedexDescription_343, 457, 21, 256, 0

	@ 344: SPECIES_CLAYDOL @ 0x08542C3C
	@ categoryName: どぐう
	pokedex_entry 0x45, 0x39, 0x03, 0x00, 0x00, 0x00, 15, 1080, gPokedexDescription_344, 256, 3, 280, 1

	@ 345: SPECIES_LILEEP @ 0x08542C58
	@ categoryName: ウミユリ
	pokedex_entry 0x53, 0x70, 0x75, 0x78, 0x00, 0x00, 10, 238, gPokedexDescription_345, 305, 8, 256, 0

	@ 346: SPECIES_CRADILY @ 0x08542C74
	@ categoryName: いわつぼ
	pokedex_entry 0x02, 0x2C, 0x12, 0x4A, 0x00, 0x00, 15, 604, gPokedexDescription_346, 267, 0, 256, 0

	@ 347: SPECIES_ANORITH @ 0x08542C90
	@ categoryName: むかしエビ
	pokedex_entry 0x21, 0x06, 0x0C, 0x54, 0x97, 0x00, 7, 125, gPokedexDescription_347, 296, 4, 256, 0

	@ 348: SPECIES_ARMALDO @ 0x08542CAC
	@ categoryName: かっちゅう
	pokedex_entry 0x06, 0x50, 0x11, 0x35, 0x03, 0x00, 15, 682, gPokedexDescription_348, 312, 3, 271, 0

	@ 349: SPECIES_FEEBAS @ 0x08542CC8
	@ categoryName: さかな
	pokedex_entry 0x0B, 0x06, 0x15, 0x00, 0x00, 0x00, 6, 74, gPokedexDescription_349, 423, -4, 256, 0

	@ 350: SPECIES_MILOTIC @ 0x08542CE4
	@ categoryName: いつくしみ
	pokedex_entry 0x02, 0x12, 0x08, 0x0C, 0x20, 0x00, 62, 1620, gPokedexDescription_350, 256, 0, 360, 7

	@ 351: SPECIES_CASTFORM_NORMAL @ 0x08542D00
	@ categoryName: てんき
	pokedex_entry 0x13, 0x2E, 0x07, 0x00, 0x00, 0x00, 3, 8, gPokedexDescription_351, 435, -5, 256, 0

	@ 352: SPECIES_KECLEON @ 0x08542D1C
	@ categoryName: いろへんげ
	pokedex_entry 0x02, 0x2B, 0x1D, 0x2E, 0x3A, 0x00, 10, 220, gPokedexDescription_352, 316, 10, 256, 0

	@ 353: SPECIES_SHUPPET @ 0x08542D38
	@ categoryName: にんぎょう
	pokedex_entry 0x16, 0x2E, 0x38, 0x36, 0x03, 0x00, 6, 23, gPokedexDescription_353, 440, 20, 256, 0

	@ 354: SPECIES_BANETTE @ 0x08542D54
	@ categoryName: ぬいぐるみ
	pokedex_entry 0x17, 0x02, 0x39, 0x29, 0x20, 0x00, 11, 125, gPokedexDescription_354, 262, 9, 256, 0

	@ 355: SPECIES_DUSKULL @ 0x08542D70
	@ categoryName: おむかえ
	pokedex_entry 0x05, 0x21, 0x06, 0x04, 0x00, 0x00, 8, 150, gPokedexDescription_355, 406, -4, 256, 0

	@ 356: SPECIES_DUSCLOPS @ 0x08542D8C
	@ categoryName: てまねき
	pokedex_entry 0x13, 0x1F, 0x18, 0x07, 0x00, 0x00, 16, 306, gPokedexDescription_356, 256, 3, 299, 1

	@ 357: SPECIES_TROPIUS @ 0x08542DA8
	@ categoryName: フルーツ
	pokedex_entry 0x6C, 0x79, 0xAE, 0x62, 0x00, 0x00, 20, 1000, gPokedexDescription_357, 256, 0, 344, 7

	@ 358: SPECIES_CHIMECHO @ 0x08542DC4
	@ categoryName: ふうりん
	pokedex_entry 0x1C, 0x03, 0x28, 0x2E, 0x00, 0x00, 6, 10, gPokedexDescription_358, 505, 0, 256, 0

	@ 359: SPECIES_ABSOL @ 0x08542DE0
	@ categoryName: わざわい
	pokedex_entry 0x2C, 0x3C, 0x2C, 0x02, 0x00, 0x00, 12, 470, gPokedexDescription_359, 301, 3, 256, 0

	@ 360: SPECIES_WYNAUT @ 0x08542DFC
	@ categoryName: ほがらか
	pokedex_entry 0x1E, 0x37, 0x27, 0x06, 0x00, 0x00, 6, 140, gPokedexDescription_360, 484, 19, 256, 0

	@ 361: SPECIES_SNORUNT @ 0x08542E18
	@ categoryName: ゆきかさ
	pokedex_entry 0x25, 0x07, 0x06, 0x0B, 0x00, 0x00, 7, 168, gPokedexDescription_361, 380, 15, 256, 0

	@ 362: SPECIES_GLALIE @ 0x08542E34
	@ categoryName: がんめん
	pokedex_entry 0x37, 0x2E, 0x22, 0x2E, 0x00, 0x00, 15, 2565, gPokedexDescription_362, 256, 3, 344, 0

	@ 363: SPECIES_SPHEAL @ 0x08542E50
	@ categoryName: てたたき
	pokedex_entry 0x13, 0x10, 0x10, 0x07, 0x00, 0x00, 8, 395, gPokedexDescription_363, 315, 16, 256, 0

	@ 364: SPECIES_SEALEO @ 0x08542E6C
	@ categoryName: たままわし
	pokedex_entry 0x10, 0x1F, 0x1F, 0x2C, 0x0C, 0x00, 11, 876, gPokedexDescription_364, 338, 13, 256, 0

	@ 365: SPECIES_WALREIN @ 0x08542E88
	@ categoryName: こおりわり
	pokedex_entry 0x0A, 0x05, 0x28, 0x2C, 0x28, 0x00, 14, 1506, gPokedexDescription_365, 316, 4, 256, 0

	@ 366: SPECIES_CLAMPERL @ 0x08542EA4
	@ categoryName: 2まいがい
	pokedex_entry 0xA3, 0x1F, 0x02, 0x37, 0x02, 0x00, 4, 525, gPokedexDescription_366, 691, 22, 256, 0

	@ 367: SPECIES_HUNTAIL @ 0x08542EC0
	@ categoryName: しんかい
	pokedex_entry 0x0C, 0x2E, 0x06, 0x02, 0x00, 0x00, 17, 270, gPokedexDescription_367, 307, 1, 256, 0

	@ 368: SPECIES_GOREBYSS @ 0x08542EDC
	@ categoryName: なんかい
	pokedex_entry 0x15, 0x2E, 0x06, 0x02, 0x00, 0x00, 18, 226, gPokedexDescription_368, 278, 5, 256, 0

	@ 369: SPECIES_RELICANTH @ 0x08542EF8
	@ categoryName: ちょうじゅ
	pokedex_entry 0x11, 0x36, 0x03, 0x3D, 0x35, 0x00, 10, 234, gPokedexDescription_369, 316, 7, 256, 0

	@ 370: SPECIES_LUVDISC @ 0x08542F14
	@ categoryName: ランデブー
	pokedex_entry 0x77, 0x7E, 0x94, 0x98, 0xAE, 0x00, 6, 87, gPokedexDescription_370, 371, 2, 256, 0

	@ 371: SPECIES_BAGON @ 0x08542F30
	@ categoryName: いしあたま
	pokedex_entry 0x02, 0x0C, 0x01, 0x10, 0x1F, 0x00, 6, 421, gPokedexDescription_371, 448, 18, 256, 0

	@ 372: SPECIES_SHELGON @ 0x08542F4C
	@ categoryName: にんたい
	pokedex_entry 0x16, 0x2E, 0x10, 0x02, 0x00, 0x00, 11, 1105, gPokedexDescription_372, 311, 12, 256, 0

	@ 373: SPECIES_SALAMENCE @ 0x08542F68
	@ categoryName: ドラゴン
	pokedex_entry 0x95, 0x77, 0x8B, 0x7E, 0x00, 0x00, 15, 1026, gPokedexDescription_373, 256, 0, 256, 0

	@ 374: SPECIES_BELDUM @ 0x08542F84
	@ categoryName: てっきゅう
	pokedex_entry 0x13, 0x50, 0x07, 0x35, 0x03, 0x00, 6, 952, gPokedexDescription_374, 414, -1, 256, 0

	@ 375: SPECIES_METANG @ 0x08542FA0
	@ categoryName: てつツメ
	pokedex_entry 0x13, 0x12, 0x62, 0x72, 0x00, 0x00, 12, 2025, gPokedexDescription_375, 256, 6, 256, 0

	@ 376: SPECIES_METAGROSS @ 0x08542FBC
	@ categoryName: てつあし
	pokedex_entry 0x13, 0x12, 0x01, 0x0C, 0x00, 0x00, 16, 5500, gPokedexDescription_376, 256, 4, 447, 9

	@ 377: SPECIES_REGIROCK @ 0x08542FD8
	@ categoryName: いわやま
	pokedex_entry 0x02, 0x2C, 0x24, 0x1F, 0x00, 0x00, 17, 2300, gPokedexDescription_377, 256, 2, 309, 1

	@ 378: SPECIES_REGICE @ 0x08542FF4
	@ categoryName: ひょうざん
	pokedex_entry 0x1B, 0x36, 0x03, 0x3C, 0x2E, 0x00, 18, 1750, gPokedexDescription_378, 256, 0, 301, 2

	@ 379: SPECIES_REGISTEEL @ 0x08543010
	@ categoryName: くろがね
	pokedex_entry 0x08, 0x2B, 0x37, 0x18, 0x00, 0x00, 19, 2050, gPokedexDescription_379, 256, 0, 359, 6

	@ 380: SPECIES_LATIAS @ 0x0854302C
	@ categoryName: むげん
	pokedex_entry 0x21, 0x3A, 0x2E, 0x00, 0x00, 0x00, 14, 400, gPokedexDescription_380, 304, 3, 256, 0

	@ 381: SPECIES_LATIOS @ 0x08543048
	@ categoryName: むげん
	pokedex_entry 0x21, 0x3A, 0x2E, 0x00, 0x00, 0x00, 20, 600, gPokedexDescription_381, 256, 0, 294, 3

	@ 382: SPECIES_KYOGRE @ 0x08543064
	@ categoryName: かいてい
	pokedex_entry 0x06, 0x02, 0x13, 0x02, 0x00, 0x00, 45, 3520, gPokedexDescription_382, 256, 0, 614, 13

	@ 383: SPECIES_GROUDON @ 0x08543080
	@ categoryName: たいりく
	pokedex_entry 0x10, 0x02, 0x28, 0x08, 0x00, 0x00, 35, 9500, gPokedexDescription_383, 256, 0, 515, 14

	@ 384: SPECIES_RAYQUAZA @ 0x0854309C
	@ categoryName: てんくう
	pokedex_entry 0x13, 0x2E, 0x08, 0x03, 0x00, 0x00, 70, 2065, gPokedexDescription_384, 256, 0, 448, 12

	@ 385: SPECIES_JIRACHI @ 0x085430B8
	@ categoryName: ねがいごと
	pokedex_entry 0x18, 0x37, 0x02, 0x3B, 0x14, 0x00, 3, 11, gPokedexDescription_385, 608, -8, 256, 0

	@ 386: SPECIES_DEOXYS_NORMAL @ 0x085430D4
	@ categoryName: DNA
	pokedex_entry 0xBE, 0xC8, 0xBB, 0x00, 0x00, 0x00, 17, 608, gPokedexDescription_386, 256, 0, 290, 2

.if (. - gPokedexEntries) != (387 * 0x1C)
	.error "gPokedexEntries size mismatch"
.endif
