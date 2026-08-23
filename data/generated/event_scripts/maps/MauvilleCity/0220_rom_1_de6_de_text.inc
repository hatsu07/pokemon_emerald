	@ data/maps/MauvilleCity/scripts.inc:669 MauvilleCity_Text_BeenCheckingOutTV
	.globl gText_Rom_1DE6DE
gText_Rom_1DE6DE: @ 0x081DE6DE
	.string "やあ!\nテレビは ちゃんと チェック してる?{EOS}"
	.if (. - gText_Rom_1DE6DE) > 0x18
	.error "gText_Rom_1DE6DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE6DE) < 0x18
	.space 0x18 - (. - gText_Rom_1DE6DE)
	.endif
	@ analyzed canonical ROM range 0x081DE6F6-0x081DF277
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_RustboroCity_OnTransition_OnFrame: @ 0x081DE6F6
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081DE701
	.byte 0x02
	.4byte gMapScriptConditionTable_RustboroCity_OnFrame
	.byte 0
EventScript_JP_081DE701: @ 0x081DE701
	setflag 0x0879
	call 0x08242F63
	compare_var_to_value 0x405A, 0x0006
	call_if 0x01, EventScript_JP_081DE740
	getplayerxy 0x4000, 0x4001
	compare_var_to_value 0x405A, 0x0006
	goto_if 0x01, EventScript_JP_081DE725
	end
EventScript_JP_081DE725: @ 0x081DE725
	compare_var_to_value 0x4000, 0x000B
	goto_if 0x01, EventScript_JP_081DE738
	setobjectxyperm 0x000F, 0x000C, 0x000F
	end
EventScript_JP_081DE738: @ 0x081DE738
	setobjectxyperm 0x000F, 0x000B, 0x000F
	end
EventScript_JP_081DE740: @ 0x081DE740
	setflag 0x4000
	return
gMapScriptConditionTable_RustboroCity_OnFrame: @ 0x081DE744
	@ conditional map script table
	.2byte 0x405A, 0x0006
	.4byte EventScript_JP_081DE74E
	.2byte 0
EventScript_JP_081DE74E: @ 0x081DE74E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x4063, 0x0001
	@ event command: applymovement
	applymovement 0x00FF, MauvilleCity_Movement_WalkDown_1
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0009
	delay 0x000A
	@ event command: addobject
	addobject 0x000F
	@ event command: applymovement
	applymovement 0x000F, MauvilleCity_Movement_WalkDown_Delay16
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000F, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000F, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000F, MauvilleCity_Movement_WalkInPlaceDown
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1DFC14
	callstd 0x04
	closemessage
	setflag 0x012F
	@ event command: applymovement
	applymovement 0x000F, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0024
	delay 0x000A
	playse 0x0024
	delay 0x000A
	playse 0x0024
	delay 0x000A
	playse 0x0024
	delay 0x0014
	@ event command: applymovement
	applymovement 0x000F, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1DFC6A
	callstd 0x04
	closemessage
	delay 0x0014
	goto EventScript_JP_081DE7F6
EventScript_JP_081DE7E5: @ 0x081DE7E5
	loadword 0x00, gText_Rom_1DFD2A
	callstd 0x04
	closemessage
	delay 0x000A
	goto EventScript_JP_081DE7F6
EventScript_JP_081DE7F6: @ 0x081DE7F6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setflag 0x0130
	@ event command: special
	special convert_pixel_width_to_tile_width
	waitstate
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081DE7E5
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081DE7E5
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081DE7E5
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081DE7E5
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_081DE7E5
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_081DE7E5
	compare_var_to_value 0x8000, 0x0007
	goto_if 0x01, EventScript_JP_081DE7E5
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081DE7E5
	@ event command: special
	special OpenPokenavForTutorial
	waitstate
	delay 0x0014
	loadword 0x00, gText_Rom_1DFD3B
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000F, MauvilleCity_Movement_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0009
	@ event command: removeobject
	removeobject 0x000F
	setflag 0x034C
	setvar 0x405A, 0x0007
	clearflag 0x4000
	releaseall
	end
