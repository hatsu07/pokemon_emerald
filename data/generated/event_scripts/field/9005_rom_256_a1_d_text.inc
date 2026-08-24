	@ field-script:0x256952 FieldScriptText_2569F2
	.globl gText_Rom_2569F2
gText_Rom_2569F2: @ 0x082569F2
	.string "うえから　ひかりが　さしこんでいる！\nダイビングを　つかいますか？"
	.byte EOS
	.if (. - gText_Rom_2569F2) > 0x22
	.error "gText_Rom_2569F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2569F2) < 0x22
	.space 0x22 - (. - gText_Rom_2569F2)
	.endif
	@ analyzed canonical ROM range 0x08256A14-0x08256A1C
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08256A14: @ 0x08256A14
.globl EventScript_JP_08256A14
EventScript_JP_08256A14: @ 0x08256A14
	loadword 0x00, gText_Rom_256A1D
	callstd 0x03
	end
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
.Lbatch81_text_start_EventScript_JP_08256A2F: @ 0x08256A2F
	setorcopyvar 0x8000, 0x000D
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256A3C
EventScript_JP_08256A3C: @ 0x08256A3C
	setorcopyvar 0x8000, 0x0049
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256A49
EventScript_JP_08256A49: @ 0x08256A49
	setorcopyvar 0x8000, 0x0045
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256A56
EventScript_JP_08256A56: @ 0x08256A56
	setorcopyvar 0x8000, 0x0045
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256A63
EventScript_JP_08256A63: @ 0x08256A63
	setorcopyvar 0x8000, 0x0004
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256A70
EventScript_JP_08256A70: @ 0x08256A70
	setorcopyvar 0x8000, 0x004E
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256A7D
EventScript_JP_08256A7D: @ 0x08256A7D
	setorcopyvar 0x8000, 0x000D
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256A8A
EventScript_JP_08256A8A: @ 0x08256A8A
	setorcopyvar 0x8000, 0x0041
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256A97
EventScript_JP_08256A97: @ 0x08256A97
	setorcopyvar 0x8000, 0x0040
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256AA4
EventScript_JP_08256AA4: @ 0x08256AA4
	setorcopyvar 0x8000, 0x006D
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256AB1
EventScript_JP_08256AB1: @ 0x08256AB1
	setorcopyvar 0x8000, 0x0045
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256ABE
EventScript_JP_08256ABE: @ 0x08256ABE
	setorcopyvar 0x8000, 0x000D
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256ACB
EventScript_JP_08256ACB: @ 0x08256ACB
	setorcopyvar 0x8000, 0x0044
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256AD8
EventScript_JP_08256AD8: @ 0x08256AD8
	setorcopyvar 0x8000, 0x004A
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256AE5
EventScript_JP_08256AE5: @ 0x08256AE5
	setorcopyvar 0x8000, 0x0024
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256AF2
EventScript_JP_08256AF2: @ 0x08256AF2
	setorcopyvar 0x8000, 0x0145
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256AFF
EventScript_JP_08256AFF: @ 0x08256AFF
	setorcopyvar 0x8000, 0x006C
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256B0C
EventScript_JP_08256B0C: @ 0x08256B0C
	setorcopyvar 0x8000, 0x003F
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256B19
EventScript_JP_08256B19: @ 0x08256B19
	setorcopyvar 0x8000, 0x0024
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256B26
EventScript_JP_08256B26: @ 0x08256B26
	setorcopyvar 0x8000, 0x006E
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256B33
EventScript_JP_08256B33: @ 0x08256B33
	setorcopyvar 0x8000, 0x0023
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256B40
EventScript_JP_08256B40: @ 0x08256B40
	setorcopyvar 0x8000, 0x0053
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256B4D
EventScript_JP_08256B4D: @ 0x08256B4D
	setorcopyvar 0x8000, 0x0015
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256B5A
EventScript_JP_08256B5A: @ 0x08256B5A
	setorcopyvar 0x8000, 0x0044
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256B67
EventScript_JP_08256B67: @ 0x08256B67
	setorcopyvar 0x8000, 0x0040
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256B74
EventScript_JP_08256B74: @ 0x08256B74
	setorcopyvar 0x8000, 0x001E
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256B81
EventScript_JP_08256B81: @ 0x08256B81
	setorcopyvar 0x8000, 0x0016
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256B8E
EventScript_JP_08256B8E: @ 0x08256B8E
	setorcopyvar 0x8000, 0x0121
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256B9B
EventScript_JP_08256B9B: @ 0x08256B9B
	setorcopyvar 0x8000, 0x0041
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256BA8
EventScript_JP_08256BA8: @ 0x08256BA8
	setorcopyvar 0x8000, 0x0003
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256BB5
EventScript_JP_08256BB5: @ 0x08256BB5
	setorcopyvar 0x8000, 0x0020
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256BC2
EventScript_JP_08256BC2: @ 0x08256BC2
	setorcopyvar 0x8000, 0x0045
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256BCF
EventScript_JP_08256BCF: @ 0x08256BCF
	setorcopyvar 0x8000, 0x004F
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256BDC
EventScript_JP_08256BDC: @ 0x08256BDC
	setorcopyvar 0x8000, 0x0022
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256BE9
EventScript_JP_08256BE9: @ 0x08256BE9
	setorcopyvar 0x8000, 0x0056
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256BF6
EventScript_JP_08256BF6: @ 0x08256BF6
	setorcopyvar 0x8000, 0x003F
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256C03
EventScript_JP_08256C03: @ 0x08256C03
	setorcopyvar 0x8000, 0x000D
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256C10
EventScript_JP_08256C10: @ 0x08256C10
	setorcopyvar 0x8000, 0x0003
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256C1D
EventScript_JP_08256C1D: @ 0x08256C1D
	setorcopyvar 0x8000, 0x0018
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256C2A
EventScript_JP_08256C2A: @ 0x08256C2A
	setorcopyvar 0x8000, 0x0015
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256C37
EventScript_JP_08256C37: @ 0x08256C37
	setorcopyvar 0x8000, 0x0053
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256C44
EventScript_JP_08256C44: @ 0x08256C44
	setorcopyvar 0x8000, 0x0046
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256C51
EventScript_JP_08256C51: @ 0x08256C51
	setorcopyvar 0x8000, 0x0024
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256C5E
EventScript_JP_08256C5E: @ 0x08256C5E
	setorcopyvar 0x8000, 0x0062
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256C6B
EventScript_JP_08256C6B: @ 0x08256C6B
	setorcopyvar 0x8000, 0x0044
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256C78
EventScript_JP_08256C78: @ 0x08256C78
	setorcopyvar 0x8000, 0x0015
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256C85
EventScript_JP_08256C85: @ 0x08256C85
	setorcopyvar 0x8000, 0x0015
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256C92
EventScript_JP_08256C92: @ 0x08256C92
	setorcopyvar 0x8000, 0x0024
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256C9F
EventScript_JP_08256C9F: @ 0x08256C9F
	setorcopyvar 0x8000, 0x006E
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256CAC
EventScript_JP_08256CAC: @ 0x08256CAC
	setorcopyvar 0x8000, 0x0017
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256CB9
EventScript_JP_08256CB9: @ 0x08256CB9
	setorcopyvar 0x8000, 0x0015
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256CC6
EventScript_JP_08256CC6: @ 0x08256CC6
	setorcopyvar 0x8000, 0x0008
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256CD3
EventScript_JP_08256CD3: @ 0x08256CD3
	setorcopyvar 0x8000, 0x0018
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256CE0
EventScript_JP_08256CE0: @ 0x08256CE0
	setorcopyvar 0x8000, 0x0042
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256CED
EventScript_JP_08256CED: @ 0x08256CED
	setorcopyvar 0x8000, 0x0018
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256CFA
EventScript_JP_08256CFA: @ 0x08256CFA
	setorcopyvar 0x8000, 0x0046
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256D07
EventScript_JP_08256D07: @ 0x08256D07
	setorcopyvar 0x8000, 0x0043
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256D14
EventScript_JP_08256D14: @ 0x08256D14
	setorcopyvar 0x8000, 0x0002
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256D21
EventScript_JP_08256D21: @ 0x08256D21
	setorcopyvar 0x8000, 0x0024
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256D2E
EventScript_JP_08256D2E: @ 0x08256D2E
	setorcopyvar 0x8000, 0x0045
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256D3B
EventScript_JP_08256D3B: @ 0x08256D3B
	setorcopyvar 0x8000, 0x0021
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256D48
EventScript_JP_08256D48: @ 0x08256D48
	setorcopyvar 0x8000, 0x0030
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256D55
EventScript_JP_08256D55: @ 0x08256D55
	setorcopyvar 0x8000, 0x0031
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256D62
EventScript_JP_08256D62: @ 0x08256D62
	setorcopyvar 0x8000, 0x0032
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256D6F
EventScript_JP_08256D6F: @ 0x08256D6F
	setorcopyvar 0x8000, 0x006B
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256D7C
EventScript_JP_08256D7C: @ 0x08256D7C
	setorcopyvar 0x8000, 0x0033
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256D89
EventScript_JP_08256D89: @ 0x08256D89
	setorcopyvar 0x8000, 0x0046
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256D96
EventScript_JP_08256D96: @ 0x08256D96
	setorcopyvar 0x8000, 0x0042
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256DA3
EventScript_JP_08256DA3: @ 0x08256DA3
	setorcopyvar 0x8000, 0x0044
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256DB0
EventScript_JP_08256DB0: @ 0x08256DB0
	setorcopyvar 0x8000, 0x0044
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256DBD
EventScript_JP_08256DBD: @ 0x08256DBD
	setorcopyvar 0x8000, 0x0040
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256DCA
EventScript_JP_08256DCA: @ 0x08256DCA
	setorcopyvar 0x8000, 0x006B
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256DD7
EventScript_JP_08256DD7: @ 0x08256DD7
	setorcopyvar 0x8000, 0x006D
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256DE4
EventScript_JP_08256DE4: @ 0x08256DE4
	setorcopyvar 0x8000, 0x0019
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256DF1
EventScript_JP_08256DF1: @ 0x08256DF1
	setorcopyvar 0x8000, 0x0042
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256DFE
EventScript_JP_08256DFE: @ 0x08256DFE
	setorcopyvar 0x8000, 0x006D
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256E0B
EventScript_JP_08256E0B: @ 0x08256E0B
	setorcopyvar 0x8000, 0x0019
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256E18
EventScript_JP_08256E18: @ 0x08256E18
	setorcopyvar 0x8000, 0x0022
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256E25
EventScript_JP_08256E25: @ 0x08256E25
	setorcopyvar 0x8000, 0x004D
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256E32
EventScript_JP_08256E32: @ 0x08256E32
	setorcopyvar 0x8000, 0x004C
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256E3F
EventScript_JP_08256E3F: @ 0x08256E3F
	setorcopyvar 0x8000, 0x0054
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256E4C
EventScript_JP_08256E4C: @ 0x08256E4C
	setorcopyvar 0x8000, 0x0006
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256E59
EventScript_JP_08256E59: @ 0x08256E59
	setorcopyvar 0x8000, 0x004B
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256E66
EventScript_JP_08256E66: @ 0x08256E66
	setorcopyvar 0x8000, 0x0003
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256E73
EventScript_JP_08256E73: @ 0x08256E73
	setorcopyvar 0x8000, 0x0022
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256E80
EventScript_JP_08256E80: @ 0x08256E80
	setorcopyvar 0x8000, 0x0012
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256E8D
EventScript_JP_08256E8D: @ 0x08256E8D
	setorcopyvar 0x8000, 0x0004
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256E9A
EventScript_JP_08256E9A: @ 0x08256E9A
	setorcopyvar 0x8000, 0x0023
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256EA7
EventScript_JP_08256EA7: @ 0x08256EA7
	setorcopyvar 0x8000, 0x0055
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256EB4
EventScript_JP_08256EB4: @ 0x08256EB4
	setorcopyvar 0x8000, 0x0004
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256EC1
EventScript_JP_08256EC1: @ 0x08256EC1
	setorcopyvar 0x8000, 0x0056
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256ECE
EventScript_JP_08256ECE: @ 0x08256ECE
	setorcopyvar 0x8000, 0x0044
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256EDB
EventScript_JP_08256EDB: @ 0x08256EDB
	setorcopyvar 0x8000, 0x000F
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256EE8
EventScript_JP_08256EE8: @ 0x08256EE8
	setorcopyvar 0x8000, 0x005F
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256EF5
EventScript_JP_08256EF5: @ 0x08256EF5
	setorcopyvar 0x8000, 0x0126
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256F02
EventScript_JP_08256F02: @ 0x08256F02
	setorcopyvar 0x8000, 0x0137
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256F0F
EventScript_JP_08256F0F: @ 0x08256F0F
	setorcopyvar 0x8000, 0x0017
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256F1C
EventScript_JP_08256F1C: @ 0x08256F1C
	setorcopyvar 0x8000, 0x005E
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256F29
EventScript_JP_08256F29: @ 0x08256F29
	setorcopyvar 0x8000, 0x0045
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256F36
EventScript_JP_08256F36: @ 0x08256F36
	setorcopyvar 0x8000, 0x0122
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256F43
EventScript_JP_08256F43: @ 0x08256F43
	setorcopyvar 0x8000, 0x0002
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256F50
EventScript_JP_08256F50: @ 0x08256F50
	setorcopyvar 0x8000, 0x0055
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256F5D
EventScript_JP_08256F5D: @ 0x08256F5D
	setorcopyvar 0x8000, 0x0060
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256F6A
EventScript_JP_08256F6A: @ 0x08256F6A
	setorcopyvar 0x8000, 0x0017
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256F77
EventScript_JP_08256F77: @ 0x08256F77
	setorcopyvar 0x8000, 0x0012
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256F84
EventScript_JP_08256F84: @ 0x08256F84
	setorcopyvar 0x8000, 0x007A
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256F91
EventScript_JP_08256F91: @ 0x08256F91
	setorcopyvar 0x8000, 0x0055
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256F9E
EventScript_JP_08256F9E: @ 0x08256F9E
	setorcopyvar 0x8000, 0x0007
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256FAB
EventScript_JP_08256FAB: @ 0x08256FAB
	setorcopyvar 0x8000, 0x012D
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256FB8
EventScript_JP_08256FB8: @ 0x08256FB8
	setorcopyvar 0x8000, 0x0018
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256FC5
EventScript_JP_08256FC5: @ 0x08256FC5
	setorcopyvar 0x8000, 0x011D
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256FD2
EventScript_JP_08256FD2: @ 0x08256FD2
	setorcopyvar 0x8000, 0x000B
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256FDF
EventScript_JP_08256FDF: @ 0x08256FDF
	setorcopyvar 0x8000, 0x0116
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256FEC
EventScript_JP_08256FEC: @ 0x08256FEC
	setorcopyvar 0x8000, 0x0061
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08256FF9
EventScript_JP_08256FF9: @ 0x08256FF9
	setorcopyvar 0x8000, 0x0132
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257006
EventScript_JP_08257006: @ 0x08257006
	setorcopyvar 0x8000, 0x012B
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257013
EventScript_JP_08257013: @ 0x08257013
	setorcopyvar 0x8000, 0x0136
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257020
EventScript_JP_08257020: @ 0x08257020
	setorcopyvar 0x8000, 0x0043
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_0825702D
EventScript_JP_0825702D: @ 0x0825702D
	setorcopyvar 0x8000, 0x0019
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_0825703A
EventScript_JP_0825703A: @ 0x0825703A
	setorcopyvar 0x8000, 0x006E
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257047
EventScript_JP_08257047: @ 0x08257047
	setorcopyvar 0x8000, 0x006B
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257054
EventScript_JP_08257054: @ 0x08257054
	setorcopyvar 0x8000, 0x0002
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257061
EventScript_JP_08257061: @ 0x08257061
	setorcopyvar 0x8000, 0x0053
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_0825706E
EventScript_JP_0825706E: @ 0x0825706E
	setorcopyvar 0x8000, 0x00DC
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_0825707B
EventScript_JP_0825707B: @ 0x0825707B
	setorcopyvar 0x8000, 0x00DD
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257088
EventScript_JP_08257088: @ 0x08257088
	setorcopyvar 0x8000, 0x013E
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257095
EventScript_JP_08257095: @ 0x08257095
	setorcopyvar 0x8000, 0x0014
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_082570A2
EventScript_JP_082570A2: @ 0x082570A2
	setorcopyvar 0x8000, 0x0150
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_082570AF
EventScript_JP_082570AF: @ 0x082570AF
	setorcopyvar 0x8000, 0x0001
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_082570BC
EventScript_JP_082570BC: @ 0x082570BC
	setorcopyvar 0x8000, 0x006E
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_082570C9
EventScript_JP_082570C9: @ 0x082570C9
	setorcopyvar 0x8000, 0x0025
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_082570D6
EventScript_JP_082570D6: @ 0x082570D6
	setorcopyvar 0x8000, 0x0008
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
	.byte 0x1A, 0x00, 0x80, 0x01, 0x00, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x01, 0x02
