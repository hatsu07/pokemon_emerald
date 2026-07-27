	@ src/main_menu.c:275 gText_ContinueMenuTime (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_4E8CC8
gText_Rom_4E8CC8: @ 0x084E8CC8
	.string "プレイじかん$"
	.if (. - gText_Rom_4E8CC8) != 0x7
	.error "gText_Rom_4E8CC8 must retain its original byte length"
	.endif
	.globl gText_Rom_4E8CCB
	.set gText_Rom_4E8CCB, gText_Rom_4E8CC8 + 0x3
	.incbin "baserom.gba", 0x4e8ccf, 0x1a1
	.globl gUnknown_84E8E70
gUnknown_84E8E70: @ 0x084E8E70
	.incbin "baserom.gba", 0x4e8e70, 0xb60
	.globl gUnknown_84E99D0
gUnknown_84E99D0: @ 0x084E99D0
	.incbin "baserom.gba", 0x4e99d0, 0x908
	.globl gUnknown_84EA2D8
gUnknown_84EA2D8: @ 0x084EA2D8
	.incbin "baserom.gba", 0x4ea2d8, 0x9a8
	.globl gUnknown_84EAC80
gUnknown_84EAC80: @ 0x084EAC80
	.incbin "baserom.gba", 0x4eac80, 0x8e0
	.globl gUnknown_84EB560
gUnknown_84EB560: @ 0x084EB560
	.incbin "baserom.gba", 0x4eb560, 0x320
	.globl gUnknown_84EB880
gUnknown_84EB880: @ 0x084EB880
	.incbin "baserom.gba", 0x4eb880, 0x510
	.globl gUnknown_84EBD90
gUnknown_84EBD90: @ 0x084EBD90
	.incbin "baserom.gba", 0x4ebd90, 0x210
	.globl gUnknown_84EBFA0
gUnknown_84EBFA0: @ 0x084EBFA0
	.incbin "baserom.gba", 0x4ebfa0, 0xb50
	.globl gUnknown_84ECAF0
gUnknown_84ECAF0: @ 0x084ECAF0
	.incbin "baserom.gba", 0x4ecaf0, 0x210
	.globl gUnknown_84ECD00
gUnknown_84ECD00: @ 0x084ECD00
	.incbin "baserom.gba", 0x4ecd00, 0x810
	.globl gUnknown_84ED510
gUnknown_84ED510: @ 0x084ED510
	.incbin "baserom.gba", 0x4ed510, 0x540
	.globl gUnknown_84EDA50
gUnknown_84EDA50: @ 0x084EDA50
	.incbin "baserom.gba", 0x4eda50, 0x20
	.globl gUnknown_84EDA70
gUnknown_84EDA70: @ 0x084EDA70
	.incbin "baserom.gba", 0x4eda70, 0x20
	.globl gUnknown_84EDA90
gUnknown_84EDA90: @ 0x084EDA90
	.incbin "baserom.gba", 0x4eda90, 0x30
	.globl gUnknown_84EDAC0
gUnknown_84EDAC0: @ 0x084EDAC0
	.incbin "baserom.gba", 0x4edac0, 0x30
	.globl gUnknown_84EDAF0
gUnknown_84EDAF0: @ 0x084EDAF0
	.incbin "baserom.gba", 0x4edaf0, 0x10
	.globl gUnknown_84EDB00
gUnknown_84EDB00: @ 0x084EDB00
	.incbin "baserom.gba", 0x4edb00, 0x410
	.globl gUnknown_84EDF10
gUnknown_84EDF10: @ 0x084EDF10
	.incbin "baserom.gba", 0x4edf10, 0x20
	.globl gUnknown_84EDF30
gUnknown_84EDF30: @ 0x084EDF30
	.incbin "baserom.gba", 0x4edf30, 0x140
	.globl gUnknown_84EE070
gUnknown_84EE070: @ 0x084EE070
	.incbin "baserom.gba", 0x4ee070, 0x428
	.globl gUnknown_84EE498
gUnknown_84EE498: @ 0x084EE498
	.incbin "baserom.gba", 0x4ee498, 0x430
	.globl gUnknown_84EE8C8
gUnknown_84EE8C8: @ 0x084EE8C8
	.incbin "baserom.gba", 0x4ee8c8, 0x20
	.globl gUnknown_84EE8E8
gUnknown_84EE8E8: @ 0x084EE8E8
	.incbin "baserom.gba", 0x4ee8e8, 0x320
	.globl gUnknown_84EEC08
gUnknown_84EEC08: @ 0x084EEC08
	.incbin "baserom.gba", 0x4eec08, 0x310
	.globl gUnknown_84EEF18
gUnknown_84EEF18: @ 0x084EEF18
	.incbin "baserom.gba", 0x4eef18, 0x310
	.globl gUnknown_84EF228
gUnknown_84EF228: @ 0x084EF228
	.incbin "baserom.gba", 0x4ef228, 0x210
	.globl gUnknown_84EF438
gUnknown_84EF438: @ 0x084EF438
	.incbin "baserom.gba", 0x4ef438, 0x110
	.globl gUnknown_84EF548
gUnknown_84EF548: @ 0x084EF548
	.incbin "baserom.gba", 0x4ef548, 0xc08
	.globl gUnknown_84F0150
gUnknown_84F0150: @ 0x084F0150
	.incbin "baserom.gba", 0x4f0150, 0xc
	.globl gUnknown_84F015C
gUnknown_84F015C: @ 0x084F015C
	.incbin "baserom.gba", 0x4f015c, 0x1ac
	.globl gUnknown_84F0308
gUnknown_84F0308: @ 0x084F0308
	.incbin "baserom.gba", 0x4f0308, 0x10
	.globl gUnknown_84F0318
gUnknown_84F0318: @ 0x084F0318
	.incbin "baserom.gba", 0x4f0318, 0x428
	.globl gUnknown_84F0740
gUnknown_84F0740: @ 0x084F0740
	.incbin "baserom.gba", 0x4f0740, 0x268
	.globl gUnknown_84F09A8
gUnknown_84F09A8: @ 0x084F09A8
	.incbin "baserom.gba", 0x4f09a8, 0x8028
	.globl gUnknown_84F89D0
gUnknown_84F89D0: @ 0x084F89D0
	.incbin "baserom.gba", 0x4f89d0, 0x45a0
	.globl gUnknown_84FCF70
gUnknown_84FCF70: @ 0x084FCF70
	.incbin "baserom.gba", 0x4fcf70, 0xc
	.globl gUnknown_84FCF7C
gUnknown_84FCF7C: @ 0x084FCF7C
	.incbin "baserom.gba", 0x4fcf7c, 0xc
	.globl gUnknown_84FCF88
gUnknown_84FCF88: @ 0x084FCF88
	.incbin "baserom.gba", 0x4fcf88, 0x10
	.globl gUnknown_84FCF98
gUnknown_84FCF98: @ 0x084FCF98
	.incbin "baserom.gba", 0x4fcf98, 0x10
	.globl gUnknown_84FCFA8
gUnknown_84FCFA8: @ 0x084FCFA8
	.incbin "baserom.gba", 0x4fcfa8, 0x20
	.globl gUnknown_84FCFC8
gUnknown_84FCFC8: @ 0x084FCFC8
	.incbin "baserom.gba", 0x4fcfc8, 0x288
	.globl gUnknown_84FD250
gUnknown_84FD250: @ 0x084FD250
	.incbin "baserom.gba", 0x4fd250, 0x1d0
	.globl gUnknown_84FD420
gUnknown_84FD420: @ 0x084FD420
	.incbin "baserom.gba", 0x4fd420, 0x270
	.globl gUnknown_84FD690
gUnknown_84FD690: @ 0x084FD690
	.incbin "baserom.gba", 0x4fd690, 0x308
	.globl gUnknown_84FD998
gUnknown_84FD998: @ 0x084FD998
	.incbin "baserom.gba", 0x4fd998, 0x120
	.globl gUnknown_84FDAB8
gUnknown_84FDAB8: @ 0x084FDAB8
	.incbin "baserom.gba", 0x4fdab8, 0x270
	.globl gUnknown_84FDD28
gUnknown_84FDD28: @ 0x084FDD28
	.incbin "baserom.gba", 0x4fdd28, 0x270
	.globl gUnknown_84FDF98
gUnknown_84FDF98: @ 0x084FDF98
	.incbin "baserom.gba", 0x4fdf98, 0x308
	.globl gUnknown_84FE2A0
gUnknown_84FE2A0: @ 0x084FE2A0
	.incbin "baserom.gba", 0x4fe2a0, 0x120
	.globl gUnknown_84FE3C0
gUnknown_84FE3C0: @ 0x084FE3C0
	.incbin "baserom.gba", 0x4fe3c0, 0xa0
	.globl gUnknown_84FE460
gUnknown_84FE460: @ 0x084FE460
	.incbin "baserom.gba", 0x4fe460, 0x144
	.globl gUnknown_84FE5A4
gUnknown_84FE5A4: @ 0x084FE5A4
	.incbin "baserom.gba", 0x4fe5a4, 0xc0
	.globl gUnknown_84FE664
gUnknown_84FE664: @ 0x084FE664
	.incbin "baserom.gba", 0x4fe664, 0x20
	.globl gUnknown_84FE684
gUnknown_84FE684: @ 0x084FE684
	.incbin "baserom.gba", 0x4fe684, 0x10
	.globl gUnknown_84FE694
gUnknown_84FE694: @ 0x084FE694
	.incbin "baserom.gba", 0x4fe694, 0x4
	.globl gUnknown_84FE698
gUnknown_84FE698: @ 0x084FE698
	.incbin "baserom.gba", 0x4fe698, 0x4
	.globl gUnknown_84FE69C
gUnknown_84FE69C: @ 0x084FE69C
	.incbin "baserom.gba", 0x4fe69c, 0x30
	.globl gUnknown_84FE6CC
gUnknown_84FE6CC: @ 0x084FE6CC
	.incbin "baserom.gba", 0x4fe6cc, 0x18fd0
	.globl gUnknown_851769C
gUnknown_851769C: @ 0x0851769C
	.incbin "baserom.gba", 0x51769c, 0x8
	.globl gUnknown_85176A4
gUnknown_85176A4: @ 0x085176A4
	.incbin "baserom.gba", 0x5176a4, 0x18
	.globl gUnknown_85176BC
gUnknown_85176BC: @ 0x085176BC
	.incbin "baserom.gba", 0x5176bc, 0x3e4
	.globl gUnknown_8517AA0
gUnknown_8517AA0: @ 0x08517AA0
	.incbin "baserom.gba", 0x517aa0, 0xb8
	.globl gUnknown_8517B58
gUnknown_8517B58: @ 0x08517B58
	.incbin "baserom.gba", 0x517b58, 0xc0
	.globl gUnknown_8517C18
gUnknown_8517C18: @ 0x08517C18
	.incbin "baserom.gba", 0x517c18, 0x1e9c
	.globl gUnknown_8519AB4
gUnknown_8519AB4: @ 0x08519AB4
	.incbin "baserom.gba", 0x519ab4, 0x7e4
	.globl gUnknown_851A298
gUnknown_851A298: @ 0x0851A298
	.incbin "baserom.gba", 0x51a298, 0x450
	.globl gUnknown_851A6E8
gUnknown_851A6E8: @ 0x0851A6E8
	.incbin "baserom.gba", 0x51a6e8, 0x2e4
	.globl gUnknown_851A9CC
gUnknown_851A9CC: @ 0x0851A9CC
	.incbin "baserom.gba", 0x51a9cc, 0x240
	.globl gUnknown_851AC0C
gUnknown_851AC0C: @ 0x0851AC0C
	.incbin "baserom.gba", 0x51ac0c, 0xa8
	.globl gUnknown_851ACB4
gUnknown_851ACB4: @ 0x0851ACB4
	.incbin "baserom.gba", 0x51acb4, 0x18
	.globl gUnknown_851ACCC
gUnknown_851ACCC: @ 0x0851ACCC
	.incbin "baserom.gba", 0x51accc, 0x18
	.globl gUnknown_851ACE4
gUnknown_851ACE4: @ 0x0851ACE4
	.incbin "baserom.gba", 0x51ace4, 0x90
	.globl gUnknown_851AD74
gUnknown_851AD74: @ 0x0851AD74
	.incbin "baserom.gba", 0x51ad74, 0x18
	.globl gUnknown_851AD8C
gUnknown_851AD8C: @ 0x0851AD8C
	.incbin "baserom.gba", 0x51ad8c, 0x10
	.globl gUnknown_851AD9C
gUnknown_851AD9C: @ 0x0851AD9C
	.incbin "baserom.gba", 0x51ad9c, 0x24
	.globl gUnknown_851ADC0
gUnknown_851ADC0: @ 0x0851ADC0
	.incbin "baserom.gba", 0x51adc0, 0x18
	.globl gUnknown_851ADD8
gUnknown_851ADD8: @ 0x0851ADD8
	.incbin "baserom.gba", 0x51add8, 0x10
	.globl gUnknown_851ADE8
gUnknown_851ADE8: @ 0x0851ADE8
	.incbin "baserom.gba", 0x51ade8, 0xc000
	.globl gUnknown_8526DE8
gUnknown_8526DE8: @ 0x08526DE8
	.incbin "baserom.gba", 0x526de8, 0x4
	.globl gUnknown_8526DEC
gUnknown_8526DEC: @ 0x08526DEC
	.incbin "baserom.gba", 0x526dec, 0xf0
	.globl gUnknown_8526EDC
gUnknown_8526EDC: @ 0x08526EDC
	.incbin "baserom.gba", 0x526edc, 0x10
	.globl gUnknown_8526EEC
gUnknown_8526EEC: @ 0x08526EEC
	.incbin "baserom.gba", 0x526eec, 0x20
	.globl gUnknown_8526F0C
gUnknown_8526F0C: @ 0x08526F0C
	.incbin "baserom.gba", 0x526f0c, 0x20
	.globl gUnknown_8526F2C
gUnknown_8526F2C: @ 0x08526F2C
	.incbin "baserom.gba", 0x526f2c, 0x20
	.globl gUnknown_8526F4C
gUnknown_8526F4C: @ 0x08526F4C
	.incbin "baserom.gba", 0x526f4c, 0x820
	.globl gUnknown_852776C
gUnknown_852776C: @ 0x0852776C
	.incbin "baserom.gba", 0x52776c, 0x3080
	.globl gUnknown_852A7EC
gUnknown_852A7EC: @ 0x0852A7EC
	.incbin "baserom.gba", 0x52a7ec, 0xc
	.globl gUnknown_852A7F8
gUnknown_852A7F8: @ 0x0852A7F8
	.incbin "baserom.gba", 0x52a7f8, 0x1c
	.globl gUnknown_852A814
gUnknown_852A814: @ 0x0852A814
	.incbin "baserom.gba", 0x52a814, 0x18
	.globl gUnknown_852A82C
gUnknown_852A82C: @ 0x0852A82C
	.incbin "baserom.gba", 0x52a82c, 0x9c
	.globl gUnknown_852A8C8
gUnknown_852A8C8: @ 0x0852A8C8
	.incbin "baserom.gba", 0x52a8c8, 0x18
	.globl gUnknown_852A8E0
gUnknown_852A8E0: @ 0x0852A8E0
	.incbin "baserom.gba", 0x52a8e0, 0x8
	.globl gUnknown_852A8E8
gUnknown_852A8E8: @ 0x0852A8E8
	.incbin "baserom.gba", 0x52a8e8, 0x8
	.globl gUnknown_852A8F0
gUnknown_852A8F0: @ 0x0852A8F0
	.incbin "baserom.gba", 0x52a8f0, 0x38
	.globl gUnknown_852A928
gUnknown_852A928: @ 0x0852A928
	.incbin "baserom.gba", 0x52a928, 0x8c
	.globl gUnknown_852A9B4
gUnknown_852A9B4: @ 0x0852A9B4
	.incbin "baserom.gba", 0x52a9b4, 0x18
	.globl gUnknown_852A9CC
gUnknown_852A9CC: @ 0x0852A9CC
	.incbin "baserom.gba", 0x52a9cc, 0x8
	.globl gUnknown_852A9D4
gUnknown_852A9D4: @ 0x0852A9D4
	.incbin "baserom.gba", 0x52a9d4, 0x20
	.globl gUnknown_852A9F4
gUnknown_852A9F4: @ 0x0852A9F4
	.incbin "baserom.gba", 0x52a9f4, 0x18
	.globl gUnknown_852AA0C
gUnknown_852AA0C: @ 0x0852AA0C
	.incbin "baserom.gba", 0x52aa0c, 0x1c
	.globl gUnknown_852AA28
gUnknown_852AA28: @ 0x0852AA28
	.incbin "baserom.gba", 0x52aa28, 0x38
	.globl gUnknown_852AA60
gUnknown_852AA60: @ 0x0852AA60
	.incbin "baserom.gba", 0x52aa60, 0x18
	.globl gUnknown_852AA78
gUnknown_852AA78: @ 0x0852AA78
	.incbin "baserom.gba", 0x52aa78, 0x8
	.globl gUnknown_852AA80
gUnknown_852AA80: @ 0x0852AA80
	.incbin "baserom.gba", 0x52aa80, 0xc
	.globl gUnknown_852AA8C
gUnknown_852AA8C: @ 0x0852AA8C
	.incbin "baserom.gba", 0x52aa8c, 0x8
	.globl gUnknown_852AA94
gUnknown_852AA94: @ 0x0852AA94
	.incbin "baserom.gba", 0x52aa94, 0x8
	.globl gUnknown_852AA9C
gUnknown_852AA9C: @ 0x0852AA9C
	.incbin "baserom.gba", 0x52aa9c, 0x44
	.globl gUnknown_852AAE0
gUnknown_852AAE0: @ 0x0852AAE0
	.incbin "baserom.gba", 0x52aae0, 0x18
	.globl gUnknown_852AAF8
gUnknown_852AAF8: @ 0x0852AAF8
	.incbin "baserom.gba", 0x52aaf8, 0x4
	.globl gUnknown_852AAFC
gUnknown_852AAFC: @ 0x0852AAFC
	.incbin "baserom.gba", 0x52aafc, 0x4
	.globl gUnknown_852AB00
gUnknown_852AB00: @ 0x0852AB00
	.incbin "baserom.gba", 0x52ab00, 0x14
	.globl gUnknown_852AB14
gUnknown_852AB14: @ 0x0852AB14
	.incbin "baserom.gba", 0x52ab14, 0x4
	.globl gUnknown_852AB18
gUnknown_852AB18: @ 0x0852AB18
	.incbin "baserom.gba", 0x52ab18, 0xc
	.globl gUnknown_852AB24
gUnknown_852AB24: @ 0x0852AB24
	.incbin "baserom.gba", 0x52ab24, 0x8
	.globl gUnknown_852AB2C
gUnknown_852AB2C: @ 0x0852AB2C
	.incbin "baserom.gba", 0x52ab2c, 0x8
	.globl gUnknown_852AB34
gUnknown_852AB34: @ 0x0852AB34
	.incbin "baserom.gba", 0x52ab34, 0xc
	.globl gUnknown_852AB40
gUnknown_852AB40: @ 0x0852AB40
	.incbin "baserom.gba", 0x52ab40, 0x3
	.globl gUnknown_852AB43
gUnknown_852AB43: @ 0x0852AB43
	.incbin "baserom.gba", 0x52ab43, 0x5
	.globl gUnknown_852AB48
gUnknown_852AB48: @ 0x0852AB48
	.incbin "baserom.gba", 0x52ab48, 0x48
	.globl gUnknown_852AB90
gUnknown_852AB90: @ 0x0852AB90
	.incbin "baserom.gba", 0x52ab90, 0x48
	.globl gUnknown_852ABD8
gUnknown_852ABD8: @ 0x0852ABD8
	.incbin "baserom.gba", 0x52abd8, 0x48
	.globl gUnknown_852AC20
gUnknown_852AC20: @ 0x0852AC20
	.incbin "baserom.gba", 0x52ac20, 0x48
	.globl gUnknown_852AC68
gUnknown_852AC68: @ 0x0852AC68
	.incbin "baserom.gba", 0x52ac68, 0x48
	.globl gUnknown_852ACB0
gUnknown_852ACB0: @ 0x0852ACB0
	.incbin "baserom.gba", 0x52acb0, 0x48
	.globl gUnknown_852ACF8
gUnknown_852ACF8: @ 0x0852ACF8
	.incbin "baserom.gba", 0x52acf8, 0x48
	.globl gUnknown_852AD40
gUnknown_852AD40: @ 0x0852AD40
	.incbin "baserom.gba", 0x52ad40, 0x4e0
	.globl gUnknown_852B220
gUnknown_852B220: @ 0x0852B220
	.incbin "baserom.gba", 0x52b220, 0x10
	.globl gUnknown_852B230
gUnknown_852B230: @ 0x0852B230

	@ src/strings.c:926 gText_NumPlayerLink
	.globl gText_Rom_52B230
gText_Rom_52B230: @ 0x0852B230
	.string "{STR_VAR_1}にん せつぞく$"
	.if (. - gText_Rom_52B230) > 0xa
	.error "gText_Rom_52B230 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_52B230) < 0xa
	.space 0xa - (. - gText_Rom_52B230)
	.endif
	.incbin "baserom.gba", 0x52b23a, 0x2
	.globl gUnknown_852B23C
gUnknown_852B23C: @ 0x0852B23C
	.incbin "baserom.gba", 0x52b23c, 0x3
	.globl gUnknown_852B23F
gUnknown_852B23F: @ 0x0852B23F
	.incbin "baserom.gba", 0x52b23f, 0x5

	@ src/strings.c:927 gText_BronzeCard
	.globl gText_Rom_52B244
gText_Rom_52B244: @ 0x0852B244
	.string "ブロンズ$"
	.if (. - gText_Rom_52B244) > 0x5
	.error "gText_Rom_52B244 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_52B244) < 0x5
	.space 0x5 - (. - gText_Rom_52B244)
	.endif

	@ src/strings.c:928 gText_CopperCard
	.globl gText_Rom_52B249
gText_Rom_52B249: @ 0x0852B249
	.string "カッパー$"
	.if (. - gText_Rom_52B249) > 0x5
	.error "gText_Rom_52B249 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_52B249) < 0x5
	.space 0x5 - (. - gText_Rom_52B249)
	.endif

	@ src/strings.c:929 gText_SilverCard
	.globl gText_Rom_52B24E
gText_Rom_52B24E: @ 0x0852B24E
	.string "シルバー$"
	.if (. - gText_Rom_52B24E) > 0x5
	.error "gText_Rom_52B24E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_52B24E) < 0x5
	.space 0x5 - (. - gText_Rom_52B24E)
	.endif

	@ src/strings.c:930 gText_GoldCard
	.globl gText_Rom_52B253
gText_Rom_52B253: @ 0x0852B253
	.string "ゴールド$"
	.if (. - gText_Rom_52B253) > 0x5
	.error "gText_Rom_52B253 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_52B253) < 0x5
	.space 0x5 - (. - gText_Rom_52B253)
	.endif
	.incbin "baserom.gba", 0x52b258, 0x180
	.globl gUnknown_852B3D8
gUnknown_852B3D8: @ 0x0852B3D8
	.incbin "baserom.gba", 0x52b3d8, 0x10
	.globl gUnknown_852B3E8
gUnknown_852B3E8: @ 0x0852B3E8
	.incbin "baserom.gba", 0x52b3e8, 0x30
	.globl gUnknown_852B418
gUnknown_852B418: @ 0x0852B418
	.incbin "baserom.gba", 0x52b418, 0x48
	.globl gUnknown_852B460
gUnknown_852B460: @ 0x0852B460
	.incbin "baserom.gba", 0x52b460, 0x18
	.globl gUnknown_852B478
gUnknown_852B478: @ 0x0852B478
	.incbin "baserom.gba", 0x52b478, 0x257c
	.globl gUnknown_852D9F4
gUnknown_852D9F4: @ 0x0852D9F4
	.incbin "baserom.gba", 0x52d9f4, 0xb4c
	.globl gUnknown_852E540
gUnknown_852E540: @ 0x0852E540
	.incbin "baserom.gba", 0x52e540, 0x180
	.globl gUnknown_852E6C0
gUnknown_852E6C0: @ 0x0852E6C0
	.incbin "baserom.gba", 0x52e6c0, 0x64
	.globl gUnknown_852E724
gUnknown_852E724: @ 0x0852E724
	.incbin "baserom.gba", 0x52e724, 0x4
	.globl gUnknown_852E728
gUnknown_852E728: @ 0x0852E728
	.incbin "baserom.gba", 0x52e728, 0x73d4
	.globl gUnknown_8535AFC
gUnknown_8535AFC: @ 0x08535AFC
	.incbin "baserom.gba", 0x535afc, 0x200
	.globl gUnknown_8535CFC
gUnknown_8535CFC: @ 0x08535CFC
	.incbin "baserom.gba", 0x535cfc, 0x20
	.globl gUnknown_8535D1C
gUnknown_8535D1C: @ 0x08535D1C
	.incbin "baserom.gba", 0x535d1c, 0x280
	.globl gUnknown_8535F9C
gUnknown_8535F9C: @ 0x08535F9C
	.incbin "baserom.gba", 0x535f9c, 0x80
	.globl gUnknown_853601C
gUnknown_853601C: @ 0x0853601C
	.incbin "baserom.gba", 0x53601c, 0x20
	.globl gUnknown_853603C
gUnknown_853603C: @ 0x0853603C
	.incbin "baserom.gba", 0x53603c, 0x280
	.globl gUnknown_85362BC
gUnknown_85362BC: @ 0x085362BC
	.incbin "baserom.gba", 0x5362bc, 0x20
	.globl gUnknown_85362DC
gUnknown_85362DC: @ 0x085362DC
	.incbin "baserom.gba", 0x5362dc, 0xbc0
	.globl gUnknown_8536E9C
gUnknown_8536E9C: @ 0x08536E9C
	.incbin "baserom.gba", 0x536e9c, 0x20
	.globl gUnknown_8536EBC
gUnknown_8536EBC: @ 0x08536EBC
	.incbin "baserom.gba", 0x536ebc, 0x20
	.globl gUnknown_8536EDC
gUnknown_8536EDC: @ 0x08536EDC
	.incbin "baserom.gba", 0x536edc, 0x14
	.globl gUnknown_8536EF0
gUnknown_8536EF0: @ 0x08536EF0
	.incbin "baserom.gba", 0x536ef0, 0x68
	.globl gUnknown_8536F58
gUnknown_8536F58: @ 0x08536F58
	.incbin "baserom.gba", 0x536f58, 0x18
	.globl gUnknown_8536F70
gUnknown_8536F70: @ 0x08536F70
	.incbin "baserom.gba", 0x536f70, 0x40
	.globl gUnknown_8536FB0
gUnknown_8536FB0: @ 0x08536FB0
	.incbin "baserom.gba", 0x536fb0, 0x18
	.globl gUnknown_8536FC8
gUnknown_8536FC8: @ 0x08536FC8
	.incbin "baserom.gba", 0x536fc8, 0x18
	.globl gUnknown_8536FE0
gUnknown_8536FE0: @ 0x08536FE0
	.incbin "baserom.gba", 0x536fe0, 0x18
	.globl gUnknown_8536FF8
gUnknown_8536FF8: @ 0x08536FF8
	.incbin "baserom.gba", 0x536ff8, 0x18
	.globl gUnknown_8537010
gUnknown_8537010: @ 0x08537010
	.incbin "baserom.gba", 0x537010, 0x10
	.globl gUnknown_8537020
gUnknown_8537020: @ 0x08537020
	.incbin "baserom.gba", 0x537020, 0x10
	.globl gUnknown_8537030
gUnknown_8537030: @ 0x08537030
	.incbin "baserom.gba", 0x537030, 0x20
	.globl gUnknown_8537050
gUnknown_8537050: @ 0x08537050
	.incbin "baserom.gba", 0x537050, 0x18
	.globl gUnknown_8537068
gUnknown_8537068: @ 0x08537068
	.incbin "baserom.gba", 0x537068, 0x4
	.globl gUnknown_853706C
gUnknown_853706C: @ 0x0853706C
	.incbin "baserom.gba", 0x53706c, 0x4
	.globl gUnknown_8537070
gUnknown_8537070: @ 0x08537070
	.incbin "baserom.gba", 0x537070, 0x4
	.globl gUnknown_8537074
gUnknown_8537074: @ 0x08537074
	.incbin "baserom.gba", 0x537074, 0x1c
	.globl gUnknown_8537090
gUnknown_8537090: @ 0x08537090
	.incbin "baserom.gba", 0x537090, 0x18
	.globl gUnknown_85370A8
gUnknown_85370A8: @ 0x085370A8
	.incbin "baserom.gba", 0x5370a8, 0x1c
	.globl gUnknown_85370C4
gUnknown_85370C4: @ 0x085370C4
	.incbin "baserom.gba", 0x5370c4, 0x14
	.globl gUnknown_85370D8
gUnknown_85370D8: @ 0x085370D8
	.incbin "baserom.gba", 0x5370d8, 0xc
	.globl gUnknown_85370E4
gUnknown_85370E4: @ 0x085370E4
	.incbin "baserom.gba", 0x5370e4, 0x18
	.globl gUnknown_85370FC
gUnknown_85370FC: @ 0x085370FC
	.incbin "baserom.gba", 0x5370fc, 0x10
	.globl gUnknown_853710C
gUnknown_853710C: @ 0x0853710C
	.incbin "baserom.gba", 0x53710c, 0x14
	.globl gUnknown_8537120
gUnknown_8537120: @ 0x08537120
	.incbin "baserom.gba", 0x537120, 0x8
	.globl gUnknown_8537128
gUnknown_8537128: @ 0x08537128
	.incbin "baserom.gba", 0x537128, 0x8
	.globl gUnknown_8537130
gUnknown_8537130: @ 0x08537130
	.incbin "baserom.gba", 0x537130, 0x8
	.globl gUnknown_8537138
gUnknown_8537138: @ 0x08537138
	.incbin "baserom.gba", 0x537138, 0x10
	.globl gUnknown_8537148
gUnknown_8537148: @ 0x08537148
	.incbin "baserom.gba", 0x537148, 0xc
	.globl gUnknown_8537154
gUnknown_8537154: @ 0x08537154
	.incbin "baserom.gba", 0x537154, 0x1c
	.globl gUnknown_8537170
gUnknown_8537170: @ 0x08537170
	.incbin "baserom.gba", 0x537170, 0x1c
	.globl gUnknown_853718C
gUnknown_853718C: @ 0x0853718C
	.incbin "baserom.gba", 0x53718c, 0x14
	.globl gUnknown_85371A0
gUnknown_85371A0: @ 0x085371A0
	.incbin "baserom.gba", 0x5371a0, 0x54
	.globl gUnknown_85371F4
gUnknown_85371F4: @ 0x085371F4
	.incbin "baserom.gba", 0x5371f4, 0x8
	.globl gUnknown_85371FC
gUnknown_85371FC: @ 0x085371FC
	.incbin "baserom.gba", 0x5371fc, 0x1c
	.globl gUnknown_8537218
gUnknown_8537218: @ 0x08537218
	.incbin "baserom.gba", 0x537218, 0x24
	.globl gUnknown_853723C
gUnknown_853723C: @ 0x0853723C
	.incbin "baserom.gba", 0x53723c, 0x5c
	.globl gUnknown_8537298
gUnknown_8537298: @ 0x08537298
	.incbin "baserom.gba", 0x537298, 0x18
	.globl gUnknown_85372B0
gUnknown_85372B0: @ 0x085372B0
	.incbin "baserom.gba", 0x5372b0, 0x60
	.globl gUnknown_8537310
gUnknown_8537310: @ 0x08537310

	@ src/main_menu.c:266 gText_MainMenuOption
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_537310
gText_Rom_537310: @ 0x08537310
	.string "せっていを かえる$"
	.if (. - gText_Rom_537310) != 0xa
	.error "gText_Rom_537310 must retain its original byte length"
	.endif
	.globl gText_Rom_537316
	.set gText_Rom_537316, gText_Rom_537310 + 0x6

	@ asm/scanline_effect.s:2188 sub_080BA834 (+1 aliases)
	.globl gText_Rom_53731A
gText_Rom_53731A: @ 0x0853731A
	.string "はなしの　はやさ$"
	.if (. - gText_Rom_53731A) > 0x9
	.error "gText_Rom_53731A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_53731A) < 0x9
	.space 0x9 - (. - gText_Rom_53731A)
	.endif

	@ asm/scanline_effect.s:2188 sub_080BA834
	.globl gText_Rom_537323
gText_Rom_537323: @ 0x08537323
	.string "せんとうエフェクト$"
	.if (. - gText_Rom_537323) > 0xa
	.error "gText_Rom_537323 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_537323) < 0xa
	.space 0xa - (. - gText_Rom_537323)
	.endif

	@ asm/scanline_effect.s:2188 sub_080BA834 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_53732D
gText_Rom_53732D: @ 0x0853732D
	.string "しあいの　ルール$"
	.if (. - gText_Rom_53732D) != 0x9
	.error "gText_Rom_53732D must retain its original byte length"
	.endif
	.globl gText_Rom_537332
	.set gText_Rom_537332, gText_Rom_53732D + 0x5

	@ asm/scanline_effect.s:2188 sub_080BA834 (+1 aliases)
	.globl gText_Rom_537336
gText_Rom_537336: @ 0x08537336
	.string "サウンド$"
	.if (. - gText_Rom_537336) > 0x5
	.error "gText_Rom_537336 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_537336) < 0x5
	.space 0x5 - (. - gText_Rom_537336)
	.endif

	@ asm/scanline_effect.s:2188 sub_080BA834
	.globl gText_Rom_53733B
gText_Rom_53733B: @ 0x0853733B
	.string "ウインドウ$"
	.if (. - gText_Rom_53733B) > 0x6
	.error "gText_Rom_53733B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_53733B) < 0x6
	.space 0x6 - (. - gText_Rom_53733B)
	.endif

	@ asm/scanline_effect.s:2188 sub_080BA834 (+2 aliases)
	.globl gText_Rom_537341
gText_Rom_537341: @ 0x08537341
	.string "おわる$"
	.if (. - gText_Rom_537341) > 0x4
	.error "gText_Rom_537341 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_537341) < 0x4
	.space 0x4 - (. - gText_Rom_537341)
	.endif

	@ asm/scanline_effect.s:2188 sub_080BA834
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_537345
gText_Rom_537345: @ 0x08537345
	.string "ボタンの　モード$"
	.if (. - gText_Rom_537345) != 0x9
	.error "gText_Rom_537345 must retain its original byte length"
	.endif
	.globl gText_Rom_53734A
	.set gText_Rom_53734A, gText_Rom_537345 + 0x5
	.incbin "baserom.gba", 0x53734e, 0x2
	.globl gUnknown_8537350
gUnknown_8537350: @ 0x08537350
	.incbin "baserom.gba", 0x537350, 0x1c
	.globl gUnknown_853736C
gUnknown_853736C: @ 0x0853736C

	@ src/option_menu.c:76 gText_TextSpeedSlow
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_53736C
gText_Rom_53736C: @ 0x0853736C
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}おそい$"
	.if (. - gText_Rom_53736C) != 0xa
	.error "gText_Rom_53736C must retain its original byte length"
	.endif
	.globl gText_Rom_537372
	.set gText_Rom_537372, gText_Rom_53736C + 0x6
	.globl gUnknown_8537376
