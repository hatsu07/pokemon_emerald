	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:230 LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination
	.globl gText_Rom_206184
gText_Rom_206184: @ 0x08206184
	.string "この びじゅつかんも すっかり ミナモの\n……いや ホウエンちほうの\lかんこう めいしょに なったねえ!\pきいた はなしだと\nひとりの トレーナーが 2かいの えを\lそろえて くれた らしいよ!{EOS}"
	.if (. - gText_Rom_206184) > 0x62
	.error "gText_Rom_206184 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206184) < 0x62
	.space 0x62 - (. - gText_Rom_206184)
	.endif
	@ analyzed canonical ROM range 0x082061E6-0x08206496
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_LilycoveCity_LilycoveMuseum_2F_OnLoad_OnFrame: @ 0x082061E6
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_082061F1
	.byte 0x02
	.4byte gMapScriptConditionTable_LilycoveCity_LilycoveMuseum_2F_OnFrame
	.byte 0
EventScript_JP_082061F1: @ 0x082061F1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x00A0
	goto_if 0x01, EventScript_JP_08206237
	goto EventScript_JP_08206200
	.byte 0x02
EventScript_JP_08206200: @ 0x08206200
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x00A1
	goto_if 0x01, EventScript_JP_0820624F
	goto EventScript_JP_0820620F
	.byte 0x02
EventScript_JP_0820620F: @ 0x0820620F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x00A2
	goto_if 0x01, EventScript_JP_08206267
	goto EventScript_JP_0820621E
	.byte 0x02
EventScript_JP_0820621E: @ 0x0820621E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x00A3
	goto_if 0x01, EventScript_JP_0820627F
	goto EventScript_JP_0820622D
	.byte 0x02
EventScript_JP_0820622D: @ 0x0820622D
	checkflag 0x00A4
	goto_if 0x01, EventScript_JP_08206297
	end
EventScript_JP_08206237: @ 0x08206237
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setmetatile 0x000A, 0x0006, 0x025E, 0x0001
	setmetatile 0x000B, 0x0006, 0x025F, 0x0001
	goto EventScript_JP_08206200
	.byte 0x02
EventScript_JP_0820624F: @ 0x0820624F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setmetatile 0x0012, 0x0006, 0x025C, 0x0001
	setmetatile 0x0013, 0x0006, 0x025D, 0x0001
	goto EventScript_JP_0820620F
	.byte 0x02
EventScript_JP_08206267: @ 0x08206267
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setmetatile 0x000E, 0x000A, 0x0260, 0x0001
	setmetatile 0x000F, 0x000A, 0x0261, 0x0001
	goto EventScript_JP_0820621E
	.byte 0x02
EventScript_JP_0820627F: @ 0x0820627F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setmetatile 0x0006, 0x000A, 0x025A, 0x0001
	setmetatile 0x0007, 0x000A, 0x025B, 0x0001
	goto EventScript_JP_0820622D
	.byte 0x02
EventScript_JP_08206297: @ 0x08206297
	setmetatile 0x0002, 0x0006, 0x0262, 0x0001
	setmetatile 0x0003, 0x0006, 0x0263, 0x0001
	end
gMapScriptConditionTable_LilycoveCity_LilycoveMuseum_2F_OnFrame: @ 0x082062AA
	@ conditional map script table
	.2byte 0x4094, 0x0000
	.4byte EventScript_JP_082062B4
	.2byte 0
EventScript_JP_082062B4: @ 0x082062B4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte PetalburgCity_Ext_FacePlayer
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte Movement_JP_0820630D @ Movement_JP_0820630D
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_206497
	callstd 0x03
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_JP_0820630F @ Movement_JP_0820630F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte Movement_JP_0820630F @ Movement_JP_0820630F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_2064A9
	callstd 0x03
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte Movement_JP_0820630D @ Movement_JP_0820630D
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_20655D
	callstd 0x03
	copyvar 0x4094, 0x0001
	releaseall
	end
Movement_JP_0820630D: @ 0x0820630D
	@ object movement sequence
	walk_in_place_fastest_left
	step_end
Movement_JP_0820630F: @ 0x0820630F
	@ object movement sequence
	face_up
	delay_16
	step_end
