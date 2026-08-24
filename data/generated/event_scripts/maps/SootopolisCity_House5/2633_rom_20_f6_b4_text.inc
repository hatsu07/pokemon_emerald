	@ data/maps/SootopolisCity_House5/scripts.inc:12 SootopolisCity_House5_Text_SootopolisMtPyreConnection
	.globl SootopolisCity_House5_Text_SootopolisMtPyreConnection
SootopolisCity_House5_Text_SootopolisMtPyreConnection: @ 0x0820F66A
	.string "この ルネシティと おくりびやまは\nなにかの かんけいが あるらしい……\pむかし いた けんきゅうじょで\nそんなことを ともだちと しらべていたよ{EOS}"
	.if (. - SootopolisCity_House5_Text_SootopolisMtPyreConnection) > 0x4a
	.error "SootopolisCity_House5_Text_SootopolisMtPyreConnection may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House5_Text_SootopolisMtPyreConnection) < 0x4a
	.space 0x4a - (. - SootopolisCity_House5_Text_SootopolisMtPyreConnection)
	.endif
	@ data/maps/SootopolisCity_House5/scripts.inc:15 SootopolisCity_House5_Text_BrotherUsedToStudySea
	.globl SootopolisCity_House5_Text_BrotherUsedToStudySea
SootopolisCity_House5_Text_BrotherUsedToStudySea: @ 0x0820F6B4
	.string "おにいちゃん\nむかし うみの けんきゅうを してたんだ{EOS}"
	.if (. - SootopolisCity_House5_Text_BrotherUsedToStudySea) > 0x1c
	.error "SootopolisCity_House5_Text_BrotherUsedToStudySea may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House5_Text_BrotherUsedToStudySea) < 0x1c
	.space 0x1c - (. - SootopolisCity_House5_Text_BrotherUsedToStudySea)
	.endif
	@ analyzed canonical ROM range 0x0820F6D0-0x0820F737
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F6D0: @ 0x0820F6D0
	.byte 0x00
.globl EventScript_JP_0820F6D1
EventScript_JP_0820F6D1: @ 0x0820F6D1
	lock
	faceplayer
	checkflag 0x00F5
	goto_if 0x01, EventScript_JP_0820F718
	loadword 0x00, SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0820F70E
	loadword 0x00, SootopolisCity_House6_Text_TakeGoodCareOfIt
	callstd 0x04
	setorcopyvar 0x8000, 0x0075
	callstd 0x07
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820F722
	setflag 0x00F5
	release
	end
EventScript_0820F70E: @ 0x0820F70E
EventScript_JP_0820F70E: @ 0x0820F70E
	loadword 0x00, SootopolisCity_House6_Text_DontWantThisDoll
	callstd 0x04
	release
	end
EventScript_0820F718: @ 0x0820F718
EventScript_JP_0820F718: @ 0x0820F718
	loadword 0x00, SootopolisCity_House6_Text_LovePlushDolls
	callstd 0x04
	release
	end
EventScript_0820F722: @ 0x0820F722
EventScript_JP_0820F722: @ 0x0820F722
	bufferdecorationname 0x01, 0x0075
	loadword 0x00, gText_NoRoomLeftForAnother
	callstd 0x04
	loadword 0x00, SootopolisCity_House6_Text_IllHoldItForYou
	callstd 0x04
	release
	end
