.globl gText_Rom_563134
.set gText_Rom_563134, sBerryDescriptionPart1_Enigma + 0x08

	@ struct Berry table: 43 standard Gen III berries.
	.globl gBerries
gBerries: @ 0x08563150
	berry_entry 0x58, 0x77, 0x9A, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SOFT, 20, 3, 2, sBerryDescriptionPart1_Cheri, sBerryDescriptionPart2_Cheri, 3, 10, 0, 0, 0, 0, 25 @ ITEM_CHERI_BERRY: クラボのみ
	berry_entry 0x56, 0x8B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SUPER_HARD, 80, 3, 2, sBerryDescriptionPart1_Chesto, sBerryDescriptionPart2_Chesto, 3, 0, 10, 0, 0, 0, 25 @ ITEM_CHESTO_BERRY: カゴのみ
	berry_entry 0x73, 0x73, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_VERY_SOFT, 40, 3, 2, sBerryDescriptionPart1_Pecha, sBerryDescriptionPart2_Pecha, 3, 0, 0, 10, 0, 0, 25 @ ITEM_PECHA_BERRY: モモンのみ
	berry_entry 0x61, 0xAE, 0x8B, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_HARD, 32, 3, 2, sBerryDescriptionPart1_Rawst, sBerryDescriptionPart2_Rawst, 3, 0, 0, 0, 10, 0, 25 @ ITEM_RAWST_BERRY: チーゴのみ
	berry_entry 0x65, 0x65, 0x5C, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SUPER_HARD, 50, 3, 2, sBerryDescriptionPart1_Aspear, sBerryDescriptionPart2_Aspear, 3, 0, 0, 0, 0, 10, 25 @ ITEM_ASPEAR_BERRY: ナナシのみ
	berry_entry 0x6B, 0x72, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_VERY_HARD, 28, 3, 2, sBerryDescriptionPart1_Leppa, sBerryDescriptionPart2_Leppa, 4, 10, 0, 10, 10, 10, 20 @ ITEM_LEPPA_BERRY: ヒメリのみ
	berry_entry 0x55, 0x7A, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SUPER_HARD, 35, 3, 2, sBerryDescriptionPart1_Oran, sBerryDescriptionPart2_Oran, 3, 10, 10, 10, 10, 10, 20 @ ITEM_ORAN_BERRY: オレンのみ
	berry_entry 0x57, 0xAE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_HARD, 47, 3, 2, sBerryDescriptionPart1_Persim, sBerryDescriptionPart2_Persim, 3, 10, 10, 10, 10, 10, 20 @ ITEM_PERSIM_BERRY: キーのみ
	berry_entry 0x77, 0x71, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SUPER_HARD, 34, 2, 1, sBerryDescriptionPart1_Lum, sBerryDescriptionPart2_Lum, 12, 10, 10, 10, 10, 10, 20 @ ITEM_LUM_BERRY: ラムのみ
	berry_entry 0x55, 0x9A, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_VERY_HARD, 95, 3, 2, sBerryDescriptionPart1_Sitrus, sBerryDescriptionPart2_Sitrus, 6, 10, 10, 10, 10, 10, 20 @ ITEM_SITRUS_BERRY: オボンのみ
	berry_entry 0x6C, 0x80, 0x77, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SOFT, 100, 3, 2, sBerryDescriptionPart1_Figy, sBerryDescriptionPart2_Figy, 6, 10, 0, 0, 0, 0, 25 @ ITEM_FIGY_BERRY: フィラのみ
	berry_entry 0x53, 0x52, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_HARD, 115, 3, 2, sBerryDescriptionPart1_Wiki, sBerryDescriptionPart2_Wiki, 6, 0, 10, 0, 0, 0, 25 @ ITEM_WIKI_BERRY: ウイのみ
	berry_entry 0x6F, 0x8B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_HARD, 126, 3, 2, sBerryDescriptionPart1_Mago, sBerryDescriptionPart2_Mago, 6, 0, 0, 10, 0, 0, 25 @ ITEM_MAGO_BERRY: マゴのみ
	berry_entry 0x96, 0x7E, 0x8D, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SUPER_HARD, 64, 3, 2, sBerryDescriptionPart1_Aguav, sBerryDescriptionPart2_Aguav, 6, 0, 0, 0, 10, 0, 25 @ ITEM_AGUAV_BERRY: バンジのみ
	berry_entry 0x52, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SOFT, 223, 3, 2, sBerryDescriptionPart1_Iapapa, sBerryDescriptionPart2_Iapapa, 6, 0, 0, 0, 0, 10, 25 @ ITEM_IAPAPA_BERRY: イアのみ
	berry_entry 0x8E, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_VERY_HARD, 120, 6, 3, sBerryDescriptionPart1_Razz, sBerryDescriptionPart2_Razz, 1, 10, 10, 0, 0, 0, 20 @ ITEM_RAZZ_BERRY: ズリのみ
	berry_entry 0x98, 0x78, 0xAE, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SOFT, 108, 6, 3, sBerryDescriptionPart1_Bluk, sBerryDescriptionPart2_Bluk, 1, 0, 10, 10, 0, 0, 20 @ ITEM_BLUK_BERRY: ブリーのみ
	berry_entry 0x65, 0x65, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_VERY_HARD, 77, 6, 3, sBerryDescriptionPart1_Nanab, sBerryDescriptionPart2_Nanab, 1, 0, 0, 10, 10, 0, 20 @ ITEM_NANAB_BERRY: ナナのみ
	berry_entry 0x5E, 0x5C, 0x65, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SUPER_HARD, 74, 6, 3, sBerryDescriptionPart1_Wepear, sBerryDescriptionPart2_Wepear, 1, 0, 0, 0, 10, 10, 20 @ ITEM_WEPEAR_BERRY: セシナのみ
	berry_entry 0x9B, 0x52, 0x79, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_HARD, 80, 6, 3, sBerryDescriptionPart1_Pinap, sBerryDescriptionPart2_Pinap, 1, 10, 0, 0, 0, 10, 20 @ ITEM_PINAP_BERRY: パイルのみ
	berry_entry 0x8C, 0x7B, 0x58, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_VERY_HARD, 135, 6, 2, sBerryDescriptionPart1_Pomeg, sBerryDescriptionPart2_Pomeg, 3, 10, 0, 10, 10, 0, 20 @ ITEM_POMEG_BERRY: ザロクのみ
	berry_entry 0x68, 0x5A, 0x98, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_HARD, 150, 6, 2, sBerryDescriptionPart1_Kelpsy, sBerryDescriptionPart2_Kelpsy, 3, 0, 10, 0, 10, 10, 20 @ ITEM_KELPSY_BERRY: ネコブのみ
	berry_entry 0x60, 0x9F, 0x79, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_HARD, 110, 6, 2, sBerryDescriptionPart1_Qualot, sBerryDescriptionPart2_Qualot, 3, 10, 0, 10, 0, 10, 20 @ ITEM_QUALOT_BERRY: タポルのみ
	berry_entry 0x7B, 0x72, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_HARD, 162, 6, 2, sBerryDescriptionPart1_Hondew, sBerryDescriptionPart2_Hondew, 3, 10, 10, 0, 10, 0, 20 @ ITEM_HONDEW_BERRY: ロメのみ
	berry_entry 0x53, 0x98, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SOFT, 149, 6, 2, sBerryDescriptionPart1_Grepa, sBerryDescriptionPart2_Grepa, 3, 0, 10, 10, 0, 10, 20 @ ITEM_GREPA_BERRY: ウブのみ
	berry_entry 0x6F, 0x64, 0x6F, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SOFT, 200, 4, 2, sBerryDescriptionPart1_Tamato, sBerryDescriptionPart2_Tamato, 6, 20, 10, 0, 0, 0, 30 @ ITEM_TAMATO_BERRY: マトマのみ
	berry_entry 0x73, 0x5A, 0x5C, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_HARD, 75, 4, 2, sBerryDescriptionPart1_Cornn, sBerryDescriptionPart2_Cornn, 6, 0, 20, 10, 0, 0, 30 @ ITEM_CORNN_BERRY: モコシのみ
	berry_entry 0x8B, 0x5D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_HARD, 140, 4, 2, sBerryDescriptionPart1_Magost, sBerryDescriptionPart2_Magost, 6, 0, 0, 20, 10, 0, 30 @ ITEM_MAGOST_BERRY: ゴスのみ
	berry_entry 0x77, 0x98, 0x60, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SOFT, 226, 4, 2, sBerryDescriptionPart1_Rabuta, sBerryDescriptionPart2_Rabuta, 6, 0, 0, 0, 20, 10, 30 @ ITEM_RABUTA_BERRY: ラブタのみ
	berry_entry 0x69, 0x72, 0x79, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SUPER_HARD, 285, 4, 2, sBerryDescriptionPart1_Nomel, sBerryDescriptionPart2_Nomel, 6, 10, 0, 0, 0, 20, 30 @ ITEM_NOMEL_BERRY: ノメルのみ
	berry_entry 0x69, 0x7C, 0x57, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SOFT, 133, 2, 1, sBerryDescriptionPart1_Spelon, sBerryDescriptionPart2_Spelon, 18, 40, 10, 0, 0, 0, 70 @ ITEM_SPELON_BERRY: ノワキのみ
	berry_entry 0x5C, 0xAE, 0x74, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_VERY_SOFT, 244, 2, 1, sBerryDescriptionPart1_Pamtre, sBerryDescriptionPart2_Pamtre, 18, 0, 40, 10, 0, 0, 70 @ ITEM_PAMTRE_BERRY: シーヤのみ
	berry_entry 0x56, 0x52, 0x5D, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SOFT, 250, 2, 1, sBerryDescriptionPart1_Watmel, sBerryDescriptionPart2_Watmel, 18, 0, 0, 40, 10, 0, 70 @ ITEM_WATMEL_BERRY: カイスのみ
	berry_entry 0x95, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_HARD, 280, 2, 1, sBerryDescriptionPart1_Durin, sBerryDescriptionPart2_Durin, 18, 0, 0, 0, 40, 10, 70 @ ITEM_DURIN_BERRY: ドリのみ
	berry_entry 0x99, 0x78, 0x98, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_VERY_SOFT, 300, 2, 1, sBerryDescriptionPart1_Belue, sBerryDescriptionPart2_Belue, 18, 10, 0, 0, 0, 40, 70 @ ITEM_BELUE_BERRY: ベリブのみ
	berry_entry 0x61, 0x52, 0x77, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_VERY_HARD, 111, 2, 1, sBerryDescriptionPart1_Liechi, sBerryDescriptionPart2_Liechi, 24, 40, 0, 40, 0, 10, 80 @ ITEM_LIECHI_BERRY: チイラのみ
	berry_entry 0x78, 0x85, 0x87, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_VERY_HARD, 33, 2, 1, sBerryDescriptionPart1_Ganlon, sBerryDescriptionPart2_Ganlon, 24, 0, 40, 0, 40, 0, 80 @ ITEM_GANLON_BERRY: リュガのみ
	berry_entry 0x56, 0x71, 0x77, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_VERY_HARD, 95, 2, 1, sBerryDescriptionPart1_Salac, sBerryDescriptionPart2_Salac, 24, 0, 0, 40, 0, 40, 80 @ ITEM_SALAC_BERRY: カムラのみ
	berry_entry 0x74, 0x60, 0x9C, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_VERY_HARD, 237, 2, 1, sBerryDescriptionPart1_Petaya, sBerryDescriptionPart2_Petaya, 24, 40, 0, 0, 40, 0, 80 @ ITEM_PETAYA_BERRY: ヤタピのみ
	berry_entry 0x8E, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_HARD, 75, 2, 1, sBerryDescriptionPart1_Apicot, sBerryDescriptionPart2_Apicot, 24, 0, 40, 0, 0, 40, 80 @ ITEM_APICOT_BERRY: ズアのみ
	berry_entry 0x5B, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SOFT, 97, 2, 1, sBerryDescriptionPart1_Lansat, sBerryDescriptionPart2_Lansat, 24, 10, 10, 10, 10, 10, 30 @ ITEM_LANSAT_BERRY: サンのみ
	berry_entry 0x5D, 0x60, 0xAE, 0xFF, 0xFF, 0xFF, 0xFF, BERRY_FIRMNESS_SUPER_HARD, 153, 2, 1, sBerryDescriptionPart1_Starf, sBerryDescriptionPart2_Starf, 24, 10, 10, 10, 10, 10, 30 @ ITEM_STARF_BERRY: スターのみ
	berry_entry 0x65, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 2, 1, sBerryDescriptionPart1_Enigma, sBerryDescriptionPart2_Enigma, 24, 40, 40, 40, 40, 40, 40 @ ITEM_ENIGMA_BERRY: ナゾのみ

	.if (. - gBerries) != 0x4B4
	.error "gBerries must contain 43 entries of size 0x1C"
	.endif
	@ Berry Crush difficulty / Berry Powder yield by Berry item.
	.globl gBerryCrush_BerryData
