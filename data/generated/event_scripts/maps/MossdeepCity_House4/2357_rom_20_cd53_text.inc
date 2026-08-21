	@ data/maps/MossdeepCity_House4/scripts.inc:54 MossdeepCity_House4_Text_Skitty
	.globl gText_Rom_20CD53
gText_Rom_20CD53: @ 0x0820CD53
	.string "エネコ『みゃあん?{EOS}"
	.if (. - gText_Rom_20CD53) > 0xa
	.error "gText_Rom_20CD53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CD53) < 0xa
	.space 0xa - (. - gText_Rom_20CD53)
	.endif
	@ analyzed canonical ROM range 0x0820CD5D-0x0820D0C2
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820CD5D: @ 0x0820CD5D
MapScripts_JP_0820CD5D: @ 0x0820CD5D
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_0820CDDE
	.byte 0x03
	.4byte EventScript_JP_0820CD68
	.byte 0
EventScript_JP_0820CD68: @ 0x0820CD68
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820CD74
	end
EventScript_JP_0820CD74: @ 0x0820CD74
	setobjectxyperm 0x0003, 0x0001, 0x0009
	setobjectmovementtype 0x0003, 0x0A
	setobjectxyperm 0x0005, 0x0000, 0x0008
	setobjectmovementtype 0x0005, 0x0A
	setobjectxyperm 0x0004, 0x0001, 0x0006
	setobjectmovementtype 0x0004, 0x0A
	setobjectxyperm 0x0001, 0x0003, 0x0004
	setobjectmovementtype 0x0001, 0x0A
	setobjectmovementtype 0x0002, 0x0A
	compare_var_to_value 0x409E, 0x0001
	goto_if 0x01, EventScript_JP_0820CDC6
	compare_var_to_value 0x409E, 0x0002
	goto_if 0x01, EventScript_JP_0820CDCE
	compare_var_to_value 0x409E, 0x0003
	goto_if 0x01, EventScript_JP_0820CDD6
	end
EventScript_JP_0820CDC6: @ 0x0820CDC6
	setobjectxyperm 0x0009, 0x000C, 0x0002
	end
EventScript_JP_0820CDCE: @ 0x0820CDCE
	setobjectxyperm 0x0009, 0x000D, 0x0003
	end
EventScript_JP_0820CDD6: @ 0x0820CDD6
	setobjectxyperm 0x0009, 0x000E, 0x0002
	end
EventScript_JP_0820CDDE: @ 0x0820CDDE
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x03, EventScript_JP_0820CDEA
	end
EventScript_JP_0820CDEA: @ 0x0820CDEA
	setmetatile 0x0002, 0x0005, 0x03E4, 0x0001
	return
.globl EventScript_JP_0820CDF4
EventScript_JP_0820CDF4: @ 0x0820CDF4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820CE40
	dotimebasedevents
	specialvar_ 0x800D, 0x0100
	buffernumberstring 0x00, 0x800D
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0820CE2E
	compare_var_to_value 0x800D, 0x0001
	call_if 0x04, EventScript_JP_0820CE37
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_0820CE2E: @ 0x0820CE2E
	loadword 0x00, gText_Rom_20D0C3
	callstd 0x04
	return
EventScript_JP_0820CE37: @ 0x0820CE37
	loadword 0x00, gText_Rom_20D0D8
	callstd 0x04
	return
EventScript_JP_0820CE40: @ 0x0820CE40
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	dotimebasedevents
	specialvar_ 0x800D, 0x0100
	buffernumberstring 0x00, 0x800D
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0820CE6D
	compare_var_to_value 0x800D, 0x0001
	call_if 0x04, EventScript_JP_0820CE76
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_0820CE6D: @ 0x0820CE6D
	loadword 0x00, gText_Rom_20D0FD
	callstd 0x04
	return
EventScript_JP_0820CE76: @ 0x0820CE76
	loadword 0x00, gText_Rom_20D126
	callstd 0x04
	return
.globl EventScript_JP_0820CE7F
EventScript_JP_0820CE7F: @ 0x0820CE7F
	lock
	faceplayer
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820CE96
	loadword 0x00, gText_Rom_20D15F
	callstd 0x04
	release
	end
EventScript_JP_0820CE96: @ 0x0820CE96
	loadword 0x00, gText_Rom_20D1DB
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
.globl EventScript_JP_0820CEAA
EventScript_JP_0820CEAA: @ 0x0820CEAA
	lock
	faceplayer
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820CEF6
	checkflag 0x00C0
	goto_if 0x01, EventScript_JP_0820CEEC
	loadword 0x00, gText_Rom_20D225
	callstd 0x04
	setorcopyvar 0x8000, 0x005D
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00C0
	loadword 0x00, gText_Rom_20D255
	callstd 0x04
	release
	end
