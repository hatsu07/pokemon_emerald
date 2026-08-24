	@ analyzed canonical ROM range 0x08256797-0x082567C5
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08256797: @ 0x08256797
.globl EventScript_JP_08256797
EventScript_JP_08256797: @ 0x08256797
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	dofieldeffect 0x0028
	waitstate
	goto EventScript_JP_082567A2
	.byte 0x02
EventScript_082567A2: @ 0x082567A2
EventScript_JP_082567A2: @ 0x082567A2
	setflag 0x0889
	loadword 0x00, FieldScriptText_2567F3
	callstd 0x04
	releaseall
	end
EventScript_JP_082567AF: @ 0x082567AF
	loadword 0x00, FieldScriptText_256824
	callstd 0x04
	releaseall
	end
EventScript_JP_082567B9: @ 0x082567B9
	loadword 0x00, FieldScriptText_256843
	callstd 0x04
	releaseall
	end
EventScript_JP_082567C3: @ 0x082567C3
	closemessage
	releaseall
	end
