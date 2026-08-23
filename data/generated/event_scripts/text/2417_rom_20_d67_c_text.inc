	.globl gText_Rom_20D67C
	.set gText_Rom_20D67C, gText_Rom_20D5FC + 0x80
	@ ANALYSIS: SOURCE_RANGE offset=0x20D682, size=0x400
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_MossdeepCity_SpaceCenter_2F_OnTransition_OnFrame: @ 0x0820D682
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820D68D
	.byte 0x02
	.4byte gMapScriptConditionTable_MossdeepCity_SpaceCenter_2F_OnFrame
	.byte 0
EventScript_JP_0820D68D: @ 0x0820D68D
	compare_var_to_value 0x405D, 0x0002
	call_if 0x01, EventScript_JP_0820D6A4
	compare_var_to_value 0x409F, 0x0002
	call_if 0x01, EventScript_JP_0820D6C9
	end
EventScript_JP_0820D6A4: @ 0x0820D6A4
	clearflag 0x00CD
	setobjectxyperm 0x0003, 0x0005, 0x0003
	setobjectmovementtype 0x0003, 0x0A
	setobjectxyperm 0x0001, 0x0003, 0x0002
	setobjectmovementtype 0x0001, 0x0A
	setobjectxyperm 0x0002, 0x0001, 0x0003
	setobjectmovementtype 0x0002, 0x0A
	return
EventScript_JP_0820D6C9: @ 0x0820D6C9
	setobjectxyperm 0x0005, 0x000B, 0x0002
	setobjectxyperm 0x0007, 0x000F, 0x0002
	setobjectxyperm 0x0006, 0x000D, 0x0004
	return
gMapScriptConditionTable_MossdeepCity_SpaceCenter_2F_OnFrame: @ 0x0820D6DF
	@ conditional map script table
	.2byte 0x409F, 0x0001
	.4byte EventScript_JP_0820D6E9
	.2byte 0
EventScript_JP_0820D6E9: @ 0x0820D6E9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	playse 0x0015
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_20DBEC
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820D733
	loadword 0x00, gText_Rom_20DC12
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, MossdeepCity_SpaceCenter_2F_Movement_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x0E
	.byte 0x09
	.byte 0xFF
	.2byte 0x000D
	.2byte 0x0001
	.byte 0x27, 0x6B, 0x02
MossdeepCity_SpaceCenter_2F_Movement_WalkUp: @ 0x0820D731
	@ object movement sequence
	walk_up
	step_end
EventScript_JP_0820D733: @ 0x0820D733
	loadword 0x00, gText_Rom_20DC28
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x024C, 0x0000, gText_Rom_20DC40
	@ event command: applymovement
	applymovement 0x0006, MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkDown_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_20DC4E
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x024D, 0x0000, gText_Rom_20DC6D
	@ event command: applymovement
	applymovement 0x0005, MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkLeft_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_20DC7B
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x024E, 0x0000, gText_Rom_20DC9C
	@ event command: applymovement
	applymovement 0x0007, MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkRight_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x409F, 0x0002
	moveobjectoffscreen 0x0005
	moveobjectoffscreen 0x0007
	moveobjectoffscreen 0x0006
	releaseall
	end
MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkLeft_UnlockFacingDirection: @ 0x0820D7AB
	@ object movement sequence
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end
MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkDown_UnlockFacingDirection: @ 0x0820D7AF
	@ object movement sequence
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end
MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkRight_UnlockFacingDirection: @ 0x0820D7B3
	@ object movement sequence
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end
.globl EventScript_JP_0820D7B7
EventScript_JP_0820D7B7: @ 0x0820D7B7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_0820D7DE
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820D7E8
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x00, EventScript_JP_0820D7DE
	goto EventScript_JP_0820D7E8
	.byte 0x02
EventScript_JP_0820D7DE: @ 0x0820D7DE
	loadword 0x00, gText_Rom_20DACB
	callstd 0x04
	release
	end
EventScript_JP_0820D7E8: @ 0x0820D7E8
	loadword 0x00, gText_Rom_20DB12
	callstd 0x04
	release
	end
.globl EventScript_JP_0820D7F2
EventScript_JP_0820D7F2: @ 0x0820D7F2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_0820D819
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820D823
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x00, EventScript_JP_0820D819
	goto EventScript_JP_0820D823
	.byte 0x02
EventScript_JP_0820D819: @ 0x0820D819
	loadword 0x00, gText_Rom_20DB39
	callstd 0x04
	release
	end
EventScript_JP_0820D823: @ 0x0820D823
	loadword 0x00, gText_Rom_20DB7B
	callstd 0x04
	release
	end
.globl EventScript_JP_0820D82D
EventScript_JP_0820D82D: @ 0x0820D82D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_0820D854
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820D85E
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x00, EventScript_JP_0820D854
	goto EventScript_JP_0820D85E
	.byte 0x02
EventScript_JP_0820D854: @ 0x0820D854
	loadword 0x00, gText_Rom_20DBB3
	callstd 0x04
	release
	end
EventScript_JP_0820D85E: @ 0x0820D85E
	loadword 0x00, gText_Rom_20DBD3
	callstd 0x04
	release
	end
.globl EventScript_JP_0820D868
EventScript_JP_0820D868: @ 0x0820D868
	loadword 0x00, gText_Rom_20DCB7
	callstd 0x02
	end
.globl EventScript_JP_0820D871
EventScript_JP_0820D871: @ 0x0820D871
	loadword 0x00, gText_Rom_20DCC6
	callstd 0x02
	end