.globl EventScript_JP_082570F0
EventScript_JP_082570F0: @ 0x082570F0
	setorcopyvar 0x8000, 0x006E
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
	.byte 0x1A, 0x00, 0x80, 0x25, 0x00, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x01, 0x02, 0x1A, 0x00, 0x80
	.byte 0x08, 0x00, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x01, 0x02
.globl EventScript_JP_08257117
EventScript_JP_08257117: @ 0x08257117
	setorcopyvar 0x8000, 0x006B
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257124
EventScript_JP_08257124: @ 0x08257124
	setorcopyvar 0x8000, 0x0044
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257131
EventScript_JP_08257131: @ 0x08257131
	setorcopyvar 0x8000, 0x0010
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_0825713E
EventScript_JP_0825713E: @ 0x0825713E
	setorcopyvar 0x8000, 0x0127
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_0825714B
EventScript_JP_0825714B: @ 0x0825714B
	setorcopyvar 0x8000, 0x00D4
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257158
EventScript_JP_08257158: @ 0x08257158
	setorcopyvar 0x8000, 0x013A
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257165
EventScript_JP_08257165: @ 0x08257165
	setorcopyvar 0x8000, 0x0079
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257172
EventScript_JP_08257172: @ 0x08257172
	setorcopyvar 0x8000, 0x007A
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_0825717F
EventScript_JP_0825717F: @ 0x0825717F
	setorcopyvar 0x8000, 0x007E
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_0825718C
EventScript_JP_0825718C: @ 0x0825718C
	setorcopyvar 0x8000, 0x0080
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257199
EventScript_JP_08257199: @ 0x08257199
	setorcopyvar 0x8000, 0x007D
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_082571A6
EventScript_JP_082571A6: @ 0x082571A6
	setorcopyvar 0x8000, 0x007C
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_082571B3
EventScript_JP_082571B3: @ 0x082571B3
	setorcopyvar 0x8000, 0x007B
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_082571C0
EventScript_JP_082571C0: @ 0x082571C0
	setorcopyvar 0x8000, 0x0081
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_082571CD
EventScript_JP_082571CD: @ 0x082571CD
	setorcopyvar 0x8000, 0x007F
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_082571DA
EventScript_JP_082571DA: @ 0x082571DA
	setorcopyvar 0x8000, 0x0025
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_082571E7
EventScript_JP_082571E7: @ 0x082571E7
	setorcopyvar 0x8000, 0x0045
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_082571F4
EventScript_JP_082571F4: @ 0x082571F4
	setorcopyvar 0x8000, 0x013D
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257201
EventScript_JP_08257201: @ 0x08257201
	setorcopyvar 0x8000, 0x0013
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_0825720E
EventScript_JP_0825720E: @ 0x0825720E
	setorcopyvar 0x8000, 0x0017
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_0825721B
EventScript_JP_0825721B: @ 0x0825721B
	setorcopyvar 0x8000, 0x003F
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257228
EventScript_JP_08257228: @ 0x08257228
	setorcopyvar 0x8000, 0x0042
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257235
EventScript_JP_08257235: @ 0x08257235
	setorcopyvar 0x8000, 0x0044
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257242
EventScript_JP_08257242: @ 0x08257242
	setorcopyvar 0x8000, 0x0025
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_0825724F
EventScript_JP_0825724F: @ 0x0825724F
	setorcopyvar 0x8000, 0x0013
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_0825725C
EventScript_JP_0825725C: @ 0x0825725C
	setorcopyvar 0x8000, 0x006E
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257269
EventScript_JP_08257269: @ 0x08257269
	setorcopyvar 0x8000, 0x0047
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257276
EventScript_JP_08257276: @ 0x08257276
	setorcopyvar 0x8000, 0x0019
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257283
EventScript_JP_08257283: @ 0x08257283
	setorcopyvar 0x8000, 0x0055
	setorcopyvar 0x8001, 0x0001
	callstd 0x01
	end
