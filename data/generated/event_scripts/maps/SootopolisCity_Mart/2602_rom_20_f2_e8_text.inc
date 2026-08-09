	@ data/maps/SootopolisCity_Mart/scripts.inc:64 SootopolisCity_Mart_Text_DidSomethingAwaken
	.globl gText_Rom_20F2E8
gText_Rom_20F2E8: @ 0x0820F2E8
	.string "この てんき……\nなにかが めざめたのか……?$"
	.if (. - gText_Rom_20F2E8) > 0x18
	.error "gText_Rom_20F2E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F2E8) < 0x18
	.space 0x18 - (. - gText_Rom_20F2E8)
	.endif
	@ analyzed canonical ROM range 0x0820F300-0x0820F354
sAnalyzedEventData_0820F300: @ 0x0820F300
EventScript_0820F300: @ 0x0820F300
	nop
	lock
	faceplayer
	checkflag 0x0079
	goto_if 0x01, EventScript_0820F338
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
	loadword 0x00, gText_Rom_20F391
	callstd 0x04
	release
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x6A, 0x5A, 0x30, 0xA1, 0x3D, 0x01, 0x00, 0x00, 0x0F, 0x00, 0xB7, 0xF3, 0x20, 0x08, 0x09, 0x04
	.byte 0xC5, 0x6C, 0x02