.globl EventScript_JP_0820D87A
EventScript_JP_0820D87A: @ 0x0820D87A
	loadword 0x00, gText_Rom_20DCE5
	callstd 0x02
	end
.globl EventScript_JP_0820D883
EventScript_JP_0820D883: @ 0x0820D883
	lock
	faceplayer
	loadword 0x00, gText_Rom_20DCFF
	callstd 0x04
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_0820D899
EventScript_JP_0820D899: @ 0x0820D899
	lockall
	loadword 0x00, gText_Rom_20DD52
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_0820D8A4
EventScript_JP_0820D8A4: @ 0x0820D8A4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x00CD
	goto_if 0x01, EventScript_JP_0820D904
	setflag 0x00CD
	loadword 0x00, gText_Rom_20DD76
	callstd 0x04
	loadword 0x00, gText_Rom_20DDA9
	callstd 0x04
	closemessage
	delay 0x001E
	playse 0x000C
	copyvar 0x8000, 0x800C
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0820D8E4
	@ event command: applymovement
	applymovement 0x0004, MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkFastUpX2_UnlockFacingDirection_Delay16X2_WalkSlowDownX2
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_0820D8E4: @ 0x0820D8E4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0004, MossdeepCity_SpaceCenter_2F_Movement_FaceLeft_LockFacingDirection_WalkFastRightX2_UnlockFacingDirection_Delay16X2_WalkSlowLeftX2_FaceDown
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkFastUpX2_UnlockFacingDirection_Delay16X2_WalkSlowDownX2: @ 0x0820D8F0
	@ object movement sequence
	lock_facing_direction
	walk_fast_up
	walk_fast_up
	unlock_facing_direction
	delay_16
	delay_16
	walk_slow_down
	walk_slow_down
	step_end
MossdeepCity_SpaceCenter_2F_Movement_FaceLeft_LockFacingDirection_WalkFastRightX2_UnlockFacingDirection_Delay16X2_WalkSlowLeftX2_FaceDown: @ 0x0820D8F9
	@ object movement sequence
	face_left
	lock_facing_direction
	walk_fast_right
	walk_fast_right
	unlock_facing_direction
	delay_16
	delay_16
	walk_slow_left
	walk_slow_left
	face_down
	step_end
EventScript_JP_0820D904: @ 0x0820D904
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_20DE3B
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820D936
	loadword 0x00, gText_Rom_20DE73
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_0820D936: @ 0x0820D936
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: special
	special SavePlayerParty
	fadescreen 0x01
	@ event command: special
	special ChooseHalfPartyForBattle
	waitstate
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_0820D95C
	@ event command: special
	special LoadPlayerParty
	goto EventScript_JP_0820D904
EventScript_JP_0820D95C: @ 0x0820D95C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special ReducePlayerPartyToSelectedMons
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0008
	setvar 0x8005, 0x0000
	@ event command: special
	special DoSpecialTrainerBattle
	waitstate
	setvar 0x8004, 0x0006
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special LoadPlayerParty
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0820D99B
	fadescreen 0x01
	@ event command: special
	special sp0C8_whiteout_maybe
	waitstate
EventScript_JP_0820D99B: @ 0x0820D99B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_20DEBB
	callstd 0x04
	closemessage
	delay 0x0014
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WallyFaceLeft
	@ event command: applymovement
	applymovement 0x0008, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x003C
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: applymovement
	applymovement 0x0008, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x0014
	loadword 0x00, gText_Rom_20DF75
	callstd 0x04
	closemessage
	setvar 0x405D, 0x0003
	fadedefaultbgm
	fadescreen 0x01
	setvar 0x409F, 0x0003
	setflag 0x02F4
	setflag 0x035E
	setflag 0x0337
	@ event command: removeobject
	removeobject 0x0005
	@ event command: removeobject
	removeobject 0x0007
	@ event command: removeobject
	removeobject 0x0006
	@ event command: removeobject
	removeobject 0x0008
	@ event command: removeobject
	removeobject 0x0009
	setobjectxy 0x0003, 0x0005, 0x0006
	turnobject 0x0003, 0x01
	setobjectxy 0x0002, 0x000B, 0x0008
	turnobject 0x0002, 0x02
	setobjectxy 0x0001, 0x0006, 0x0002
	turnobject 0x0001, 0x02
	call EventScript_JP_0820DA5B
	fadescreen 0x00
	loadword 0x00, gText_Rom_20DFB6
	callstd 0x04
	closemessage
	fadescreen 0x01
	setflag 0x0075
	setflag 0x03C7
	@ event command: removeobject
	removeobject 0x0004
	setflag 0x02E1
	clearflag 0x03C7
	setvar 0x40C6, 0x0001
	setflag 0x0314
	@ event command: removeobject
	removeobject 0x0003
	setobjectxyperm 0x0003, 0x0005, 0x0006
	setobjectmovementtype 0x0003, 0x02
	@ event command: addobject
	addobject 0x0003
	fadescreen 0x00
	end
EventScript_JP_0820DA5B: @ 0x0820DA5B
	copyvar 0x8000, 0x800C
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0820DA77
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0820DA7C
	return
EventScript_JP_0820DA77: @ 0x0820DA77
	turnobject 0x0004, 0x02
	return
EventScript_JP_0820DA7C: @ 0x0820DA7C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	turnobject 0x0004, 0x04
	return
	@ standalone byte at 0x0820DA81; not trainerbattle (next script starts at 0x0820DA82)
	.byte 0x5C
