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
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0820F300: @ 0x0820F300
EventScript_0820F300: @ 0x0820F300
	.byte 0x00
EventScript_JP_0820F301: @ 0x0820F301
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0079
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820F338 @ EventScript_JP_0820F338
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F355 @ gText_Rom_20F355
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x013F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082430E0
	@ event command: setflag
	.byte 0x29
	.2byte 0x0079
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F391 @ gText_Rom_20F391
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_0820F338: @ 0x0820F338
EventScript_JP_0820F338: @ 0x0820F338
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F391 @ gText_Rom_20F391
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F342: @ 0x0820F342
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x013D
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F3B7 @ gText_Rom_20F3B7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
