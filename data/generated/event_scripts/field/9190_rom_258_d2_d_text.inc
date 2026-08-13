	@ field-script:0x25915A FieldScriptText_258D2D
	.globl gText_Rom_258D2D
gText_Rom_258D2D: @ 0x08258D2D
	.string "あれ？\nきのみを　もってないの？\pおじさんの　あまりが　あれば\nあげるん　だけど…\pきょうは　もう　あまって\nないんだ　すまんな"
	.byte EOS
	.if (. - gText_Rom_258D2D) > 0x41
	.error "gText_Rom_258D2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258D2D) < 0x41
	.space 0x41 - (. - gText_Rom_258D2D)
	.endif
	@ analyzed canonical ROM range 0x08258D6E-0x082593C4
	@ semantic recovery: script_data; byte-verified against linked ROM
.globl EventScript_JP_08258D6E
EventScript_JP_08258D6E: @ 0x08258D6E
	lockall
	checkflag 0x0340
	goto_if 0x00, EventScript_JP_0825902B
	setvar 0x8009, 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0010
	.4byte 0x08259183 @ Movement_JP_08259183
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_2585D8
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08258E1E
	goto EventScript_JP_08258DA0
	.byte 0x02
EventScript_JP_08258DA0: @ 0x08258DA0
	loadword 0x00, gText_Rom_2585FC
	callstd 0x04
	releaseall
	end
EventScript_JP_08258DAA: @ 0x08258DAA
	loadword 0x00, gText_Rom_2586A2
	callstd 0x04
	dotimebasedevents
	checkflag 0x0921
	goto_if 0x01, EventScript_JP_08258DC2
	goto EventScript_JP_08258DCC
	.byte 0x02
EventScript_JP_08258DC2: @ 0x08258DC2
	loadword 0x00, gText_Rom_258718
	callstd 0x04
	releaseall
	end
EventScript_JP_08258DCC: @ 0x08258DCC
	loadword 0x00, gText_Rom_2586D2
	callstd 0x04
	setorcopyvar 0x8000, 0x0087
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x0921
	goto EventScript_JP_08258DE9
	.byte 0x02
EventScript_JP_08258DE9: @ 0x08258DE9
	loadword 0x00, gText_Rom_25860C
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08258E02
	goto EventScript_JP_08258E10
	.byte 0x02
EventScript_JP_08258E02: @ 0x08258E02
	loadword 0x00, gText_Rom_258628
	callstd 0x04
	goto EventScript_JP_08258E5C
	.byte 0x02
EventScript_JP_08258E10: @ 0x08258E10
	loadword 0x00, gText_Rom_258642
	callstd 0x04
	goto EventScript_JP_08258E02
	.byte 0x02
EventScript_JP_08258E1E: @ 0x08258E1E
	checkitem 0x0111, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08258E73
	specialvar_ 0x800D, 0x00A0
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x01, EventScript_JP_08258E69
	specialvar_ 0x800D, 0x0031
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08258DAA
	loadword 0x00, gText_Rom_2585F7
	callstd 0x04
	goto EventScript_JP_08258DE9
	.byte 0x02
EventScript_JP_08258E5C: @ 0x08258E5C
	copyvar 0x8004, 0x8009
	fadescreen 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x00A1
	waitstate
	releaseall
	end
EventScript_JP_08258E69: @ 0x08258E69
	loadword 0x00, gText_Rom_258754
	callstd 0x04
	releaseall
	end
EventScript_JP_08258E73: @ 0x08258E73
	loadword 0x00, gText_Rom_25877F
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_08258E7D
EventScript_JP_08258E7D: @ 0x08258E7D
	lockall
	setvar 0x8009, 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x08259183 @ Movement_JP_08259183
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_2587D8
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08258EF6
	goto EventScript_JP_08258EAD
	.byte 0x02
EventScript_JP_08258EAD: @ 0x08258EAD
	loadword 0x00, gText_Rom_258804
	callstd 0x04
	releaseall
	end
