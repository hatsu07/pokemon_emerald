	.globl gText_Rom_2106BA
	.set gText_Rom_2106BA, gText_Rom_210691 + 0x29
	@ ANALYSIS: SOURCE_RANGE offset=0x2106BE, size=0xA2
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_082106BE: @ 0x082106BE
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_082106DD
	.byte 0x01
	.4byte EventScript_JP_082106F4
	.byte 0x04
	.4byte MapScriptTable_JP_08210223
	.byte 0
	.byte 0x01, 0x40, 0x00, 0x00, 0xD8, 0x06, 0x21, 0x08, 0x00, 0x00
EventText_JP_082106D8: @ 0x082106D8
	.string "サ{EOS}"
	.byte 0x00, 0x02, 0x02
MapScriptTable_JP_082106DD: @ 0x082106DD
	@ conditional map script table
	.2byte 0x409C, 0x0003
	.4byte EventScript_JP_082106E7
	.2byte 0
EventScript_JP_082106E7: @ 0x082106E7
	lockall
	call 0x082434F8
	setvar 0x409C, 0x0004
	releaseall
	end
EventScript_JP_082106F4: @ 0x082106F4
	checkflag 0x04FE
	call_if 0x01, EventScript_JP_08210709
	compare_var_to_value 0x409C, 0x0004
	call_if 0x01, EventScript_JP_0821070F
	end
EventScript_JP_08210709: @ 0x08210709
	call 0x0824353F
	return
EventScript_JP_0821070F: @ 0x0821070F
	call 0x082435E2
	return
.globl EventScript_JP_08210715
EventScript_JP_08210715: @ 0x08210715
	lock
	faceplayer
	checkflag 0x04FE
	goto_if 0x01, EventScript_JP_0821073C
	playbgm 0x01C2, 0x00
	loadword 0x00, gText_Rom_210760
	callstd 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0108
	.2byte 0x0000
	.4byte gText_Rom_210814 @ gText_Rom_210814
	goto EventScript_JP_08210746
	.byte 0x02
EventScript_JP_0821073C: @ 0x0821073C
	loadword 0x00, gText_Rom_210822
	callstd 0x04
	release
	end
EventScript_JP_08210746: @ 0x08210746
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00AA
	setflag 0x04FE
	call 0x0824347B
	loadword 0x00, gText_Rom_210822
	callstd 0x04
	release
	end
