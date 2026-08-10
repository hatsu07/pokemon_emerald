	@ data/maps/SootopolisCity_House5/scripts.inc:15 SootopolisCity_House5_Text_BrotherUsedToStudySea
	.globl gText_Rom_20F6B4
gText_Rom_20F6B4: @ 0x0820F6B4
	.string "おにいちゃん\nむかし うみの けんきゅうを してたんだ$"
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
EventScript_JP_0820F6D1: @ 0x0820F6D1
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00F5
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820F718 @ EventScript_JP_0820F718
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F738 @ gText_Rom_20F738
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820F70E @ EventScript_JP_0820F70E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F76C @ gText_Rom_20F76C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0075
	@ event command: callstd
	.byte 0x09
	.byte 0x07
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820F722 @ EventScript_JP_0820F722
	@ event command: setflag
	.byte 0x29
	.2byte 0x00F5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_0820F70E: @ 0x0820F70E
EventScript_JP_0820F70E: @ 0x0820F70E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F796 @ gText_Rom_20F796
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_0820F718: @ 0x0820F718
EventScript_JP_0820F718: @ 0x0820F718
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F7AA @ gText_Rom_20F7AA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_0820F722: @ 0x0820F722
EventScript_JP_0820F722: @ 0x0820F722
	@ event command: bufferdecorationname
	.byte 0x81
	.byte 0x01
	.2byte 0x0075
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082439A8 @ gText_Rom_2439A8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F776 @ gText_Rom_20F776
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