gUnknown_8537376: @ 0x08537376

	@ src/option_menu.c:77 gText_TextSpeedMid
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_537376
gText_Rom_537376: @ 0x08537376
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}ふつう$"
	.if (. - gText_Rom_537376) != 0xa
	.error "gText_Rom_537376 must retain its original byte length"
	.endif
	.globl gText_Rom_53737C
	.set gText_Rom_53737C, gText_Rom_537376 + 0x6
	.globl gUnknown_8537380
gUnknown_8537380: @ 0x08537380

	@ src/option_menu.c:78 gText_TextSpeedFast
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_537380
gText_Rom_537380: @ 0x08537380
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}はやい$"
	.if (. - gText_Rom_537380) != 0xa
	.error "gText_Rom_537380 must retain its original byte length"
	.endif
	.globl gText_Rom_537386
	.set gText_Rom_537386, gText_Rom_537380 + 0x6
	.globl gUnknown_853738A
gUnknown_853738A: @ 0x0853738A
	.incbin "baserom.gba", 0x53738a, 0x9
	.globl gUnknown_8537393
gUnknown_8537393: @ 0x08537393
	.incbin "baserom.gba", 0x537393, 0xa
	.globl gUnknown_853739D
gUnknown_853739D: @ 0x0853739D

	@ src/option_menu.c:81 gText_BattleStyleShift
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_53739D
gText_Rom_53739D: @ 0x0853739D
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}いれかえ$"
	.if (. - gText_Rom_53739D) != 0xb
	.error "gText_Rom_53739D must retain its original byte length"
	.endif
	.globl gText_Rom_5373A3
	.set gText_Rom_5373A3, gText_Rom_53739D + 0x6
	.globl gUnknown_85373A8