gBerryCrush_BerryData: @ 0x08563604
	berry_crush_berry_data ITEM_CHERI_BERRY, 50, 20 @ クラボのみ
	berry_crush_berry_data ITEM_CHESTO_BERRY, 50, 20 @ カゴのみ
	berry_crush_berry_data ITEM_PECHA_BERRY, 50, 20 @ モモンのみ
	berry_crush_berry_data ITEM_RAWST_BERRY, 50, 20 @ チーゴのみ
	berry_crush_berry_data ITEM_ASPEAR_BERRY, 50, 20 @ ナナシのみ
	berry_crush_berry_data ITEM_LEPPA_BERRY, 50, 30 @ ヒメリのみ
	berry_crush_berry_data ITEM_ORAN_BERRY, 50, 30 @ オレンのみ
	berry_crush_berry_data ITEM_PERSIM_BERRY, 50, 30 @ キーのみ
	berry_crush_berry_data ITEM_LUM_BERRY, 50, 30 @ ラムのみ
	berry_crush_berry_data ITEM_SITRUS_BERRY, 50, 30 @ オボンのみ
	berry_crush_berry_data ITEM_FIGY_BERRY, 60, 50 @ フィラのみ
	berry_crush_berry_data ITEM_WIKI_BERRY, 60, 50 @ ウイのみ
	berry_crush_berry_data ITEM_MAGO_BERRY, 60, 50 @ マゴのみ
	berry_crush_berry_data ITEM_AGUAV_BERRY, 60, 50 @ バンジのみ
	berry_crush_berry_data ITEM_IAPAPA_BERRY, 60, 50 @ イアのみ
	berry_crush_berry_data ITEM_RAZZ_BERRY, 80, 70 @ ズリのみ
	berry_crush_berry_data ITEM_BLUK_BERRY, 80, 70 @ ブリーのみ
	berry_crush_berry_data ITEM_NANAB_BERRY, 80, 70 @ ナナのみ
	berry_crush_berry_data ITEM_WEPEAR_BERRY, 80, 70 @ セシナのみ
	berry_crush_berry_data ITEM_PINAP_BERRY, 80, 70 @ パイルのみ
	berry_crush_berry_data ITEM_POMEG_BERRY, 100, 100 @ ザロクのみ
	berry_crush_berry_data ITEM_KELPSY_BERRY, 100, 100 @ ネコブのみ
	berry_crush_berry_data ITEM_QUALOT_BERRY, 100, 100 @ タポルのみ
	berry_crush_berry_data ITEM_HONDEW_BERRY, 100, 100 @ ロメのみ
	berry_crush_berry_data ITEM_GREPA_BERRY, 100, 100 @ ウブのみ
	berry_crush_berry_data ITEM_TAMATO_BERRY, 130, 150 @ マトマのみ
	berry_crush_berry_data ITEM_CORNN_BERRY, 130, 150 @ モコシのみ
	berry_crush_berry_data ITEM_MAGOST_BERRY, 130, 150 @ ゴスのみ
	berry_crush_berry_data ITEM_RABUTA_BERRY, 130, 150 @ ラブタのみ
	berry_crush_berry_data ITEM_NOMEL_BERRY, 130, 150 @ ノメルのみ
	berry_crush_berry_data ITEM_SPELON_BERRY, 160, 250 @ ノワキのみ
	berry_crush_berry_data ITEM_PAMTRE_BERRY, 160, 250 @ シーヤのみ
	berry_crush_berry_data ITEM_WATMEL_BERRY, 160, 250 @ カイスのみ
	berry_crush_berry_data ITEM_DURIN_BERRY, 160, 250 @ ドリのみ
	berry_crush_berry_data ITEM_BELUE_BERRY, 160, 250 @ ベリブのみ
	berry_crush_berry_data ITEM_LIECHI_BERRY, 180, 500 @ チイラのみ
	berry_crush_berry_data ITEM_GANLON_BERRY, 180, 500 @ リュガのみ
	berry_crush_berry_data ITEM_SALAC_BERRY, 180, 500 @ カムラのみ
	berry_crush_berry_data ITEM_PETAYA_BERRY, 180, 500 @ ヤタピのみ
	berry_crush_berry_data ITEM_APICOT_BERRY, 180, 500 @ ズアのみ
	berry_crush_berry_data ITEM_LANSAT_BERRY, 200, 750 @ サンのみ
	berry_crush_berry_data ITEM_STARF_BERRY, 200, 750 @ スターのみ
	berry_crush_berry_data ITEM_ENIGMA_BERRY, 150, 200 @ ナゾのみ

	.if (. - gBerryCrush_BerryData) != 0xAC
	.error "gBerryCrush_BerryData must contain 43 entries of size 4"
	.endif
	@ Empty BerryTree template used when clearing/initializing tree slots.
	.globl gBlankBerryTree
