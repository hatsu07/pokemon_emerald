	@ data/maps/SootopolisCity_House5/scripts.inc:12 SootopolisCity_House5_Text_SootopolisMtPyreConnection
	.globl gText_Rom_20F66A
gText_Rom_20F66A: @ 0x0820F66A
	.string "この ルネシティと おくりびやまは\nなにかの かんけいが あるらしい……\pむかし いた けんきゅうじょで\nそんなことを ともだちと しらべていたよ{EOS}"
	.if (. - gText_Rom_20F66A) > 0x4a
	.error "gText_Rom_20F66A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F66A) < 0x4a
	.space 0x4a - (. - gText_Rom_20F66A)
	.endif
	@ data/maps/SootopolisCity_House5/scripts.inc:15 SootopolisCity_House5_Text_BrotherUsedToStudySea
	.globl gText_Rom_20F6B4
gText_Rom_20F6B4: @ 0x0820F6B4
	.string "おにいちゃん\nむかし うみの けんきゅうを してたんだ{EOS}"
	.if (. - gText_Rom_20F6B4) > 0x1c
	.error "gText_Rom_20F6B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F6B4) < 0x1c
	.space 0x1c - (. - gText_Rom_20F6B4)
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
	loadword 0x00, gText_Rom_20F738
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0820F70E
	loadword 0x00, gText_Rom_20F76C
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
	loadword 0x00, gText_Rom_20F796
	callstd 0x04
	release
	end
EventScript_0820F718: @ 0x0820F718
EventScript_JP_0820F718: @ 0x0820F718
	loadword 0x00, gText_Rom_20F7AA
	callstd 0x04
	release
	end
EventScript_0820F722: @ 0x0820F722
EventScript_JP_0820F722: @ 0x0820F722
	bufferdecorationname 0x01, 0x0075
	loadword 0x00, gText_NoRoomLeftForAnother
	callstd 0x04
	loadword 0x00, gText_Rom_20F776
	callstd 0x04
	release
	end
