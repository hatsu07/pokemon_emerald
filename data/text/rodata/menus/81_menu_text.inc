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
	.4byte ScriptCmd_loadspritegfx
	.4byte ScriptCmd_unloadspritegfx
	.4byte ScriptCmd_createsprite
	.4byte ScriptCmd_createvisualtask
	.4byte ScriptCmd_delay
	.4byte ScriptCmd_waitbgfadein
	.4byte ScriptCmd_hang2
	.4byte ScriptCmd_stopsound
	.4byte ScriptCmd_end
	.4byte ScriptCmd_playse
	.4byte ScriptCmd_monbg
	.4byte ScriptCmd_clearmonbg
	.4byte ScriptCmd_setalpha
	.4byte ScriptCmd_blendoff
	.4byte ScriptCmd_call
	.4byte ScriptCmd_return
	.4byte ScriptCmd_setarg
	.4byte ScriptCmd_choosetwoturnanim
	.4byte ScriptCmd_jumpifmoveturn
	.4byte ScriptCmd_goto
	.4byte ScriptCmd_fadetobg
	.4byte ScriptCmd_restorebg
	.4byte ScriptCmd_waitbgfadeout
	.4byte ScriptCmd_waitforvisualfinish
	.4byte ScriptCmd_changebg
	.4byte ScriptCmd_playsewithpan
	.4byte ScriptCmd_setpan
	.4byte ScriptCmd_panse_1B
	.4byte ScriptCmd_loopsewithpan
	.4byte ScriptCmd_waitplaysewithpan
	.4byte ScriptCmd_setbldcnt
	.4byte ScriptCmd_createsoundtask
	.4byte ScriptCmd_waitsound
	.4byte ScriptCmd_jumpargeq
	.4byte ScriptCmd_monbg_22
	.4byte ScriptCmd_clearmonbg_23
	.4byte ScriptCmd_jumpifcontest
	.4byte ScriptCmd_fadetobgfromset
	.4byte ScriptCmd_panse_26
	.4byte ScriptCmd_panse_27
	.4byte ScriptCmd_monbgprio_28
	.4byte ScriptCmd_monbgprio_29
	.4byte ScriptCmd_monbgprio_2A
	.4byte ScriptCmd_invisible
	.4byte ScriptCmd_visible
	.4byte ScriptCmd_doublebattle_2D
	.4byte ScriptCmd_doublebattle_2E
	.4byte sub_080A550C
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
	.space 0x4, 0x00
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
	.4byte None_Init
	.4byte SetWeatherScreenFadeOut
	.4byte None_Init
	.4byte None_Finish
	.4byte Clouds_InitVars
	.4byte Clouds_Main
	.4byte Clouds_InitAll
	.4byte Clouds_Finish
	.4byte Sunny_InitVars
	.4byte Sunny_Main
	.4byte Sunny_InitAll
	.4byte Shade_Finish
	.4byte LightRain_InitVars
	.4byte LightRain_Main
	.4byte LightRain_InitAll
	.4byte LightRain_Finish
	.4byte Snow_InitVars
	.4byte Snow_Main
	.4byte Snow_InitAll
	.4byte Snow_Finish
	.4byte MedRain_InitVars
	.4byte Rain_Main
	.4byte MedRain_InitAll
	.4byte Rain_Finish
	.4byte Fog1_InitVars
	.4byte Fog1_Main
	.4byte Fog1_InitAll
	.4byte Fog1_Finish
	.4byte Ash_InitVars
	.4byte Ash_Main
	.4byte Ash_InitAll
	.4byte Ash_Finish
	.4byte Sandstorm_InitVars
	.4byte Sandstorm_Main
	.4byte Sandstorm_InitAll
	.4byte Sandstorm_Finish
	.4byte Fog2_InitVars
	.4byte Fog2_Main
	.4byte Fog2_InitAll
	.4byte Fog2_Finish
	.4byte Fog1_InitVars
	.4byte Fog1_Main
	.4byte Fog1_InitAll
	.4byte Fog1_Finish
	.4byte Shade_InitVars
	.4byte Shade_Main
	.4byte Shade_InitAll
	.4byte Drought_Finish
	.4byte Drought_InitVars
	.4byte Drought_Main
	.4byte Drought_InitAll
	.4byte Sunny_Finish
	.4byte HeavyRain_InitVars
	.4byte Rain_Main
	.4byte HeavyRain_InitAll
	.4byte Rain_Finish
	.4byte Bubbles_InitVars
	.4byte Bubbles_Main
	.4byte Bubbles_InitAll
	.4byte Bubbles_Finish
	.globl gUnknown_8526EDC
gUnknown_8526EDC: @ 0x08526EDC
	.4byte UpdateWeatherGammaShift
	.4byte FadeInScreenWithWeather
	.4byte DoNothing
	.4byte DoNothing
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
	.space 0x2, 0x00
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
	.4byte GetTrainerApproachDistanceSouth
	.4byte GetTrainerApproachDistanceNorth
	.4byte GetTrainerApproachDistanceWest
	.4byte GetTrainerApproachDistanceEast
	.globl gUnknown_852B3E8
gUnknown_852B3E8: @ 0x0852B3E8
	.4byte sub_080B38D0
	.4byte TrainerExclamationMark
	.4byte WaitTrainerExclamationMark
	.4byte TrainerMoveToPlayer
	.4byte PlayerFaceApproachingTrainer
	.4byte WaitPlayerFaceApproachingTrainer
	.4byte RevealDisguisedTrainer
	.4byte WaitRevealDisguisedTrainer
	.4byte RevealHiddenTrainer
	.4byte PopOutOfAshHiddenTrainer
	.4byte JumpInPlaceHiddenTrainer
	.4byte WaitRevealHiddenTrainer
	.globl gUnknown_852B418
gUnknown_852B418: @ 0x0852B418
	.incbin "baserom.gba", 0x52b418, 0x48
	.globl gUnknown_852B460
gUnknown_852B460: @ 0x0852B460
	.incbin "baserom.gba", 0x52b460, 0x18

	.incbin "baserom.gba", 0x52b478, 0x18
