	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:432 PlayersHouse_1F_Text_StillUnknownPokemon
	.globl gText_Rom_1EFF72
gText_Rom_1EFF72: @ 0x081EFF72
	.string "ママ『へえー まだまだ\nしられていない ポケモンは いるのねえ{EOS}"
	.if (. - gText_Rom_1EFF72) > 0x20
	.error "gText_Rom_1EFF72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFF72) < 0x20
	.space 0x20 - (. - gText_Rom_1EFF72)
	.endif
	@ analyzed canonical ROM range 0x081EFF92-0x081F0216
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_LittlerootTown_BrendansHouse_1F_OnTransition_OnWarpIntoMap: @ 0x081EFF92
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081EFF9D
	.byte 0x04
	.4byte gMapScriptConditionTable_LittlerootTown_BrendansHouse_1F_OnWarpIntoMap
	.byte 0
EventScript_JP_081EFF9D: @ 0x081EFF9D
	compare_var_to_value 0x408D, 0x0002
	call_if 0x00, EventScript_JP_081F0006
	compare_var_to_value 0x408D, 0x0003
	call_if 0x04, EventScript_JP_081EFFC9
	compare_var_to_value 0x4092, 0x0004
	call_if 0x01, EventScript_JP_08257EE8
	call 0x08245D90
	setvar 0x4089, 0x0000
	end
EventScript_JP_081EFFC9: @ 0x081EFFC9
	checkflag 0x0124
	goto_if 0x01, EventScript_JP_081EFFE2
	compare_var_to_value 0x4084, 0x0002
	goto_if 0x04, EventScript_JP_081F0005
	goto EventScript_JP_081EFFE2
EventScript_JP_081EFFE2: @ 0x081EFFE2
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F0005
	compare_var_to_value 0x40D3, 0x0002
	goto_if 0x04, EventScript_JP_081F0B55
	setobjectxyperm 0x0001, 0x0000, 0x0002
	setobjectmovementtype 0x0001, 0x07
	return
EventScript_JP_081F0005: @ 0x081F0005
	return
EventScript_JP_081F0006: @ 0x081F0006
	checkplayergender
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F0013
	return
EventScript_JP_081F0013: @ 0x081F0013
	setvar 0x408D, 0x0002
	return
gMapScriptConditionTable_LittlerootTown_BrendansHouse_1F_OnWarpIntoMap: @ 0x081F0019
	@ conditional map script table
	.2byte 0x4089, 0x0000
	.4byte EventScript_JP_081F0023
	.2byte 0
EventScript_JP_081F0023: @ 0x081F0023
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08245DBB
	end
.globl EventScript_JP_081F0030
EventScript_JP_081F0030: @ 0x081F0030
	lockall
	compare_var_to_value 0x408D, 0x0002
	goto_if 0x01, EventScript_JP_081F0046
	loadword 0x00, gText_Rom_1F10B0
	callstd 0x04
	releaseall
	end
EventScript_JP_081F0046: @ 0x081F0046
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	delay 0x000A
	@ event command: addobject
	.byte 0x55
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_JP_081F016B @ Movement_JP_081F016B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	playse 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x000A
	playbgm 0x01A5, 0x01
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_081F00B6
	compare_var_to_value 0x800C, 0x0001
	call_if 0x01, EventScript_JP_081F00E5
	compare_var_to_value 0x800C, 0x0003
	call_if 0x01, EventScript_JP_081F0114
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_081F0143
	setvar 0x408D, 0x0003
	setflag 0x0331
	clearflag 0x02F8
	setvar 0x4050, 0x0001
	savebgm 0x0000
	fadedefaultbgm
	releaseall
	end
EventScript_JP_081F00B6: @ 0x081F00B6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_JP_081F016F @ Movement_JP_081F016F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1F0F62
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte Movement_JP_081F017E @ Movement_JP_081F017E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_JP_081F0175 @ Movement_JP_081F0175
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_081F00E5: @ 0x081F00E5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_JP_081F0186 @ Movement_JP_081F0186
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1F0F62
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte Movement_JP_081F0191 @ Movement_JP_081F0191
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_JP_081F018A @ Movement_JP_081F018A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_081F0114: @ 0x081F0114
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_JP_081F0197 @ Movement_JP_081F0197
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1F0F62
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte Movement_JP_081F01A5 @ Movement_JP_081F01A5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_JP_081F019C @ Movement_JP_081F019C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_081F0143: @ 0x081F0143
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_JP_081F01AC @ Movement_JP_081F01AC
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1F0F62
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_JP_081F01B3 @ Movement_JP_081F01B3
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
Movement_JP_081F016B: @ 0x081F016B
	@ object movement sequence
	walk_down
	walk_down
	walk_in_place_fastest_left
	step_end
Movement_JP_081F016F: @ 0x081F016F
	@ object movement sequence
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	step_end
Movement_JP_081F0175: @ 0x081F0175
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end
Movement_JP_081F017E: @ 0x081F017E
	@ object movement sequence
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
Movement_JP_081F0186: @ 0x081F0186
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	step_end
Movement_JP_081F018A: @ 0x081F018A
	@ object movement sequence
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end
Movement_JP_081F0191: @ 0x081F0191
	@ object movement sequence
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
Movement_JP_081F0197: @ 0x081F0197
	@ object movement sequence
	walk_left
	walk_left
	walk_down
	walk_in_place_fastest_left
	step_end
Movement_JP_081F019C: @ 0x081F019C
	@ object movement sequence
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end
Movement_JP_081F01A5: @ 0x081F01A5
	@ object movement sequence
	delay_8
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
Movement_JP_081F01AC: @ 0x081F01AC
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_down
	step_end
Movement_JP_081F01B3: @ 0x081F01B3
	@ object movement sequence
	walk_up
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end
	.byte 0x14, 0x14, 0x27, 0xFE
.globl EventScript_JP_081F01BC
EventScript_JP_081F01BC: @ 0x081F01BC
	lockall
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F01D5
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F01FB
	end
EventScript_JP_081F01D5: @ 0x081F01D5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00D6
	playse 0x0004
	loadword 0x00, gText_Rom_243B10
	callstd 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x00F9
	waitstate
	releaseall
	end
EventScript_JP_081F01EE: @ 0x081F01EE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	playse 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00D7
	releaseall
	end
EventScript_JP_081F01FB: @ 0x081F01FB
	loadword 0x00, gText_Rom_243AA2
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_081F0205
EventScript_JP_081F0205: @ 0x081F0205
	loadword 0x00, gText_Rom_1F02A6
	callstd 0x03
	end
.globl EventScript_JP_081F020E
EventScript_JP_081F020E: @ 0x081F020E
	loadword 0x00, gText_Rom_1F0328
	callstd 0x03
	end
