	.globl gText_Rom_226D86
	.set gText_Rom_226D86, gText_Rom_226D61 + 0x25
	.globl gText_Rom_226D88
	.set gText_Rom_226D88, gText_Rom_226D61 + 0x27
	@ Replaced baserom.gba range: offset=0x226D8C, size=0x6D5
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_08226D8C: @ 0x08226D8C
	@ map script dispatch table
	.byte 0x05
	.4byte EventScript_JP_08226D9C
	.byte 0x02
	.4byte MapScriptTable_JP_08226DB9
	.byte 0x04
	.4byte MapScriptTable_JP_08226DA5
	.byte 0
EventScript_JP_08226D9C: @ 0x08226D9C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0015
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: end
	.byte 0x02
MapScriptTable_JP_08226DA5: @ 0x08226DA5
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08226DAF
	.2byte 0
EventScript_JP_08226DAF: @ 0x08226DAF
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
MapScriptTable_JP_08226DB9: @ 0x08226DB9
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08226DE3
	.2byte 0x4000, 0x0001
	.4byte EventScript_JP_08226DEC
	.2byte 0x4000, 0x0002
	.4byte EventScript_JP_08226FA3
	.2byte 0x4000, 0x0003
	.4byte EventScript_JP_08226E45
	.2byte 0x4000, 0x0004
	.4byte EventScript_JP_08226EEA
	.2byte 0
EventScript_JP_08226DE3: @ 0x08226DE3
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: end
	.byte 0x02
EventScript_JP_08226DEC: @ 0x08226DEC
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082277D7 @ gText_Rom_2277D7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0006
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08226E45: @ 0x08226E45
	@ event command: call
	.byte 0x04
	.4byte 0x08221FB3
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000A
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226E6B @ EventScript_JP_08226E6B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227828 @ gText_Rom_227828
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08226E73 @ EventScript_JP_08226E73
EventScript_JP_08226E6B: @ 0x08226E6B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227CCA @ gText_Rom_227CCA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_08226E73: @ 0x08226E73
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227D04 @ gText_Rom_227D04
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822189E @ gText_Rom_22189E
	@ event command: callstd
	.byte 0x09
	.byte 0x09
	@ event command: message
	.byte 0x67
	.4byte 0x082278A7 @ gText_Rom_2278A7
	@ event command: waitmessage
	.byte 0x66
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0006
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x08226F3B @ EventScript_JP_08226F3B
EventScript_JP_08226EEA: @ 0x08226EEA
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822789C @ gText_Rom_22789C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: message
	.byte 0x67
	.4byte 0x082278A7 @ gText_Rom_2278A7
	@ event command: waitmessage
	.byte 0x66
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0006
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: special
	.byte 0x25
	.2byte 0x0000
EventScript_JP_08226F3B: @ 0x08226F3B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: call
	.byte 0x04
	.4byte 0x0821F921
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226F93 @ EventScript_JP_08226F93
	@ event command: message
	.byte 0x67
	.4byte 0x08227D2E @ gText_Rom_227D2E
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x14
	.byte 0x08
	.byte 0x5E
	.byte 0x01
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226F93 @ EventScript_JP_08226F93
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226F8E @ EventScript_JP_08226F8E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226F93 @ EventScript_JP_08226F93
EventScript_JP_08226F8E: @ 0x08226F8E
	@ event command: call
	.byte 0x04
	.4byte 0x0821F8F5
EventScript_JP_08226F93: @ 0x08226F93
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082274C6 @ gText_Rom_2274C6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08226FA3: @ 0x08226FA3
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082278C2 @ gText_Rom_2278C2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: message
	.byte 0x67
	.4byte 0x082278CE @ gText_Rom_2278CE
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: goto
	.byte 0x05
	.4byte 0x0822716C @ EventScript_JP_0822716C
EventScript_JP_08226FDF: @ 0x08226FDF
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CF
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x08227003 @ EventScript_JP_08227003
	.byte 0x02
EventScript_JP_08226FF1: @ 0x08226FF1
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CF
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x08227003 @ EventScript_JP_08227003
	.byte 0x02
