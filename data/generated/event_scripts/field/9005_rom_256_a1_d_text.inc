	@ field-script:0x256A16 FieldScriptText_256A1D
	.globl gText_Rom_256A1D
gText_Rom_256A1D: @ 0x08256A1D
	.string "ここには\nなにも　いないようだ……"
	.byte EOS
	.if (. - gText_Rom_256A1D) > 0x12
	.error "gText_Rom_256A1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256A1D) < 0x12
	.space 0x12 - (. - gText_Rom_256A1D)
	.endif
	@ analyzed canonical ROM range 0x08256A2F-0x082573DD
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08256A2F: @ 0x08256A2F
EventScript_JP_08256A2F: @ 0x08256A2F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x000D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256A3C: @ 0x08256A3C
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0049
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256A49: @ 0x08256A49
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0045
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256A56: @ 0x08256A56
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0045
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256A63: @ 0x08256A63
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0004
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256A70: @ 0x08256A70
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x004E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256A7D: @ 0x08256A7D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x000D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256A8A: @ 0x08256A8A
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0041
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256A97: @ 0x08256A97
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0040
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256AA4: @ 0x08256AA4
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x006D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256AB1: @ 0x08256AB1
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0045
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256ABE: @ 0x08256ABE
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x000D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256ACB: @ 0x08256ACB
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0044
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256AD8: @ 0x08256AD8
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x004A
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256AE5: @ 0x08256AE5
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0024
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256AF2: @ 0x08256AF2
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0145
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256AFF: @ 0x08256AFF
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x006C
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256B0C: @ 0x08256B0C
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x003F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256B19: @ 0x08256B19
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0024
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256B26: @ 0x08256B26
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x006E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256B33: @ 0x08256B33
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0023
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256B40: @ 0x08256B40
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0053
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256B4D: @ 0x08256B4D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0015
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256B5A: @ 0x08256B5A
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0044
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256B67: @ 0x08256B67
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0040
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256B74: @ 0x08256B74
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x001E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256B81: @ 0x08256B81
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0016
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256B8E: @ 0x08256B8E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0121
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256B9B: @ 0x08256B9B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0041
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256BA8: @ 0x08256BA8
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0003
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256BB5: @ 0x08256BB5
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0020
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256BC2: @ 0x08256BC2
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0045
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256BCF: @ 0x08256BCF
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x004F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256BDC: @ 0x08256BDC
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0022
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256BE9: @ 0x08256BE9
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0056
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256BF6: @ 0x08256BF6
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x003F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256C03: @ 0x08256C03
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x000D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256C10: @ 0x08256C10
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0003
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256C1D: @ 0x08256C1D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0018
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256C2A: @ 0x08256C2A
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0015
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256C37: @ 0x08256C37
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0053
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256C44: @ 0x08256C44
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0046
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256C51: @ 0x08256C51
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0024
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256C5E: @ 0x08256C5E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0062
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256C6B: @ 0x08256C6B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0044
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256C78: @ 0x08256C78
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0015
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256C85: @ 0x08256C85
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0015
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256C92: @ 0x08256C92
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0024
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256C9F: @ 0x08256C9F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x006E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256CAC: @ 0x08256CAC
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0017
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256CB9: @ 0x08256CB9
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0015
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256CC6: @ 0x08256CC6
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0008
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256CD3: @ 0x08256CD3
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0018
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256CE0: @ 0x08256CE0
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0042
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256CED: @ 0x08256CED
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0018
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256CFA: @ 0x08256CFA
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0046
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256D07: @ 0x08256D07
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0043
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256D14: @ 0x08256D14
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0002
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256D21: @ 0x08256D21
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0024
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256D2E: @ 0x08256D2E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0045
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256D3B: @ 0x08256D3B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0021
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256D48: @ 0x08256D48
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0030
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256D55: @ 0x08256D55
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0031
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256D62: @ 0x08256D62
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0032
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256D6F: @ 0x08256D6F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x006B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256D7C: @ 0x08256D7C
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0033
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256D89: @ 0x08256D89
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0046
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256D96: @ 0x08256D96
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0042
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256DA3: @ 0x08256DA3
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0044
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256DB0: @ 0x08256DB0
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0044
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256DBD: @ 0x08256DBD
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0040
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256DCA: @ 0x08256DCA
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x006B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256DD7: @ 0x08256DD7
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x006D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256DE4: @ 0x08256DE4
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0019
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256DF1: @ 0x08256DF1
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0042
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256DFE: @ 0x08256DFE
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x006D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256E0B: @ 0x08256E0B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0019
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256E18: @ 0x08256E18
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0022
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256E25: @ 0x08256E25
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x004D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256E32: @ 0x08256E32
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x004C
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256E3F: @ 0x08256E3F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0054
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256E4C: @ 0x08256E4C
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0006
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256E59: @ 0x08256E59
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x004B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256E66: @ 0x08256E66
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0003
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256E73: @ 0x08256E73
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0022
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256E80: @ 0x08256E80
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0012
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256E8D: @ 0x08256E8D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0004
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256E9A: @ 0x08256E9A
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0023
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256EA7: @ 0x08256EA7
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0055
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256EB4: @ 0x08256EB4
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0004
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256EC1: @ 0x08256EC1
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0056
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256ECE: @ 0x08256ECE
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0044
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256EDB: @ 0x08256EDB
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x000F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256EE8: @ 0x08256EE8
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x005F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256EF5: @ 0x08256EF5
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0126
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256F02: @ 0x08256F02
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0137
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256F0F: @ 0x08256F0F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0017
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256F1C: @ 0x08256F1C
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x005E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256F29: @ 0x08256F29
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0045
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256F36: @ 0x08256F36
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0122
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256F43: @ 0x08256F43
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0002
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256F50: @ 0x08256F50
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0055
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256F5D: @ 0x08256F5D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0060
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256F6A: @ 0x08256F6A
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0017
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256F77: @ 0x08256F77
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0012
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256F84: @ 0x08256F84
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x007A
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256F91: @ 0x08256F91
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0055
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256F9E: @ 0x08256F9E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0007
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256FAB: @ 0x08256FAB
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x012D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256FB8: @ 0x08256FB8
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0018
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256FC5: @ 0x08256FC5
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x011D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256FD2: @ 0x08256FD2
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x000B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256FDF: @ 0x08256FDF
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0116
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256FEC: @ 0x08256FEC
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0061
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08256FF9: @ 0x08256FF9
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0132
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257006: @ 0x08257006
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x012B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257013: @ 0x08257013
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0136
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257020: @ 0x08257020
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0043
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_0825702D: @ 0x0825702D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0019
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_0825703A: @ 0x0825703A
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x006E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257047: @ 0x08257047
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x006B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257054: @ 0x08257054
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0002
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257061: @ 0x08257061
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0053
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_0825706E: @ 0x0825706E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00DC
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_0825707B: @ 0x0825707B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00DD
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257088: @ 0x08257088
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x013E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257095: @ 0x08257095
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0014
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_082570A2: @ 0x082570A2
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0150
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_082570AF: @ 0x082570AF
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0001
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_082570BC: @ 0x082570BC
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x006E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_082570C9: @ 0x082570C9
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0025
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_082570D6: @ 0x082570D6
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0008
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
	.byte 0x1A, 0x00, 0x80, 0x01, 0x00, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x01, 0x02