EventScript_JP_08258EB7: @ 0x08258EB7
	loadword 0x00, gText_Rom_2588BD
	callstd 0x04
	release
	end
EventScript_JP_08258EC1: @ 0x08258EC1
	loadword 0x00, gText_Rom_25882D
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08258EDA
	goto EventScript_JP_08258EE8
	.byte 0x02
EventScript_JP_08258EDA: @ 0x08258EDA
	loadword 0x00, gText_Rom_258848
	callstd 0x04
	goto EventScript_JP_08258E5C
	.byte 0x02
EventScript_JP_08258EE8: @ 0x08258EE8
	loadword 0x00, gText_Rom_258868
	callstd 0x04
	goto EventScript_JP_08258EDA
	.byte 0x02
EventScript_JP_08258EF6: @ 0x08258EF6
	specialvar_ 0x800D, 0x0031
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08258EB7
	checkitem 0x0111, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08258F44
	loadword 0x00, gText_Rom_2587FE
	callstd 0x04
	specialvar_ 0x800D, 0x00A0
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x05, EventScript_JP_08258EC1
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x01, EventScript_JP_08258F3A
	end
EventScript_JP_08258F3A: @ 0x08258F3A
	loadword 0x00, gText_Rom_258921
	callstd 0x04
	releaseall
	end
EventScript_JP_08258F44: @ 0x08258F44
	loadword 0x00, gText_Rom_258953
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_08258F4E
EventScript_JP_08258F4E: @ 0x08258F4E
	lockall
	setvar 0x8008, 0x000F
	setvar 0x8009, 0x0003
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0011
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8008
	.4byte 0x08259183 @ Movement_JP_08259183
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_258B45
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08258FD3
	goto EventScript_JP_08258F8A
	.byte 0x02
EventScript_JP_08258F8A: @ 0x08258F8A
	loadword 0x00, gText_Rom_2589BA
	callstd 0x04
	releaseall
	end
EventScript_JP_08258F94: @ 0x08258F94
	loadword 0x00, gText_Rom_258A72
	callstd 0x04
	release
	end
EventScript_JP_08258F9E: @ 0x08258F9E
	loadword 0x00, gText_Rom_2589D4
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08258FB7
	goto EventScript_JP_08258FC5
	.byte 0x02
EventScript_JP_08258FB7: @ 0x08258FB7
	loadword 0x00, gText_Rom_2589F3
	callstd 0x04
	goto EventScript_JP_08258E5C
	.byte 0x02
EventScript_JP_08258FC5: @ 0x08258FC5
	loadword 0x00, gText_Rom_258A13
	callstd 0x04
	goto EventScript_JP_08258FB7
	.byte 0x02
EventScript_JP_08258FD3: @ 0x08258FD3
	specialvar_ 0x800D, 0x0031
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08258F94
	checkitem 0x0111, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08259021
	loadword 0x00, gText_Rom_2589B4
	callstd 0x04
	specialvar_ 0x800D, 0x00A0
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x05, EventScript_JP_08258F9E
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x01, EventScript_JP_08259017
	end
EventScript_JP_08259017: @ 0x08259017
	loadword 0x00, gText_Rom_258AD0
	callstd 0x04
	releaseall
	end
EventScript_JP_08259021: @ 0x08259021
	loadword 0x00, gText_Rom_258AF7
	callstd 0x04
	releaseall
	end
EventScript_JP_0825902B: @ 0x0825902B
	lockall
	setvar 0x8009, 0x0001
	loadword 0x00, gText_Rom_27473E
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08259058
	loadword 0x00, gText_Rom_274763
	callstd 0x04
	releaseall
	end
EventScript_JP_0825904E: @ 0x0825904E
	loadword 0x00, gText_Rom_2747AD
	callstd 0x04
	releaseall
	end
EventScript_JP_08259058: @ 0x08259058
	checkitem 0x0111, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082590BE
	specialvar_ 0x800D, 0x0031
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0825904E
	specialvar_ 0x800D, 0x00A0
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x05, EventScript_JP_08259094
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x01, EventScript_JP_082590C8
	end
