	.globl gText_Rom_227EC5
	.set gText_Rom_227EC5, gText_Rom_227E6C + 0x59
	@ ANALYSIS: SOURCE_RANGE offset=0x227EC9, size=0x55E
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_BattleFrontier_BattleDomeCorridor_OnFrame: @ 0x08227EC9
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattleDomeCorridor_OnFrame
	.byte 0
gMapScriptConditionTable_BattleFrontier_BattleDomeCorridor_OnFrame: @ 0x08227ECF
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08227ED9
	.2byte 0
EventScript_JP_08227ED9: @ 0x08227ED9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	delay 0x0010
	setvar 0x4000, 0x0001
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08227F2C
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattleDomeCorridor_Movement_WalkLeftX10_WalkUp
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomeCorridor_Movement_WalkUp_WalkLeftX10_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x000D, 0x0003
	waitdooranim
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattleDomeCorridor_Movement_WalkUp_SetInvisible
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomeCorridor_Movement_WalkUpX2_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x000D, 0x0003
	waitdooranim
	goto EventScript_JP_08227F5A
EventScript_JP_08227F2C: @ 0x08227F2C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattleDomeCorridor_Movement_WalkRightX14_WalkUp
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomeCorridor_Movement_WalkUp_WalkRightX14_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x0025, 0x0003
	waitdooranim
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattleDomeCorridor_Movement_WalkUp_SetInvisible_1
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomeCorridor_Movement_WalkUpX2_SetInvisible_1
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x0025, 0x0003
	waitdooranim
EventScript_JP_08227F5A: @ 0x08227F5A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8006, 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x14
	.byte 0xFF
	.2byte 0x0005
	.2byte 0x0007
	.byte 0x27, 0x02
BattleFrontier_BattleDomeCorridor_Movement_WalkUp_WalkLeftX10_WalkInPlaceFastestUp: @ 0x08227F6C
	@ object movement sequence
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end
BattleFrontier_BattleDomeCorridor_Movement_WalkUpX2_SetInvisible: @ 0x08227F79
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
BattleFrontier_BattleDomeCorridor_Movement_WalkLeftX10_WalkUp: @ 0x08227F7D
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end
BattleFrontier_BattleDomeCorridor_Movement_WalkUp_SetInvisible: @ 0x08227F89
	@ object movement sequence
	walk_up
	set_invisible
	step_end
BattleFrontier_BattleDomeCorridor_Movement_WalkUp_WalkRightX14_WalkInPlaceFastestUp: @ 0x08227F8C
	@ object movement sequence
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
BattleFrontier_BattleDomeCorridor_Movement_WalkUpX2_SetInvisible_1: @ 0x08227F9D
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
BattleFrontier_BattleDomeCorridor_Movement_WalkRightX14_WalkUp: @ 0x08227FA1
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end
BattleFrontier_BattleDomeCorridor_Movement_WalkUp_SetInvisible_1: @ 0x08227FB1
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	walk_up
	set_invisible
	step_end
	.globl BattleFrontier_BattleDomeCorridor_Movement_WalkUp_WalkRightX11_WalkUpX2_SetInvisible
BattleFrontier_BattleDomeCorridor_Movement_WalkUp_WalkRightX11_WalkUpX2_SetInvisible: @ 0x08227FB4
	.byte 0x09, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x09, 0x09, 0x54, 0xFE
gMapScriptDispatch_BattleFrontier_BattleDomePreBattleRoom_OnFrame_OnWarpIntoMap: @ 0x08227FC4
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattleDomePreBattleRoom_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_BattleFrontier_BattleDomePreBattleRoom_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_BattleFrontier_BattleDomePreBattleRoom_OnWarpIntoMap: @ 0x08227FCF
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08227FD9
	.2byte 0
EventScript_JP_08227FD9: @ 0x08227FD9
	setvar 0x4001, 0x0001
	turnobject 0x00FF, 0x02
	end
gMapScriptConditionTable_BattleFrontier_BattleDomePreBattleRoom_OnFrame: @ 0x08227FE3
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08227FED
	.2byte 0
EventScript_JP_08227FED: @ 0x08227FED
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x8006, 0x0001
	goto_if 0x01, EventScript_JP_08228392
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0006
	setvar 0x8006, 0x0001
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x4000, 0x0001
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkUpX4
	@ event command: waitmovement
	waitmovement 0x0000
	lockall
EventScript_JP_0822801A: @ 0x0822801A
	call EventScript_JP_082282C6
	waitmessage
	copyvar 0x8000, 0x800D
	call 0x0821F921
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822808C
	multichoice 0x10, 0x00, 0x49, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082281A8
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082281C0
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228238
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_082280D8
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08228114
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_08228142
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822801A
EventScript_JP_0822808C: @ 0x0822808C
	multichoice 0x10, 0x02, 0x6B, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082281A8
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082281C0
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228238
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228114
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08228142
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822801A
EventScript_JP_082280D8: @ 0x082280D8
	message gText_Rom_228716
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822801A
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822810A
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822801A
EventScript_JP_0822810A: @ 0x0822810A
	call 0x0821F8F5
	goto EventScript_JP_0822801A
