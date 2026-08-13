	@ data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc:297 PlayersHouse_2F_Text_ItsAGameCube
	.globl gText_Rom_1F0328
gText_Rom_1F0328: @ 0x081F0328
	.string "ゲームキューブが ある!\pコントローラの かわりに\nゲームボーイ アドバンスが つながってる!$"
	.if (. - gText_Rom_1F0328) > 0x30
	.error "gText_Rom_1F0328 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0328) < 0x30
	.space 0x30 - (. - gText_Rom_1F0328)
	.endif
	@ analyzed canonical ROM range 0x081F0358-0x081F0677
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_081F0358: @ 0x081F0358
MapScripts_JP_081F0358: @ 0x081F0358
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_081F0368
	.byte 0x03
	.4byte EventScript_JP_081F03A7
	.byte 0x02
	.4byte MapScriptTable_JP_081F03ED
	.byte 0
EventScript_JP_081F0368: @ 0x081F0368
	compare_var_to_value 0x4092, 0x0006
	call_if 0x00, EventScript_JP_081F037D
	checkflag 0x0112
	call_if 0x01, EventScript_JP_081F0390
	end
EventScript_JP_081F037D: @ 0x081F037D
	setmetatile 0x0005, 0x0004, 0x0270, 0x0001
	setmetatile 0x0005, 0x0002, 0x0268, 0x0001
	return
EventScript_JP_081F0390: @ 0x081F0390
	checkplayergender
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F039D
	return
EventScript_JP_081F039D: @ 0x081F039D
	setmetatile 0x0006, 0x0007, 0x0293, 0x0001
	return
EventScript_JP_081F03A7: @ 0x081F03A7
	compare_var_to_value 0x4092, 0x0003
	call_if 0x01, EventScript_JP_081F03E1
	compare_var_to_value 0x4092, 0x0005
	call_if 0x01, EventScript_JP_081F03C9
	compare_var_to_value 0x4092, 0x0006
	call_if 0x01, EventScript_JP_081F03D5
	end
EventScript_JP_081F03C9: @ 0x081F03C9
	setobjectxyperm 0x0001, 0x0002, 0x0004
	setobjectmovementtype 0x0001, 0x07
	return
EventScript_JP_081F03D5: @ 0x081F03D5
	setobjectxyperm 0x0001, 0x0006, 0x0005
	setobjectmovementtype 0x0001, 0x07
	return
EventScript_JP_081F03E1: @ 0x081F03E1
	setobjectxyperm 0x0001, 0x0001, 0x0008
	setobjectmovementtype 0x0001, 0x07
	return
MapScriptTable_JP_081F03ED: @ 0x081F03ED
	@ conditional map script table
	.2byte 0x4092, 0x0003
	.4byte EventScript_JP_081F043F
	.2byte 0x4092, 0x0005
	.4byte EventScript_JP_081F0417
	.2byte 0x4092, 0x0006
	.4byte EventScript_JP_081F0450
	.2byte 0x408C, 0x0001
	.4byte EventScript_JP_081F0461
	.2byte 0x4082, 0x0003
	.4byte EventScript_JP_082582DC
	.2byte 0
EventScript_JP_081F0417: @ 0x081F0417
	lockall
	loadword 0x00, gText_Rom_1EFAFC
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F043D @ Movement_JP_081F043D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F043D @ Movement_JP_081F043D
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x01
	.byte 0x03
	.byte 0xFF
	.2byte 0x0001
	.2byte 0x0001
	.byte 0x27, 0x6B, 0x02
Movement_JP_081F043D: @ 0x081F043D
	@ object movement sequence
	walk_up
	step_end
EventScript_JP_081F043F: @ 0x081F043F
	lockall
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	goto EventScript_JP_08257EEE
	.byte 0x02
EventScript_JP_081F0450: @ 0x081F0450
	lockall
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	goto EventScript_JP_082580C6
	.byte 0x02
EventScript_JP_081F0461: @ 0x081F0461
	lockall
	playse 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x081F049F @ Movement_JP_081F049F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0095
	loadword 0x00, gText_Rom_1F0678
	callstd 0x04
	setflag 0x0057
	setvar 0x408C, 0x0002
	releaseall
	end
Movement_JP_081F049F: @ 0x081F049F
	@ object movement sequence
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
.globl EventScript_JP_081F04A6
EventScript_JP_081F04A6: @ 0x081F04A6
	lock
	faceplayer
	checkflag 0x0082
	goto_if 0x01, EventScript_JP_081F04E6
	checkflag 0x0860
	goto_if 0x01, EventScript_JP_081F04DC
	compare_var_to_value 0x408D, 0x0003
	goto_if 0x01, EventScript_JP_081F04D2
	@ event command: special
	.byte 0x25
	.2byte 0x0095
	loadword 0x00, gText_Rom_1F0701
	callstd 0x04
	release
	end
EventScript_JP_081F04D2: @ 0x081F04D2
	loadword 0x00, gText_Rom_1F0755
	callstd 0x04
	release
	end
