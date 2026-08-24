	.globl EventScript_JP_08257A89
	@ analyzed canonical ROM range 0x08257A89-0x08257A97
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_08257A89: @ 0x08257A89
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, FieldScriptText_257E82
	callstd 0x04
	@ event command: special
	special EggHatch
	waitstate
	releaseall
	end
