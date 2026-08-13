	@ data/maps/LilycoveCity_House4/scripts.inc:15 LilycoveCity_House4_Text_UnderwaterTrenchMossdeepSootopolis
	.globl gText_Rom_20A56C
gText_Rom_20A56C: @ 0x0820A56C
	.string "そういや トクサネと ルネの あいだには\nふかい ふかい かいこうが ある\p……そんな はなしも\nだれかが いってた ことなんだけど$"
	.if (. - gText_Rom_20A56C) > 0x43
	.error "gText_Rom_20A56C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A56C) < 0x43
	.space 0x43 - (. - gText_Rom_20A56C)
	.endif
	@ analyzed canonical ROM range 0x0820A5AF-0x0820A782
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820A5AF: @ 0x0820A5AF
	.byte 0x00
.globl EventScript_JP_0820A5B0
EventScript_JP_0820A5B0: @ 0x0820A5B0
	loadword 0x00, gText_Rom_20A783
	callstd 0x02
	end
.globl EventScript_JP_0820A5B9
EventScript_JP_0820A5B9: @ 0x0820A5B9
	lock
	faceplayer
	dotimebasedevents
	compare_var_to_value 0x4045, 0x0000
	goto_if 0x05, EventScript_JP_0820A714
	checkflag 0x092A
	goto_if 0x01, EventScript_JP_0820A6AA
	loadword 0x00, gText_Rom_263199
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820A6B4
	setflag 0x092A
	message gText_Rom_26325B
	waitmessage
	@ event command: special
	.byte 0x25
	.2byte 0x0101
	copyvar 0x8008, 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x0150
	loadword 0x00, gText_Rom_263293
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	playse 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00D9
	@ event command: special
	.byte 0x25
	.2byte 0x0102
	delay 0x00DC
	@ event command: special
	.byte 0x25
	.2byte 0x00DA
	delay 0x000A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	compare_var_to_value 0x8004, 0x0000
	goto_if 0x01, EventScript_JP_0820A6BE
	incrementgamestat 0x2E
	compare_var_to_value 0x8006, 0x0000
	call_if 0x01, EventScript_JP_0820A698
	compare_var_to_value 0x8006, 0x0001
	call_if 0x01, EventScript_JP_0820A6A1
	bufferitemname 0x00, 0x8005
	compare_var_to_value 0x8004, 0x0001
	call_if 0x01, EventScript_JP_0820A6D6
	compare_var_to_value 0x8004, 0x0002
	call_if 0x01, EventScript_JP_0820A6DF
	compare_var_to_value 0x8004, 0x0003
	call_if 0x01, EventScript_JP_0820A6E8
	compare_var_to_value 0x8004, 0x0004
	call_if 0x01, EventScript_JP_0820A6F1
	setorcopyvar 0x8000, 0x8005
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820A6FA
	@ event command: special
	.byte 0x25
	.2byte 0x0156
	goto EventScript_JP_0820A6CC
	.byte 0x02
EventScript_JP_0820A698: @ 0x0820A698
	loadword 0x00, gText_Rom_2632DD
	callstd 0x04
	return
EventScript_JP_0820A6A1: @ 0x0820A6A1
	loadword 0x00, gText_Rom_263319
	callstd 0x04
	return
EventScript_JP_0820A6AA: @ 0x0820A6AA
	loadword 0x00, gText_Rom_263236
	callstd 0x04
	release
	end
EventScript_JP_0820A6B4: @ 0x0820A6B4
	loadword 0x00, gText_Rom_26324A
	callstd 0x04
	release
	end
EventScript_JP_0820A6BE: @ 0x0820A6BE
	loadword 0x00, gText_Rom_263357
	callstd 0x04
	goto EventScript_JP_0820A6CC
	.byte 0x02
EventScript_JP_0820A6CC: @ 0x0820A6CC
	loadword 0x00, gText_Rom_263465
	callstd 0x04
	release
	end
EventScript_JP_0820A6D6: @ 0x0820A6D6
	loadword 0x00, gText_Rom_26336D
	callstd 0x04
	return
EventScript_JP_0820A6DF: @ 0x0820A6DF
	loadword 0x00, gText_Rom_263391
	callstd 0x04
	return
EventScript_JP_0820A6E8: @ 0x0820A6E8
	loadword 0x00, gText_Rom_2633B5
	callstd 0x04
	return
EventScript_JP_0820A6F1: @ 0x0820A6F1
	loadword 0x00, gText_Rom_2633D9
	callstd 0x04
	return
EventScript_JP_0820A6FA: @ 0x0820A6FA
	copyvar 0x404D, 0x8004
	copyvar 0x4045, 0x8005
	goto EventScript_JP_0820A70A
	.byte 0x02
EventScript_JP_0820A70A: @ 0x0820A70A
	loadword 0x00, gText_Rom_263406
	callstd 0x04
	release
	end
EventScript_JP_0820A714: @ 0x0820A714
	loadword 0x00, gText_Rom_26343A
	callstd 0x04
	setorcopyvar 0x8000, 0x4045
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820A70A
	copyvar 0x8004, 0x404D
	copyvar 0x8005, 0x4045
	@ event command: special
	.byte 0x25
	.2byte 0x0156
	setvar 0x4045, 0x0000
	setvar 0x404D, 0x0000
	release
	end
.globl EventScript_JP_0820A74C
EventScript_JP_0820A74C: @ 0x0820A74C
	loadword 0x00, gText_Rom_20A799
	callstd 0x02
	end
.globl EventScript_JP_0820A755
EventScript_JP_0820A755: @ 0x0820A755
	loadword 0x00, gText_Rom_20A7BC
	callstd 0x02
	end
.globl EventScript_JP_0820A75E
EventScript_JP_0820A75E: @ 0x0820A75E
	loadword 0x00, gText_Rom_20A7DA
	callstd 0x02
	end
.globl EventScript_JP_0820A767
EventScript_JP_0820A767: @ 0x0820A767
	lock
	faceplayer
	waitse
	playmoncry 0x00B8, 0x0000
	loadword 0x00, gText_Rom_20A805
	callstd 0x04
	waitmoncry
	release
	end
.globl EventScript_JP_0820A77A
EventScript_JP_0820A77A: @ 0x0820A77A
	loadword 0x00, gText_Rom_20A812
	callstd 0x03
	end