MauvilleCity_Movement_WalkInPlaceDown: @ 0x081DE887
	@ object movement sequence
	walk_in_place_down
	step_end
MauvilleCity_Movement_WalkDown_1: @ 0x081DE889
	@ object movement sequence
	walk_down
	step_end
MauvilleCity_Movement_WalkDown_Delay16: @ 0x081DE88B
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	walk_down
	delay_16
	step_end
	.globl MauvilleCity_Movement_Delay16_WalkLeft_WalkDownX2_WalkRight_WalkInPlaceFastestUp_Delay16
MauvilleCity_Movement_Delay16_WalkLeft_WalkDownX2_WalkRight_WalkInPlaceFastestUp_Delay16: @ 0x081DE88E
	.byte 0x14, 0x0A, 0x08, 0x08, 0x0B, 0x26, 0x14, 0xFE
MauvilleCity_Movement_WalkUp: @ 0x081DE896
	@ object movement sequence
	walk_up
	step_end
.globl EventScript_JP_081DE898
EventScript_JP_081DE898: @ 0x081DE898
	lock
	faceplayer
	checkflag 0x008E
	goto_if 0x01, EventScript_JP_081DE8AD
	loadword 0x00, gText_Rom_1DF278
	callstd 0x04
	release
	end
EventScript_JP_081DE8AD: @ 0x081DE8AD
	loadword 0x00, gText_Rom_1DF2BF
	callstd 0x04
	release
	end
.globl EventScript_JP_081DE8B7
EventScript_JP_081DE8B7: @ 0x081DE8B7
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DF372
	callstd 0x04
	release
	end
.globl EventScript_JP_081DE8C3
EventScript_JP_081DE8C3: @ 0x081DE8C3
	loadword 0x00, gText_Rom_1DF3AA
	callstd 0x02
	end
.globl EventScript_JP_081DE8CC
EventScript_JP_081DE8CC: @ 0x081DE8CC
	lock
	faceplayer
	checkflag 0x0867
	goto_if 0x01, EventScript_JP_081DE8E1
	loadword 0x00, gText_Rom_1DF2F2
	callstd 0x04
	release
	end
EventScript_JP_081DE8E1: @ 0x081DE8E1
	loadword 0x00, gText_Rom_1DF339
	callstd 0x04
	release
	end
.globl EventScript_JP_081DE8EB
EventScript_JP_081DE8EB: @ 0x081DE8EB
	lock
	faceplayer
	checkflag 0x00BC
	goto_if 0x01, EventScript_JP_081DE900
	loadword 0x00, gText_Rom_1DF40A
	callstd 0x04
	release
	end
EventScript_JP_081DE900: @ 0x081DE900
	loadword 0x00, gText_Rom_1DF43C
	callstd 0x04
	release
	end
.globl EventScript_JP_081DE90A
EventScript_JP_081DE90A: @ 0x081DE90A
	loadword 0x00, gText_Rom_1DF498
	callstd 0x02
	end
.globl EventScript_JP_081DE913
EventScript_JP_081DE913: @ 0x081DE913
	loadword 0x00, gText_Rom_1DF4C9
	callstd 0x03
	end
.globl EventScript_JP_081DE91C
EventScript_JP_081DE91C: @ 0x081DE91C
	loadword 0x00, gText_Rom_1DFADC
	callstd 0x03
	end
.globl EventScript_JP_081DE925
EventScript_JP_081DE925: @ 0x081DE925
	loadword 0x00, gText_Rom_1DFB27
	callstd 0x03
	end
.globl EventScript_JP_081DE92E
EventScript_JP_081DE92E: @ 0x081DE92E
	loadword 0x00, gText_Rom_1DFB54
	callstd 0x03
	end
	.byte 0x0F, 0x00, 0x7E, 0xFB, 0x1D, 0x08, 0x09, 0x03, 0x02