gUnknown_85373A8: @ 0x085373A8

	@ src/option_menu.c:82 gText_BattleStyleSet
	.globl gText_Rom_5373A8
gText_Rom_5373A8: @ 0x085373A8
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}かちぬき$"
	.if (. - gText_Rom_5373A8) > 0xb
	.error "gText_Rom_5373A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5373A8) < 0xb
	.space 0xb - (. - gText_Rom_5373A8)
	.endif
	.globl gUnknown_85373B3
gUnknown_85373B3: @ 0x085373B3

	@ src/option_menu.c:83 gText_SoundMono
	.globl gText_Rom_5373B3
gText_Rom_5373B3: @ 0x085373B3
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}モノラル$"
	.if (. - gText_Rom_5373B3) > 0xb
	.error "gText_Rom_5373B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5373B3) < 0xb
	.space 0xb - (. - gText_Rom_5373B3)
	.endif
	.globl gUnknown_85373BE
gUnknown_85373BE: @ 0x085373BE

	@ src/option_menu.c:84 gText_SoundStereo
	.globl gText_Rom_5373BE
gText_Rom_5373BE: @ 0x085373BE
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}ステレオ$"
	.if (. - gText_Rom_5373BE) > 0xb
	.error "gText_Rom_5373BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5373BE) < 0xb
	.space 0xb - (. - gText_Rom_5373BE)
	.endif
	.globl gUnknown_85373C9
