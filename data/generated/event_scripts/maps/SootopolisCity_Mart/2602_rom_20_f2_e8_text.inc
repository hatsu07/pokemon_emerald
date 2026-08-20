	@ data/maps/SootopolisCity_Mart/scripts.inc:64 SootopolisCity_Mart_Text_DidSomethingAwaken
	.globl gText_Rom_20F2E8
gText_Rom_20F2E8: @ 0x0820F2E8
	.string "この てんき……\nなにかが めざめたのか……?{EOS}"
	.if (. - gText_Rom_20F2E8) > 0x18
	.error "gText_Rom_20F2E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F2E8) < 0x18
	.space 0x18 - (. - gText_Rom_20F2E8)
	.endif
	@ analyzed canonical ROM range 0x0820F300-0x0820F354
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F300: @ 0x0820F300
	.byte 0x00
.globl EventScript_JP_0820F301
EventScript_JP_0820F301: @ 0x0820F301
	lock
	faceplayer
	checkflag 0x0079
	goto_if 0x01, EventScript_JP_0820F338
	loadword 0x00, gText_Rom_20F355
	callstd 0x04
	setorcopyvar 0x8000, 0x013F
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x0079
	loadword 0x00, gText_Rom_20F391
	callstd 0x04
	release
	end
EventScript_0820F338: @ 0x0820F338
EventScript_JP_0820F338: @ 0x0820F338
	loadword 0x00, gText_Rom_20F391
	callstd 0x04
	release
	end
.globl EventScript_JP_0820F342
EventScript_JP_0820F342: @ 0x0820F342
	lock
	faceplayer
	waitse
	playmoncry 0x013D, 0x0000
	loadword 0x00, gText_Rom_20F3B7
	callstd 0x04
	waitmoncry
	release
	end