gBlankBerryTree: @ 0x085636B0
	.4byte 0, 0
	.if (. - gBlankBerryTree) != 0x8
	.error "gBlankBerryTree size mismatch"
	.endif

	.include "data/script_menu/multichoice_text_aliases.inc"

	@ Script-menu multichoice MenuAction arrays.
MultichoiceList_BrineyOnDewford: @ 0x085636B8
	script_menu_action sScriptMenuText_Petalburg
	script_menu_action sScriptMenuText_Slateport
	script_menu_action sScriptMenuText_Exit

MultichoiceList_EnterInfo: @ 0x085636D0
	script_menu_action sScriptMenuText_Enter2
	script_menu_action sScriptMenuText_Info2
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ContestInfo: @ 0x085636E8
	script_menu_action sScriptMenuText_WhatsAContest
	script_menu_action sScriptMenuText_TypesOfContests
	script_menu_action sScriptMenuText_Ranks
	script_menu_action sScriptMenuText_Cancel2

MultichoiceList_ContestType: @ 0x08563708
	script_menu_action sScriptMenuText_CoolnessContest
	script_menu_action sScriptMenuText_BeautyContest
	script_menu_action sScriptMenuText_CutenessContest
	script_menu_action sScriptMenuText_SmartnessContest
	script_menu_action sScriptMenuText_ToughnessContest
	script_menu_action sScriptMenuText_Exit

MultichoiceList_BasePCWithRegistry: @ 0x08563738
	script_menu_action sScriptMenuText_Decoration2
	script_menu_action sScriptMenuText_PackUp
	script_menu_action sScriptMenuText_Registry
	script_menu_action sScriptMenuText_Exit

MultichoiceList_BasePCNoRegistry: @ 0x08563758
	script_menu_action sScriptMenuText_Decoration2
	script_menu_action sScriptMenuText_PackUp
	script_menu_action sScriptMenuText_Exit

MultichoiceList_RegisterMenu: @ 0x08563770
	script_menu_action sScriptMenuText_Menu_Register
	script_menu_action sScriptMenuText_Registry
	script_menu_action sScriptMenuText_Information
	script_menu_action sScriptMenuText_Cancel2

MultichoiceList_Bike: @ 0x08563790
	script_menu_action sScriptMenuText_Mach
	script_menu_action sScriptMenuText_Acro

MultichoiceList_StatusInfo: @ 0x085637A0
	script_menu_action sScriptMenuText_Psn
	script_menu_action sScriptMenuText_Par
	script_menu_action sScriptMenuText_Slp
	script_menu_action sScriptMenuText_Brn
	script_menu_action sScriptMenuText_Frz
	script_menu_action sScriptMenuText_Exit

MultichoiceList_BrineyOffDewford: @ 0x085637D0
	script_menu_action sScriptMenuText_Dewford
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ViewedPaintings: @ 0x085637E0
	script_menu_action sScriptMenuText_SawIt
	script_menu_action sScriptMenuText_NotYet

MultichoiceList_YesNoInfo2: @ 0x085637F0
	script_menu_action sScriptMenuText_Yes
	script_menu_action sScriptMenuText_No
	script_menu_action sScriptMenuText_Info2

MultichoiceList_ChallengeInfo: @ 0x08563808
	script_menu_action sScriptMenuText_Challenge
	script_menu_action sScriptMenuText_Info3
	script_menu_action sScriptMenuText_Exit

MultichoiceList_LevelMode: @ 0x08563820
	script_menu_action sScriptMenuText_Lv50
	script_menu_action sScriptMenuText_OpenLevel
	script_menu_action sScriptMenuText_Exit

MultichoiceList_Mechadoll1_Q1: @ 0x08563838
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Oddish
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Poochyena
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Taillow

MultichoiceList_Mechadoll1_Q2: @ 0x08563850
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Azurill
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Lotad
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Wingull

MultichoiceList_Mechadoll1_Q3: @ 0x08563868
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Dustox
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Zubat
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Nincada

MultichoiceList_Mechadoll2_Q1: @ 0x08563880
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Ralts
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Zigzagoon
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Slakoth

MultichoiceList_Mechadoll2_Q2: @ 0x08563898
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Poochyena2
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Shroomish
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Zigzagoon2

MultichoiceList_Mechadoll2_Q3: @ 0x085638B0
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Poochyena3
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Zubat2
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Carvanha

MultichoiceList_Mechadoll3_Q1: @ 0x085638C8
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_BurnHeal
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_HarborMail
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_SamePrice

MultichoiceList_Mechadoll3_Q2: @ 0x085638E0
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_60Yen
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_55Yen
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Nothing

MultichoiceList_Mechadoll3_Q3: @ 0x085638F8
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_CostMore
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_CostLess
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_SamePrice2

MultichoiceList_Mechadoll4_Q1: @ 0x08563910
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Male
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Female
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Neither

MultichoiceList_Mechadoll4_Q2: @ 0x08563928
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_ElderlyMen
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_ElderlyLadies
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_SameNumber

MultichoiceList_Mechadoll4_Q3: @ 0x08563940
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_None
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_One
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Two

MultichoiceList_Mechadoll5_Q1: @ 0x08563958
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Two2
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Three
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Four

MultichoiceList_Mechadoll5_Q2: @ 0x08563970
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Six
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Seven
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Eight

MultichoiceList_Mechadoll5_Q3: @ 0x08563988
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Six2
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Seven2
	script_menu_action sScriptMenuText_TrickHouse_Mechadoll_Eight2

MultichoiceList_VendingMachine: @ 0x085639A0
	script_menu_action sScriptMenuText_FreshWaterAndPrice
	script_menu_action sScriptMenuText_SodaPopAndPrice
	script_menu_action sScriptMenuText_LemonadeAndPrice
	script_menu_action sScriptMenuText_Exit

MultichoiceList_MachBikeInfo: @ 0x085639C0
	script_menu_action sScriptMenuText_HowToRide
	script_menu_action sScriptMenuText_HowToTurn
	script_menu_action sScriptMenuText_SandySlopes
	script_menu_action sScriptMenuText_Exit

MultichoiceList_AcroBikeInfo: @ 0x085639E0
	script_menu_action sScriptMenuText_Wheelies
	script_menu_action sScriptMenuText_BunnyHops
	script_menu_action sScriptMenuText_Jump
	script_menu_action sScriptMenuText_Exit

MultichoiceList_Satisfaction: @ 0x08563A00
	script_menu_action sScriptMenuText_Satisfied
	script_menu_action sScriptMenuText_Dissatisfied

MultichoiceList_SternDeepSea: @ 0x08563A10
	script_menu_action sScriptMenuText_DeepSeaTooth
	script_menu_action sScriptMenuText_DeepSeaScale
	script_menu_action sScriptMenuText_Exit

MultichoiceList_UnusedAshVendor: @ 0x08563A28
	script_menu_action sScriptMenuText_BlueFlute2
	script_menu_action sScriptMenuText_YellowFlute2
	script_menu_action sScriptMenuText_RedFlute2
	script_menu_action sScriptMenuText_WhiteFlute2
	script_menu_action sScriptMenuText_BlackFlute2
	script_menu_action sScriptMenuText_GlassChair
	script_menu_action sScriptMenuText_GlassDesk
	script_menu_action sScriptMenuText_Cancel2

MultichoiceList_GameCornerDolls: @ 0x08563A68
	script_menu_action sScriptMenuText_TreeckoDollAndPrice
	script_menu_action sScriptMenuText_TorchicDollAndPrice
	script_menu_action sScriptMenuText_MudkipDollAndPrice
	script_menu_action sScriptMenuText_Exit

MultichoiceList_GameCornerTMs: @ 0x08563A88
	script_menu_action sScriptMenuText_TM32AndPrice
	script_menu_action sScriptMenuText_TM29AndPrice
	script_menu_action sScriptMenuText_TM35AndPrice
	script_menu_action sScriptMenuText_TM24AndPrice
	script_menu_action sScriptMenuText_TM13AndPrice
	script_menu_action sScriptMenuText_Exit

