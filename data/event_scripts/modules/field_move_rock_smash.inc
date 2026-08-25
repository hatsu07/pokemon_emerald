	@ analyzed canonical ROM range 0x0825667C-0x082566C5
	@ semantic recovery: script_data; byte-verified against linked ROM
.globl EventScript_RockSmash
EventScript_RockSmash: @ 0x0825667C
lockall
	checkflag 0x0869
	goto_if 0x00, EventScript_JP_08256703
	checkpartymove 0x00F9
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScript_JP_08256703
	setfieldeffectargument 0x00, 0x800D
	bufferpartymonnick 0x00, 0x800D
	buffermovename 0x01, 0x00F9
	loadword 0x00, FieldScriptText_256710
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0825670D
	loadword 0x00, FieldScriptText_25665C
	callstd 0x04
	closemessage
	dofieldeffect 0x0025
	waitstate
	goto EventScript_JP_082566D1
	.byte 0x02
	@ analyzed canonical ROM range 0x082566C6-0x0825670F
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082566C6: @ 0x082566C6
.globl EventScript_JP_082566C6
EventScript_JP_082566C6: @ 0x082566C6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	dofieldeffect 0x0025
	waitstate
	goto EventScript_JP_082566D1
	.byte 0x02
EventScript_JP_082566D1: @ 0x082566D1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, FieldMoveRockSmash_Movement_RockSmashBreak
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x800F
	specialvar_ 0x800D, 0x0129
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082566FF
	@ event command: special
	special RockSmashWildEncounter
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082566FF
	waitstate
	releaseall
	end
EventScript_JP_082566FF: @ 0x082566FF
	releaseall
	end
FieldMoveRockSmash_Movement_RockSmashBreak: @ 0x08256701
	@ object movement sequence
	rock_smash_break
	step_end
EventScript_JP_08256703: @ 0x08256703
	loadword 0x00, FieldScriptText_256733
	callstd 0x04
	releaseall
	end
EventScript_JP_0825670D: @ 0x0825670D
	closemessage
	releaseall
	end
