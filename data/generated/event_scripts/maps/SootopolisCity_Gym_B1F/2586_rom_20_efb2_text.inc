	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:141 SootopolisCity_Gym_B1F_Text_BriannaPostBattle
	.globl gText_Rom_20EFB2
gText_Rom_20EFB2: @ 0x0820EFB2
	.string "あなたでは アダンさまには\nきっと はが たちませんわよ うふふ……{EOS}"
	.if (. - gText_Rom_20EFB2) > 0x23
	.error "gText_Rom_20EFB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EFB2) < 0x23
	.space 0x23 - (. - gText_Rom_20EFB2)
	.endif
	@ analyzed canonical ROM range 0x0820EFD5-0x0820F045
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0820EFD5: @ 0x0820EFD5
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820EFE0
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_0820EFE0: @ 0x0820EFE0
	setrespawn 0x000A
	end
.globl EventScript_JP_0820EFE4
EventScript_JP_0820EFE4: @ 0x0820EFE4
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_0820EFF2
EventScript_JP_0820EFF2: @ 0x0820EFF2
	lock
	faceplayer
	compare_var_to_value 0x40CA, 0x0002
	goto_if 0x04, EventScript_JP_0820F012
	checkflag 0x0081
	goto_if 0x00, EventScript_JP_0820F012
	loadword 0x00, gText_Rom_20F0D5
	callstd 0x04
	release
	end
EventScript_JP_0820F012: @ 0x0820F012
	loadword 0x00, gText_Rom_20F046
	callstd 0x04
	release
	end
.globl EventScript_JP_0820F01C
EventScript_JP_0820F01C: @ 0x0820F01C
	lock
	faceplayer
	compare_var_to_value 0x40CA, 0x0002
	goto_if 0x04, EventScript_JP_0820F03C
	checkflag 0x0081
	goto_if 0x00, EventScript_JP_0820F03C
	loadword 0x00, gText_Rom_20F15E
	callstd 0x04
	release
	end
EventScript_JP_0820F03C: @ 0x0820F03C
	loadword 0x00, gText_Rom_20F117
	callstd 0x04
	release
	end