MultichoiceList_GameCornerCoins: @ 0x08563AB8
	script_menu_action sScriptMenuText_50CoinsAndPrice
	script_menu_action sScriptMenuText_500CoinsAndPrice
	script_menu_action sScriptMenuText_Exit

MultichoiceList_HowsFishing: @ 0x08563AD0
	script_menu_action sScriptMenuText_Excellent2
	script_menu_action sScriptMenuText_NotSoGood

MultichoiceList_SSTidalSlateportWithBF: @ 0x08563AE0
	script_menu_action sScriptMenuText_LilycoveCity
	script_menu_action sScriptMenuText_BattleFrontier
	script_menu_action sScriptMenuText_Exit

MultichoiceList_SSTidalBattleFrontier: @ 0x08563AF8
	script_menu_action sScriptMenuText_SlateportCity
	script_menu_action sScriptMenuText_LilycoveCity
	script_menu_action sScriptMenuText_Exit

MultichoiceList_RightLeft: @ 0x08563B10
	script_menu_action sScriptMenuText_Right
	script_menu_action sScriptMenuText_Left

MultichoiceList_SSTidalSlateportNoBF: @ 0x08563B20
	script_menu_action sScriptMenuText_LilycoveCity
	script_menu_action sScriptMenuText_Exit

MultichoiceList_Floors: @ 0x08563B30
	script_menu_action sScriptMenuText_5F
	script_menu_action sScriptMenuText_4F
	script_menu_action sScriptMenuText_3F
	script_menu_action sScriptMenuText_2F
	script_menu_action sScriptMenuText_1F
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsR: @ 0x08563B60
	script_menu_action sScriptMenuText_RedShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsY: @ 0x08563B70
	script_menu_action sScriptMenuText_YellowShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsRY: @ 0x08563B80
	script_menu_action sScriptMenuText_RedShard
	script_menu_action sScriptMenuText_YellowShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsB: @ 0x08563B98
	script_menu_action sScriptMenuText_BlueShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsRB: @ 0x08563BA8
	script_menu_action sScriptMenuText_RedShard
	script_menu_action sScriptMenuText_BlueShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsYB: @ 0x08563BC0
	script_menu_action sScriptMenuText_YellowShard
	script_menu_action sScriptMenuText_BlueShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsRYB: @ 0x08563BD8
	script_menu_action sScriptMenuText_RedShard
	script_menu_action sScriptMenuText_YellowShard
	script_menu_action sScriptMenuText_BlueShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsG: @ 0x08563BF8
	script_menu_action sScriptMenuText_GreenShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsRG: @ 0x08563C08
	script_menu_action sScriptMenuText_RedShard
	script_menu_action sScriptMenuText_GreenShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsYG: @ 0x08563C20
	script_menu_action sScriptMenuText_YellowShard
	script_menu_action sScriptMenuText_GreenShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsRYG: @ 0x08563C38
	script_menu_action sScriptMenuText_RedShard
	script_menu_action sScriptMenuText_YellowShard
	script_menu_action sScriptMenuText_GreenShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsBG: @ 0x08563C58
	script_menu_action sScriptMenuText_BlueShard
	script_menu_action sScriptMenuText_GreenShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsRBG: @ 0x08563C70
	script_menu_action sScriptMenuText_RedShard
	script_menu_action sScriptMenuText_BlueShard
	script_menu_action sScriptMenuText_GreenShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsYBG: @ 0x08563C90
	script_menu_action sScriptMenuText_YellowShard
	script_menu_action sScriptMenuText_BlueShard
	script_menu_action sScriptMenuText_GreenShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ShardsRYBG: @ 0x08563CB0
	script_menu_action sScriptMenuText_RedShard
	script_menu_action sScriptMenuText_YellowShard
	script_menu_action sScriptMenuText_BlueShard
	script_menu_action sScriptMenuText_GreenShard
	script_menu_action sScriptMenuText_Exit

MultichoiceList_TourneyWithRecord: @ 0x08563CD8
	script_menu_action sScriptMenuText_Opponent
	script_menu_action sScriptMenuText_Tourney_Tree
	script_menu_action sScriptMenuText_ReadyToStart
	script_menu_action sScriptMenuText_Record2
	script_menu_action sScriptMenuText_Rest
	script_menu_action sScriptMenuText_Retire

MultichoiceList_TourneyNoRecord: @ 0x08563D08
	script_menu_action sScriptMenuText_Opponent
	script_menu_action sScriptMenuText_Tourney_Tree
	script_menu_action sScriptMenuText_ReadyToStart
	script_menu_action sScriptMenuText_Rest
	script_menu_action sScriptMenuText_Retire

MultichoiceList_Tent: @ 0x08563D30
	script_menu_action sScriptMenuText_RedTent
	script_menu_action sScriptMenuText_BlueTent

MultichoiceList_LinkServicesNoBerry: @ 0x08563D40
	script_menu_action sScriptMenuText_TradeCenter
	script_menu_action sScriptMenuText_Colosseum
	script_menu_action sScriptMenuText_RecordCorner
	script_menu_action sScriptMenuText_Exit

MultichoiceList_YesNoInfo: @ 0x08563D60
	script_menu_action sScriptMenuText_Yes
	script_menu_action sScriptMenuText_No
	script_menu_action sScriptMenuText_Info2

MultichoiceList_BattleMode: @ 0x08563D78
	script_menu_action sScriptMenuText_SingleBattle
	script_menu_action sScriptMenuText_DoubleBattle
	script_menu_action sScriptMenuText_MultiBattle
	script_menu_action sScriptMenuText_Info2
	script_menu_action sScriptMenuText_Exit

MultichoiceList_LinkServicesNoRecord: @ 0x08563DA0
	script_menu_action sScriptMenuText_TradeCenter
	script_menu_action sScriptMenuText_Colosseum
	script_menu_action sScriptMenuText_BerryCrush3
	script_menu_action sScriptMenuText_Exit

MultichoiceList_LinkServicesAll: @ 0x08563DC0
	script_menu_action sScriptMenuText_TradeCenter
	script_menu_action sScriptMenuText_Colosseum
	script_menu_action sScriptMenuText_RecordCorner
	script_menu_action sScriptMenuText_BerryCrush3
	script_menu_action sScriptMenuText_Exit

MultichoiceList_LinkServicesNoRecordBerry: @ 0x08563DE8
	script_menu_action sScriptMenuText_TradeCenter
	script_menu_action sScriptMenuText_Colosseum
	script_menu_action sScriptMenuText_Exit

MultichoiceList_WirelessMinigame: @ 0x08563E00
	script_menu_action sScriptMenuText_PokemonJump
	script_menu_action sScriptMenuText_DodrioBerryPicking
	script_menu_action sScriptMenuText_Exit

MultichoiceList_LinkLeader: @ 0x08563E18
	script_menu_action sScriptMenuText_JoinGroup
	script_menu_action sScriptMenuText_BecomeLeader
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ContestRank: @ 0x08563E30
	script_menu_action sScriptMenuText_NormalRank
	script_menu_action sScriptMenuText_SuperRank
	script_menu_action sScriptMenuText_HyperRank
	script_menu_action sScriptMenuText_MasterRank
	script_menu_action sScriptMenuText_Exit

MultichoiceList_FrontierItemChoose: @ 0x08563E58
	script_menu_action sScriptMenuText_BattleBag
	script_menu_action sScriptMenuText_HeldItem
	script_menu_action sScriptMenuText_Exit

MultichoiceList_LinkContestInfo: @ 0x08563E70
	script_menu_action sScriptMenuText_LinkContest
	script_menu_action sScriptMenuText_AboutE_Mode
	script_menu_action sScriptMenuText_AboutG_Mode
	script_menu_action sScriptMenuText_Cancel2

MultichoiceList_LinkContestMode: @ 0x08563E90
	script_menu_action sScriptMenuText_E_Mode
	script_menu_action sScriptMenuText_G_Mode
	script_menu_action sScriptMenuText_Exit

MultichoiceList_ForcedStartMenu: @ 0x08563EA8
	script_menu_action sScriptMenuText_MenuOptionPokedex
	script_menu_action sScriptMenuText_MenuOptionPokemon
	script_menu_action sScriptMenuText_MenuOptionBag
	script_menu_action sScriptMenuText_MenuOptionPokenav
	script_menu_action sScriptMenuText_Blank
	script_menu_action sScriptMenuText_MenuOptionSave
	script_menu_action sScriptMenuText_MenuOptionOption
	script_menu_action sScriptMenuText_MenuOptionExit

