	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:141 SootopolisCity_Gym_B1F_Text_BriannaPostBattle
	.globl gText_Rom_20EFB2
gText_Rom_20EFB2: @ 0x0820EFB2
	.string "あなたでは アダンさまには\nきっと はが たちませんわよ うふふ……$"
	.if (. - gText_Rom_20EFB2) > 0x23
	.error "gText_Rom_20EFB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EFB2) < 0x23
	.space 0x23 - (. - gText_Rom_20EFB2)
	.endif
	@ analyzed canonical ROM range 0x0820EFD5-0x0820F045
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0820EFD5: @ 0x0820EFD5
MapScripts_JP_0820EFD5: @ 0x0820EFD5
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820EFE0
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_0820EFE0: @ 0x0820EFE0
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x000A
	@ event command: end
	.byte 0x02
EventScript_JP_0820EFE4: @ 0x0820EFE4
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082429B8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820EFF2: @ 0x0820EFF2
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CA
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x0820F012 @ EventScript_JP_0820F012
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0081
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820F012 @ EventScript_JP_0820F012
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F0D5 @ gText_Rom_20F0D5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F012: @ 0x0820F012
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F046 @ gText_Rom_20F046
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F01C: @ 0x0820F01C
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CA
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x0820F03C @ EventScript_JP_0820F03C
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0081
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820F03C @ EventScript_JP_0820F03C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F15E @ gText_Rom_20F15E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F03C: @ 0x0820F03C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F117 @ gText_Rom_20F117
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
