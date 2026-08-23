	@ analyzed canonical ROM range 0x082568EA-0x08256934
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082568EA: @ 0x082568EA
.globl EventScript_JP_082568EA
EventScript_JP_082568EA: @ 0x082568EA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkpartymove 0x0123
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScript_JP_08256929
	bufferpartymonnick 0x00, 0x800D
	setfieldeffectargument 0x00, 0x800D
	setfieldeffectargument 0x01, 0x0001
	loadword 0x00, gText_Rom_2569A0
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08256933
	loadword 0x00, gText_Rom_2569B8
	callstd 0x04
	dofieldeffect 0x002C
	goto EventScript_JP_08256933
	.byte 0x02
EventScript_08256929: @ 0x08256929
EventScript_JP_08256929: @ 0x08256929
	loadword 0x00, gText_Rom_256985
	callstd 0x04
	releaseall
	end
EventScript_08256933: @ 0x08256933
EventScript_JP_08256933: @ 0x08256933
	releaseall
	end
	@ analyzed canonical ROM range 0x08256935-0x08256984
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08256935: @ 0x08256935
.globl EventScript_JP_08256935
EventScript_JP_08256935: @ 0x08256935
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkpartymove 0x0123
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScript_JP_08256974
	bufferpartymonnick 0x00, 0x800D
	setfieldeffectargument 0x00, 0x800D
	setfieldeffectargument 0x01, 0x0001
	loadword 0x00, gText_Rom_2569F2
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08256983
	loadword 0x00, gText_Rom_2569B8
	callstd 0x04
	dofieldeffect 0x002C
	goto EventScript_JP_08256983
	.byte 0x02
EventScript_08256974: @ 0x08256974
EventScript_JP_08256974: @ 0x08256974
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_2569CA
	callstd 0x04
	goto EventScript_JP_08256983
	.byte 0x02
EventScript_08256983: @ 0x08256983
EventScript_JP_08256983: @ 0x08256983
	releaseall
	end