gUnknown_85373C9: @ 0x085373C9

	@ src/option_menu.c:85 gText_FrameType
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5373C9
gText_Rom_5373C9: @ 0x085373C9
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}タイプ$"
	.if (. - gText_Rom_5373C9) != 0xa
	.error "gText_Rom_5373C9 must retain its original byte length"
	.endif
	.globl gText_Rom_5373CF
	.set gText_Rom_5373CF, gText_Rom_5373C9 + 0x6
	.globl gUnknown_85373D3
gUnknown_85373D3: @ 0x085373D3

	@ src/option_menu.c:86 gText_FrameTypeNumber
	.globl gText_Rom_5373D3
gText_Rom_5373D3: @ 0x085373D3
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}$"
	.if (. - gText_Rom_5373D3) > 0x7
	.error "gText_Rom_5373D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5373D3) < 0x7
	.space 0x7 - (. - gText_Rom_5373D3)
	.endif
	.globl gUnknown_85373DA
gUnknown_85373DA: @ 0x085373DA

	@ src/option_menu.c:87 gText_ButtonTypeNormal
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5373DA
gText_Rom_5373DA: @ 0x085373DA
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}ノーマル$"
	.if (. - gText_Rom_5373DA) != 0xb
	.error "gText_Rom_5373DA must retain its original byte length"
	.endif
	.globl gText_Rom_5373E0
	.set gText_Rom_5373E0, gText_Rom_5373DA + 0x6
	.globl gUnknown_85373E5