MultichoiceList_FrontierGamblerBet: @ 0x08563EE8
	script_menu_action sScriptMenuText_5BP
	script_menu_action sScriptMenuText_10BP
	script_menu_action sScriptMenuText_15BP
	script_menu_action sScriptMenuText_Exit

MultichoiceList_UnusedSSTidal1: @ 0x08563F08
	script_menu_action sScriptMenuText_SouthernIsland
	script_menu_action sScriptMenuText_BirthIsland
	script_menu_action sScriptMenuText_Exit

MultichoiceList_UnusedSSTidal2: @ 0x08563F20
	script_menu_action sScriptMenuText_SouthernIsland
	script_menu_action sScriptMenuText_FarawayIsland
	script_menu_action sScriptMenuText_Exit

MultichoiceList_UnusedSSTidal3: @ 0x08563F38
	script_menu_action sScriptMenuText_BirthIsland
	script_menu_action sScriptMenuText_FarawayIsland
	script_menu_action sScriptMenuText_Exit

MultichoiceList_UnusedSSTidal4: @ 0x08563F50
	script_menu_action sScriptMenuText_SouthernIsland
	script_menu_action sScriptMenuText_BirthIsland
	script_menu_action sScriptMenuText_FarawayIsland
	script_menu_action sScriptMenuText_Exit

MultichoiceList_Fossil: @ 0x08563F70
	script_menu_action sScriptMenuText_ClawFossil
	script_menu_action sScriptMenuText_RootFossil
	script_menu_action sScriptMenuText_Exit

MultichoiceList_YesNo: @ 0x08563F88
	script_menu_action sScriptMenuText_Yes
	script_menu_action sScriptMenuText_No4

MultichoiceList_FrontierRules: @ 0x08563F98
	script_menu_action sScriptMenuText_TwoStyles
	script_menu_action sScriptMenuText_Lv50_3
	script_menu_action sScriptMenuText_OpenLevel2
	script_menu_action sScriptMenuText_MonTypeAndNo
	script_menu_action sScriptMenuText_HoldItems
	script_menu_action sScriptMenuText_Exit

MultichoiceList_FrontierPassInfo: @ 0x08563FC8
	script_menu_action sScriptMenuText_Symbols2
	script_menu_action sScriptMenuText_Record3
	script_menu_action sScriptMenuText_BattlePts
	script_menu_action sScriptMenuText_Exit

MultichoiceList_BattleArenaRules: @ 0x08563FE8
	script_menu_action sScriptMenuText_BattleRules
	script_menu_action sScriptMenuText_JudgeMind
	script_menu_action sScriptMenuText_JudgeSkill
	script_menu_action sScriptMenuText_JudgeBody
	script_menu_action sScriptMenuText_Exit

MultichoiceList_BattleTowerRules: @ 0x08564010
	script_menu_action sScriptMenuText_TowerInfo
	script_menu_action sScriptMenuText_BattleMon
	script_menu_action sScriptMenuText_BattleSalon
	script_menu_action sScriptMenuText_MultiLink2
	script_menu_action sScriptMenuText_Exit

MultichoiceList_BattleDomeRules: @ 0x08564038
	script_menu_action sScriptMenuText_Matchup
	script_menu_action sScriptMenuText_TourneyTree
	script_menu_action sScriptMenuText_DoubleKO
	script_menu_action sScriptMenuText_Exit

MultichoiceList_BattleFactoryRules: @ 0x08564058
	script_menu_action sScriptMenuText_BasicRules
	script_menu_action sScriptMenuText_SwapPartners
	script_menu_action sScriptMenuText_SwapNumber
	script_menu_action sScriptMenuText_SwapNotes
	script_menu_action sScriptMenuText_OpenLevel3
	script_menu_action sScriptMenuText_Exit

MultichoiceList_BattlePalaceRules: @ 0x08564088
	script_menu_action sScriptMenuText_BattleBasics
	script_menu_action sScriptMenuText_PokemonNature
	script_menu_action sScriptMenuText_PokemonMoves
	script_menu_action sScriptMenuText_Underpowered
	script_menu_action sScriptMenuText_WhenInDanger
	script_menu_action sScriptMenuText_Exit

MultichoiceList_BattlePyramidRules: @ 0x085640B8
	script_menu_action sScriptMenuText_PyramidPokemon
	script_menu_action sScriptMenuText_PyramidTrainers
	script_menu_action sScriptMenuText_PyramidMaze
	script_menu_action sScriptMenuText_BattleBag2
	script_menu_action sScriptMenuText_Exit

MultichoiceList_BattlePikeRules: @ 0x085640E0
	script_menu_action sScriptMenuText_PokenavAndBag
	script_menu_action sScriptMenuText_HeldItems
	script_menu_action sScriptMenuText_PokemonOrder
	script_menu_action sScriptMenuText_Exit

MultichoiceList_GoOnRecordRestRetire: @ 0x08564100
	script_menu_action sScriptMenuText_GoOn
	script_menu_action sScriptMenuText_Record2
	script_menu_action sScriptMenuText_Rest
	script_menu_action sScriptMenuText_Retire

MultichoiceList_GoOnRestRetire: @ 0x08564120
	script_menu_action sScriptMenuText_GoOn
	script_menu_action sScriptMenuText_Rest
	script_menu_action sScriptMenuText_Retire

MultichoiceList_GoOnRecordRetire: @ 0x08564138
	script_menu_action sScriptMenuText_GoOn
	script_menu_action sScriptMenuText_Record2
	script_menu_action sScriptMenuText_Retire

MultichoiceList_GoOnRetire: @ 0x08564150
	script_menu_action sScriptMenuText_GoOn
	script_menu_action sScriptMenuText_Retire

MultichoiceList_TVLati: @ 0x08564160
	script_menu_action sScriptMenuText_Red
	script_menu_action sScriptMenuText_Blue

MultichoiceList_BattleTowerFeelings: @ 0x08564170
	script_menu_action sScriptMenuText_IllBattleNow
	script_menu_action sScriptMenuText_IWon
	script_menu_action sScriptMenuText_ILost
	script_menu_action sScriptMenuText_IWontTell

MultichoiceList_WheresRayquaza: @ 0x08564190
	script_menu_action sScriptMenuText_CaveOfOrigin
	script_menu_action sScriptMenuText_MtPyre
	script_menu_action sScriptMenuText_SkyPillar
	script_menu_action sScriptMenuText_DontRemember

MultichoiceList_SlateportTentRules: @ 0x085641B0
	script_menu_action sScriptMenuText_BasicRules
	script_menu_action sScriptMenuText_SwapPartners
	script_menu_action sScriptMenuText_SwapNumber
	script_menu_action sScriptMenuText_SwapNotes
	script_menu_action sScriptMenuText_BattlePokemon
	script_menu_action sScriptMenuText_Exit

MultichoiceList_FallarborTentRules: @ 0x085641E0
	script_menu_action sScriptMenuText_BattleTrainers
	script_menu_action sScriptMenuText_BattleRules
	script_menu_action sScriptMenuText_JudgeMind
	script_menu_action sScriptMenuText_JudgeSkill
	script_menu_action sScriptMenuText_JudgeBody
	script_menu_action sScriptMenuText_Exit

MultichoiceList_Exit: @ 0x08564210
	script_menu_action sScriptMenuText_Exit

	.if (. - MultichoiceList_BrineyOnDewford) != 0xB60
	.error "script-menu MenuAction pool size mismatch"
	.endif

	@ Indexed by MULTI_* id 0..112.
	.globl sMultichoiceLists