.globl EventScript_JP_08257290
EventScript_JP_08257290: @ 0x08257290
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0865
	goto_if 0x01, EventScript_JP_0825734C
	loadword 0x00, gText_Rom_2573DE
	callstd 0x04
	goto EventScript_JP_082572A9
	.byte 0x02
EventScript_JP_082572A9: @ 0x082572A9
	loadword 0x00, gText_Rom_257426
	callstd 0x04
	multichoice 0x11, 0x06, 0x14, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082572F6
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08257342
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082572E8
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08257342
	end
EventScript_JP_082572E8: @ 0x082572E8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_257449
	callstd 0x04
	goto EventScript_JP_082572A9
	.byte 0x02
EventScript_JP_082572F6: @ 0x082572F6
	loadword 0x00, gText_Rom_257557
	callstd 0x04
	closemessage
	setvar 0x8004, 0x0000
	call 0x08242F08
	lock
	faceplayer
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08257322
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0825732C
	end
EventScript_JP_08257322: @ 0x08257322
	loadword 0x00, gText_Rom_25759D
	callstd 0x04
	release
	end
EventScript_JP_0825732C: @ 0x0825732C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0000
	@ event command: special
	special ShowEasyChatProfile
	waitmessage
	delay 0x0050
	loadword 0x00, gText_Rom_25764E
	callstd 0x04
	release
	end
EventScript_JP_08257342: @ 0x08257342
	loadword 0x00, gText_Rom_257572
	callstd 0x04
	release
	end
EventScript_JP_0825734C: @ 0x0825734C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_2575C0
	callstd 0x04
	goto EventScript_JP_0825735A
	.byte 0x02
EventScript_JP_0825735A: @ 0x0825735A
	loadword 0x00, gText_Rom_2575D9
	callstd 0x04
	multichoice 0x11, 0x06, 0x14, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082573A7
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082573D3
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08257399
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_082573D3
	end
EventScript_JP_08257399: @ 0x08257399
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_257449
	callstd 0x04
	goto EventScript_JP_0825735A
	.byte 0x02
EventScript_JP_082573A7: @ 0x082573A7
	loadword 0x00, gText_Rom_2575F8
	callstd 0x04
	closemessage
	setvar 0x8004, 0x0000
	call 0x08242F08
	lock
	faceplayer
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08257322
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0825732C
	end
EventScript_JP_082573D3: @ 0x082573D3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_257624
	callstd 0x04
	release
	end
	.byte 0x03