EventScript_JP_08228114: @ 0x08228114
	loadword 0x00, gText_Rom_2286C5
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822801A
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228186
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822801A
EventScript_JP_08228142: @ 0x08228142
	message gText_Rom_2286DC
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822801A
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08228174
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822801A
EventScript_JP_08228174: @ 0x08228174
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000C
	setvar 0x8005, 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	goto EventScript_JP_08228A26
EventScript_JP_08228186: @ 0x08228186
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_2286F9
	waitmessage
	setvar 0x8004, 0x000D
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	playse 0x0037
	waitse
	fadescreen 0x01
	setvar 0x8004, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	end
EventScript_JP_082281A8: @ 0x082281A8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22864D
	callstd 0x04
	fadescreen 0x01
	setvar 0x8004, 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	waitstate
	goto EventScript_JP_0822801A
EventScript_JP_082281C0: @ 0x082281C0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_082281D5
	fadescreen 0x01
	setvar 0x8004, 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	waitstate
	goto EventScript_JP_0822801A
EventScript_JP_082281D5: @ 0x082281D5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08228214
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822821D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228226
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0822822F
	return
EventScript_JP_08228214: @ 0x08228214
	loadword 0x00, gText_Rom_228664
	callstd 0x04
	return
EventScript_JP_0822821D: @ 0x0822821D
	loadword 0x00, gText_Rom_22867B
	callstd 0x04
	return
EventScript_JP_08228226: @ 0x08228226
	loadword 0x00, gText_Rom_228692
	callstd 0x04
	return
EventScript_JP_0822822F: @ 0x0822822F
	loadword 0x00, gText_Rom_2286AC
	callstd 0x04
	return
EventScript_JP_08228238: @ 0x08228238
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_2284C0
	waitmessage
	waitbuttonpress
	fadescreen 0x01
	call 0x082202F8
	copyvar 0x8004, 0x800D
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00F5
	waitstate
	setvar 0x8004, 0x0015
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822801A
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	setvar 0x8004, 0x0012
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	setvar 0x8004, 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	loadword 0x00, gText_Rom_2284E0
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkRight_FaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkUp_1
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x0005, 0x0001
	waitdooranim
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkUp_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x0005, 0x0001
	waitdooranim
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x15
	.byte 0xFF
	.2byte 0x0009
	.2byte 0x0005
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_082282C6: @ 0x082282C6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08228305
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822830B
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228311
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228317
	return
EventScript_JP_08228305: @ 0x08228305
	message gText_Rom_228427
	return
EventScript_JP_0822830B: @ 0x0822830B
	message gText_Rom_22844C
	return
EventScript_JP_08228311: @ 0x08228311
	message gText_Rom_228471
	return
EventScript_JP_08228317: @ 0x08228317
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0009
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228356
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822836B
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228356
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_0822836B
	message gText_Rom_228499
	return
EventScript_JP_08228356: @ 0x08228356
	checkflag 0x0001
	goto_if 0x01, EventScript_JP_08228380
	loadword 0x00, gText_Rom_228736
	callstd 0x04
	setflag 0x0001
	return
EventScript_JP_0822836B: @ 0x0822836B
	checkflag 0x0001
	goto_if 0x01, EventScript_JP_08228389
	loadword 0x00, gText_Rom_228786
	callstd 0x04
	setflag 0x0001
	return
EventScript_JP_08228380: @ 0x08228380
	loadword 0x00, gText_Rom_2287D6
	callstd 0x04
	return
EventScript_JP_08228389: @ 0x08228389
	loadword 0x00, gText_Rom_2287FF
	callstd 0x04
	return
EventScript_JP_08228392: @ 0x08228392
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4000, 0x0001
	loadword 0x00, gText_Rom_2284EE
	callstd 0x04
	@ event command: special
	special LoadPlayerParty
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0003
	@ event command: special
	special CallFrontierUtilFunc
	playfanfare 0x0170
	waitfanfare
	@ event command: special
	special HealPlayerParty
	call EventScript_JP_082283CB
	fadescreen 0x01
	setvar 0x8004, 0x000B
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	waitstate
	goto EventScript_JP_0822801A
EventScript_JP_082283CB: @ 0x082283CB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082283FF
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228408
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228411
	return
EventScript_JP_082283FF: @ 0x082283FF
	loadword 0x00, gText_Rom_228512
	callstd 0x04
	return
EventScript_JP_08228408: @ 0x08228408
	loadword 0x00, gText_Rom_22853F
	callstd 0x04
	return
EventScript_JP_08228411: @ 0x08228411
	loadword 0x00, gText_Rom_22856C
	callstd 0x04
	return
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkRight_FaceLeft: @ 0x0822841A
	@ object movement sequence
	walk_right
	face_left
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkUpX4: @ 0x0822841D
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkUp_1: @ 0x08228422
	@ object movement sequence
	walk_up
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkUp_SetInvisible: @ 0x08228424
	@ object movement sequence
	walk_up
	set_invisible
	step_end