.globl EventScript_JP_081DE940
EventScript_JP_081DE940: @ 0x081DE940
	loadword 0x00, gText_Rom_1DFBB4
	callstd 0x03
	end
.globl EventScript_JP_081DE949
EventScript_JP_081DE949: @ 0x081DE949
	loadword 0x00, gText_Rom_1DFBDC
	callstd 0x03
	end
.globl EventScript_JP_081DE952
EventScript_JP_081DE952: @ 0x081DE952
	loadword 0x00, gText_Rom_1DFC05
	callstd 0x03
	end
.globl EventScript_JP_081DE95B
EventScript_JP_081DE95B: @ 0x081DE95B
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DF511
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0007, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081DE971
EventScript_JP_081DE971: @ 0x081DE971
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DF545
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0008, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081DE987
EventScript_JP_081DE987: @ 0x081DE987
	lock
	faceplayer
	loadword 0x00, gText_Rom_1DF56D
	callstd 0x04
	release
	end
.globl EventScript_JP_081DE993
EventScript_JP_081DE993: @ 0x081DE993
	lockall
	setobjectxyperm 0x0009, 0x000E, 0x0015
	setobjectmovementtype 0x0009, 0x0A
	setvar 0x8004, 0x0000
	goto EventScript_JP_081DEA06
	.byte 0x02
.globl EventScript_JP_081DE9AA
EventScript_JP_081DE9AA: @ 0x081DE9AA
	lockall
	setobjectxyperm 0x0009, 0x000E, 0x0015
	setobjectmovementtype 0x0009, 0x0A
	setvar 0x8004, 0x0001
	goto EventScript_JP_081DEA06
	.byte 0x02
.globl EventScript_JP_081DE9C1
EventScript_JP_081DE9C1: @ 0x081DE9C1
	lockall
	setobjectxyperm 0x0009, 0x000E, 0x0015
	setobjectmovementtype 0x0009, 0x0A
	setvar 0x8004, 0x0002
	goto EventScript_JP_081DEA06
	.byte 0x02
.globl EventScript_JP_081DE9D8
EventScript_JP_081DE9D8: @ 0x081DE9D8
	lockall
	setobjectxyperm 0x0009, 0x000E, 0x0015
	setobjectmovementtype 0x0009, 0x0A
	setvar 0x8004, 0x0003
	goto EventScript_JP_081DEA06
	.byte 0x02
.globl EventScript_JP_081DE9EF
EventScript_JP_081DE9EF: @ 0x081DE9EF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setobjectxyperm 0x0009, 0x000E, 0x0015
	setobjectmovementtype 0x0009, 0x0A
	setvar 0x8004, 0x0004
	goto EventScript_JP_081DEA06
	.byte 0x02