gUnknown_85373E5: @ 0x085373E5

	@ src/option_menu.c:88 gText_ButtonTypeLR
	.globl gText_Rom_5373E5
gText_Rom_5373E5: @ 0x085373E5
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}LR$"
	.if (. - gText_Rom_5373E5) > 0x9
	.error "gText_Rom_5373E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5373E5) < 0x9
	.space 0x9 - (. - gText_Rom_5373E5)
	.endif
	.globl gUnknown_85373EE
gUnknown_85373EE: @ 0x085373EE
	.incbin "baserom.gba", 0x5373ee, 0xe
	.globl gUnknown_85373FC
gUnknown_85373FC: @ 0x085373FC
	.incbin "baserom.gba", 0x5373fc, 0x18
	.globl gUnknown_8537414
gUnknown_8537414: @ 0x08537414
	.incbin "baserom.gba", 0x537414, 0x8
	.globl gUnknown_853741C
gUnknown_853741C: @ 0x0853741C
	.incbin "baserom.gba", 0x53741c, 0x6
	.globl gUnknown_8537422
gUnknown_8537422: @ 0x08537422
	.incbin "baserom.gba", 0x537422, 0x60
	.globl gUnknown_8537482
gUnknown_8537482: @ 0x08537482
	.incbin "baserom.gba", 0x537482, 0x60
	.globl gUnknown_85374E2