sMultichoiceLists: @ 0x08564218
	multichoice_list_entry MultichoiceList_BrineyOnDewford, 3 @ [0] MULTI_BRINEY_ON_DEWFORD
	multichoice_list_entry MultichoiceList_Exit, 1 @ [1] MULTI_PC
	multichoice_list_entry MultichoiceList_EnterInfo, 3 @ [2] MULTI_ENTERINFO
	multichoice_list_entry MultichoiceList_ContestInfo, 4 @ [3] MULTI_CONTEST_INFO
	multichoice_list_entry MultichoiceList_ContestType, 6 @ [4] MULTI_CONTEST_TYPE
	multichoice_list_entry MultichoiceList_BasePCNoRegistry, 3 @ [5] MULTI_BASE_PC_NO_REGISTRY
	multichoice_list_entry MultichoiceList_BasePCWithRegistry, 4 @ [6] MULTI_BASE_PC_WITH_REGISTRY
	multichoice_list_entry MultichoiceList_RegisterMenu, 4 @ [7] MULTI_REGISTER_MENU
	multichoice_list_entry MultichoiceList_Exit, 1 @ [8] MULTI_SSTIDAL_LILYCOVE
	multichoice_list_entry MultichoiceList_Exit, 1 @ [9] MULTI_UNUSED_9
	multichoice_list_entry MultichoiceList_Exit, 1 @ [10] MULTI_UNUSED_10
	multichoice_list_entry MultichoiceList_FrontierPassInfo, 4 @ [11] MULTI_FRONTIER_PASS_INFO
	multichoice_list_entry MultichoiceList_Bike, 2 @ [12] MULTI_BIKE
	multichoice_list_entry MultichoiceList_StatusInfo, 6 @ [13] MULTI_STATUS_INFO
	multichoice_list_entry MultichoiceList_BrineyOffDewford, 2 @ [14] MULTI_BRINEY_OFF_DEWFORD
	multichoice_list_entry MultichoiceList_Exit, 1 @ [15] MULTI_UNUSED_15
	multichoice_list_entry MultichoiceList_ViewedPaintings, 2 @ [16] MULTI_VIEWED_PAINTINGS
	multichoice_list_entry MultichoiceList_YesNoInfo, 3 @ [17] MULTI_YESNOINFO
	multichoice_list_entry MultichoiceList_BattleMode, 5 @ [18] MULTI_BATTLE_MODE
	multichoice_list_entry MultichoiceList_Exit, 1 @ [19] MULTI_UNUSED_19
	multichoice_list_entry MultichoiceList_YesNoInfo2, 3 @ [20] MULTI_YESNOINFO_2
	multichoice_list_entry MultichoiceList_Exit, 1 @ [21] MULTI_UNUSED_21
	multichoice_list_entry MultichoiceList_Exit, 1 @ [22] MULTI_UNUSED_22
	multichoice_list_entry MultichoiceList_ChallengeInfo, 3 @ [23] MULTI_CHALLENGEINFO
	multichoice_list_entry MultichoiceList_LevelMode, 3 @ [24] MULTI_LEVEL_MODE
	multichoice_list_entry MultichoiceList_Mechadoll1_Q1, 3 @ [25] MULTI_MECHADOLL1_Q1
	multichoice_list_entry MultichoiceList_Mechadoll1_Q2, 3 @ [26] MULTI_MECHADOLL1_Q2
	multichoice_list_entry MultichoiceList_Mechadoll1_Q3, 3 @ [27] MULTI_MECHADOLL1_Q3
	multichoice_list_entry MultichoiceList_Mechadoll2_Q1, 3 @ [28] MULTI_MECHADOLL2_Q1
	multichoice_list_entry MultichoiceList_Mechadoll2_Q2, 3 @ [29] MULTI_MECHADOLL2_Q2
	multichoice_list_entry MultichoiceList_Mechadoll2_Q3, 3 @ [30] MULTI_MECHADOLL2_Q3
	multichoice_list_entry MultichoiceList_Mechadoll3_Q1, 3 @ [31] MULTI_MECHADOLL3_Q1
	multichoice_list_entry MultichoiceList_Mechadoll3_Q2, 3 @ [32] MULTI_MECHADOLL3_Q2
	multichoice_list_entry MultichoiceList_Mechadoll3_Q3, 3 @ [33] MULTI_MECHADOLL3_Q3
	multichoice_list_entry MultichoiceList_Mechadoll4_Q1, 3 @ [34] MULTI_MECHADOLL4_Q1
	multichoice_list_entry MultichoiceList_Mechadoll4_Q2, 3 @ [35] MULTI_MECHADOLL4_Q2
	multichoice_list_entry MultichoiceList_Mechadoll4_Q3, 3 @ [36] MULTI_MECHADOLL4_Q3
	multichoice_list_entry MultichoiceList_Mechadoll5_Q1, 3 @ [37] MULTI_MECHADOLL5_Q1
	multichoice_list_entry MultichoiceList_Mechadoll5_Q2, 3 @ [38] MULTI_MECHADOLL5_Q2
	multichoice_list_entry MultichoiceList_Mechadoll5_Q3, 3 @ [39] MULTI_MECHADOLL5_Q3
	multichoice_list_entry MultichoiceList_Exit, 1 @ [40] MULTI_UNUSED_40
	multichoice_list_entry MultichoiceList_Exit, 1 @ [41] MULTI_UNUSED_41
	multichoice_list_entry MultichoiceList_VendingMachine, 4 @ [42] MULTI_VENDING_MACHINE
	multichoice_list_entry MultichoiceList_MachBikeInfo, 4 @ [43] MULTI_MACH_BIKE_INFO
	multichoice_list_entry MultichoiceList_AcroBikeInfo, 4 @ [44] MULTI_ACRO_BIKE_INFO
	multichoice_list_entry MultichoiceList_Satisfaction, 2 @ [45] MULTI_SATISFACTION
	multichoice_list_entry MultichoiceList_SternDeepSea, 3 @ [46] MULTI_STERN_DEEPSEA
	multichoice_list_entry MultichoiceList_UnusedAshVendor, 8 @ [47] MULTI_UNUSED_ASH_VENDOR
	multichoice_list_entry MultichoiceList_GameCornerDolls, 4 @ [48] MULTI_GAME_CORNER_DOLLS
	multichoice_list_entry MultichoiceList_GameCornerCoins, 3 @ [49] MULTI_GAME_CORNER_COINS
	multichoice_list_entry MultichoiceList_HowsFishing, 2 @ [50] MULTI_HOWS_FISHING
	multichoice_list_entry MultichoiceList_Exit, 1 @ [51] MULTI_UNUSED_51
	multichoice_list_entry MultichoiceList_SSTidalSlateportWithBF, 3 @ [52] MULTI_SSTIDAL_SLATEPORT_WITH_BF
	multichoice_list_entry MultichoiceList_SSTidalBattleFrontier, 3 @ [53] MULTI_SSTIDAL_BATTLE_FRONTIER
	multichoice_list_entry MultichoiceList_RightLeft, 2 @ [54] MULTI_RIGHTLEFT
	multichoice_list_entry MultichoiceList_GameCornerTMs, 6 @ [55] MULTI_GAME_CORNER_TMS
	multichoice_list_entry MultichoiceList_SSTidalSlateportNoBF, 2 @ [56] MULTI_SSTIDAL_SLATEPORT_NO_BF
	multichoice_list_entry MultichoiceList_Floors, 6 @ [57] MULTI_FLOORS
	multichoice_list_entry MultichoiceList_ShardsR, 2 @ [58] MULTI_SHARDS_R
	multichoice_list_entry MultichoiceList_ShardsY, 2 @ [59] MULTI_SHARDS_Y
	multichoice_list_entry MultichoiceList_ShardsRY, 3 @ [60] MULTI_SHARDS_RY
	multichoice_list_entry MultichoiceList_ShardsB, 2 @ [61] MULTI_SHARDS_B
	multichoice_list_entry MultichoiceList_ShardsRB, 3 @ [62] MULTI_SHARDS_RB
	multichoice_list_entry MultichoiceList_ShardsYB, 3 @ [63] MULTI_SHARDS_YB
	multichoice_list_entry MultichoiceList_ShardsRYB, 4 @ [64] MULTI_SHARDS_RYB
	multichoice_list_entry MultichoiceList_ShardsG, 2 @ [65] MULTI_SHARDS_G
	multichoice_list_entry MultichoiceList_ShardsRG, 3 @ [66] MULTI_SHARDS_RG
	multichoice_list_entry MultichoiceList_ShardsYG, 3 @ [67] MULTI_SHARDS_YG
	multichoice_list_entry MultichoiceList_ShardsRYG, 4 @ [68] MULTI_SHARDS_RYG
	multichoice_list_entry MultichoiceList_ShardsBG, 3 @ [69] MULTI_SHARDS_BG
	multichoice_list_entry MultichoiceList_ShardsRBG, 4 @ [70] MULTI_SHARDS_RBG
	multichoice_list_entry MultichoiceList_ShardsYBG, 4 @ [71] MULTI_SHARDS_YBG
	multichoice_list_entry MultichoiceList_ShardsRYBG, 5 @ [72] MULTI_SHARDS_RYBG
	multichoice_list_entry MultichoiceList_TourneyWithRecord, 6 @ [73] MULTI_TOURNEY_WITH_RECORD
	multichoice_list_entry MultichoiceList_LinkServicesNoRecordBerry, 3 @ [74] MULTI_CABLE_CLUB_NO_RECORD_MIX
	multichoice_list_entry MultichoiceList_LinkServicesNoRecordBerry, 3 @ [75] MULTI_WIRELESS_NO_RECORD_BERRY
	multichoice_list_entry MultichoiceList_LinkServicesNoBerry, 4 @ [76] MULTI_CABLE_CLUB_WITH_RECORD_MIX
	multichoice_list_entry MultichoiceList_LinkServicesNoBerry, 4 @ [77] MULTI_WIRELESS_NO_BERRY
	multichoice_list_entry MultichoiceList_LinkServicesNoRecord, 4 @ [78] MULTI_WIRELESS_NO_RECORD
	multichoice_list_entry MultichoiceList_LinkServicesAll, 5 @ [79] MULTI_WIRELESS_ALL_SERVICES
	multichoice_list_entry MultichoiceList_WirelessMinigame, 3 @ [80] MULTI_WIRELESS_MINIGAME
	multichoice_list_entry MultichoiceList_LinkLeader, 3 @ [81] MULTI_LINK_LEADER
	multichoice_list_entry MultichoiceList_ContestRank, 5 @ [82] MULTI_CONTEST_RANK
	multichoice_list_entry MultichoiceList_FrontierItemChoose, 3 @ [83] MULTI_FRONTIER_ITEM_CHOOSE
	multichoice_list_entry MultichoiceList_LinkContestInfo, 4 @ [84] MULTI_LINK_CONTEST_INFO
	multichoice_list_entry MultichoiceList_LinkContestMode, 3 @ [85] MULTI_LINK_CONTEST_MODE
	multichoice_list_entry MultichoiceList_ForcedStartMenu, 8 @ [86] MULTI_FORCED_START_MENU
	multichoice_list_entry MultichoiceList_FrontierGamblerBet, 4 @ [87] MULTI_FRONTIER_GAMBLER_BET
	multichoice_list_entry MultichoiceList_Tent, 2 @ [88] MULTI_TENT
	multichoice_list_entry MultichoiceList_UnusedSSTidal1, 3 @ [89] MULTI_UNUSED_SSTIDAL_1
	multichoice_list_entry MultichoiceList_UnusedSSTidal2, 3 @ [90] MULTI_UNUSED_SSTIDAL_2
	multichoice_list_entry MultichoiceList_UnusedSSTidal3, 3 @ [91] MULTI_UNUSED_SSTIDAL_3
	multichoice_list_entry MultichoiceList_UnusedSSTidal4, 4 @ [92] MULTI_UNUSED_SSTIDAL_4
	multichoice_list_entry MultichoiceList_Fossil, 3 @ [93] MULTI_FOSSIL
	multichoice_list_entry MultichoiceList_YesNo, 2 @ [94] MULTI_YESNO
	multichoice_list_entry MultichoiceList_FrontierRules, 6 @ [95] MULTI_FRONTIER_RULES
	multichoice_list_entry MultichoiceList_BattleArenaRules, 5 @ [96] MULTI_BATTLE_ARENA_RULES
	multichoice_list_entry MultichoiceList_BattleTowerRules, 5 @ [97] MULTI_BATTLE_TOWER_RULES
	multichoice_list_entry MultichoiceList_BattleDomeRules, 4 @ [98] MULTI_BATTLE_DOME_RULES
	multichoice_list_entry MultichoiceList_BattleFactoryRules, 6 @ [99] MULTI_BATTLE_FACTORY_RULES
	multichoice_list_entry MultichoiceList_BattlePalaceRules, 6 @ [100] MULTI_BATTLE_PALACE_RULES
	multichoice_list_entry MultichoiceList_BattlePyramidRules, 5 @ [101] MULTI_BATTLE_PYRAMID_RULES
	multichoice_list_entry MultichoiceList_BattlePikeRules, 4 @ [102] MULTI_BATTLE_PIKE_RULES
	multichoice_list_entry MultichoiceList_GoOnRecordRestRetire, 4 @ [103] MULTI_GO_ON_RECORD_REST_RETIRE
	multichoice_list_entry MultichoiceList_GoOnRestRetire, 3 @ [104] MULTI_GO_ON_REST_RETIRE
	multichoice_list_entry MultichoiceList_GoOnRecordRetire, 3 @ [105] MULTI_GO_ON_RECORD_RETIRE
	multichoice_list_entry MultichoiceList_GoOnRetire, 2 @ [106] MULTI_GO_ON_RETIRE
	multichoice_list_entry MultichoiceList_TourneyNoRecord, 5 @ [107] MULTI_TOURNEY_NO_RECORD
	multichoice_list_entry MultichoiceList_TVLati, 2 @ [108] MULTI_TV_LATI
	multichoice_list_entry MultichoiceList_BattleTowerFeelings, 4 @ [109] MULTI_BATTLE_TOWER_FEELINGS
	multichoice_list_entry MultichoiceList_WheresRayquaza, 4 @ [110] MULTI_WHERES_RAYQUAZA
	multichoice_list_entry MultichoiceList_SlateportTentRules, 6 @ [111] MULTI_SLATEPORT_TENT_RULES
	multichoice_list_entry MultichoiceList_FallarborTentRules, 6 @ [112] MULTI_FALLARBOR_TENT_RULES

	.if (. - sMultichoiceLists) != 0x388
	.error "sMultichoiceLists size mismatch"
	.endif
	@ Standard strings used by bufferstdstring and TV helpers.
	.globl gStdStrings
