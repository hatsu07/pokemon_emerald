	@ data/maps/EverGrandeCity_PokemonLeague_1F/scripts.inc:128 EverGrandeCity_PokemonLeague_1F_Text_GoForth
	.globl gText_Rom_211267
gText_Rom_211267: @ 0x08211267
	.string "トレーナーよ! おのれと\nポケモンを しんじて すすみたまえ!{EOS}"
	.if (. - gText_Rom_211267) > 0x20
	.error "gText_Rom_211267 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211267) < 0x20
	.space 0x20 - (. - gText_Rom_211267)
	.endif
	@ analyzed canonical ROM range 0x08211287-0x08211368
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_08211287: @ 0x08211287
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_082112A1
	.byte 0x04
	.4byte MapScriptTable_JP_08211292
	.byte 0
MapScriptTable_JP_08211292: @ 0x08211292
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0821129C
	.2byte 0
EventScript_JP_0821129C: @ 0x0821129C
	turnobject 0x00FF, 0x02
	end
MapScriptTable_JP_082112A1: @ 0x082112A1
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_082112AB
	.2byte 0
EventScript_JP_082112AB: @ 0x082112AB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0821135C @ Movement_JP_0821135C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0821135C @ Movement_JP_0821135C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_211369
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08211363 @ Movement_JP_08211363
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08211363 @ Movement_JP_08211363
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_2113B4
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x0014
	dofieldeffect 0x003E
	waitfieldeffect 0x003E
	delay 0x0028
	setvar 0x4001, 0x0001
	call 0x0824285B
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08211344
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08211350
	end
EventScript_JP_08211344: @ 0x08211344
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setrespawn 0x0001
	fadescreenspeed 0x01, 0x18
	@ event command: special
	.byte 0x25
	.2byte 0x0110
	waitstate
	releaseall
	end
EventScript_JP_08211350: @ 0x08211350
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setrespawn 0x0002
	fadescreenspeed 0x01, 0x18
	@ event command: special
	.byte 0x25
	.2byte 0x0110
	waitstate
	releaseall
	end
Movement_JP_0821135C: @ 0x0821135C
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
Movement_JP_08211363: @ 0x08211363
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