gUnknown_85374E2: @ 0x085374E2
	.incbin "baserom.gba", 0x5374e2, 0xc0
	.globl gUnknown_85375A2
gUnknown_85375A2: @ 0x085375A2
	.incbin "baserom.gba", 0x5375a2, 0xbe
	.globl gUnknown_8537660
gUnknown_8537660: @ 0x08537660
	.incbin "baserom.gba", 0x537660, 0xd0
	.globl gUnknown_8537730
gUnknown_8537730: @ 0x08537730
	.incbin "baserom.gba", 0x537730, 0xd4
	.globl gUnknown_8537804
gUnknown_8537804: @ 0x08537804
	.incbin "baserom.gba", 0x537804, 0x150
	.globl gUnknown_8537954
gUnknown_8537954: @ 0x08537954
	.incbin "baserom.gba", 0x537954, 0xbc
	.globl gUnknown_8537A10
gUnknown_8537A10: @ 0x08537A10
	.incbin "baserom.gba", 0x537a10, 0x134
	.globl gUnknown_8537B44
gUnknown_8537B44: @ 0x08537B44
	.incbin "baserom.gba", 0x537b44, 0xec
	.globl gUnknown_8537C30
gUnknown_8537C30: @ 0x08537C30
	.incbin "baserom.gba", 0x537c30, 0xf4
	.globl gUnknown_8537D24