EventScript_JP_08227003: @ 0x08227003
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082272A7 @ EventScript_JP_082272A7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082272B0 @ EventScript_JP_082272B0
EventScript_JP_0822701C: @ 0x0822701C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082272B9 @ EventScript_JP_082272B9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082272BF @ EventScript_JP_082272BF
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x06
	.byte 0x17
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08227069 @ EventScript_JP_08227069
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082271A4 @ EventScript_JP_082271A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822720E @ EventScript_JP_0822720E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822720E @ EventScript_JP_0822720E
EventScript_JP_08227069: @ 0x08227069
	@ event command: message
	.byte 0x67
	.4byte 0x0822764D @ gText_Rom_22764D
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x06
	.byte 0x18
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822720E @ EventScript_JP_0822720E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822720E @ EventScript_JP_0822720E
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000F
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082271BF @ EventScript_JP_082271BF
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8006
	.2byte 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822767D @ gText_Rom_22767D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: call
	.byte 0x04
	.4byte 0x082202F8
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x800D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00F5
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822720B @ EventScript_JP_0822720B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227624 @ gText_Rom_227624
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822720B @ EventScript_JP_0822720B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822710A @ EventScript_JP_0822710A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822720B @ EventScript_JP_0822720B
EventScript_JP_0822710A: @ 0x0822710A
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x0002
	@ event command: call
	.byte 0x04
	.4byte 0x082423E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082271F4 @ EventScript_JP_082271F4
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0016
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
EventScript_JP_0822716C: @ 0x0822716C
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000F
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082277BF @ gText_Rom_2277BF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x08227218 @ EventScript_JP_08227218
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x13
	.byte 0xFF
	.2byte 0x0017
	.2byte 0x0006
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_082271A4: @ 0x082271A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082272C5 @ EventScript_JP_082272C5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082272CE @ EventScript_JP_082272CE
	@ event command: goto
	.byte 0x05
	.4byte 0x0822701C @ EventScript_JP_0822701C
EventScript_JP_082271BF: @ 0x082271BF
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082271DA @ EventScript_JP_082271DA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082271E7 @ EventScript_JP_082271E7
EventScript_JP_082271DA: @ 0x082271DA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227711 @ gText_Rom_227711
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08227216 @ EventScript_JP_08227216
EventScript_JP_082271E7: @ 0x082271E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822769C @ gText_Rom_22769C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08227216 @ EventScript_JP_08227216
EventScript_JP_082271F4: @ 0x082271F4
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: goto
	.byte 0x05
	.4byte 0x0822720E @ EventScript_JP_0822720E
EventScript_JP_0822720B: @ 0x0822720B
	@ event command: special
	.byte 0x25
	.2byte 0x0028
EventScript_JP_0822720E: @ 0x0822720E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082274C6 @ gText_Rom_2274C6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_08227216: @ 0x08227216
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08227218: @ 0x08227218
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08227287 @ EventScript_JP_08227287
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822728F @ EventScript_JP_0822728F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082272EF @ Movement_JP_082272EF
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082272D7 @ EventScript_JP_082272D7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082272DD @ EventScript_JP_082272DD
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08227297 @ EventScript_JP_08227297
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822729F @ EventScript_JP_0822729F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082272F8 @ Movement_JP_082272F8
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082272E3 @ EventScript_JP_082272E3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082272E9 @ EventScript_JP_082272E9
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: return
	.byte 0x03
EventScript_JP_08227287: @ 0x08227287
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x082272EF @ Movement_JP_082272EF
	@ event command: return
	.byte 0x03
EventScript_JP_0822728F: @ 0x0822728F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x082272EF @ Movement_JP_082272EF
	@ event command: return
	.byte 0x03
EventScript_JP_08227297: @ 0x08227297
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x082272F5 @ Movement_JP_082272F5
	@ event command: return
	.byte 0x03
EventScript_JP_0822729F: @ 0x0822729F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x082272F5 @ Movement_JP_082272F5
	@ event command: return
	.byte 0x03
EventScript_JP_082272A7: @ 0x082272A7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227461 @ gText_Rom_227461
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_082272B0: @ 0x082272B0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082278F7 @ gText_Rom_2278F7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_082272B9: @ 0x082272B9
	@ event command: message
	.byte 0x67
	.4byte 0x082274AA @ gText_Rom_2274AA
	@ event command: return
	.byte 0x03
