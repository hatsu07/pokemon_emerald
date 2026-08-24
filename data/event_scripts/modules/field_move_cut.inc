	@ analyzed canonical ROM range 0x08256612-0x0825663A
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08256612: @ 0x08256612
.globl EventScript_JP_08256612
EventScript_JP_08256612: @ 0x08256612
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	dofieldeffect 0x0002
	waitstate
	goto EventScript_JP_0825661D
	.byte 0x02
EventScript_JP_0825661D: @ 0x0825661D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, FieldMoveCut_Movement_CutTree
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x800F
	releaseall
	end
FieldMoveCut_Movement_CutTree: @ 0x0825662C
	@ object movement sequence
	cut_tree
	step_end
EventScript_JP_0825662E: @ 0x0825662E
	loadword 0x00, FieldScriptText_25666B
	callstd 0x04
	releaseall
	end
EventScript_JP_08256638: @ 0x08256638
	closemessage
	releaseall
	end