gStdStrings: @ 0x085645A0
	.4byte gText_Rom_5CAC84 @ [0]  STDSTRING_COOL
	.4byte gText_Rom_5CAC8A @ [1]  STDSTRING_BEAUTY
	.4byte gText_Rom_5CAC90 @ [2]  STDSTRING_CUTE
	.4byte gText_Rom_5CAC95 @ [3]  STDSTRING_SMART
	.4byte gText_Rom_5CAC9A @ [4]  STDSTRING_TOUGH
	.4byte gText_Rom_5CACA0 @ [5]  STDSTRING_NORMAL
	.4byte gText_Rom_5CACA5 @ [6]  STDSTRING_SUPER
	.4byte gText_Rom_5CACAA @ [7]  STDSTRING_HYPER
	.4byte gText_Rom_5CACAF @ [8]  STDSTRING_MASTER
	.4byte gText_Rom_5CACB4 @ [9]  STDSTRING_COOL2
	.4byte gText_Rom_5CACBA @ [10] STDSTRING_BEAUTY2
	.4byte gText_Rom_5CACC0 @ [11] STDSTRING_CUTE2
	.4byte gText_Rom_5CACC0 + 0x5 @ [12] STDSTRING_SMART2
	.4byte gText_Rom_5CACCC @ [13] STDSTRING_TOUGH2
	.4byte gText_Rom_5CACD2 @ [14] STDSTRING_ITEMS
	.4byte gText_Rom_5CACD6 @ [15] STDSTRING_KEYITEMS
	.4byte gText_Rom_5CACDE @ [16] STDSTRING_POKEBALLS
	.4byte gText_Rom_5CACE2 @ [17] STDSTRING_TMHMS
	.4byte gText_Rom_5CACE8 @ [18] STDSTRING_BERRIES
	.4byte gText_Rom_5CAD53 @ [19] STDSTRING_SINGLE
	.4byte gText_Rom_5CAD58 @ [20] STDSTRING_DOUBLE
	.4byte gText_Rom_5CAD5C @ [21] STDSTRING_MULTI
	.4byte gText_Rom_5CAD60 @ [22] STDSTRING_MULTI_LINK
	.4byte gText_Rom_5CC423 @ [23] STDSTRING_BATTLE_TOWER
	.4byte gText_Rom_5CC42A @ [24] STDSTRING_BATTLE_DOME
	.4byte gText_Rom_5CC438 @ [25] STDSTRING_BATTLE_FACTORY
	.4byte gText_Rom_5CC431 @ [26] STDSTRING_BATTLE_PALACE
	.4byte gText_Rom_5CC442 @ [27] STDSTRING_BATTLE_ARENA
	.4byte gText_Rom_5CC44A @ [28] STDSTRING_BATTLE_PIKE
	.4byte gText_Rom_5CC452 @ [29] STDSTRING_BATTLE_PYRAMID

	.if (. - gStdStrings) != 0x78
	.error "gStdStrings must contain 30 pointers"
	.endif

	@ MULTI_* ids whose menus use the link-service option tables below.
	.globl sLinkServicesMultichoiceIds
sLinkServicesMultichoiceIds: @ 0x08564618
	.byte 0x4A @ MULTI_CABLE_CLUB_NO_RECORD_MIX
	.byte 0x4B @ MULTI_WIRELESS_NO_RECORD_BERRY
	.byte 0x4C @ MULTI_CABLE_CLUB_WITH_RECORD_MIX
	.byte 0x4D @ MULTI_WIRELESS_NO_BERRY
	.byte 0x4E @ MULTI_WIRELESS_NO_RECORD
	.byte 0x4F @ MULTI_WIRELESS_ALL_SERVICES
	.byte 0, 0 @ alignment padding

	.globl sLilycoveSSTidalDestinations
