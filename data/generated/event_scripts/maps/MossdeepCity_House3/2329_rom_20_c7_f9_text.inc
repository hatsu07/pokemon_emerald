	@ data/maps/MossdeepCity_House3/scripts.inc:40 MossdeepCity_House3_Text_GoAfterSeafloorPokemon
	.globl gText_Rom_20C7F9
gText_Rom_20C7F9: @ 0x0820C7F9
	.string "すごいつりざおで\nかいていの ポケモンも つりあげろお!{EOS}"
	.if (. - gText_Rom_20C7F9) > 0x1d
	.error "gText_Rom_20C7F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C7F9) < 0x1d
	.space 0x1d - (. - gText_Rom_20C7F9)
	.endif
	@ analyzed canonical ROM range 0x0820C816-0x0820C9C7
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0820C816: @ 0x0820C816
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_0820C826
	.byte 0x03
	.4byte EventScript_JP_0820C83A
	.byte 0x02
	.4byte MapScriptTable_JP_0820C852
	.byte 0
EventScript_JP_0820C826: @ 0x0820C826
	checkflag 0x0864
	call_if 0x00, EventScript_JP_0820C830
	end
EventScript_JP_0820C830: @ 0x0820C830
	setmetatile 0x0006, 0x0004, 0x02F1, 0x0001
	return
EventScript_JP_0820C83A: @ 0x0820C83A
	compare_var_to_value 0x40C6, 0x0002
	call_if 0x01, EventScript_JP_0820C846
	end
EventScript_JP_0820C846: @ 0x0820C846
	setobjectxyperm 0x0001, 0x0006, 0x0005
	setobjectmovementtype 0x0001, 0x07
	return
MapScriptTable_JP_0820C852: @ 0x0820C852
	@ conditional map script table
	.2byte 0x40C6, 0x0001
	.4byte EventScript_JP_0820C85C
	.2byte 0
EventScript_JP_0820C85C: @ 0x0820C85C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	playse 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0820C8C5 @ Movement_JP_0820C8C5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_20C9C8
	callstd 0x04
	setorcopyvar 0x8000, 0x015A
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x007B
	setflag 0x012E
	loadword 0x00, gText_Rom_20CA36
	callstd 0x04
	closemessage
	delay 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0820C8CD @ Movement_JP_0820C8CD
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setflag 0x0314
	setflag 0x03AD
	setvar 0x40C6, 0x0002
	releaseall
	end
Movement_JP_0820C8C5: @ 0x0820C8C5
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_down
	step_end
Movement_JP_0820C8CD: @ 0x0820C8CD
	@ object movement sequence
	walk_up
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
.globl EventScript_JP_0820C8D3
EventScript_JP_0820C8D3: @ 0x0820C8D3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_20CAF7
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820C8ED
	goto EventScript_JP_0820C8F7
	.byte 0x02
EventScript_JP_0820C8ED: @ 0x0820C8ED
	loadword 0x00, gText_Rom_20CB5D
	callstd 0x04
	releaseall
	end
EventScript_JP_0820C8F7: @ 0x0820C8F7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4001, 0x018E
	givemon 0x018E, 0x05, 0x0000, 0x00000000, 0x00000000, 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820C927
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820C94F
	goto 0x0824423B
	.byte 0x02
EventScript_JP_0820C927: @ 0x0820C927
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_0820C97D
	loadword 0x00, gText_Rom_243EDB
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820C993
	call 0x082441B5
	call 0x08243460
	goto EventScript_JP_0820C993
	.byte 0x02
EventScript_JP_0820C94F: @ 0x0820C94F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_0820C97D
	loadword 0x00, gText_Rom_243EDB
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820C972
	call 0x082441C1
	goto EventScript_JP_0820C972
	.byte 0x02
EventScript_JP_0820C972: @ 0x0820C972
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call 0x082441CA
	goto EventScript_JP_0820C993
	.byte 0x02
EventScript_JP_0820C97D: @ 0x0820C97D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferspeciesname 0x01, 0x018E
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0002
	playfanfare 0x0172
	message gText_Rom_20CB39
	waitmessage
	waitfanfare
	bufferspeciesname 0x00, 0x018E
	return
EventScript_JP_0820C993: @ 0x0820C993
	setflag 0x03C8
	setflag 0x012A
	releaseall
	end
.globl EventScript_JP_0820C99B
EventScript_JP_0820C99B: @ 0x0820C99B
	loadword 0x00, gText_Rom_20CC3F
	callstd 0x03
	end
.globl EventScript_JP_0820C9A4
EventScript_JP_0820C9A4: @ 0x0820C9A4
	loadword 0x00, gText_Rom_20CAAF
	callstd 0x02
	end
.globl EventScript_JP_0820C9AD
EventScript_JP_0820C9AD: @ 0x0820C9AD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_20CB77
	callstd 0x04
	releaseall
	end
	.byte 0x1A, 0x00, 0x80, 0x5A, 0x01, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x01, 0x29, 0x7B, 0x00, 0x02
