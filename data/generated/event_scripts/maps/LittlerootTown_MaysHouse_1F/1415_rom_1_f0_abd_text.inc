	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:412 RivalsHouse_1F_Text_DoYouHavePokemon
	.globl gText_Rom_1F0ABD
gText_Rom_1F0ABD: @ 0x081F0ABD
	.string "わーい おとなりさんだ!\p{STR_VAR_1}は もう\nじぶんの ポケモン もってるの?{EOS}"
	.if (. - gText_Rom_1F0ABD) > 0x25
	.error "gText_Rom_1F0ABD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0ABD) < 0x25
	.space 0x25 - (. - gText_Rom_1F0ABD)
	.endif
	@ analyzed canonical ROM range 0x081F0AE2-0x081F0DE7
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_LittlerootTown_MaysHouse_2F_OnTransition_OnWarpIntoMap: @ 0x081F0AE2
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F0AED
	.byte 0x04
	.4byte gMapScriptConditionTable_LittlerootTown_MaysHouse_2F_OnWarpIntoMap
	.byte 0
EventScript_JP_081F0AED: @ 0x081F0AED
	compare_var_to_value 0x408D, 0x0002
	call_if 0x00, EventScript_JP_081F0B56
	compare_var_to_value 0x408D, 0x0003
	call_if 0x04, EventScript_JP_081F0B19
	compare_var_to_value 0x4092, 0x0004
	call_if 0x01, EventScript_JP_08257EE8
	call 0x08245D90
	setvar 0x4089, 0x0000
	end
EventScript_JP_081F0B19: @ 0x081F0B19
	checkflag 0x0124
	goto_if 0x01, EventScript_JP_081F0B32
	compare_var_to_value 0x4084, 0x0002
	goto_if 0x04, EventScript_JP_081F0B55
	goto EventScript_JP_081F0B32
EventScript_JP_081F0B32: @ 0x081F0B32
	checkplayergender
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F0B55
	compare_var_to_value 0x40D3, 0x0002
	goto_if 0x04, EventScript_JP_081F0B55
	setobjectxyperm 0x0001, 0x0008, 0x0002
	setobjectmovementtype 0x0001, 0x07
	return
EventScript_JP_081F0B55: @ 0x081F0B55
	return
EventScript_JP_081F0B56: @ 0x081F0B56
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F0B63
	return
EventScript_JP_081F0B63: @ 0x081F0B63
	setvar 0x408D, 0x0002
	return
gMapScriptConditionTable_LittlerootTown_MaysHouse_2F_OnWarpIntoMap: @ 0x081F0B69
	@ conditional map script table
	.2byte 0x4089, 0x0000
	.4byte EventScript_JP_081F0B73
	.2byte 0
EventScript_JP_081F0B73: @ 0x081F0B73
	checkplayergender
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08245DBB
	end
.globl EventScript_JP_081F0B80
EventScript_JP_081F0B80: @ 0x081F0B80
	lockall
	compare_var_to_value 0x408D, 0x0002
	goto_if 0x01, EventScript_JP_081F0B96
	loadword 0x00, gText_Rom_1F10B0
	callstd 0x04
	releaseall
	end
EventScript_JP_081F0B96: @ 0x081F0B96
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	delay 0x000A
	@ event command: addobject
	addobject 0x0001
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkDownX2_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x000A
	playbgm 0x019F, 0x01
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_081F0C06
	compare_var_to_value 0x800C, 0x0001
	call_if 0x01, EventScript_JP_081F0C35
	compare_var_to_value 0x800C, 0x0003
	call_if 0x01, EventScript_JP_081F0C64
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_081F0C8C
	setvar 0x408D, 0x0003
	setflag 0x0332
	clearflag 0x02D2
	setvar 0x4050, 0x0001
	savebgm 0x0000
	fadedefaultbgm
	releaseall
	end
EventScript_JP_081F0C06: @ 0x081F0C06
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkRightX2_WalkDownX2_WalkRight
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1F0DE8
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X4_WalkInPlaceFastestRight
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkUpX3_WalkInPlaceFastestRight_WalkRightX4_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F0C35: @ 0x081F0C35
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkRightX3
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1F0DE8
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X2_WalkInPlaceFastestRight_1
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkUp_WalkInPlaceFastestRight_WalkRightX4_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F0C64: @ 0x081F0C64
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkRightX5_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1F0DE8
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkUp_WalkRightX2_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F0C8C: @ 0x081F0C8C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkRightX2_WalkDown_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1F0DE8
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X2_WalkInPlaceFastestRight_2
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkUpX2_WalkRightX5_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
LittlerootTown_MaysHouse_1F_Movement_WalkDownX2_WalkInPlaceFastestRight: @ 0x081F0CBB
	@ object movement sequence
	walk_down
	walk_down
	walk_in_place_fastest_right
	step_end