EventScript_JP_08259094: @ 0x08259094
	loadword 0x00, gText_Rom_2747F1
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082590B5
	loadword 0x00, gText_Rom_274891
	callstd 0x04
	goto EventScript_JP_08258E5C
	.byte 0x02
EventScript_JP_082590B5: @ 0x082590B5
	loadword 0x00, gText_Rom_27482B
	callstd 0x04
	return
EventScript_JP_082590BE: @ 0x082590BE
	loadword 0x00, gText_Rom_2748BA
	callstd 0x04
	releaseall
	end
EventScript_JP_082590C8: @ 0x082590C8
	loadword 0x00, gText_Rom_27490E
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_082590D2
EventScript_JP_082590D2: @ 0x082590D2
	loadword 0x00, gText_Rom_258B24
	callstd 0x02
	end
.globl EventScript_JP_082590DB
EventScript_JP_082590DB: @ 0x082590DB
	loadword 0x00, gText_Rom_258B45
	callstd 0x02
	end
.globl EventScript_JP_082590E4
EventScript_JP_082590E4: @ 0x082590E4
	loadword 0x00, gText_Rom_258B67
	callstd 0x02
	end
.globl EventScript_JP_082590ED
EventScript_JP_082590ED: @ 0x082590ED
	setvar 0x8008, 0x000F
	goto EventScript_JP_082590F8
	.byte 0x02
EventScript_JP_082590F8: @ 0x082590F8
	lock
	faceplayer
	loadword 0x00, gText_Rom_258C88
	callstd 0x04
	specialvar_ 0x800D, 0x0031
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0825911E
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08259128
	end
EventScript_JP_0825911E: @ 0x0825911E
	loadword 0x00, gText_Rom_258CB1
	callstd 0x04
	release
	end
EventScript_JP_08259128: @ 0x08259128
	checkitem 0x0111, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08259158
	specialvar_ 0x800D, 0x00A0
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x01, EventScript_JP_08259158
	dotimebasedevents
	checkflag 0x0921
	goto_if 0x01, EventScript_JP_08259158
	goto EventScript_JP_08259162
	.byte 0x02
EventScript_JP_08259158: @ 0x08259158
	loadword 0x00, gText_Rom_258D2D
	callstd 0x04
	release
	end
EventScript_JP_08259162: @ 0x08259162
	loadword 0x00, gText_Rom_258CD6
	callstd 0x04
	setorcopyvar 0x8000, 0x0087
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x0921
	loadword 0x00, gText_Rom_258D0D
	callstd 0x04
	release
	end
Movement_JP_08259183: @ 0x08259183
	@ object movement sequence
	walk_in_place_fastest_right
	step_end
.globl EventScript_JP_08259185
EventScript_JP_08259185: @ 0x08259185
	lockall
	specialvar_ 0x800D, 0x0031
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082591E1
	checkitem 0x0111, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0825929C
	specialvar_ 0x800D, 0x00A0
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x05, EventScript_JP_082591C2
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x01, EventScript_JP_08259292
	end
EventScript_JP_082591C2: @ 0x082591C2
	loadword 0x00, gText_Rom_258B94
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082591EB
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08259290
	end
EventScript_JP_082591E1: @ 0x082591E1
	loadword 0x00, gText_Rom_258C2B
	callstd 0x04
	releaseall
	end
EventScript_JP_082591EB: @ 0x082591EB
	call 0x082423E9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08259290
	specialvar_ 0x800D, 0x019C
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0825931D
	message gText_Rom_258BDE
	waitmessage
	@ event command: special
	.byte 0x25
	.2byte 0x0024
	waitstate
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082592DA
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_082592A6
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, EventScript_JP_082592B3
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_082592C0
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScript_JP_082592CD
	end
EventScript_JP_0825924D: @ 0x0825924D
	loadword 0x00, gText_Rom_258BFA
	callstd 0x04
	goto EventScript_JP_08259277
	.byte 0x02