EventScript_JP_081DEA06: @ 0x081DEA06
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_1DF5AE
	callstd 0x04
	closemessage
	playbgm 0x01A3, 0x00
	@ event command: addobject
	addobject 0x000A
	@ event command: addobject
	addobject 0x0009
	@ event command: applymovement
	applymovement 0x000A, MauvilleCity_Movement_WalkFastestRightX2_WalkFastRightX5_WalkFastUpX9
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x000A
	@ event command: applymovement
	applymovement 0x0009, MauvilleCity_Movement_WalkRightX6_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1DF5BB
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0009, MauvilleCity_Movement_WalkUpX7
	@ event command: waitmovement
	waitmovement 0x0000
	fadedefaultbgm
	@ event command: removeobject
	removeobject 0x0009
	setobjectxyperm 0x0009, 0x001E, 0x000A
	clearflag 0x02DC
	setflag 0x008E
	setvar 0x405A, 0x0002
	setvar 0x409A, 0x0002
	setvar 0x406F, 0x0001
	clearflag 0x037B
	clearflag 0x0370
	clearflag 0x036E
	setflag 0x02E3
	setflag 0x0371
	releaseall
	end
	.byte 0x0F, 0x00, 0x44, 0xF6, 0x1D, 0x08, 0x09, 0x04, 0x03, 0x0F, 0x00, 0x71, 0xF6, 0x1D, 0x08, 0x09
	.byte 0x04, 0x03, 0x4F, 0x09, 0x00, 0xFA, 0xEA, 0x1D, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x09, 0x00
	.byte 0xFE, 0xEA, 0x1D, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x09, 0x00, 0x03, 0xEB, 0x1D, 0x08, 0x51
	.byte 0x00, 0x00, 0x03, 0x4F, 0x09, 0x00, 0x08, 0xEB, 0x1D, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x09
	.byte 0x00, 0x0E, 0xEB, 0x1D, 0x08, 0x51, 0x00, 0x00, 0x4F, 0xFF, 0x00, 0x29, 0x36, 0x24, 0x08, 0x51
	.byte 0x00, 0x00, 0x03, 0x30, 0x30, 0x18, 0x18, 0x18, 0x18, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16
	.byte 0x16, 0x16, 0x16, 0x16, 0xFE
MauvilleCity_Movement_WalkFastestRightX2_WalkFastRightX5_WalkFastUpX9: @ 0x081DEAD9
	@ object movement sequence
	walk_fastest_right
	walk_fastest_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end
MauvilleCity_Movement_WalkRightX6_WalkInPlaceFastestUp: @ 0x081DEAEA
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
MauvilleCity_Movement_WalkUpX7: @ 0x081DEAF2
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
	.globl MauvilleCity_Movement_WalkDown_WalkRightX2
MauvilleCity_Movement_WalkDown_WalkRightX2: @ 0x081DEAFA
	.byte 0x08, 0x0B, 0x0B, 0xFE
	.globl MauvilleCity_Movement_WalkDownX2_WalkRightX2
MauvilleCity_Movement_WalkDownX2_WalkRightX2: @ 0x081DEAFE
	.byte 0x08, 0x08, 0x0B, 0x0B, 0xFE
	.globl MauvilleCity_Movement_WalkDownX2_WalkRightX2_1
MauvilleCity_Movement_WalkDownX2_WalkRightX2_1: @ 0x081DEB03
	.byte 0x08, 0x08, 0x0B, 0x0B, 0xFE
	.globl MauvilleCity_Movement_WalkDownX3_WalkRightX2
MauvilleCity_Movement_WalkDownX3_WalkRightX2: @ 0x081DEB08
	.byte 0x08, 0x08
	.byte 0x08, 0x0B, 0x0B, 0xFE
	.globl MauvilleCity_Movement_WalkDownX3_WalkRightX3_WalkInPlaceFastestDown
MauvilleCity_Movement_WalkDownX3_WalkRightX3_WalkInPlaceFastestDown: @ 0x081DEB0E
	.byte 0x08, 0x08, 0x08, 0x0B, 0x0B, 0x0B, 0x25, 0xFE
.globl EventScript_JP_081DEB16
EventScript_JP_081DEB16: @ 0x081DEB16
	lock
	faceplayer
	checkflag 0x008F
	goto_if 0x01, EventScript_JP_081DEB2B
	loadword 0x00, gText_Rom_1DF644
	callstd 0x04
	release
	end
EventScript_JP_081DEB2B: @ 0x081DEB2B
	waitse
	setvar 0x4001, 0x0004
	goto EventScript_JP_081DEC94
	.byte 0x02
.globl EventScript_JP_081DEB37
EventScript_JP_081DEB37: @ 0x081DEB37
	lockall
	setvar 0x4001, 0x0000
	goto EventScript_JP_081DEB67
	.byte 0x02
.globl EventScript_JP_081DEB43
EventScript_JP_081DEB43: @ 0x081DEB43
	lockall
	setvar 0x4001, 0x0001
	goto EventScript_JP_081DEB67
	.byte 0x02