.globl EventScript_JP_08206312
EventScript_JP_08206312: @ 0x08206312
	lockall
	checkflag 0x00EC
	goto_if 0x01, EventScript_JP_082063CD
	specialvar_ 0x8004, 0x0089
	copyvar 0x8000, 0x8004
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08206366
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08206366
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08206366
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08206366
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_0820636F
	loadword 0x00, gText_Rom_206607
	callstd 0x02
	end
EventScript_JP_08206366: @ 0x08206366
	loadword 0x00, gText_Rom_206636
	callstd 0x02
	end
EventScript_JP_0820636F: @ 0x0820636F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_206681
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_JP_0820630F @ Movement_JP_0820630F
	loadword 0x00, gText_Rom_20668E
	callstd 0x04
	goto EventScript_JP_08206396
	.byte 0x02
EventScript_JP_08206396: @ 0x08206396
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte PetalburgCity_Ext_FacePlayer
	loadword 0x00, gText_Rom_20670F
	callstd 0x04
	setorcopyvar 0x8000, 0x002C
	callstd 0x07
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082063BD
	setflag 0x00EC
	closemessage
	releaseall
	end
EventScript_JP_082063BD: @ 0x082063BD
	call 0x082430FD
	loadword 0x00, gText_Rom_206729
	callstd 0x04
	closemessage
	releaseall
	end
EventScript_JP_082063CD: @ 0x082063CD
	loadword 0x00, gText_Rom_206743
	callstd 0x02
	releaseall
	end
.globl EventScript_JP_082063D7
EventScript_JP_082063D7: @ 0x082063D7
	lockall
	checkflag 0x00A2
	goto_if 0x01, EventScript_JP_0820646D
	loadword 0x00, gText_Rom_206788
	callstd 0x03
	end
.globl EventScript_JP_082063EA
EventScript_JP_082063EA: @ 0x082063EA
	lockall
	checkflag 0x00A4
	goto_if 0x01, EventScript_JP_08206489
	loadword 0x00, gText_Rom_20679E
	callstd 0x03
	end
.globl EventScript_JP_082063FD
EventScript_JP_082063FD: @ 0x082063FD
	lockall
	checkflag 0x00A0
	goto_if 0x01, EventScript_JP_08206451
	loadword 0x00, gText_Rom_2067C7
	callstd 0x03
	end
.globl EventScript_JP_08206410
EventScript_JP_08206410: @ 0x08206410
	lockall
	checkflag 0x00A1
	goto_if 0x01, EventScript_JP_0820645F
	loadword 0x00, gText_Rom_2067B3
	callstd 0x03
	end
.globl EventScript_JP_08206423
EventScript_JP_08206423: @ 0x08206423
	lockall
	checkflag 0x00A3
	goto_if 0x01, EventScript_JP_0820647B
	loadword 0x00, gText_Rom_2067DB
	callstd 0x03
	end
.globl EventScript_JP_08206436
EventScript_JP_08206436: @ 0x08206436
	loadword 0x00, gText_Rom_206803
	callstd 0x02
	end
.globl EventScript_JP_0820643F
EventScript_JP_0820643F: @ 0x0820643F
	loadword 0x00, gText_Rom_20684E
	callstd 0x02
	end
.globl EventScript_JP_08206448
EventScript_JP_08206448: @ 0x08206448
	loadword 0x00, gText_Rom_206898
	callstd 0x02
	end
EventScript_JP_08206451: @ 0x08206451
	loadword 0x00, gText_Rom_2067F2
	callstd 0x03
	fadescreen 0x01
	drawcontestwinner 0x09
	releaseall
	end
EventScript_JP_0820645F: @ 0x0820645F
	loadword 0x00, gText_Rom_2067F2
	callstd 0x03
	fadescreen 0x01
	drawcontestwinner 0x0A
	releaseall
	end
EventScript_JP_0820646D: @ 0x0820646D
	loadword 0x00, gText_Rom_2067F2
	callstd 0x03
	fadescreen 0x01
	drawcontestwinner 0x0B
	releaseall
	end
EventScript_JP_0820647B: @ 0x0820647B
	loadword 0x00, gText_Rom_2067F2
	callstd 0x03
	fadescreen 0x01
	drawcontestwinner 0x0C
	releaseall
	end
EventScript_JP_08206489: @ 0x08206489
	loadword 0x00, gText_Rom_2067F2
	callstd 0x03
	fadescreen 0x01
	drawcontestwinner 0x0D
	releaseall
	end