EventScript_JP_081F04DC: @ 0x081F04DC
	loadword 0x00, gText_Rom_1F078A
	callstd 0x04
	release
	end
EventScript_JP_081F04E6: @ 0x081F04E6
	loadword 0x00, gText_Rom_1F07D8
	callstd 0x04
	release
	end
.globl EventScript_JP_081F04F0
EventScript_JP_081F04F0: @ 0x081F04F0
	lock
	faceplayer
	@ event command: special
	.byte 0x25
	.2byte 0x0094
	loadword 0x00, gText_Rom_1F0ABD
	callstd 0x04
	release
	end
.globl EventScript_JP_081F04FF
EventScript_JP_081F04FF: @ 0x081F04FF
	lockall
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8004
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	goto EventScript_JP_08257F4F
	.byte 0x02
.globl EventScript_JP_081F051A
EventScript_JP_081F051A: @ 0x081F051A
	lockall
	setvar 0x8008, 0x0000
	goto EventScript_JP_081F053E
	.byte 0x02
.globl EventScript_JP_081F0526
EventScript_JP_081F0526: @ 0x081F0526
	lockall
	setvar 0x8008, 0x0001
	goto EventScript_JP_081F053E
	.byte 0x02
.globl EventScript_JP_081F0532
EventScript_JP_081F0532: @ 0x081F0532
	lockall
	setvar 0x8008, 0x0002
	goto EventScript_JP_081F053E
	.byte 0x02
EventScript_JP_081F053E: @ 0x081F053E
	playse 0x0009
	delay 0x000A
	@ event command: addobject
	.byte 0x55
	.2byte 0x0007
	delay 0x001E
	playse 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	compare_var_to_value 0x8008, 0x0001
	call_if 0x05, EventScript_JP_081F05DD
	playbgm 0x019F, 0x01
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081F05E8
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_081F05F3
	compare_var_to_value 0x8008, 0x0002
	call_if 0x01, EventScript_JP_081F05FE
	loadword 0x00, gText_Rom_1F0843
	callstd 0x04
	closemessage
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081F061D
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_081F062F
	compare_var_to_value 0x8008, 0x0002
	call_if 0x01, EventScript_JP_081F0641
	playse 0x0009
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0007
	setflag 0x02EA
	setflag 0x0332
	clearflag 0x02D2
	delay 0x001E
	setvar 0x408D, 0x0003
	setvar 0x4050, 0x0001
	savebgm 0x0000
	fadedefaultbgm
	releaseall
	end
EventScript_JP_081F05DD: @ 0x081F05DD
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_081F05E8: @ 0x081F05E8
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081F0609 @ Movement_JP_081F0609
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_081F05F3: @ 0x081F05F3
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081F0611 @ Movement_JP_081F0611
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_081F05FE: @ 0x081F05FE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081F0615 @ Movement_JP_081F0615
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
Movement_JP_081F0609: @ 0x081F0609
	@ object movement sequence
	walk_in_place_fastest_left
	walk_left
	walk_in_place_fastest_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
Movement_JP_081F0611: @ 0x081F0611
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	step_end
Movement_JP_081F0615: @ 0x081F0615
	@ object movement sequence
	walk_in_place_fastest_right
	walk_right
	walk_in_place_fastest_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
EventScript_JP_081F061D: @ 0x081F061D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F0653 @ Movement_JP_081F0653
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081F0662 @ Movement_JP_081F0662
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_081F062F: @ 0x081F062F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F0657 @ Movement_JP_081F0657
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081F0668 @ Movement_JP_081F0668
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_081F0641: @ 0x081F0641
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F065E @ Movement_JP_081F065E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081F0672 @ Movement_JP_081F0672
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
Movement_JP_081F0653: @ 0x081F0653
	@ object movement sequence
	delay_16
	delay_8
	walk_in_place_fastest_right
	step_end
Movement_JP_081F0657: @ 0x081F0657
	@ object movement sequence
	delay_16
	delay_8
	walk_in_place_fastest_right
	delay_16
	delay_16
	walk_in_place_fastest_up
	step_end
Movement_JP_081F065E: @ 0x081F065E
	@ object movement sequence
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end
Movement_JP_081F0662: @ 0x081F0662
	@ object movement sequence
	walk_in_place_fastest_right
	walk_right
	walk_in_place_fastest_up
	walk_up
	walk_up
	step_end
Movement_JP_081F0668: @ 0x081F0668
	@ object movement sequence
	walk_in_place_fastest_right
	walk_right
	walk_in_place_fastest_up
	walk_up
	walk_up
	walk_in_place_fastest_left
	walk_left
	walk_in_place_fastest_up
	walk_up
	step_end
Movement_JP_081F0672: @ 0x081F0672
	@ object movement sequence
	walk_in_place_fastest_left
	walk_left
	walk_in_place_fastest_up
	walk_up
	walk_up
	step_end
