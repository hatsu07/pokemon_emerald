	@ data/maps/SootopolisCity_House2/scripts.inc:27 SootopolisCity_House2_Text_OughtToVisitAndSee
	.globl gText_Rom_20F45E
gText_Rom_20F45E: @ 0x0820F45E
	.string "そうですか……\nいちど いかれては どうでしょう……$"
	.if (. - gText_Rom_20F45E) > 0x1b
	.error "gText_Rom_20F45E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F45E) < 0x1b
	.space 0x1b - (. - gText_Rom_20F45E)
	.endif
	@ analyzed canonical ROM range 0x0820F479-0x0820F4AB
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0820F479: @ 0x0820F479
EventScript_0820F479: @ 0x0820F479
	.byte 0x00
EventScript_JP_0820F47A: @ 0x0820F47A
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F4AC @ gText_Rom_20F4AC
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820F499 @ EventScript_JP_0820F499
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F516 @ gText_Rom_20F516
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_0820F499: @ 0x0820F499
EventScript_JP_0820F499: @ 0x0820F499
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F502 @ gText_Rom_20F502
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F4A3: @ 0x0820F4A3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F542 @ gText_Rom_20F542
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