EventScript_JP_0820CEEC: @ 0x0820CEEC
	loadword 0x00, gText_Rom_20D255
	callstd 0x04
	release
	end
EventScript_JP_0820CEF6: @ 0x0820CEF6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x00C0
	goto_if 0x01, EventScript_JP_0820CF35
	loadword 0x00, gText_Rom_20D281
	callstd 0x04
	setorcopyvar 0x8000, 0x005D
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00C0
	loadword 0x00, gText_Rom_20D2C2
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_0820CF35: @ 0x0820CF35
	loadword 0x00, gText_Rom_20D2C2
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
.globl EventScript_JP_0820CF49
EventScript_JP_0820CF49: @ 0x0820CF49
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_0820CF70
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820CF7A
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x00, EventScript_JP_0820CF70
	goto EventScript_JP_0820CF7A
	.byte 0x02
EventScript_JP_0820CF70: @ 0x0820CF70
	loadword 0x00, gText_Rom_20D2E6
	callstd 0x04
	release
	end
EventScript_JP_0820CF7A: @ 0x0820CF7A
	loadword 0x00, gText_Rom_20D316
	callstd 0x04
	release
	end
.globl EventScript_JP_0820CF84
EventScript_JP_0820CF84: @ 0x0820CF84
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_0820CFAB
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820CFC0
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x00, EventScript_JP_0820CFAB
	goto EventScript_JP_0820CFC0
	.byte 0x02
EventScript_JP_0820CFAB: @ 0x0820CFAB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_20D357
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_0820CFC0: @ 0x0820CFC0
	loadword 0x00, gText_Rom_20D38D
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
.globl EventScript_JP_0820CFD5
EventScript_JP_0820CFD5: @ 0x0820CFD5
	lock
	faceplayer
	loadword 0x00, gText_Rom_20D3DA
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
.globl EventScript_JP_0820CFEB
EventScript_JP_0820CFEB: @ 0x0820CFEB
	lockall
	loadword 0x00, gText_Rom_20D5FC
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_0820CFF6
EventScript_JP_0820CFF6: @ 0x0820CFF6
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x024A
	.2byte 0x0000
	.4byte gText_Rom_20D475 @ gText_Rom_20D475
	.4byte gText_Rom_20D497 @ gText_Rom_20D497
	loadword 0x00, gText_Rom_20D4A1
	callstd 0x06
	end
.globl EventScript_JP_0820D00D
EventScript_JP_0820D00D: @ 0x0820D00D
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0016
	.2byte 0x0000
	.4byte gText_Rom_20D4C0 @ gText_Rom_20D4C0
	.4byte gText_Rom_20D4E8 @ gText_Rom_20D4E8
	loadword 0x00, gText_Rom_20D503
	callstd 0x06
	end
.globl EventScript_JP_0820D024
EventScript_JP_0820D024: @ 0x0820D024
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x024B
	.2byte 0x0000
	.4byte gText_Rom_20D524 @ gText_Rom_20D524
	.4byte gText_Rom_20D55A @ gText_Rom_20D55A
	loadword 0x00, gText_Rom_20D574
	callstd 0x06
	end
.globl EventScript_JP_0820D03B
EventScript_JP_0820D03B: @ 0x0820D03B
	lock
	faceplayer
	checkflag 0x00BF
	goto_if 0x01, EventScript_JP_0820D08A
	loadword 0x00, gText_Rom_20D5A6
	callstd 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0074
	.2byte 0x0000
	.4byte gText_Rom_20D5C7 @ gText_Rom_20D5C7
	setflag 0x00BF
	moveobjectoffscreen 0x0009
	copyvar 0x8000, 0x800C
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0820D094
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0820D0A5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0820D0BE @ Movement_JP_0820D0BE
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setvar 0x409E, 0x0002
	release
	end
EventScript_JP_0820D08A: @ 0x0820D08A
	loadword 0x00, gText_Rom_20D5D0
	callstd 0x04
	release
	end
EventScript_JP_0820D094: @ 0x0820D094
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0820D0B6 @ Movement_JP_0820D0B6
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setvar 0x409E, 0x0001
	release
	end
EventScript_JP_0820D0A5: @ 0x0820D0A5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0820D0BA @ Movement_JP_0820D0BA
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setvar 0x409E, 0x0003
	release
	end
Movement_JP_0820D0B6: @ 0x0820D0B6
	@ object movement sequence
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end
Movement_JP_0820D0BA: @ 0x0820D0BA
	@ object movement sequence
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end
Movement_JP_0820D0BE: @ 0x0820D0BE
	@ object movement sequence
	face_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end