.globl EventScript_JP_081DEB4F
EventScript_JP_081DEB4F: @ 0x081DEB4F
	lockall
	setvar 0x4001, 0x0002
	goto EventScript_JP_081DEB67
	.byte 0x02
.globl EventScript_JP_081DEB5B
EventScript_JP_081DEB5B: @ 0x081DEB5B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x4001, 0x0003
	goto EventScript_JP_081DEB67
	.byte 0x02
EventScript_JP_081DEB67: @ 0x081DEB67
	compare_var_to_value 0x4001, 0x0000
	call_if 0x01, EventScript_JP_081DEBA8
	compare_var_to_value 0x4001, 0x0001
	call_if 0x01, EventScript_JP_081DEBD4
	compare_var_to_value 0x4001, 0x0002
	call_if 0x01, EventScript_JP_081DEC00
	compare_var_to_value 0x4001, 0x0003
	call_if 0x01, EventScript_JP_081DEC2C
	setflag 0x009F
	setvar 0x405A, 0x0003
	moveobjectoffscreen 0x0009
	loadword 0x00, gText_Rom_1DF5D5
	callstd 0x04
	releaseall
	end
EventScript_JP_081DEBA8: @ 0x081DEBA8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DEBD4: @ 0x081DEBD4
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, Movement_0824362F
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DEC00: @ 0x081DEC00
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DEC2C: @ 0x081DEC2C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, MauvilleCity_Movement_WalkDown_2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
MauvilleCity_Movement_WalkDown_2: @ 0x081DEC62
	@ object movement sequence
	walk_down
	step_end
.globl EventScript_JP_081DEC64
EventScript_JP_081DEC64: @ 0x081DEC64
	lockall
	setvar 0x4001, 0x0000
	goto EventScript_JP_081DEC94
	.byte 0x02
.globl EventScript_JP_081DEC70
EventScript_JP_081DEC70: @ 0x081DEC70
	lockall
	setvar 0x4001, 0x0001
	goto EventScript_JP_081DEC94
	.byte 0x02
.globl EventScript_JP_081DEC7C
EventScript_JP_081DEC7C: @ 0x081DEC7C
	lockall
	setvar 0x4001, 0x0002
	goto EventScript_JP_081DEC94
	.byte 0x02
.globl EventScript_JP_081DEC88
EventScript_JP_081DEC88: @ 0x081DEC88
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x4001, 0x0003
	goto EventScript_JP_081DEC94
	.byte 0x02
EventScript_JP_081DEC94: @ 0x081DEC94
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x4001, 0x0000
	call_if 0x01, EventScript_JP_081DED15
	compare_var_to_value 0x4001, 0x0001
	call_if 0x01, EventScript_JP_081DED41
	compare_var_to_value 0x4001, 0x0002
	call_if 0x01, EventScript_JP_081DED6D
	compare_var_to_value 0x4001, 0x0003
	call_if 0x01, EventScript_JP_081DED99
	compare_var_to_value 0x4001, 0x0004
	call_if 0x01, EventScript_JP_081DEDCF
	loadword 0x00, gText_Rom_1DF671
	callstd 0x04
	setorcopyvar 0x8000, 0x0003
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081DED0C
	loadword 0x00, gText_Rom_1DF6F2
	callstd 0x04
	closemessage
	setflag 0x0090
	setflag 0x02DC
	setvar 0x405A, 0x0005
	delay 0x001E
	@ event command: warp
	.byte 0x39
	.byte 0x0B
	.byte 0x02
	.byte 0xFF
	.2byte 0x0002
	.2byte 0x0002
	.byte 0x27, 0x6B, 0x02
EventScript_JP_081DED0C: @ 0x081DED0C
	loadword 0x00, gText_Rom_1DF6D8
	callstd 0x04
	return
