	.globl EventScriptData_JP_082465B5
EventScriptData_JP_082465B5: @ 0x082465B5
	@ Decoded event bytecode: exact ROM size 0x4
	.byte 0x25 @ special 0x0163; no matching SPECIAL_* constant found
	.2byte 0x0163
	end
	.globl EventScriptData_JP_082465B9
EventScriptData_JP_082465B9: @ 0x082465B9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ Decoded event bytecode: exact ROM size 0x4
	.byte 0x25 @ special 0x0164; no matching SPECIAL_* constant found
	.2byte 0x0164
	end
