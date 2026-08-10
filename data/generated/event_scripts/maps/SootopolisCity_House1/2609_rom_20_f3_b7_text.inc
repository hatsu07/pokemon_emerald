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
sAnalyzedEventData_0820F3C6: @ 0x0820F3C6
EventScript_0820F3C6: @ 0x0820F3C6
	.byte 0x00
EventScript_JP_0820F3C7: @ 0x0820F3C7
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F3FB @ gText_Rom_20F3FB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820F3E9 @ EventScript_JP_0820F3E9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820F3F2 @ EventScript_JP_0820F3F2
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_0820F3E9: @ 0x0820F3E9
EventScript_JP_0820F3E9: @ 0x0820F3E9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F42A @ gText_Rom_20F42A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_0820F3F2: @ 0x0820F3F2
EventScript_JP_0820F3F2: @ 0x0820F3F2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F45E @ gText_Rom_20F45E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