EventScript_JP_082272BF: @ 0x082272BF
	@ event command: message
	.byte 0x67
	.4byte 0x0822793F @ gText_Rom_22793F
	@ event command: return
	.byte 0x03
EventScript_JP_082272C5: @ 0x082272C5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082274DB @ gText_Rom_2274DB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_082272CE: @ 0x082272CE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822795A @ gText_Rom_22795A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_082272D7: @ 0x082272D7
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0005
	.2byte 0x0004
	@ event command: return
	.byte 0x03
EventScript_JP_082272DD: @ 0x082272DD
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0011
	.2byte 0x0004
	@ event command: return
	.byte 0x03
EventScript_JP_082272E3: @ 0x082272E3
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0005
	.2byte 0x0004
	@ event command: return
	.byte 0x03
EventScript_JP_082272E9: @ 0x082272E9
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0011
	.2byte 0x0004
	@ event command: return
	.byte 0x03
Movement_JP_082272EF: @ 0x082272EF
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_082272F5: @ 0x082272F5
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_082272F8: @ 0x082272F8
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
EventScript_JP_082272FC: @ 0x082272FC
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: special
	.byte 0x25
	.2byte 0x0209
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08227315: @ 0x08227315
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: special
	.byte 0x25
	.2byte 0x0209
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0822732E: @ 0x0822732E
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08227373 @ EventScript_JP_08227373
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822737C @ EventScript_JP_0822737C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08227385 @ EventScript_JP_08227385
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822738E @ EventScript_JP_0822738E
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: waitstate
	.byte 0x27
	@ event command: end
	.byte 0x02
EventScript_JP_08227373: @ 0x08227373
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227AB0 @ gText_Rom_227AB0
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: return
	.byte 0x03
EventScript_JP_0822737C: @ 0x0822737C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227AD8 @ gText_Rom_227AD8
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: return
	.byte 0x03
EventScript_JP_08227385: @ 0x08227385
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227AFF @ gText_Rom_227AFF
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: return
	.byte 0x03
EventScript_JP_0822738E: @ 0x0822738E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227B29 @ gText_Rom_227B29
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: return
	.byte 0x03
EventScript_JP_08227397: @ 0x08227397
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0014
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227B52 @ gText_Rom_227B52
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082273A8: @ 0x082273A8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227BF7 @ gText_Rom_227BF7
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082273B1: @ 0x082273B1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227C4A @ gText_Rom_227C4A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082273BA: @ 0x082273BA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227C79 @ gText_Rom_227C79
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082273C3: @ 0x082273C3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227BA7 @ gText_Rom_227BA7
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
	.byte 0x0F, 0x00, 0xC1, 0x7B, 0x22, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0xDE, 0x7B, 0x22, 0x08, 0x09
	.byte 0x02, 0x02
EventScript_JP_082273DE: @ 0x082273DE
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227D5C @ gText_Rom_227D5C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082273ED @ EventScript_JP_082273ED
	.byte 0x02
EventScript_JP_082273ED: @ 0x082273ED
	@ event command: message
	.byte 0x67
	.4byte 0x08227D74 @ gText_Rom_227D74
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x04
	.byte 0x62
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08227435 @ EventScript_JP_08227435
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08227443 @ EventScript_JP_08227443
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08227451 @ EventScript_JP_08227451
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822745F @ EventScript_JP_0822745F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822745F @ EventScript_JP_0822745F
	@ event command: end
	.byte 0x02
EventScript_JP_08227435: @ 0x08227435
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227D84 @ gText_Rom_227D84
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082273ED @ EventScript_JP_082273ED
	.byte 0x02
EventScript_JP_08227443: @ 0x08227443
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227DDA @ gText_Rom_227DDA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082273ED @ EventScript_JP_082273ED
	.byte 0x02
EventScript_JP_08227451: @ 0x08227451
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08227E6C @ gText_Rom_227E6C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082273ED @ EventScript_JP_082273ED
	.byte 0x02
EventScript_JP_0822745F: @ 0x0822745F
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