gUnknown_8537D24: @ 0x08537D24
	.incbin "baserom.gba", 0x537d24, 0x90
	.globl gUnknown_8537DB4
gUnknown_8537DB4: @ 0x08537DB4
	.incbin "baserom.gba", 0x537db4, 0xd8
	.globl gUnknown_8537E8C
gUnknown_8537E8C: @ 0x08537E8C
	.incbin "baserom.gba", 0x537e8c, 0x1168
	.globl gUnknown_8538FF4
gUnknown_8538FF4: @ 0x08538FF4
	.incbin "baserom.gba", 0x538ff4, 0x336
	.globl gUnknown_853932A
gUnknown_853932A: @ 0x0853932A
	.incbin "baserom.gba", 0x53932a, 0x304
	.globl gUnknown_853962E
gUnknown_853962E: @ 0x0853962E
	.incbin "baserom.gba", 0x53962e, 0x4b6
	.globl gUnknown_8539AE4
gUnknown_8539AE4: @ 0x08539AE4
	.incbin "baserom.gba", 0x539ae4, 0x18
	.globl gUnknown_8539AFC
gUnknown_8539AFC: @ 0x08539AFC
	.incbin "baserom.gba", 0x539afc, 0x18
	.globl gUnknown_8539B14
gUnknown_8539B14: @ 0x08539B14
	.incbin "baserom.gba", 0x539b14, 0x18
	.globl gUnknown_8539B2C