EventScript_JP_081DED15: @ 0x081DED15
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DED41: @ 0x081DED41
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, Movement_08243631
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DED6D: @ 0x081DED6D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DED99: @ 0x081DED99
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, MauvilleCity_Movement_WalkDown_2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DEDCF: @ 0x081DEDCF
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	return
.globl EventScript_JP_081DEDF1
EventScript_JP_081DEDF1: @ 0x081DEDF1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x0120
	call_if 0x00, EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
EventScript_JP_081DEE0A: @ 0x081DEE0A
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081DEE22
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DEE27
	return
EventScript_JP_081DEE22: @ 0x081DEE22
	playbgm 0x019F, 0x01
	return
EventScript_JP_081DEE27: @ 0x081DEE27
	playbgm 0x01A5, 0x01
	return
.globl EventScript_JP_081DEE2C
EventScript_JP_081DEE2C: @ 0x081DEE2C
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDown_WalkLeftX4_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
.globl EventScript_JP_081DEE6C
EventScript_JP_081DEE6C: @ 0x081DEE6C
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDown_WalkLeftX3_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
.globl EventScript_JP_081DEEAC
EventScript_JP_081DEEAC: @ 0x081DEEAC
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDown_WalkLeftX2_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
.globl EventScript_JP_081DEEEC
EventScript_JP_081DEEEC: @ 0x081DEEEC
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDown_WalkLeft_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
.globl EventScript_JP_081DEF2C
EventScript_JP_081DEF2C: @ 0x081DEF2C
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDownX2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
.globl EventScript_JP_081DEF6C
EventScript_JP_081DEF6C: @ 0x081DEF6C
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDown_WalkRight_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
.globl EventScript_JP_081DEFAC
EventScript_JP_081DEFAC: @ 0x081DEFAC
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDown_WalkRightX2_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
.globl EventScript_JP_081DEFEC
EventScript_JP_081DEFEC: @ 0x081DEFEC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDown_WalkRightX3_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
EventScript_JP_081DF02C: @ 0x081DF02C
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081DF044
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DF14D
	end
EventScript_JP_081DF044: @ 0x081DF044
	checkflag 0x00D3
	goto_if 0x01, EventScript_JP_081DF0FA
	checkflag 0x0120
	goto_if 0x01, EventScript_JP_081DF0A9
	setflag 0x0120
	loadword 0x00, gText_Rom_1DF70B
	callstd 0x04
	closemessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, gText_Rom_1DF769
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x00FD
	setvar 0x405A, 0x0008
	setvar 0x4063, 0x0002
	setvar 0x8008, 0x0000
	loadword 0x00, gText_Rom_1DF77D
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DF0CB
	loadword 0x00, gText_Rom_1DF80B
	callstd 0x04
	call EventScript_JP_081DF10F
	releaseall
	end
EventScript_JP_081DF0A9: @ 0x081DF0A9
	setvar 0x8008, 0x0001
	loadword 0x00, gText_Rom_1DF84F
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DF0CB
	loadword 0x00, gText_Rom_1DF80B
	callstd 0x04
	releaseall
	end
EventScript_JP_081DF0CB: @ 0x081DF0CB
	loadword 0x00, gText_Rom_1DF870
	callstd 0x04
	copyvar 0x8000, 0x4023
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081DF114
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081DF127
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081DF13A
	end
EventScript_JP_081DF0FA: @ 0x081DF0FA
	loadword 0x00, gText_Rom_1DF8A9
	callstd 0x04
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081DF10F
	releaseall
	end
EventScript_JP_081DF10F: @ 0x081DF10F
	savebgm 0x0000
	fadedefaultbgm
	return
EventScript_JP_081DF114: @ 0x081DF114
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0300, 0x0000, gText_Rom_1DF892
	setflag 0x00D3
	goto EventScript_JP_081DF0FA
	.byte 0x02