sLilycoveSSTidalDestinations: @ 0x08564620
	.4byte gText_Rom_5CB194 @ Slateport City
	.4byte gText_Rom_5CAC23 @ Battle Frontier
	.4byte gText_Rom_5CADF1 @ Southern Island
	.4byte gText_Rom_5CAE0B @ Navel Rock
	.4byte gText_Rom_5CADF9 @ Birth Island
	.4byte gText_Rom_5CAE02 @ Faraway Island
	.4byte gText_Exit

	.globl sCableClubOptions_WithRecordMix
sCableClubOptions_WithRecordMix: @ 0x0856463C
	.4byte gText_Rom_247BB3 @ Trade using Link Cable
	.4byte gText_Rom_247BD5 @ Battle using Link Cable
	.4byte gText_Rom_247BF7 @ Record Corner using Link Cable
	.4byte gText_Rom_24809D @ Cancel

	.globl sWirelessOptionsNoBerryCrush
sWirelessOptionsNoBerryCrush: @ 0x0856464C
	.4byte gText_Rom_248014 @ Trade
	.4byte gText_Rom_24802D @ Battle
	.4byte gText_Rom_248066 @ Mix Records
	.4byte gText_Rom_24809D @ Cancel

	.globl sWirelessOptions_NoRecordMix
sWirelessOptions_NoRecordMix: @ 0x0856465C
	.4byte gText_Rom_248014 @ Trade
	.4byte gText_Rom_24802D @ Battle
	.4byte gText_Rom_248046 @ Berry Crush / Berry Powder
	.4byte gText_Rom_24809D @ Cancel

	.globl sWirelessOptions_AllServices
sWirelessOptions_AllServices: @ 0x0856466C
	.4byte gText_Rom_248014 @ Trade
	.4byte gText_Rom_24802D @ Battle
	.4byte gText_Rom_248066 @ Mix Records
	.4byte gText_Rom_248046 @ Berry Crush / Berry Powder
	.4byte gText_Rom_24809D @ Cancel

	.globl sCableClubOptions_NoRecordMix
sCableClubOptions_NoRecordMix: @ 0x08564680
	.4byte gText_Rom_247BB3 @ Trade using Link Cable
	.4byte gText_Rom_247BD5 @ Battle using Link Cable
	.4byte gText_Rom_24809D @ Cancel

	@ Wireless services menu without Record Mix / Berry Crush.
	.globl sWirelessOptions_NoRecordMixBerryCrush
sWirelessOptions_NoRecordMixBerryCrush: @ 0x0856468C
	.4byte gText_Rom_248014 @ Trade
	.4byte gText_Rom_24802D @ Battle
	.4byte gText_Rom_24809D @ Cancel

	@ Naming-screen uncompressed sprite graphics.
	.globl gNamingScreenBackButton_Gfx
gNamingScreenBackButton_Gfx: @ 0x08564698
	.incbin "build/graphics/naming_screen/back_button.4bpp"

	.globl gNamingScreenInputArrow_Gfx
gNamingScreenInputArrow_Gfx: @ 0x08564878
	.incbin "build/graphics/naming_screen/input_arrow.4bpp"

	.globl gNamingScreenOKButton_Gfx
gNamingScreenOKButton_Gfx: @ 0x08564898
	.incbin "build/graphics/naming_screen/ok_button.4bpp"

	.globl gNamingScreenUnderscore_Gfx
gNamingScreenUnderscore_Gfx: @ 0x08564A78
	.incbin "build/graphics/naming_screen/underscore.4bpp"

	.globl gNamingScreenPageSwapFrame_Gfx
gNamingScreenPageSwapFrame_Gfx: @ 0x08564A98
	.incbin "build/graphics/naming_screen/page_swap_frame.4bpp"

	.globl gNamingScreenPageSwapButton_Gfx
gNamingScreenPageSwapButton_Gfx: @ 0x08564D18
	.incbin "build/graphics/naming_screen/page_swap_button.4bpp"

	.globl gNamingScreenPageSwapUpper_Gfx
gNamingScreenPageSwapUpper_Gfx: @ 0x08564E18
	.incbin "build/graphics/naming_screen/page_swap_upper.4bpp"

	.globl gNamingScreenPageSwapLower_Gfx
gNamingScreenPageSwapLower_Gfx: @ 0x08564E58
	.incbin "build/graphics/naming_screen/page_swap_lower.4bpp"

	.globl gNamingScreenPageSwapOthers_Gfx
gNamingScreenPageSwapOthers_Gfx: @ 0x08564E98
	.incbin "build/graphics/naming_screen/page_swap_others.4bpp"

	.globl gNamingScreenCursor_Gfx
gNamingScreenCursor_Gfx: @ 0x08564EF8
	.incbin "build/graphics/naming_screen/cursor.4bpp"

	.globl gNamingScreenCursorSquished_Gfx
gNamingScreenCursorSquished_Gfx: @ 0x08564F78
	.incbin "build/graphics/naming_screen/cursor_squished.4bpp"

	.globl gNamingScreenCursorFilled_Gfx
gNamingScreenCursorFilled_Gfx: @ 0x08564FF8
	.incbin "build/graphics/naming_screen/cursor_filled.4bpp"

	@ One unused 4bpp tile between the cursor graphics and PC icon frames.
	.space 0x20, 0

sPCIconOff_Gfx: @ 0x08565098
	.incbin "build/graphics/naming_screen/pc_icon_off.4bpp"

sPCIconOn_Gfx: @ 0x08565158
	.incbin "build/graphics/naming_screen/pc_icon_on.4bpp"

	.if (. - sWirelessOptions_NoRecordMixBerryCrush) != 0xB8C
	.error "naming-screen pre-palette range size mismatch"
	.endif

	@ Naming-screen keyboard palette.
	.globl sKeyboard_Pal
sKeyboard_Pal: @ 0x08565218
	.incbin "build/graphics/naming_screen/keyboard_palette.gbapal"

	@ Unused FRLG rival palette retained by Emerald.
sRival_Pal: @ 0x08565238
	.incbin "build/graphics/naming_screen/rival_palette.gbapal"

	@ Six 16-color palettes used by naming-screen sprites/background UI.
	.globl gNamingScreenMenu_Pal
gNamingScreenMenu_Pal: @ 0x08565258
	.incbin "build/graphics/naming_screen/menu_palettes.gbapal"

	@ Shared naming-screen BG tile graphics, decompressed size 0x600.
	.globl gNamingScreenMenu_Gfx
gNamingScreenMenu_Gfx: @ 0x08565318
	.incbin "build/graphics/naming_screen/menu.4bpp.lz"

	@ Original ROM slot padding after the 0x1D5-byte LZ77 stream.
	.space 0x37, 0

	.if (. - sKeyboard_Pal) != 0x30C
	.error "naming-screen palette/menu gfx range size mismatch"
	.endif

	@ Naming-screen 32x20 background tilemap.
	.globl gNamingScreenBackground_Tilemap
gNamingScreenBackground_Tilemap: @ 0x08565524
	.incbin "build/graphics/naming_screen/background.bin.lz"

	@ Naming-screen 32x20 uppercase keyboard tilemap.
	.globl gNamingScreenKeyboardUpper_Tilemap
gNamingScreenKeyboardUpper_Tilemap: @ 0x08565600
	.incbin "build/graphics/naming_screen/keyboard_upper.bin.lz"

	@ Naming-screen 32x20 lowercase keyboard tilemap.
	.globl gNamingScreenKeyboardLower_Tilemap
gNamingScreenKeyboardLower_Tilemap: @ 0x085656C8
	.incbin "build/graphics/naming_screen/keyboard_lower.bin.lz"

	@ Naming-screen 32x20 symbols keyboard tilemap.
	.globl gNamingScreenKeyboardSymbols_Tilemap
gNamingScreenKeyboardSymbols_Tilemap: @ 0x08565790
	.incbin "build/graphics/naming_screen/keyboard_symbols.bin.lz"

	.if (. - gNamingScreenBackground_Tilemap) != 0x334
	.error "naming-screen tilemap ROM slot range size mismatch"
	.endif

	.globl gCreditsPointerTable_Rom_565858
gCreditsPointerTable_Rom_565858: @ 0x08565858
	.4byte gText_Rom_243E08
	.4byte gText_Rom_243E2A
	.4byte gText_Rom_243E4C
	.4byte gText_Rom_243E80
