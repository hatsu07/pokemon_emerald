	@ data/maps/SootopolisCity_House7/scripts.inc:12 SootopolisCity_House7_Text_CityFromEruptedVolcano
	.globl SootopolisCity_House7_Text_CityFromEruptedVolcano
SootopolisCity_House7_Text_CityFromEruptedVolcano: @ 0x0820F7CD
	.string "かいていに あった かざんが ふんかして\nうみの うえまで もりあがる\pそして ふんかこうに あめが たまって\nできたのが この ルネシティ なんだよ{EOS}"
	.if (. - SootopolisCity_House7_Text_CityFromEruptedVolcano) > 0x4c
	.error "SootopolisCity_House7_Text_CityFromEruptedVolcano may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House7_Text_CityFromEruptedVolcano) < 0x4c
	.space 0x4c - (. - SootopolisCity_House7_Text_CityFromEruptedVolcano)
	.endif
	@ data/maps/SootopolisCity_House7/scripts.inc:15 SootopolisCity_House7_Text_CaveMadeToKeepSomething
	.globl SootopolisCity_House7_Text_CaveMadeToKeepSomething
SootopolisCity_House7_Text_CaveMadeToKeepSomething: @ 0x0820F819
	.string "ルネと そとのせかいを つなぐ どうくつ\pまるで なにかを ここから ださないように\nつくられた みたい だわ……\p……かんがえすぎ かしら?{EOS}"
	.if (. - SootopolisCity_House7_Text_CaveMadeToKeepSomething) > 0x48
	.error "SootopolisCity_House7_Text_CaveMadeToKeepSomething may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House7_Text_CaveMadeToKeepSomething) < 0x48
	.space 0x48 - (. - SootopolisCity_House7_Text_CaveMadeToKeepSomething)
	.endif
	@ analyzed canonical ROM range 0x0820F861-0x0820F99F
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
.globl EventScript_JP_0820F862
EventScript_JP_0820F862: @ 0x0820F862
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special GetSeedotSizeRecordInfo
	lock
	faceplayer
	loadword 0x00, SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot
	callstd 0x04
	@ event command: special
	special ChoosePartyMon
	waitstate
	copyvar 0x800D, 0x8004
	compare_var_to_value 0x800D, 0x00FF
	goto_if 0x01, EventScript_JP_0820F8A9
	@ event command: special
	special CompareSeedotSize
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820F8B3
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_0820F8BD
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, EventScript_JP_0820F8C7
	release
	end
EventScript_JP_0820F8A9: @ 0x0820F8A9
	loadword 0x00, SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot
	callstd 0x04
	release
	end
EventScript_JP_0820F8B3: @ 0x0820F8B3
	loadword 0x00, SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot
	callstd 0x04
	release
	end
EventScript_JP_0820F8BD: @ 0x0820F8BD
	loadword 0x00, SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot
	callstd 0x04
	release
	end
EventScript_JP_0820F8C7: @ 0x0820F8C7
	loadword 0x00, SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad
	callstd 0x04
	setorcopyvar 0x8000, 0x0024
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820F8E9
	closemessage
	release
	end
EventScript_JP_0820F8E9: @ 0x0820F8E9
	loadword 0x00, SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1_Copy_Rom_20FAB4
	callstd 0x04
	release
	end
.globl EventScript_JP_0820F8F3
EventScript_JP_0820F8F3: @ 0x0820F8F3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special GetLotadSizeRecordInfo
	lock
	faceplayer
	loadword 0x00, SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad
	callstd 0x04
	@ event command: special
	special ChoosePartyMon
	waitstate
	copyvar 0x800D, 0x8004
	compare_var_to_value 0x800D, 0x00FF
	goto_if 0x01, EventScript_JP_0820F93A
	@ event command: special
	special CompareLotadSize
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820F944
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_0820F94E
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, EventScript_JP_0820F958
	release
	end
EventScript_JP_0820F93A: @ 0x0820F93A
	loadword 0x00, SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad
	callstd 0x04
	release
	end
EventScript_JP_0820F944: @ 0x0820F944
	loadword 0x00, SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad
	callstd 0x04
	release
	end
EventScript_JP_0820F94E: @ 0x0820F94E
	loadword 0x00, SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad
	callstd 0x04
	release
	end
EventScript_JP_0820F958: @ 0x0820F958
	loadword 0x00, SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot
	callstd 0x04
	setorcopyvar 0x8000, 0x0024
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820F97A
	closemessage
	release
	end
EventScript_JP_0820F97A: @ 0x0820F97A
	loadword 0x00, SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1_Copy_Rom_20FC93
	callstd 0x04
	release
	end
.globl EventScript_JP_0820F984
EventScript_JP_0820F984: @ 0x0820F984
	@ event command: special
	special GetSeedotSizeRecordInfo
	lockall
	loadword 0x00, SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_0820F992
EventScript_JP_0820F992: @ 0x0820F992
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special GetLotadSizeRecordInfo
	lockall
	loadword 0x00, SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory
	callstd 0x04
	releaseall
	end