EventScript_JP_082570F0: @ 0x082570F0
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x006E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
	.byte 0x1A, 0x00, 0x80, 0x25, 0x00, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x01, 0x02, 0x1A, 0x00, 0x80
	.byte 0x08, 0x00, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x01, 0x02
EventScript_JP_08257117: @ 0x08257117
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x006B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257124: @ 0x08257124
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0044
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257131: @ 0x08257131
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0010
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_0825713E: @ 0x0825713E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0127
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_0825714B: @ 0x0825714B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00D4
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257158: @ 0x08257158
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x013A
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257165: @ 0x08257165
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0079
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257172: @ 0x08257172
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x007A
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_0825717F: @ 0x0825717F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x007E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_0825718C: @ 0x0825718C
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0080
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257199: @ 0x08257199
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x007D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_082571A6: @ 0x082571A6
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x007C
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_082571B3: @ 0x082571B3
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x007B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_082571C0: @ 0x082571C0
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0081
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_082571CD: @ 0x082571CD
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x007F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_082571DA: @ 0x082571DA
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0025
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_082571E7: @ 0x082571E7
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0045
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_082571F4: @ 0x082571F4
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x013D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257201: @ 0x08257201
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0013
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_0825720E: @ 0x0825720E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0017
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_0825721B: @ 0x0825721B
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x003F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257228: @ 0x08257228
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0042
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257235: @ 0x08257235
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0044
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257242: @ 0x08257242
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0025
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_0825724F: @ 0x0825724F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0013
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_0825725C: @ 0x0825725C
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x006E
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257269: @ 0x08257269
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0047
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257276: @ 0x08257276
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0019
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257283: @ 0x08257283
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0055
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: end
	.byte 0x02