EventScript_JP_081DF127: @ 0x081DF127
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0301, 0x0000, gText_Rom_1DF892
	setflag 0x00D3
	goto EventScript_JP_081DF0FA
	.byte 0x02
EventScript_JP_081DF13A: @ 0x081DF13A
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0258, 0x0000, gText_Rom_1DF892
	setflag 0x00D3
	goto EventScript_JP_081DF0FA
	.byte 0x02
EventScript_JP_081DF14D: @ 0x081DF14D
	checkflag 0x00D3
	goto_if 0x01, EventScript_JP_081DF1F9
	checkflag 0x0120
	goto_if 0x01, EventScript_JP_081DF1AD
	setflag 0x0120
	loadword 0x00, gText_Rom_1DF903
	callstd 0x04
	closemessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, gText_Rom_1DF95F
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x00FD
	setvar 0x405A, 0x0008
	setvar 0x4063, 0x0002
	loadword 0x00, gText_Rom_1DF973
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DF1CA
	loadword 0x00, gText_Rom_1DFA17
	callstd 0x04
	call EventScript_JP_081DF10F
	releaseall
	end
EventScript_JP_081DF1AD: @ 0x081DF1AD
	loadword 0x00, gText_Rom_1DFA36
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DF1CA
	loadword 0x00, gText_Rom_1DFA17
	callstd 0x04
	releaseall
	end
EventScript_JP_081DF1CA: @ 0x081DF1CA
	loadword 0x00, gText_Rom_1DFA53
	callstd 0x04
	copyvar 0x8000, 0x4023
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081DF20E
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081DF221
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081DF234
	end
EventScript_JP_081DF1F9: @ 0x081DF1F9
	loadword 0x00, gText_Rom_1DFA87
	callstd 0x04
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081DF10F
	releaseall
	end
EventScript_JP_081DF20E: @ 0x081DF20E
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0250, 0x0000, gText_Rom_1DFA75
	setflag 0x00D3
	goto EventScript_JP_081DF1F9
	.byte 0x02
EventScript_JP_081DF221: @ 0x081DF221
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0257, 0x0000, gText_Rom_1DFA75
	setflag 0x00D3
	goto EventScript_JP_081DF1F9
	.byte 0x02
EventScript_JP_081DF234: @ 0x081DF234
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0251, 0x0000, gText_Rom_1DFA75
	setflag 0x00D3
	goto EventScript_JP_081DF1F9
	.byte 0x02
MauvilleCity_Movement_WalkDown_WalkLeftX4_WalkDown: @ 0x081DF247
	@ object movement sequence
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end
MauvilleCity_Movement_WalkDown_WalkLeftX3_WalkDown: @ 0x081DF24E
	@ object movement sequence
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end
MauvilleCity_Movement_WalkDown_WalkLeftX2_WalkDown: @ 0x081DF254
	@ object movement sequence
	walk_down
	walk_left
	walk_left
	walk_down
	step_end
MauvilleCity_Movement_WalkDown_WalkLeft_WalkDown: @ 0x081DF259
	@ object movement sequence
	walk_down
	walk_left
	walk_down
	step_end
MauvilleCity_Movement_WalkDownX2: @ 0x081DF25D
	@ object movement sequence
	walk_down
	walk_down
	step_end
MauvilleCity_Movement_WalkDown_WalkRight_WalkDown: @ 0x081DF260
	@ object movement sequence
	walk_down
	walk_right
	walk_down
	step_end
MauvilleCity_Movement_WalkDown_WalkRightX2_WalkDown: @ 0x081DF264
	@ object movement sequence
	walk_down
	walk_right
	walk_right
	walk_down
	step_end
MauvilleCity_Movement_WalkDown_WalkRightX3_WalkDown: @ 0x081DF269
	@ object movement sequence
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	step_end
.globl EventScript_JP_081DF26F
EventScript_JP_081DF26F: @ 0x081DF26F
	loadword 0x00, gText_Rom_1DFD5D
	callstd 0x02
	end
