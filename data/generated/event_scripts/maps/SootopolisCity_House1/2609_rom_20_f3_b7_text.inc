	@ data/maps/SootopolisCity_House1/scripts.inc:37 SootopolisCity_House1_Text_Kecleon
	.globl gText_Rom_20F3B7
gText_Rom_20F3B7: @ 0x0820F3B7
	.string "カクレオン『ぷー ぷひゃあー$"
	.if (. - gText_Rom_20F3B7) > 0xf
	.error "gText_Rom_20F3B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F3B7) < 0xf
	.space 0xf - (. - gText_Rom_20F3B7)
	.endif
	@ analyzed canonical ROM range 0x0820F3C6-0x0820F3FA
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F3C6: @ 0x0820F3C6
	.byte 0x00
EventScript_JP_0820F3C7: @ 0x0820F3C7
	lock
	faceplayer
	loadword 0x00, gText_Rom_20F3FB
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_0820F3E9
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0820F3F2
	release
	end
EventScript_0820F3E9: @ 0x0820F3E9
EventScript_JP_0820F3E9: @ 0x0820F3E9
	loadword 0x00, gText_Rom_20F42A
	callstd 0x04
	return
EventScript_0820F3F2: @ 0x0820F3F2
EventScript_JP_0820F3F2: @ 0x0820F3F2
	loadword 0x00, gText_Rom_20F45E
	callstd 0x04
	return