gUnknown_8539B2C: @ 0x08539B2C
	.incbin "baserom.gba", 0x539b2c, 0x18
	.globl gUnknown_8539B44
gUnknown_8539B44: @ 0x08539B44
	.incbin "baserom.gba", 0x539b44, 0x18
	.globl gUnknown_8539B5C
gUnknown_8539B5C: @ 0x08539B5C
	.incbin "baserom.gba", 0x539b5c, 0x18
	.globl gUnknown_8539B74
gUnknown_8539B74: @ 0x08539B74
	.incbin "baserom.gba", 0x539b74, 0x18
	.globl gUnknown_8539B8C
gUnknown_8539B8C: @ 0x08539B8C
	.incbin "baserom.gba", 0x539b8c, 0x18
	.globl gUnknown_8539BA4
gUnknown_8539BA4: @ 0x08539BA4
	.incbin "baserom.gba", 0x539ba4, 0x18
	.globl gUnknown_8539BBC
gUnknown_8539BBC: @ 0x08539BBC
	.incbin "baserom.gba", 0x539bbc, 0x10
	.globl gUnknown_8539BCC
gUnknown_8539BCC: @ 0x08539BCC
	.incbin "baserom.gba", 0x539bcc, 0x10
	.globl gUnknown_8539BDC
gUnknown_8539BDC: @ 0x08539BDC
	.incbin "baserom.gba", 0x539bdc, 0x5
	.globl gUnknown_8539BE1
gUnknown_8539BE1: @ 0x08539BE1
	.incbin "baserom.gba", 0x539be1, 0x7
	.globl gUnknown_8539BE8
gUnknown_8539BE8: @ 0x08539BE8
	.incbin "baserom.gba", 0x539be8, 0x10
	.globl gUnknown_8539BF8
gUnknown_8539BF8: @ 0x08539BF8
	.incbin "baserom.gba", 0x539bf8, 0x10
	.globl gUnknown_8539C08
gUnknown_8539C08: @ 0x08539C08

