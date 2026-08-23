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
	loadword 0x00, gText_Rom_256733
	callstd 0x04
	releaseall
	end
EventScript_JP_0825670D: @ 0x0825670D
	closemessage
	releaseall
	end
