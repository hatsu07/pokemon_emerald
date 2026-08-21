	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:153 SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory
	.globl gText_Rom_20FD23
gText_Rom_20FD23: @ 0x0820FD23
	.string "しじょう さいだいの ハスボー!\n{STR_VAR_2}の {STR_VAR_3}cmのやつ!\pタネボーより おおきい ハスボー\nいつでも ぼしゅうちゅう!{EOS}"
	.if (. - gText_Rom_20FD23) > 0x3d
	.error "gText_Rom_20FD23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FD23) < 0x3d
	.space 0x3d - (. - gText_Rom_20FD23)
	.endif
	@ analyzed canonical ROM range 0x0820FD60-0x0820FF52
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0820FD60: @ 0x0820FD60
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820FD6B
	.byte 0x02
	.4byte MapScriptTable_JP_0820FDAA
	.byte 0
EventScript_JP_0820FD6B: @ 0x0820FD6B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0010
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0820FD8A
	compare_var_to_value 0x40C0, 0x0000
	call_if 0x05, EventScript_JP_0820FD9E
	end
EventScript_JP_0820FD8A: @ 0x0820FD8A
	setvar 0x4001, 0x0001
	setobjectxyperm 0x0001, 0x0003, 0x0002
	setobjectmovementtype 0x0001, 0x08
	setmaplayoutindex 0x01B9
	return
EventScript_JP_0820FD9E: @ 0x0820FD9E
	setobjectxyperm 0x0001, 0x0002, 0x0002
	setobjectmovementtype 0x0001, 0x0A
	return
MapScriptTable_JP_0820FDAA: @ 0x0820FDAA
	@ conditional map script table
	.2byte 0x40C0, 0x0001
	.4byte EventScript_JP_0820FDC4
	.2byte 0x40C0, 0x0002
	.4byte EventScript_JP_0820FDC4
	.2byte 0x40C0, 0x0003
	.4byte EventScript_JP_0820FDC4
	.2byte 0
EventScript_JP_0820FDC4: @ 0x0820FDC4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte Movement_JP_0820FE2C @ Movement_JP_0820FE2C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_JP_0820FE2E @ Movement_JP_0820FE2E
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	moveobjectoffscreen 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	compare_var_to_value 0x40C0, 0x0001
	call_if 0x01, EventScript_JP_0820FE11
	compare_var_to_value 0x40C0, 0x0002
	call_if 0x01, EventScript_JP_0820FE1A
	compare_var_to_value 0x40C0, 0x0003
	call_if 0x01, EventScript_JP_0820FE23
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	setvar 0x40C0, 0x0000
	releaseall
	end
EventScript_JP_0820FE11: @ 0x0820FE11
	loadword 0x00, gText_Rom_2100DA
	callstd 0x04
	return
EventScript_JP_0820FE1A: @ 0x0820FE1A
	loadword 0x00, gText_Rom_210105
	callstd 0x04
	return
EventScript_JP_0820FE23: @ 0x0820FE23
	loadword 0x00, gText_Rom_2100AA
	callstd 0x04
	return
Movement_JP_0820FE2C: @ 0x0820FE2C
	@ object movement sequence
	walk_down
	step_end
Movement_JP_0820FE2E: @ 0x0820FE2E
	@ object movement sequence
	walk_right
	walk_in_place_fastest_down
	step_end
.globl EventScript_JP_0820FE31
EventScript_JP_0820FE31: @ 0x0820FE31
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8004, 0x0010
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820FE5B
	compare_var_to_value 0x4001, 0x0001
	goto_if 0x01, EventScript_JP_0820FE65
	loadword 0x00, gText_Rom_20FF53
	callstd 0x04
	release
	end
EventScript_JP_0820FE5B: @ 0x0820FE5B
	loadword 0x00, gText_Rom_20FF53
	callstd 0x04
	release
	end
EventScript_JP_0820FE65: @ 0x0820FE65
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: special
	.byte 0x25
	.2byte 0x011C
	loadword 0x00, gText_Rom_20FFC6
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820FEEF
	call EventScript_JP_0820FEFC
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820FEEF
	loadword 0x00, gText_Rom_21005E
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820FEEF
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	call 0x082423E9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820FEEF
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: special
	.byte 0x25
	.2byte 0x00F8
	loadword 0x00, gText_Rom_210081
	callstd 0x04
	closemessage
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_0820FF0B
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_0820FF1D
	compare_var_to_value 0x800C, 0x0003
	call_if 0x01, EventScript_JP_0820FF2F
	@ event command: warp
	.byte 0x39
	.byte 0x0F
	.byte 0x0E
	.byte 0xFF
	.2byte 0x0003
	.2byte 0x0001
	.byte 0x27, 0x6C, 0x02
EventScript_JP_0820FEEF: @ 0x0820FEEF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	loadword 0x00, gText_Rom_20FFFA
	callstd 0x04
	release
	end
EventScript_JP_0820FEFC: @ 0x0820FEFC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_21001A
	callstd 0x04
	fadescreen 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x0029
	waitstate
	return
EventScript_JP_0820FF0B: @ 0x0820FF0B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte Movement_JP_0820FF4D @ Movement_JP_0820FF4D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte Movement_JP_0820FF41 @ Movement_JP_0820FF41
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_0820FF1D: @ 0x0820FF1D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte Movement_JP_0820FF50 @ Movement_JP_0820FF50
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte Movement_JP_0820FF45 @ Movement_JP_0820FF45
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_0820FF2F: @ 0x0820FF2F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte Movement_JP_0820FF4D @ Movement_JP_0820FF4D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte Movement_JP_0820FF49 @ Movement_JP_0820FF49
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
Movement_JP_0820FF41: @ 0x0820FF41
	@ object movement sequence
	delay_16
	walk_up
	walk_up
	step_end
Movement_JP_0820FF45: @ 0x0820FF45
	@ object movement sequence
	delay_16
	walk_right
	walk_up
	step_end
Movement_JP_0820FF49: @ 0x0820FF49
	@ object movement sequence
	delay_16
	walk_left
	walk_up
	step_end
Movement_JP_0820FF4D: @ 0x0820FF4D
	@ object movement sequence
	walk_left
	walk_in_place_fastest_right
	step_end
Movement_JP_0820FF50: @ 0x0820FF50
	@ object movement sequence
	walk_right
	walk_in_place_fastest_left
	step_end
