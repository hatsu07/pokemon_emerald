	.globl gText_Rom_2106BA
	.set gText_Rom_2106BA, gText_Rom_210691 + 0x29
	@ Replaced baserom.gba range: offset=0x2106BE, size=0xA2
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
	.string "サ$"
	.byte 0x00, 0x02, 0x02
MapScriptTable_JP_082106DD: @ 0x082106DD
	@ conditional map script table
	.2byte 0x409C, 0x0003
	.4byte EventScript_JP_082106E7
	.2byte 0
EventScript_JP_082106E7: @ 0x082106E7
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x082434F8
	@ event command: setvar
	.byte 0x16
	.2byte 0x409C
	.2byte 0x0004
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082106F4: @ 0x082106F4
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04FE
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08210709 @ EventScript_JP_08210709
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x409C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0821070F @ EventScript_JP_0821070F
	@ event command: end
	.byte 0x02
EventScript_JP_08210709: @ 0x08210709
	@ event command: call
	.byte 0x04
	.4byte 0x0824353F
	@ event command: return
	.byte 0x03
EventScript_JP_0821070F: @ 0x0821070F
	@ event command: call
	.byte 0x04
	.4byte 0x082435E2
	@ event command: return
	.byte 0x03
EventScript_JP_08210715: @ 0x08210715
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04FE
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0821073C @ EventScript_JP_0821073C
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01C2
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210760 @ gText_Rom_210760
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0108
	.2byte 0x0000
	.4byte 0x08210814 @ gText_Rom_210814
	@ event command: goto
	.byte 0x05
	.4byte 0x08210746 @ EventScript_JP_08210746
	.byte 0x02
EventScript_JP_0821073C: @ 0x0821073C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210822 @ gText_Rom_210822
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08210746: @ 0x08210746
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00AA
	@ event command: setflag
	.byte 0x29
	.2byte 0x04FE
	@ event command: call
	.byte 0x04
	.4byte 0x0824347B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210822 @ gText_Rom_210822
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