EventScript_JP_0825925B: @ 0x0825925B
	loadword 0x00, gText_Rom_258C05
	callstd 0x04
	goto EventScript_JP_08259277
	.byte 0x02
EventScript_JP_08259269: @ 0x08259269
	loadword 0x00, gText_Rom_258C16
	callstd 0x04
	goto EventScript_JP_08259277
	.byte 0x02
EventScript_JP_08259277: @ 0x08259277
	setvar 0x8004, 0x0000
	fadescreen 0x01
	@ event command: removeobject
	.byte 0x53
	.2byte 0x00F0
	@ event command: removeobject
	.byte 0x53
	.2byte 0x00EF
	@ event command: removeobject
	.byte 0x53
	.2byte 0x00EE
	@ event command: removeobject
	.byte 0x53
	.2byte 0x00ED
	@ event command: special
	.byte 0x25
	.2byte 0x00A1
	waitstate
	releaseall
	end
EventScript_JP_08259290: @ 0x08259290
	releaseall
	end
EventScript_JP_08259292: @ 0x08259292
	loadword 0x00, gText_Rom_258C46
	callstd 0x04
	releaseall
	end
EventScript_JP_0825929C: @ 0x0825929C
	loadword 0x00, gText_Rom_258C69
	callstd 0x04
	releaseall
	end
EventScript_JP_082592A6: @ 0x082592A6
	@ event command: special
	.byte 0x25
	.2byte 0x001F
	loadword 0x00, gText_Rom_247D35
	callstd 0x04
	releaseall
	end
EventScript_JP_082592B3: @ 0x082592B3
	@ event command: special
	.byte 0x25
	.2byte 0x001F
	loadword 0x00, gText_Rom_247D84
	callstd 0x04
	releaseall
	end
EventScript_JP_082592C0: @ 0x082592C0
	@ event command: special
	.byte 0x25
	.2byte 0x001F
	loadword 0x00, gText_Rom_243B25
	callstd 0x04
	releaseall
	end
EventScript_JP_082592CD: @ 0x082592CD
	@ event command: special
	.byte 0x25
	.2byte 0x001F
	loadword 0x00, gText_Rom_247D67
	callstd 0x04
	releaseall
	end
EventScript_JP_082592DA: @ 0x082592DA
	fadescreen 0x01
	specialvar_ 0x800D, 0x0025
	copyvar 0x8008, 0x800D
	copyvar 0x8004, 0x8008
	@ event command: special
	.byte 0x25
	.2byte 0x0026
	goto EventScript_JP_082592F4
	.byte 0x02
EventScript_JP_082592F4: @ 0x082592F4
	fadescreen 0x00
	copyvar 0x8000, 0x8008
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0825924D
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0825925B
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08259269
	end
EventScript_JP_0825931D: @ 0x0825931D
	setvar 0x8004, 0x000D
	goto EventScript_JP_08259328
	.byte 0x02
EventScript_JP_08259328: @ 0x08259328
	message gText_Rom_24A7C2
	waitmessage
	multichoice 0x10, 0x06, 0x51, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0825938D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08259365
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082592C0
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_082592C0
	end
EventScript_JP_08259365: @ 0x08259365
	call EventScript_JP_082593B5
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082593BF
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_08259328
	compare_var_to_value 0x800D, 0x0008
	goto_if 0x01, EventScript_JP_08259365
	release
	end
EventScript_JP_0825938D: @ 0x0825938D
	call EventScript_JP_082593BA
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082593BF
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_08259328
	compare_var_to_value 0x800D, 0x0008
	goto_if 0x01, EventScript_JP_0825938D
	release
	end
EventScript_JP_082593B5: @ 0x082593B5
	@ event command: special
	.byte 0x25
	.2byte 0x019D
	waitstate
	return
EventScript_JP_082593BA: @ 0x082593BA
	@ event command: special
	.byte 0x25
	.2byte 0x019E
	waitstate
	return
EventScript_JP_082593BF: @ 0x082593BF
	goto EventScript_JP_082592DA
	.byte 0x02