LittlerootTown_MaysHouse_1F_Movement_WalkRightX2_WalkDownX2_WalkRight: @ 0x081F0CBF
	@ object movement sequence
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	step_end
LittlerootTown_MaysHouse_1F_Movement_WalkUpX3_WalkInPlaceFastestRight_WalkRightX4_WalkInPlaceFastestUp: @ 0x081F0CC5
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
LittlerootTown_MaysHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X4_WalkInPlaceFastestRight: @ 0x081F0CCF
	@ object movement sequence
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_right
	step_end
LittlerootTown_MaysHouse_1F_Movement_WalkRightX3: @ 0x081F0CD7
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	step_end
LittlerootTown_MaysHouse_1F_Movement_WalkUp_WalkInPlaceFastestRight_WalkRightX4_WalkInPlaceFastestUp: @ 0x081F0CDB
	@ object movement sequence
	walk_up
	walk_in_place_fastest_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
LittlerootTown_MaysHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X2_WalkInPlaceFastestRight_1: @ 0x081F0CE3
	@ object movement sequence
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	walk_in_place_fastest_right
	step_end
LittlerootTown_MaysHouse_1F_Movement_WalkRightX5_WalkInPlaceFastestDown: @ 0x081F0CE9
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end
LittlerootTown_MaysHouse_1F_Movement_WalkUp_WalkRightX2_WalkInPlaceFastestUp: @ 0x081F0CF0
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	walk_up
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
	.globl LittlerootTown_MaysHouse_1F_Movement_Delay16X2_WalkInPlaceFastestRight
LittlerootTown_MaysHouse_1F_Movement_Delay16X2_WalkInPlaceFastestRight: @ 0x081F0CF5
	.byte 0x14, 0x14, 0x28, 0xFE
LittlerootTown_MaysHouse_1F_Movement_WalkRightX2_WalkDown_WalkInPlaceFastestRight: @ 0x081F0CF9
	@ object movement sequence
	walk_right
	walk_right
	walk_down
	walk_in_place_fastest_right
	step_end
LittlerootTown_MaysHouse_1F_Movement_WalkUpX2_WalkRightX5_WalkInPlaceFastestUp: @ 0x081F0CFE
	@ object movement sequence
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
LittlerootTown_MaysHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X2_WalkInPlaceFastestRight_2: @ 0x081F0D07
	@ object movement sequence
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	walk_in_place_fastest_right
	step_end
.globl EventScript_JP_081F0D0D
EventScript_JP_081F0D0D: @ 0x081F0D0D
	lockall
	checkflag 0x0124
	goto_if 0x01, EventScript_JP_081F0D43
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F0D2F
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F0D39
	end
EventScript_JP_081F0D2F: @ 0x081F0D2F
	loadword 0x00, gText_Rom_1F0F40
	callstd 0x04
	releaseall
	end
EventScript_JP_081F0D39: @ 0x081F0D39
	loadword 0x00, gText_Rom_1F108B
	callstd 0x04
	releaseall
	end
EventScript_JP_081F0D43: @ 0x081F0D43
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081F0D69
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081F0D7B
	setflag 0x0125
	releaseall
	end
EventScript_JP_081F0D69: @ 0x081F0D69
	checkflag 0x0125
	goto_if 0x01, EventScript_JP_081F0D8D
	loadword 0x00, gText_Rom_1F10CD
	callstd 0x04
	return
EventScript_JP_081F0D7B: @ 0x081F0D7B
	checkflag 0x0125
	goto_if 0x01, EventScript_JP_081F0D96
	loadword 0x00, gText_Rom_1F117C
	callstd 0x04
	return
EventScript_JP_081F0D8D: @ 0x081F0D8D
	loadword 0x00, gText_Rom_1F1142
	callstd 0x04
	return
EventScript_JP_081F0D96: @ 0x081F0D96
	loadword 0x00, gText_Rom_1F11E3
	callstd 0x04
	return
.globl EventScript_JP_081F0D9F
EventScript_JP_081F0D9F: @ 0x081F0D9F
	lockall
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F0DB8
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F0DC2
	end
EventScript_JP_081F0DB8: @ 0x081F0DB8
	loadword 0x00, gText_Rom_243AA2
	callstd 0x04
	releaseall
	end
EventScript_JP_081F0DC2: @ 0x081F0DC2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	@ event command: special
	special DoLotteryCornerComputerEffect
	playse 0x0004
	loadword 0x00, gText_Rom_243B10
	callstd 0x04
	@ event command: special
	special BedroomPC
	waitstate
	releaseall
	end
EventScript_JP_081F0DDB: @ 0x081F0DDB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	playse 0x0003
	@ event command: special
	special DoPCTurnOffEffect
	releaseall
	end
