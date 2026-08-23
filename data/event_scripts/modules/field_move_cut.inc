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
	.byte 0x4F
	.2byte 0x800F
	.4byte FieldMoveCut_Movement_CutTree @ FieldMoveCut_Movement_CutTree
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x800F
	releaseall
	end
FieldMoveCut_Movement_CutTree: @ 0x0825662C
	@ object movement sequence
	cut_tree
	step_end
EventScript_JP_0825662E: @ 0x0825662E
	loadword 0x00, gText_Rom_25666B
	callstd 0x04
	releaseall
	end
EventScript_JP_08256638: @ 0x08256638
	closemessage
	releaseall
	end