EventScript_JP_08257290: @ 0x08257290
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0865
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825734C @ EventScript_JP_0825734C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082573DE @ gText_Rom_2573DE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082572A9 @ EventScript_JP_082572A9
	.byte 0x02
EventScript_JP_082572A9: @ 0x082572A9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257426 @ gText_Rom_257426
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x06
	.byte 0x14
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
	.4byte 0x082572F6 @ EventScript_JP_082572F6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257342 @ EventScript_JP_08257342
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082572E8 @ EventScript_JP_082572E8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257342 @ EventScript_JP_08257342
	@ event command: end
	.byte 0x02
EventScript_JP_082572E8: @ 0x082572E8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257449 @ gText_Rom_257449
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082572A9 @ EventScript_JP_082572A9
	.byte 0x02
EventScript_JP_082572F6: @ 0x082572F6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257557 @ gText_Rom_257557
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x08242F08
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257322 @ EventScript_JP_08257322
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825732C @ EventScript_JP_0825732C
	@ event command: end
	.byte 0x02
EventScript_JP_08257322: @ 0x08257322
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825759D @ gText_Rom_25759D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825732C: @ 0x0825732C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0060
	@ event command: waitmessage
	.byte 0x66
	@ event command: delay
	.byte 0x28
	.2byte 0x0050
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825764E @ gText_Rom_25764E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08257342: @ 0x08257342
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257572 @ gText_Rom_257572
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825734C: @ 0x0825734C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082575C0 @ gText_Rom_2575C0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0825735A @ EventScript_JP_0825735A
	.byte 0x02
EventScript_JP_0825735A: @ 0x0825735A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082575D9 @ gText_Rom_2575D9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x06
	.byte 0x14
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
	.4byte 0x082573A7 @ EventScript_JP_082573A7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082573D3 @ EventScript_JP_082573D3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257399 @ EventScript_JP_08257399
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082573D3 @ EventScript_JP_082573D3
	@ event command: end
	.byte 0x02
EventScript_JP_08257399: @ 0x08257399
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257449 @ gText_Rom_257449
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0825735A @ EventScript_JP_0825735A
	.byte 0x02
EventScript_JP_082573A7: @ 0x082573A7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082575F8 @ gText_Rom_2575F8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x08242F08
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08257322 @ EventScript_JP_08257322
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825732C @ EventScript_JP_0825732C
	@ event command: end
	.byte 0x02
EventScript_JP_082573D3: @ 0x082573D3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257624 @ gText_Rom_257624
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x03
