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

	@ src/pokedex.c:850 sText_No000
	.globl gText_Rom_539C08
gText_Rom_539C08: @ 0x08539C08
	.string "{NO}000$"
	.if (. - gText_Rom_539C08) > 0x6
	.error "gText_Rom_539C08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_539C08) < 0x6
	.space 0x6 - (. - gText_Rom_539C08)
	.endif
	.globl gUnknown_8539C0E
gUnknown_8539C0E: @ 0x08539C0E
	.incbin "baserom.gba", 0x539c0e, 0x42
	.globl gUnknown_8539C50
gUnknown_8539C50: @ 0x08539C50
	.incbin "baserom.gba", 0x539c50, 0x6a4c
	.globl gUnknown_854069C
gUnknown_854069C: @ 0x0854069C
	.incbin "baserom.gba", 0x54069c, 0x2a54
	.globl gUnknown_85430F0
gUnknown_85430F0: @ 0x085430F0
	.incbin "baserom.gba", 0x5430f0, 0x20
	.globl gUnknown_8543110
gUnknown_8543110: @ 0x08543110
	.incbin "baserom.gba", 0x543110, 0x10
	.globl gUnknown_8543120
gUnknown_8543120: @ 0x08543120
	.incbin "baserom.gba", 0x543120, 0x28
	.globl gUnknown_8543148
gUnknown_8543148: @ 0x08543148
	.incbin "baserom.gba", 0x543148, 0x8
	.globl gUnknown_8543150
gUnknown_8543150: @ 0x08543150
	.incbin "baserom.gba", 0x543150, 0x18
	.globl gUnknown_8543168
gUnknown_8543168: @ 0x08543168
	.incbin "baserom.gba", 0x543168, 0x676
	.globl gUnknown_85437DE
gUnknown_85437DE: @ 0x085437DE
	.incbin "baserom.gba", 0x5437de, 0x7e
	.globl gUnknown_854385C
gUnknown_854385C: @ 0x0854385C
	.incbin "baserom.gba", 0x54385c, 0x58c
	.globl gUnknown_8543DE8
gUnknown_8543DE8: @ 0x08543DE8
	.incbin "baserom.gba", 0x543de8, 0x19c
	.globl gUnknown_8543F84
gUnknown_8543F84: @ 0x08543F84
	.incbin "baserom.gba", 0x543f84, 0x188
	.globl gUnknown_854410C
gUnknown_854410C: @ 0x0854410C
	.incbin "baserom.gba", 0x54410c, 0x28
	.globl gUnknown_8544134
gUnknown_8544134: @ 0x08544134
	.incbin "baserom.gba", 0x544134, 0x18
	.globl gUnknown_854414C
gUnknown_854414C: @ 0x0854414C
	.incbin "baserom.gba", 0x54414c, 0x54
	.globl gUnknown_85441A0
gUnknown_85441A0: @ 0x085441A0
	.incbin "baserom.gba", 0x5441a0, 0x1c
	.globl gUnknown_85441BC
gUnknown_85441BC: @ 0x085441BC
	.incbin "baserom.gba", 0x5441bc, 0x1c
	.globl gUnknown_85441D8
gUnknown_85441D8: @ 0x085441D8
	.incbin "baserom.gba", 0x5441d8, 0x1c
	.globl gUnknown_85441F4
gUnknown_85441F4: @ 0x085441F4
	.incbin "baserom.gba", 0x5441f4, 0x1c
	.globl gUnknown_8544210
gUnknown_8544210: @ 0x08544210
	.incbin "baserom.gba", 0x544210, 0x18
	.globl gUnknown_8544228
gUnknown_8544228: @ 0x08544228
	.incbin "baserom.gba", 0x544228, 0x38
	.globl gUnknown_8544260
gUnknown_8544260: @ 0x08544260
	.incbin "baserom.gba", 0x544260, 0x58
	.globl gUnknown_85442B8
gUnknown_85442B8: @ 0x085442B8
	.incbin "baserom.gba", 0x5442b8, 0x60
	.globl gUnknown_8544318
gUnknown_8544318: @ 0x08544318
	.incbin "baserom.gba", 0x544318, 0x98
	.globl gUnknown_85443B0
gUnknown_85443B0: @ 0x085443B0
	.incbin "baserom.gba", 0x5443b0, 0x2
	.globl gUnknown_85443B2
gUnknown_85443B2: @ 0x085443B2
	.incbin "baserom.gba", 0x5443b2, 0x1

	@ src/strings.c:83 gText_DexSearchAlphaABC
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5443B3
gText_Rom_5443B3: @ 0x085443B3
	.string "あいうえお$"
	.if (. - gText_Rom_5443B3) != 0x6
	.error "gText_Rom_5443B3 must retain its original byte length"
	.endif
	.globl gUnknown_85443B8
	.set gUnknown_85443B8, gText_Rom_5443B3 + 0x5
	.incbin "baserom.gba", 0x5443b9, 0x13
	.globl gUnknown_85443CC
gUnknown_85443CC: @ 0x085443CC
	.incbin "baserom.gba", 0x5443cc, 0x30
	.globl gUnknown_85443FC
gUnknown_85443FC: @ 0x085443FC
	.incbin "baserom.gba", 0x5443fc, 0x10
	.globl gUnknown_854440C
gUnknown_854440C: @ 0x0854440C
	.incbin "baserom.gba", 0x54440c, 0x10
	.globl gUnknown_854441C
gUnknown_854441C: @ 0x0854441C
	.incbin "baserom.gba", 0x54441c, 0x740
	.globl gUnknown_8544B5C
gUnknown_8544B5C: @ 0x08544B5C
	.incbin "baserom.gba", 0x544b5c, 0x6c0
	.globl gUnknown_854521C
gUnknown_854521C: @ 0x0854521C
	.incbin "baserom.gba", 0x54521c, 0x174
	.globl gUnknown_8545390
gUnknown_8545390: @ 0x08545390
	.incbin "baserom.gba", 0x545390, 0x1a0
	.globl gUnknown_8545530
gUnknown_8545530: @ 0x08545530
	.incbin "baserom.gba", 0x545530, 0x1b8
	.globl gUnknown_85456E8
gUnknown_85456E8: @ 0x085456E8
	.incbin "baserom.gba", 0x5456e8, 0xdc
	.globl gUnknown_85457C4
gUnknown_85457C4: @ 0x085457C4
	.incbin "baserom.gba", 0x5457c4, 0x12c
	.globl gUnknown_85458F0
gUnknown_85458F0: @ 0x085458F0
	.incbin "baserom.gba", 0x5458f0, 0x180
	.globl gUnknown_8545A70
gUnknown_8545A70: @ 0x08545A70
	.incbin "baserom.gba", 0x545a70, 0x18c
	.globl gUnknown_8545BFC
gUnknown_8545BFC: @ 0x08545BFC
	.incbin "baserom.gba", 0x545bfc, 0x98
	.globl gUnknown_8545C94
gUnknown_8545C94: @ 0x08545C94
	.incbin "baserom.gba", 0x545c94, 0x478
	.globl gUnknown_854610C
gUnknown_854610C: @ 0x0854610C
	.incbin "baserom.gba", 0x54610c, 0x20
	.globl gUnknown_854612C
gUnknown_854612C: @ 0x0854612C
	.incbin "baserom.gba", 0x54612c, 0x20
	.globl gUnknown_854614C
gUnknown_854614C: @ 0x0854614C
	.incbin "baserom.gba", 0x54614c, 0x20
	.globl gUnknown_854616C
gUnknown_854616C: @ 0x0854616C
	.incbin "baserom.gba", 0x54616c, 0x20
	.globl gUnknown_854618C
gUnknown_854618C: @ 0x0854618C
	.incbin "baserom.gba", 0x54618c, 0x20
	.globl gUnknown_85461AC
gUnknown_85461AC: @ 0x085461AC
	.incbin "baserom.gba", 0x5461ac, 0x20
	.globl gUnknown_85461CC
gUnknown_85461CC: @ 0x085461CC
	.incbin "baserom.gba", 0x5461cc, 0x20
	.globl gUnknown_85461EC
gUnknown_85461EC: @ 0x085461EC
	.incbin "baserom.gba", 0x5461ec, 0x20
	.globl gUnknown_854620C
gUnknown_854620C: @ 0x0854620C
	.incbin "baserom.gba", 0x54620c, 0x20
	.globl gUnknown_854622C
gUnknown_854622C: @ 0x0854622C
	.incbin "baserom.gba", 0x54622c, 0x248
	.globl gUnknown_8546474
gUnknown_8546474: @ 0x08546474
	.incbin "baserom.gba", 0x546474, 0x2a0
	.globl gUnknown_8546714
gUnknown_8546714: @ 0x08546714
	.incbin "baserom.gba", 0x546714, 0x10
	.globl gUnknown_8546724
gUnknown_8546724: @ 0x08546724
	.incbin "baserom.gba", 0x546724, 0x20
	.globl gUnknown_8546744
gUnknown_8546744: @ 0x08546744
	.incbin "baserom.gba", 0x546744, 0x14
	.globl gUnknown_8546758
gUnknown_8546758: @ 0x08546758
	.incbin "baserom.gba", 0x546758, 0x14
	.globl gUnknown_854676C
gUnknown_854676C: @ 0x0854676C
	.incbin "baserom.gba", 0x54676c, 0x3
	.globl gUnknown_854676F
gUnknown_854676F: @ 0x0854676F
	.incbin "baserom.gba", 0x54676f, 0x6
	.globl gUnknown_8546775
gUnknown_8546775: @ 0x08546775
	.incbin "baserom.gba", 0x546775, 0x3
	.globl gUnknown_8546778
gUnknown_8546778: @ 0x08546778
	.incbin "baserom.gba", 0x546778, 0x8
	.globl gUnknown_8546780
gUnknown_8546780: @ 0x08546780
	.incbin "baserom.gba", 0x546780, 0x8
	.globl gUnknown_8546788
gUnknown_8546788: @ 0x08546788
	.incbin "baserom.gba", 0x546788, 0x18
	.globl gUnknown_85467A0
gUnknown_85467A0: @ 0x085467A0
	.incbin "baserom.gba", 0x5467a0, 0x2
	.globl gUnknown_85467A2
gUnknown_85467A2: @ 0x085467A2
	.incbin "baserom.gba", 0x5467a2, 0x2
	.globl gUnknown_85467A4
gUnknown_85467A4: @ 0x085467A4
	.incbin "baserom.gba", 0x5467a4, 0x8
	.globl gUnknown_85467AC
gUnknown_85467AC: @ 0x085467AC
	.incbin "baserom.gba", 0x5467ac, 0x2
	.globl gUnknown_85467AE
gUnknown_85467AE: @ 0x085467AE
	.incbin "baserom.gba", 0x5467ae, 0x2
	.globl gUnknown_85467B0
gUnknown_85467B0: @ 0x085467B0
	.incbin "baserom.gba", 0x5467b0, 0x2
	.globl gUnknown_85467B2
gUnknown_85467B2: @ 0x085467B2
	.incbin "baserom.gba", 0x5467b2, 0x2
	.globl gUnknown_85467B4
gUnknown_85467B4: @ 0x085467B4
	.incbin "baserom.gba", 0x5467b4, 0x2
	.globl gUnknown_85467B6
gUnknown_85467B6: @ 0x085467B6
	.incbin "baserom.gba", 0x5467b6, 0x2
	.globl gUnknown_85467B8
gUnknown_85467B8: @ 0x085467B8

	@ src/trainer_card.c:1184 sText_HofTime
	.globl gText_Rom_5467B8
gText_Rom_5467B8: @ 0x085467B8
	.string "{STR_VAR_1}:{STR_VAR_2}:{STR_VAR_3}$"
	.if (. - gText_Rom_5467B8) > 0x9
	.error "gText_Rom_5467B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5467B8) < 0x9
	.space 0x9 - (. - gText_Rom_5467B8)
	.endif
	.globl gUnknown_85467C1
gUnknown_85467C1: @ 0x085467C1
	.incbin "baserom.gba", 0x5467c1, 0x3
	.globl gUnknown_85467C4
gUnknown_85467C4: @ 0x085467C4
	.incbin "baserom.gba", 0x5467c4, 0xc
	.globl gUnknown_85467D0
gUnknown_85467D0: @ 0x085467D0
	.incbin "baserom.gba", 0x5467d0, 0x6
	.globl gUnknown_85467D6
gUnknown_85467D6: @ 0x085467D6
	.incbin "baserom.gba", 0x5467d6, 0x6
	.globl gUnknown_85467DC
gUnknown_85467DC: @ 0x085467DC
	.incbin "baserom.gba", 0x5467dc, 0x4
	.globl gUnknown_85467E0
gUnknown_85467E0: @ 0x085467E0
	.incbin "baserom.gba", 0x5467e0, 0x4
	.globl gUnknown_85467E4
gUnknown_85467E4: @ 0x085467E4
	.incbin "baserom.gba", 0x5467e4, 0x1c0
	.globl gUnknown_85469A4
gUnknown_85469A4: @ 0x085469A4
	.incbin "baserom.gba", 0x5469a4, 0x5c7

	@ src/strings.c:412 gText_ApostropheSBase
	.globl gText_Rom_546F6B
gText_Rom_546F6B: @ 0x08546F6B
	.string " きち$"
	.if (. - gText_Rom_546F6B) > 0x4
	.error "gText_Rom_546F6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_546F6B) < 0x4
	.space 0x4 - (. - gText_Rom_546F6B)
	.endif
	.incbin "baserom.gba", 0x546f6f, 0xcbe

	@ src/strings.c:412 gText_ApostropheSBase
	.globl gText_Rom_547C2D
gText_Rom_547C2D: @ 0x08547C2D
	.string " きち$"
	.if (. - gText_Rom_547C2D) > 0x4
	.error "gText_Rom_547C2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_547C2D) < 0x4
	.space 0x4 - (. - gText_Rom_547C2D)
	.endif
	.incbin "baserom.gba", 0x547c31, 0x537
	.globl gUnknown_8548168
gUnknown_8548168: @ 0x08548168
	.incbin "baserom.gba", 0x548168, 0x14a8
	.globl gUnknown_8549610
gUnknown_8549610: @ 0x08549610
	.incbin "baserom.gba", 0x549610, 0x2e8
	.globl gUnknown_85498F8
gUnknown_85498F8: @ 0x085498F8
	.incbin "baserom.gba", 0x5498f8, 0x260
	.globl gUnknown_8549B58
gUnknown_8549B58: @ 0x08549B58
	.incbin "baserom.gba", 0x549b58, 0x260
	.globl gUnknown_8549DB8
gUnknown_8549DB8: @ 0x08549DB8
	.incbin "baserom.gba", 0x549db8, 0x18
	.globl gUnknown_8549DD0
gUnknown_8549DD0: @ 0x08549DD0
	.incbin "baserom.gba", 0x549dd0, 0x18
	.globl gUnknown_8549DE8
gUnknown_8549DE8: @ 0x08549DE8
	.incbin "baserom.gba", 0x549de8, 0x38
	.globl gUnknown_8549E20
gUnknown_8549E20: @ 0x08549E20
	.incbin "baserom.gba", 0x549e20, 0xffc
	.globl gUnknown_854AE1C
gUnknown_854AE1C: @ 0x0854AE1C
	.incbin "baserom.gba", 0x54ae1c, 0xe8
	.globl gUnknown_854AF04
gUnknown_854AF04: @ 0x0854AF04
	.incbin "baserom.gba", 0x54af04, 0x8
	.globl gUnknown_854AF0C
gUnknown_854AF0C: @ 0x0854AF0C
	.incbin "baserom.gba", 0x54af0c, 0xc
	.globl gUnknown_854AF18
gUnknown_854AF18: @ 0x0854AF18
	.incbin "baserom.gba", 0x54af18, 0xc
	.globl gUnknown_854AF24
gUnknown_854AF24: @ 0x0854AF24
	.incbin "baserom.gba", 0x54af24, 0x28
	.globl gUnknown_854AF4C
gUnknown_854AF4C: @ 0x0854AF4C
	.incbin "baserom.gba", 0x54af4c, 0x20
	.globl gUnknown_854AF6C
gUnknown_854AF6C: @ 0x0854AF6C
	.incbin "baserom.gba", 0x54af6c, 0x3
	.globl gUnknown_854AF6F
gUnknown_854AF6F: @ 0x0854AF6F
	.incbin "baserom.gba", 0x54af6f, 0x3
	.globl gUnknown_854AF72
gUnknown_854AF72: @ 0x0854AF72
	.incbin "baserom.gba", 0x54af72, 0x6
	.globl gUnknown_854AF78
gUnknown_854AF78: @ 0x0854AF78
	.incbin "baserom.gba", 0x54af78, 0x68
	.globl gUnknown_854AFE0
gUnknown_854AFE0: @ 0x0854AFE0
	.incbin "baserom.gba", 0x54afe0, 0x18
	.globl gUnknown_854AFF8
gUnknown_854AFF8: @ 0x0854AFF8
	.incbin "baserom.gba", 0x54aff8, 0x10
	.globl gUnknown_854B008
gUnknown_854B008: @ 0x0854B008
	.incbin "baserom.gba", 0x54b008, 0xd0
	.globl gUnknown_854B0D8
gUnknown_854B0D8: @ 0x0854B0D8
	.incbin "baserom.gba", 0x54b0d8, 0x30
	.globl gUnknown_854B108
gUnknown_854B108: @ 0x0854B108
	.incbin "baserom.gba", 0x54b108, 0x18
	.globl gUnknown_854B120
gUnknown_854B120: @ 0x0854B120
	.incbin "baserom.gba", 0x54b120, 0x18
	.globl gUnknown_854B138
gUnknown_854B138: @ 0x0854B138
	.incbin "baserom.gba", 0x54b138, 0x3c
	.globl gUnknown_854B174
gUnknown_854B174: @ 0x0854B174
	.incbin "baserom.gba", 0x54b174, 0x70
	.globl gUnknown_854B1E4
gUnknown_854B1E4: @ 0x0854B1E4
	.incbin "baserom.gba", 0x54b1e4, 0x28
	.globl gUnknown_854B20C
gUnknown_854B20C: @ 0x0854B20C
	.incbin "baserom.gba", 0x54b20c, 0x28
	.globl gUnknown_854B234
gUnknown_854B234: @ 0x0854B234
	.incbin "baserom.gba", 0x54b234, 0x24
	.globl gUnknown_854B258
gUnknown_854B258: @ 0x0854B258

	@ src/pokemon_storage_system.c:933 sText_OutOf30
	.globl gText_Rom_54B258
gText_Rom_54B258: @ 0x0854B258
	.string "/30$"
	.if (. - gText_Rom_54B258) > 0x4
	.error "gText_Rom_54B258 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_54B258) < 0x4
	.space 0x4 - (. - gText_Rom_54B258)
	.endif
	.globl gUnknown_854B25C
gUnknown_854B25C: @ 0x0854B25C
	.incbin "baserom.gba", 0x54b25c, 0x20
	.globl gUnknown_854B27C
gUnknown_854B27C: @ 0x0854B27C
	.incbin "baserom.gba", 0x54b27c, 0x800
	.globl gUnknown_854BA7C
gUnknown_854BA7C: @ 0x0854BA7C
	.incbin "baserom.gba", 0x54ba7c, 0x180
	.globl gUnknown_854BBFC
gUnknown_854BBFC: @ 0x0854BBFC
	.incbin "baserom.gba", 0x54bbfc, 0x98
	.globl gUnknown_854BC94
gUnknown_854BC94: @ 0x0854BC94
	.incbin "baserom.gba", 0x54bc94, 0x12c
	.globl gUnknown_854BDC0
gUnknown_854BDC0: @ 0x0854BDC0
	.incbin "baserom.gba", 0x54bdc0, 0xfc
	.globl gUnknown_854BEBC
gUnknown_854BEBC: @ 0x0854BEBC
	.incbin "baserom.gba", 0x54bebc, 0x40
	.globl gUnknown_854BEFC
gUnknown_854BEFC: @ 0x0854BEFC
	.incbin "baserom.gba", 0x54befc, 0x20
	.globl gUnknown_854BF1C
gUnknown_854BF1C: @ 0x0854BF1C
	.incbin "baserom.gba", 0x54bf1c, 0x20
	.globl gUnknown_854BF3C
gUnknown_854BF3C: @ 0x0854BF3C
	.incbin "baserom.gba", 0x54bf3c, 0x20
	.globl gUnknown_854BF5C
gUnknown_854BF5C: @ 0x0854BF5C
	.incbin "baserom.gba", 0x54bf5c, 0x20
	.globl gUnknown_854BF7C
gUnknown_854BF7C: @ 0x0854BF7C
	.incbin "baserom.gba", 0x54bf7c, 0x20
	.globl gUnknown_854BF9C
gUnknown_854BF9C: @ 0x0854BF9C
	.incbin "baserom.gba", 0x54bf9c, 0x6c0
	.globl gUnknown_854C65C
gUnknown_854C65C: @ 0x0854C65C
	.incbin "baserom.gba", 0x54c65c, 0xb0
	.globl gUnknown_854C70C
gUnknown_854C70C: @ 0x0854C70C
	.incbin "baserom.gba", 0x54c70c, 0x48
	.globl gUnknown_854C754
gUnknown_854C754: @ 0x0854C754
	.incbin "baserom.gba", 0x54c754, 0x18
	.globl gUnknown_854C76C
gUnknown_854C76C: @ 0x0854C76C
	.incbin "baserom.gba", 0x54c76c, 0x238
	.globl gUnknown_854C9A4
gUnknown_854C9A4: @ 0x0854C9A4
	.incbin "baserom.gba", 0x54c9a4, 0x20
	.globl gUnknown_854C9C4
gUnknown_854C9C4: @ 0x0854C9C4
	.incbin "baserom.gba", 0x54c9c4, 0x20
	.globl gUnknown_854C9E4
gUnknown_854C9E4: @ 0x0854C9E4
	.incbin "baserom.gba", 0x54c9e4, 0x10
	.globl gUnknown_854C9F4
gUnknown_854C9F4: @ 0x0854C9F4
	.incbin "baserom.gba", 0x54c9f4, 0x8
	.globl gUnknown_854C9FC
gUnknown_854C9FC: @ 0x0854C9FC
	.incbin "baserom.gba", 0x54c9fc, 0x8
	.globl gUnknown_854CA04
gUnknown_854CA04: @ 0x0854CA04
	.incbin "baserom.gba", 0x54ca04, 0x18
	.globl gUnknown_854CA1C
gUnknown_854CA1C: @ 0x0854CA1C
	.incbin "baserom.gba", 0x54ca1c, 0xf8
	.globl gUnknown_854CB14
gUnknown_854CB14: @ 0x0854CB14
	.incbin "baserom.gba", 0x54cb14, 0x58
	.globl gUnknown_854CB6C
gUnknown_854CB6C: @ 0x0854CB6C
	.incbin "baserom.gba", 0x54cb6c, 0x18
	.globl gUnknown_854CB84
gUnknown_854CB84: @ 0x0854CB84
	.incbin "baserom.gba", 0x54cb84, 0x48
	.globl gUnknown_854CBCC
gUnknown_854CBCC: @ 0x0854CBCC
	.incbin "baserom.gba", 0x54cbcc, 0x4c58
	.globl gUnknown_8551824
gUnknown_8551824: @ 0x08551824
	.incbin "baserom.gba", 0x551824, 0x44
	.globl gUnknown_8551868
gUnknown_8551868: @ 0x08551868
	.incbin "baserom.gba", 0x551868, 0x41d8
	.globl gUnknown_8555A40
gUnknown_8555A40: @ 0x08555A40
	.incbin "baserom.gba", 0x555a40, 0xc0
	.globl gUnknown_8555B00
gUnknown_8555B00: @ 0x08555B00
	.incbin "baserom.gba", 0x555b00, 0x7c
	.globl gUnknown_8555B7C
gUnknown_8555B7C: @ 0x08555B7C
	.incbin "baserom.gba", 0x555b7c, 0x28
	.globl gUnknown_8555BA4
gUnknown_8555BA4: @ 0x08555BA4
	.incbin "baserom.gba", 0x555ba4, 0x38
	.globl gUnknown_8555BDC
gUnknown_8555BDC: @ 0x08555BDC
	.incbin "baserom.gba", 0x555bdc, 0x8b8
	.globl gUnknown_8556494
gUnknown_8556494: @ 0x08556494
	.incbin "baserom.gba", 0x556494, 0xc
	.globl gUnknown_85564A0
gUnknown_85564A0: @ 0x085564A0
	.incbin "baserom.gba", 0x5564a0, 0x18
	.globl gUnknown_85564B8
gUnknown_85564B8: @ 0x085564B8
	.incbin "baserom.gba", 0x5564b8, 0x28
	.globl gUnknown_85564E0
gUnknown_85564E0: @ 0x085564E0
	.incbin "baserom.gba", 0x5564e0, 0x18
	.globl gUnknown_85564F8
gUnknown_85564F8: @ 0x085564F8
	.incbin "baserom.gba", 0x5564f8, 0x54
	.globl gUnknown_855654C
gUnknown_855654C: @ 0x0855654C
	.incbin "baserom.gba", 0x55654c, 0x18
	.globl gUnknown_8556564
gUnknown_8556564: @ 0x08556564
	.incbin "baserom.gba", 0x556564, 0x18
	.globl gUnknown_855657C
gUnknown_855657C: @ 0x0855657C
	.incbin "baserom.gba", 0x55657c, 0x9c
	.globl gUnknown_8556618
gUnknown_8556618: @ 0x08556618
	.incbin "baserom.gba", 0x556618, 0x8
	.globl gUnknown_8556620
gUnknown_8556620: @ 0x08556620
	.incbin "baserom.gba", 0x556620, 0x14c
	.globl gUnknown_855676C
gUnknown_855676C: @ 0x0855676C
	.incbin "baserom.gba", 0x55676c, 0x18
	.globl gUnknown_8556784
gUnknown_8556784: @ 0x08556784
	.incbin "baserom.gba", 0x556784, 0x20
	.globl gUnknown_85567A4
gUnknown_85567A4: @ 0x085567A4
	.incbin "baserom.gba", 0x5567a4, 0x60
	.globl gUnknown_8556804
gUnknown_8556804: @ 0x08556804
	.incbin "baserom.gba", 0x556804, 0x6e0
	.globl gUnknown_8556EE4
gUnknown_8556EE4: @ 0x08556EE4
	.incbin "baserom.gba", 0x556ee4, 0x1b8
	.globl gUnknown_855709C
gUnknown_855709C: @ 0x0855709C
	.incbin "baserom.gba", 0x55709c, 0x30
	.globl gUnknown_85570CC
gUnknown_85570CC: @ 0x085570CC
	.incbin "baserom.gba", 0x5570cc, 0x44
	.globl gUnknown_8557110
gUnknown_8557110: @ 0x08557110
	.incbin "baserom.gba", 0x557110, 0x34
	.globl gUnknown_8557144
gUnknown_8557144: @ 0x08557144
	.incbin "baserom.gba", 0x557144, 0x8
	.globl gUnknown_855714C
gUnknown_855714C: @ 0x0855714C
	.incbin "baserom.gba", 0x55714c, 0x18
	.globl gUnknown_8557164
gUnknown_8557164: @ 0x08557164
	.incbin "baserom.gba", 0x557164, 0x2
	.globl gUnknown_8557166
gUnknown_8557166: @ 0x08557166
	.incbin "baserom.gba", 0x557166, 0x62
	.globl gUnknown_85571C8
gUnknown_85571C8: @ 0x085571C8
	.incbin "baserom.gba", 0x5571c8, 0x18
	.globl gUnknown_85571E0
gUnknown_85571E0: @ 0x085571E0
	.incbin "baserom.gba", 0x5571e0, 0x1680
	.globl gUnknown_8558860
gUnknown_8558860: @ 0x08558860
	.incbin "baserom.gba", 0x558860, 0x1680
	.globl gUnknown_8559EE0
gUnknown_8559EE0: @ 0x08559EE0
	.incbin "baserom.gba", 0x559ee0, 0xc0
	.globl gUnknown_8559FA0
gUnknown_8559FA0: @ 0x08559FA0
	.incbin "baserom.gba", 0x559fa0, 0x20
	.globl gUnknown_8559FC0
gUnknown_8559FC0: @ 0x08559FC0
	.incbin "baserom.gba", 0x559fc0, 0xb4
	.globl gUnknown_855A074
gUnknown_855A074: @ 0x0855A074
	.incbin "baserom.gba", 0x55a074, 0x5f0
	.globl gUnknown_855A664
gUnknown_855A664: @ 0x0855A664
	.incbin "baserom.gba", 0x55a664, 0x8
	.globl gUnknown_855A66C
gUnknown_855A66C: @ 0x0855A66C
	.incbin "baserom.gba", 0x55a66c, 0x8
	.globl gUnknown_855A674
gUnknown_855A674: @ 0x0855A674
	.incbin "baserom.gba", 0x55a674, 0x8
	.globl gUnknown_855A67C
gUnknown_855A67C: @ 0x0855A67C
	.incbin "baserom.gba", 0x55a67c, 0x4c
	.globl gUnknown_855A6C8
gUnknown_855A6C8: @ 0x0855A6C8
	.incbin "baserom.gba", 0x55a6c8, 0x4
	.globl gUnknown_855A6CC
gUnknown_855A6CC: @ 0x0855A6CC
	.incbin "baserom.gba", 0x55a6cc, 0x4
	.globl gUnknown_855A6D0
gUnknown_855A6D0: @ 0x0855A6D0
	.incbin "baserom.gba", 0x55a6d0, 0x8
	.globl gUnknown_855A6D8
gUnknown_855A6D8: @ 0x0855A6D8
	.incbin "baserom.gba", 0x55a6d8, 0x8
	.globl gUnknown_855A6E0
gUnknown_855A6E0: @ 0x0855A6E0
	.incbin "baserom.gba", 0x55a6e0, 0x3c
	.globl gUnknown_855A71C
gUnknown_855A71C: @ 0x0855A71C
	.incbin "baserom.gba", 0x55a71c, 0x90
	.globl gUnknown_855A7AC
gUnknown_855A7AC: @ 0x0855A7AC
	.incbin "baserom.gba", 0x55a7ac, 0x18
	.globl gUnknown_855A7C4
gUnknown_855A7C4: @ 0x0855A7C4
	.incbin "baserom.gba", 0x55a7c4, 0x158
	.globl gUnknown_855A91C
gUnknown_855A91C: @ 0x0855A91C
	.incbin "baserom.gba", 0x55a91c, 0x8
	.globl gUnknown_855A924
gUnknown_855A924: @ 0x0855A924
	.incbin "baserom.gba", 0x55a924, 0x1c
	.globl gUnknown_855A940
gUnknown_855A940: @ 0x0855A940
	.incbin "baserom.gba", 0x55a940, 0x90

	@ src/data/items.h:240 items_line_240
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55A9D0
gText_Rom_55A9D0: @ 0x0855A9D0
	.string "ポケモンを かならず\nつかまえることが できる\nさいこうの ボール$"
	.if (. - gText_Rom_55A9D0) != 0x22
	.error "gText_Rom_55A9D0 must retain its original byte length"
	.endif
	.globl gText_Rom_55A9EE
	.set gText_Rom_55A9EE, gText_Rom_55A9D0 + 0x1e

	@ src/data/items.h:224 items_line_224
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55A9F2
gText_Rom_55A9F2: @ 0x0855A9F2
	.string "スーパーボール より\nつかまえ やすくなった\nとても すごい ボール$"
	.if (. - gText_Rom_55A9F2) != 0x23
	.error "gText_Rom_55A9F2 must retain its original byte length"
	.endif
	.globl gText_Rom_55AA11
	.set gText_Rom_55AA11, gText_Rom_55A9F2 + 0x1f

	@ src/data/items.h:208 items_line_208
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AA15
gText_Rom_55AA15: @ 0x0855AA15
	.string "モンスターボール より\nつかまえ やすくなった\nこうせいのうの ボール$"
	.if (. - gText_Rom_55AA15) != 0x24
	.error "gText_Rom_55AA15 must retain its original byte length"
	.endif
	.globl gText_Rom_55AA35
	.set gText_Rom_55AA35, gText_Rom_55AA15 + 0x20

	@ src/data/items.h:193 items_line_193
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AA39
gText_Rom_55AA39: @ 0x0855AA39
	.string "やせい ポケモンを\nつかまえるための どうぐ$"
	.if (. - gText_Rom_55AA39) != 0x17
	.error "gText_Rom_55AA39 must retain its original byte length"
	.endif
	.globl gText_Rom_55AA4C
	.set gText_Rom_55AA4C, gText_Rom_55AA39 + 0x13

	@ src/data/items.h:549 items_line_549
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AA50
gText_Rom_55AA50: @ 0x0855AA50
	.string "サファリゾーンで のみ\nつかうことが できる\nとくしゅな ボール$"
	.if (. - gText_Rom_55AA50) != 0x21
	.error "gText_Rom_55AA50 must retain its original byte length"
	.endif
	.globl gText_Rom_55AA6D
	.set gText_Rom_55AA6D, gText_Rom_55AA50 + 0x1d

	@ src/data/items.h:288 items_line_288
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AA71
gText_Rom_55AA71: @ 0x0855AA71
	.string "みずと むしタイプの\nポケモンが つかまえ\nやすくなる ボール$"
	.if (. - gText_Rom_55AA71) != 0x20
	.error "gText_Rom_55AA71 must retain its original byte length"
	.endif
	.globl gText_Rom_55AA8D
	.set gText_Rom_55AA8D, gText_Rom_55AA71 + 0x1c

	@ src/data/items.h:320 items_line_320
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AA91
gText_Rom_55AA91: @ 0x0855AA91
	.string "かいていに いる\nポケモンが つかまえ\nやすくなる ボール$"
	.if (. - gText_Rom_55AA91) != 0x1e
	.error "gText_Rom_55AA91 must retain its original byte length"
	.endif
	.globl gText_Rom_55AAAB
	.set gText_Rom_55AAAB, gText_Rom_55AA91 + 0x1a

	@ src/data/items.h:304 items_line_304
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AAAF
gText_Rom_55AAAF: @ 0x0855AAAF
	.string "つかまえる ポケモンが\nよわいほど つかまえ\nやすくなる ボール$"
	.if (. - gText_Rom_55AAAF) != 0x21
	.error "gText_Rom_55AAAF must retain its original byte length"
	.endif
	.globl gText_Rom_55AACC
	.set gText_Rom_55AACC, gText_Rom_55AAAF + 0x1d

	@ src/data/items.h:384 items_line_384
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AAD0
gText_Rom_55AAD0: @ 0x0855AAD0
	.string "つかまえた ことが ある\nポケモンが つかまえ\nやすくなる ボール$"
	.if (. - gText_Rom_55AAD0) != 0x22
	.error "gText_Rom_55AAD0 must retain its original byte length"
	.endif
	.globl gText_Rom_55AAEE
	.set gText_Rom_55AAEE, gText_Rom_55AAD0 + 0x1e

	@ src/data/items.h:352 items_line_352
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AAF2
gText_Rom_55AAF2: @ 0x0855AAF2
	.string "ターンすうが かかれば\nかかるほど つかまえ\nやすくなる ボール$"
	.if (. - gText_Rom_55AAF2) != 0x21
	.error "gText_Rom_55AAF2 must retain its original byte length"
	.endif
	.globl gText_Rom_55AB0F
	.set gText_Rom_55AB0F, gText_Rom_55AAF2 + 0x1d

	@ src/data/items.h:400 items_line_400
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AB13
gText_Rom_55AB13: @ 0x0855AB13
	.string "つかまえた ポケモンが\nなつき やすくなる\nいごこちの いい ボール$"
	.if (. - gText_Rom_55AB13) != 0x23
	.error "gText_Rom_55AB13 must retain its original byte length"
	.endif
	.globl gText_Rom_55AB32
	.set gText_Rom_55AB32, gText_Rom_55AB13 + 0x1f

	@ src/data/items.h:256 items_line_256
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AB36
gText_Rom_55AB36: @ 0x0855AB36
	.string "なにかの きねんに\nつくられた めずらしい\nモンスターボール$"
	.if (. - gText_Rom_55AB36) != 0x1f
	.error "gText_Rom_55AB36 must retain its original byte length"
	.endif
	.globl gText_Rom_55AB4C
	.set gText_Rom_55AB4C, gText_Rom_55AB36 + 0x16
	.globl gText_Rom_55AB51
	.set gText_Rom_55AB51, gText_Rom_55AB36 + 0x1b

	@ src/data/items.h:632 items_line_632
	.globl gText_Rom_55AB55
gText_Rom_55AB55: @ 0x0855AB55
	.string "ポケモンの たいりょくを\n20 かいふくする$"
	.if (. - gText_Rom_55AB55) > 0x17
	.error "gText_Rom_55AB55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AB55) < 0x17
	.space 0x17 - (. - gText_Rom_55AB55)
	.endif

	@ src/data/items.h:946 items_line_946
	.globl gText_Rom_55AB6C
gText_Rom_55AB6C: @ 0x0855AB6C
	.string "どく じょうたいを\nかいふくする$"
	.if (. - gText_Rom_55AB6C) > 0x11
	.error "gText_Rom_55AB6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AB6C) < 0x11
	.space 0x11 - (. - gText_Rom_55AB6C)
	.endif

	@ src/data/items.h:988 items_line_988
	.globl gText_Rom_55AB7D
gText_Rom_55AB7D: @ 0x0855AB7D
	.string "やけど じょうたいを\nかいふくする$"
	.if (. - gText_Rom_55AB7D) > 0x12
	.error "gText_Rom_55AB7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AB7D) < 0x12
	.space 0x12 - (. - gText_Rom_55AB7D)
	.endif

	@ src/data/items.h:1012 items_line_1012
	.globl gText_Rom_55AB8F
gText_Rom_55AB8F: @ 0x0855AB8F
	.string "こおり じょうたいを\nかいふくする$"
	.if (. - gText_Rom_55AB8F) > 0x12
	.error "gText_Rom_55AB8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AB8F) < 0x12
	.space 0x12 - (. - gText_Rom_55AB8F)
	.endif

	@ src/data/items.h:1036 items_line_1036
	.globl gText_Rom_55ABA1
gText_Rom_55ABA1: @ 0x0855ABA1
	.string "ねむり じょうたいを\nかいふくする$"
	.if (. - gText_Rom_55ABA1) > 0x12
	.error "gText_Rom_55ABA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ABA1) < 0x12
	.space 0x12 - (. - gText_Rom_55ABA1)
	.endif

	@ src/data/items.h:964 items_line_964
	.globl gText_Rom_55ABB3
gText_Rom_55ABB3: @ 0x0855ABB3
	.string "まひ じょうたいを\nかいふくする$"
	.if (. - gText_Rom_55ABB3) > 0x11
	.error "gText_Rom_55ABB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ABB3) < 0x11
	.space 0x11 - (. - gText_Rom_55ABB3)
	.endif

	@ src/data/items.h:716 items_line_716
	.globl gText_Rom_55ABC4
gText_Rom_55ABC4: @ 0x0855ABC4
	.string "ポケモンの たいりょくと\nじょうたい いじょうを\nぜんかいふくする$"
	.if (. - gText_Rom_55ABC4) > 0x22
	.error "gText_Rom_55ABC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ABC4) < 0x22
	.space 0x22 - (. - gText_Rom_55ABC4)
	.endif

	@ src/data/items.h:697 items_line_697
	.globl gText_Rom_55ABE6
gText_Rom_55ABE6: @ 0x0855ABE6
	.string "ポケモンの たいりょくを\nぜんかいふくする$"
	.if (. - gText_Rom_55ABE6) > 0x16
	.error "gText_Rom_55ABE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ABE6) < 0x16
	.space 0x16 - (. - gText_Rom_55ABE6)
	.endif
	.incbin "baserom.gba", 0x55abfc, 0x2f

	@ src/data/items.h:22 sFullHealDesc
	.globl gText_Rom_55AC2B
gText_Rom_55AC2B: @ 0x0855AC2B
	.string "じょうたい いじょうを\nすべて かいふくする$"
	.if (. - gText_Rom_55AC2B) > 0x17
	.error "gText_Rom_55AC2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AC2B) < 0x17
	.space 0x17 - (. - gText_Rom_55AC2B)
	.endif

	@ src/data/items.h:735 items_line_735
	.globl gText_Rom_55AC42
gText_Rom_55AC42: @ 0x0855AC42
	.string "ひんし じょうたいから\nたいりょく はんぶんまで\nかいふくする$"
	.if (. - gText_Rom_55AC42) > 0x20
	.error "gText_Rom_55AC42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AC42) < 0x20
	.space 0x20 - (. - gText_Rom_55AC42)
	.endif

	@ src/data/items.h:29 sMaxReviveDesc
	.globl gText_Rom_55AC62
gText_Rom_55AC62: @ 0x0855AC62
	.string "ひんし じょうたいから\nたいりょくを\nぜんかいふくする$"
	.if (. - gText_Rom_55AC62) > 0x1c
	.error "gText_Rom_55AC62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AC62) < 0x1c
	.space 0x1c - (. - gText_Rom_55AC62)
	.endif
	.incbin "baserom.gba", 0x55ac7e, 0x68

	@ src/data/items.h:843 items_line_843
	.globl gText_Rom_55ACE6
gText_Rom_55ACE6: @ 0x0855ACE6
	.string "えいよう まんてん\nポケモンの たいりょくを\n100 かいふくする$"
	.if (. - gText_Rom_55ACE6) > 0x22
	.error "gText_Rom_55ACE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ACE6) < 0x22
	.space 0x22 - (. - gText_Rom_55ACE6)
	.endif
	.incbin "baserom.gba", 0x55ad08, 0x46

	@ src/data/items.h:908 items_line_908
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AD4E
gText_Rom_55AD4E: @ 0x0855AD4E
	.string "すごく にがい こな\nじょうたい いじょうを\nすべて かいふくする$"
	.if (. - gText_Rom_55AD4E) != 0x22
	.error "gText_Rom_55AD4E must retain its original byte length"
	.endif
	.globl gText_Rom_55AD59
	.set gText_Rom_55AD59, gText_Rom_55AD4E + 0xb

	@ src/data/items.h:927 items_line_927
	.globl gText_Rom_55AD70
gText_Rom_55AD70: @ 0x0855AD70
	.string "とても にがい くさ\nひんし じょうたいから\nふっかつする$"
	.if (. - gText_Rom_55AD70) > 0x1e
	.error "gText_Rom_55AD70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AD70) < 0x1e
	.space 0x1e - (. - gText_Rom_55AD70)
	.endif

	@ src/data/items.h:1071 items_line_1071
	.globl gText_Rom_55AD8E
gText_Rom_55AD8E: @ 0x0855AD8E
	.string "1つの わざの\nわざポイントを\n10 かいふくする$"
	.if (. - gText_Rom_55AD8E) > 0x1a
	.error "gText_Rom_55AD8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AD8E) < 0x1a
	.space 0x1a - (. - gText_Rom_55AD8E)
	.endif

	@ src/data/items.h:1091 items_line_1091
	.globl gText_Rom_55ADA8
gText_Rom_55ADA8: @ 0x0855ADA8
	.string "1つの わざの\nわざポイントを\nぜんかいふくする$"
	.if (. - gText_Rom_55ADA8) > 0x19
	.error "gText_Rom_55ADA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ADA8) < 0x19
	.space 0x19 - (. - gText_Rom_55ADA8)
	.endif

	@ src/data/items.h:1111 items_line_1111
	.globl gText_Rom_55ADC1
gText_Rom_55ADC1: @ 0x0855ADC1
	.string "すべての わざの\nわざポイントを\n10 かいふくする$"
	.if (. - gText_Rom_55ADC1) > 0x1b
	.error "gText_Rom_55ADC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ADC1) < 0x1b
	.space 0x1b - (. - gText_Rom_55ADC1)
	.endif

	@ src/data/items.h:1131 items_line_1131
	.globl gText_Rom_55ADDC
gText_Rom_55ADDC: @ 0x0855ADDC
	.string "ポケモン 1ぴきの\nすべての わざポイントを\nぜんかいふくする$"
	.if (. - gText_Rom_55ADDC) > 0x20
	.error "gText_Rom_55ADDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ADDC) < 0x20
	.space 0x20 - (. - gText_Rom_55ADDC)
	.endif

	@ src/data/items.h:1262 items_line_1262
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55ADFC
gText_Rom_55ADFC: @ 0x0855ADFC
	.string "フエンの めいぶつ\nじょうたい いじょうを\nすべて かいふくする$"
	.if (. - gText_Rom_55ADFC) != 0x21
	.error "gText_Rom_55ADFC must retain its original byte length"
	.endif
	.globl gText_Rom_55AE06
	.set gText_Rom_55AE06, gText_Rom_55ADFC + 0xa

	@ src/data/items.h:2162 items_line_2162
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AE1D
gText_Rom_55AE1D: @ 0x0855AE1D
	.string "ガラスで できた ふえ\nねむり じょうたいを\nかいふくする$"
	.if (. - gText_Rom_55AE1D) != 0x1e
	.error "gText_Rom_55AE1D must retain its original byte length"
	.endif
	.globl gText_Rom_55AE29
	.set gText_Rom_55AE29, gText_Rom_55AE1D + 0xc

	@ src/data/items.h:2182 items_line_2182
	.globl gText_Rom_55AE3B
gText_Rom_55AE3B: @ 0x0855AE3B
	.string "ガラスで できた ふえ\nこんらん じょうたいを\nかいふくする$"
	.if (. - gText_Rom_55AE3B) > 0x1f
	.error "gText_Rom_55AE3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AE3B) < 0x1f
	.space 0x1f - (. - gText_Rom_55AE3B)
	.endif

	@ src/data/items.h:2202 items_line_2202
	.globl gText_Rom_55AE5A
gText_Rom_55AE5A: @ 0x0855AE5A
	.string "ガラスで できた ふえ\nメロメロ じょうたいを\nかいふくする$"
	.if (. - gText_Rom_55AE5A) > 0x1f
	.error "gText_Rom_55AE5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AE5A) < 0x1f
	.space 0x1f - (. - gText_Rom_55AE5A)
	.endif

	@ src/data/items.h:2225 items_line_2225
	.globl gText_Rom_55AE79
gText_Rom_55AE79: @ 0x0855AE79
	.string "ガラスで できた ふえ\nやせい ポケモンと\nそうぐう しにくくなる$"
	.if (. - gText_Rom_55AE79) > 0x22
	.error "gText_Rom_55AE79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AE79) < 0x22
	.space 0x22 - (. - gText_Rom_55AE79)
	.endif

	@ src/data/items.h:2244 items_line_2244
	.globl gText_Rom_55AE9B
gText_Rom_55AE9B: @ 0x0855AE9B
	.string "ガラスで できた ふえ\nやせい ポケモンと\nそうぐう しやすくなる$"
	.if (. - gText_Rom_55AE9B) > 0x22
	.error "gText_Rom_55AE9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AE9B) < 0x22
	.space 0x22 - (. - gText_Rom_55AE9B)
	.endif

	@ src/data/items.h:1152 items_line_1152
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AEBD
gText_Rom_55AEBD: @ 0x0855AEBD
	.string "きのみ 100パーセント\nポケモンの たいりょくを\n20 かいふくする$"
	.if (. - gText_Rom_55AEBD) != 0x24
	.error "gText_Rom_55AEBD must retain its original byte length"
	.endif
	.globl gText_Rom_55AECA
	.set gText_Rom_55AECA, gText_Rom_55AEBD + 0xd

	@ src/data/items.h:1172 items_line_1172
	.globl gText_Rom_55AEE1
gText_Rom_55AEE1: @ 0x0855AEE1
	.string "ひんししている ポケモン\nすべてを せいじょうな\nじょうたいに する$"
	.if (. - gText_Rom_55AEE1) > 0x23
	.error "gText_Rom_55AEE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AEE1) < 0x23
	.space 0x23 - (. - gText_Rom_55AEE1)
	.endif

	@ src/data/items.h:2901 items_line_2901
	.globl gText_Rom_55AF04
gText_Rom_55AF04: @ 0x0855AF04
	.string "あさせのほらあなで\nみつけた しお$"
	.if (. - gText_Rom_55AF04) > 0x12
	.error "gText_Rom_55AF04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AF04) < 0x12
	.space 0x12 - (. - gText_Rom_55AF04)
	.endif

	@ src/data/items.h:2917 items_line_2917
	.globl gText_Rom_55AF16
gText_Rom_55AF16: @ 0x0855AF16
	.string "あさせのほらあなで\nみつけた かいがら$"
	.if (. - gText_Rom_55AF16) > 0x14
	.error "gText_Rom_55AF16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AF16) < 0x14
	.space 0x14 - (. - gText_Rom_55AF16)
	.endif

	@ src/data/items.h:60 sShardsDesc
	.globl gText_Rom_55AF2A
gText_Rom_55AF2A: @ 0x0855AF2A
	.string "むかしに つくられた\nどうぐの かけら らしい\nやすく うれる$"
	.if (. - gText_Rom_55AF2A) > 0x20
	.error "gText_Rom_55AF2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AF2A) < 0x20
	.space 0x20 - (. - gText_Rom_55AF2A)
	.endif

	@ src/data/items.h:60 sShardsDesc
	.globl gText_Rom_55AF4A
gText_Rom_55AF4A: @ 0x0855AF4A
	.string "むかしに つくられた\nどうぐの かけら らしい\nやすく うれる$"
	.if (. - gText_Rom_55AF4A) > 0x20
	.error "gText_Rom_55AF4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AF4A) < 0x20
	.space 0x20 - (. - gText_Rom_55AF4A)
	.endif

	@ src/data/items.h:60 sShardsDesc
	.globl gText_Rom_55AF6A
gText_Rom_55AF6A: @ 0x0855AF6A
	.string "むかしに つくられた\nどうぐの かけら らしい\nやすく うれる$"
	.if (. - gText_Rom_55AF6A) > 0x20
	.error "gText_Rom_55AF6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AF6A) < 0x20
	.space 0x20 - (. - gText_Rom_55AF6A)
	.endif

	@ src/data/items.h:60 sShardsDesc
	.globl gText_Rom_55AF8A
gText_Rom_55AF8A: @ 0x0855AF8A
	.string "むかしに つくられた\nどうぐの かけら らしい\nやすく うれる$"
	.if (. - gText_Rom_55AF8A) > 0x20
	.error "gText_Rom_55AF8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55AF8A) < 0x20
	.space 0x20 - (. - gText_Rom_55AF8A)
	.endif

	@ src/data/items.h:1364 items_line_1364
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AFAA
gText_Rom_55AFAA: @ 0x0855AFAA
	.string "たいりょくの\nきそポイントを あげる$"
	.if (. - gText_Rom_55AFAA) != 0x13
	.error "gText_Rom_55AFAA must retain its original byte length"
	.endif
	.globl gText_Rom_55AFB9
	.set gText_Rom_55AFB9, gText_Rom_55AFAA + 0xf

	@ src/data/items.h:1381 items_line_1381
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AFBD
gText_Rom_55AFBD: @ 0x0855AFBD
	.string "こうげきの\nきそポイントを あげる$"
	.if (. - gText_Rom_55AFBD) != 0x12
	.error "gText_Rom_55AFBD must retain its original byte length"
	.endif
	.globl gText_Rom_55AFCB
	.set gText_Rom_55AFCB, gText_Rom_55AFBD + 0xe

	@ src/data/items.h:1398 items_line_1398
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AFCF
gText_Rom_55AFCF: @ 0x0855AFCF
	.string "ぼうぎょの\nきそポイントを あげる$"
	.if (. - gText_Rom_55AFCF) != 0x12
	.error "gText_Rom_55AFCF must retain its original byte length"
	.endif
	.globl gText_Rom_55AFDD
	.set gText_Rom_55AFDD, gText_Rom_55AFCF + 0xe

	@ src/data/items.h:1450 items_line_1450
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AFE1
gText_Rom_55AFE1: @ 0x0855AFE1
	.string "すばやさの\nきそポイントを あげる$"
	.if (. - gText_Rom_55AFE1) != 0x12
	.error "gText_Rom_55AFE1 must retain its original byte length"
	.endif
	.globl gText_Rom_55AFEF
	.set gText_Rom_55AFEF, gText_Rom_55AFE1 + 0xe

	@ src/data/items.h:1415 items_line_1415
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55AFF3
gText_Rom_55AFF3: @ 0x0855AFF3
	.string "とくこうの\nきそポイントを あげる$"
	.if (. - gText_Rom_55AFF3) != 0x12
	.error "gText_Rom_55AFF3 must retain its original byte length"
	.endif
	.globl gText_Rom_55B001
	.set gText_Rom_55B001, gText_Rom_55AFF3 + 0xe

	@ src/data/items.h:2026 items_line_2026
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B005
gText_Rom_55B005: @ 0x0855B005
	.string "ポケモンの レベルを\n1 あげる$"
	.if (. - gText_Rom_55B005) != 0x11
	.error "gText_Rom_55B005 must retain its original byte length"
	.endif
	.globl gText_Rom_55B012
	.set gText_Rom_55B012, gText_Rom_55B005 + 0xd

	@ src/data/items.h:1473 items_line_1473
	.globl gText_Rom_55B016
gText_Rom_55B016: @ 0x0855B016
	.string "わざポイントの\nさいだいちが あがる$"
	.if (. - gText_Rom_55B016) > 0x13
	.error "gText_Rom_55B016 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B016) < 0x13
	.space 0x13 - (. - gText_Rom_55B016)
	.endif

	@ src/data/items.h:1432 items_line_1432
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B029
gText_Rom_55B029: @ 0x0855B029
	.string "とくぼうの\nきそポイントを あげる$"
	.if (. - gText_Rom_55B029) != 0x12
	.error "gText_Rom_55B029 must retain its original byte length"
	.endif
	.globl gText_Rom_55B037
	.set gText_Rom_55B037, gText_Rom_55B029 + 0xe

	@ src/data/items.h:1491 items_line_1491
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B03B
gText_Rom_55B03B: @ 0x0855B03B
	.string "わざポイントを\nさいだいちまで あげる$"
	.if (. - gText_Rom_55B03B) != 0x14
	.error "gText_Rom_55B03B must retain its original byte length"
	.endif
	.globl gText_Rom_55B04B
	.set gText_Rom_55B04B, gText_Rom_55B03B + 0x10

	@ src/data/items.h:2571 items_line_2571
	.globl gText_Rom_55B04F
gText_Rom_55B04F: @ 0x0855B04F
	.string "せんとうで つかうと\nみかたの のうりょくを\nさげられなくする$"
	.if (. - gText_Rom_55B04F) > 0x20
	.error "gText_Rom_55B04F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B04F) < 0x20
	.space 0x20 - (. - gText_Rom_55B04F)
	.endif

	@ src/data/items.h:2551 items_line_2551
	.globl gText_Rom_55B06F
gText_Rom_55B06F: @ 0x0855B06F
	.string "つかった せんとうちゅう\nあいての きゅうしょに\nあたりやすくなる$"
	.if (. - gText_Rom_55B06F) > 0x22
	.error "gText_Rom_55B06F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B06F) < 0x22
	.space 0x22 - (. - gText_Rom_55B06F)
	.endif
	.incbin "baserom.gba", 0x55b091, 0x82

	@ src/data/items.h:25 sPokeDollDesc
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B113
gText_Rom_55B113: @ 0x0855B113
	.string "そうぐうした やせいの\nポケモンから かならず\nにげることが できる$"
	.if (. - gText_Rom_55B113) != 0x23
	.error "gText_Rom_55B113 must retain its original byte length"
	.endif
	.globl gText_Rom_55B132
	.set gText_Rom_55B132, gText_Rom_55B113 + 0x1f

	@ src/data/items.h:25 sPokeDollDesc
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B136
gText_Rom_55B136: @ 0x0855B136
	.string "そうぐうした やせいの\nポケモンから かならず\nにげることが できる$"
	.if (. - gText_Rom_55B136) != 0x23
	.error "gText_Rom_55B136 must retain its original byte length"
	.endif
	.globl gText_Rom_55B155
	.set gText_Rom_55B155, gText_Rom_55B136 + 0x1f

	@ src/data/items.h:2283 items_line_2283
	.globl gText_Rom_55B159
gText_Rom_55B159: @ 0x0855B159
	.string "200ぽ すすむ あいだ\nよわい ポケモンと\nそうぐう しなくなる$"
	.if (. - gText_Rom_55B159) > 0x22
	.error "gText_Rom_55B159 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B159) < 0x22
	.space 0x22 - (. - gText_Rom_55B159)
	.endif

	@ src/data/items.h:2301 items_line_2301
	.globl gText_Rom_55B17B
gText_Rom_55B17B: @ 0x0855B17B
	.string "250ぽ すすむ あいだ\nよわい ポケモンと\nそうぐう しなくなる$"
	.if (. - gText_Rom_55B17B) > 0x22
	.error "gText_Rom_55B17B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B17B) < 0x22
	.space 0x22 - (. - gText_Rom_55B17B)
	.endif

	@ src/data/items.h:2374 items_line_2374
	.globl gText_Rom_55B19D
gText_Rom_55B19D: @ 0x0855B19D
	.string "どうくつや ダンジョンを\nぬけだせる$"
	.if (. - gText_Rom_55B19D) > 0x13
	.error "gText_Rom_55B19D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B19D) < 0x13
	.space 0x13 - (. - gText_Rom_55B19D)
	.endif

	@ src/data/items.h:2265 items_line_2265
	.globl gText_Rom_55B1B0
gText_Rom_55B1B0: @ 0x0855B1B0
	.string "100ぽ すすむ あいだ\nよわい ポケモンと\nそうぐう しなくなる$"
	.if (. - gText_Rom_55B1B0) > 0x22
	.error "gText_Rom_55B1B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B1B0) < 0x22
	.space 0x22 - (. - gText_Rom_55B1B0)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gText_Rom_55B1D2
gText_Rom_55B1D2: @ 0x0855B1D2
	.string "とくていの ポケモンを\nしんかさせる$"
	.if (. - gText_Rom_55B1D2) > 0x13
	.error "gText_Rom_55B1D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B1D2) < 0x13
	.space 0x13 - (. - gText_Rom_55B1D2)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gText_Rom_55B1E5
gText_Rom_55B1E5: @ 0x0855B1E5
	.string "とくていの ポケモンを\nしんかさせる$"
	.if (. - gText_Rom_55B1E5) > 0x13
	.error "gText_Rom_55B1E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B1E5) < 0x13
	.space 0x13 - (. - gText_Rom_55B1E5)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gText_Rom_55B1F8
gText_Rom_55B1F8: @ 0x0855B1F8
	.string "とくていの ポケモンを\nしんかさせる$"
	.if (. - gText_Rom_55B1F8) > 0x13
	.error "gText_Rom_55B1F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B1F8) < 0x13
	.space 0x13 - (. - gText_Rom_55B1F8)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gText_Rom_55B20B
gText_Rom_55B20B: @ 0x0855B20B
	.string "とくていの ポケモンを\nしんかさせる$"
	.if (. - gText_Rom_55B20B) > 0x13
	.error "gText_Rom_55B20B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B20B) < 0x13
	.space 0x13 - (. - gText_Rom_55B20B)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gText_Rom_55B21E
gText_Rom_55B21E: @ 0x0855B21E
	.string "とくていの ポケモンを\nしんかさせる$"
	.if (. - gText_Rom_55B21E) > 0x13
	.error "gText_Rom_55B21E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B21E) < 0x13
	.space 0x13 - (. - gText_Rom_55B21E)
	.endif

	@ src/data/items.h:75 sEvolutionStoneDesc
	.globl gText_Rom_55B231
gText_Rom_55B231: @ 0x0855B231
	.string "とくていの ポケモンを\nしんかさせる$"
	.if (. - gText_Rom_55B231) > 0x13
	.error "gText_Rom_55B231 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B231) < 0x13
	.space 0x13 - (. - gText_Rom_55B231)
	.endif

	@ src/data/items.h:2735 items_line_2735
	.globl gText_Rom_55B244
gText_Rom_55B244: @ 0x0855B244
	.string "ふつうの キノコ\nやすく うれる$"
	.if (. - gText_Rom_55B244) > 0x11
	.error "gText_Rom_55B244 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B244) < 0x11
	.space 0x11 - (. - gText_Rom_55B244)
	.endif

	@ src/data/items.h:57 sBigMushroomDesc
	.globl gText_Rom_55B255
gText_Rom_55B255: @ 0x0855B255
	.string "めずらしい キノコ\nたかく うれる$"
	.if (. - gText_Rom_55B255) > 0x12
	.error "gText_Rom_55B255 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B255) < 0x12
	.space 0x12 - (. - gText_Rom_55B255)
	.endif

	@ src/data/items.h:2785 items_line_2785
	.globl gText_Rom_55B267
gText_Rom_55B267: @ 0x0855B267
	.string "きれいな しんじゅ\nやすく うれる$"
	.if (. - gText_Rom_55B267) > 0x12
	.error "gText_Rom_55B267 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B267) < 0x12
	.space 0x12 - (. - gText_Rom_55B267)
	.endif

	@ src/data/items.h:2801 items_line_2801
	.globl gText_Rom_55B279
gText_Rom_55B279: @ 0x0855B279
	.string "とても きれいな\nおおつぶの しんじゅ\nたかく うれる$"
	.if (. - gText_Rom_55B279) > 0x1c
	.error "gText_Rom_55B279 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B279) < 0x1c
	.space 0x1c - (. - gText_Rom_55B279)
	.endif

	@ src/data/items.h:2843 items_line_2843
	.globl gText_Rom_55B295
gText_Rom_55B295: @ 0x0855B295
	.string "あかくて きれいな すな\nたかく うれる$"
	.if (. - gText_Rom_55B295) > 0x15
	.error "gText_Rom_55B295 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B295) < 0x15
	.space 0x15 - (. - gText_Rom_55B295)
	.endif

	@ src/data/items.h:2859 items_line_2859
	.globl gText_Rom_55B2AA
gText_Rom_55B2AA: @ 0x0855B2AA
	.string "あかくて きれいな\nほうせきの かけら\nとても たかく うれる$"
	.if (. - gText_Rom_55B2AA) > 0x20
	.error "gText_Rom_55B2AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B2AA) < 0x20
	.space 0x20 - (. - gText_Rom_55B2AA)
	.endif

	@ src/data/items.h:2696 items_line_2696
	.globl gText_Rom_55B2CA
gText_Rom_55B2CA: @ 0x0855B2CA
	.string "じゅんきん せい\nたかく うれる$"
	.if (. - gText_Rom_55B2CA) > 0x11
	.error "gText_Rom_55B2CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B2CA) < 0x11
	.space 0x11 - (. - gText_Rom_55B2CA)
	.endif

	@ src/data/items.h:2989 items_line_2989
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B2DB
gText_Rom_55B2DB: @ 0x0855B2DB
	.string "きれいな ウロコ\nマニアの あいだで\nにんきが たかい$"
	.if (. - gText_Rom_55B2DB) != 0x1c
	.error "gText_Rom_55B2DB must retain its original byte length"
	.endif
	.globl gText_Rom_55B2F3
	.set gText_Rom_55B2F3, gText_Rom_55B2DB + 0x18

	@ src/data/items.h:3870 items_line_3870
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B2F7
gText_Rom_55B2F7: @ 0x0855B2F7
	.string "ジグザグマの すがたが\nプリントされた びんせん\nポケモンに もたせる$"
	.if (. - gText_Rom_55B2F7) != 0x24
	.error "gText_Rom_55B2F7 must retain its original byte length"
	.endif
	.globl gText_Rom_55B310
	.set gText_Rom_55B310, gText_Rom_55B2F7 + 0x19
	.globl gText_Rom_55B316
	.set gText_Rom_55B316, gText_Rom_55B2F7 + 0x1f

	@ src/data/items.h:3888 items_line_3888
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B31B
gText_Rom_55B31B: @ 0x0855B31B
	.string "キャモメの すがたが\nプリントされた びんせん\nポケモンに もたせる$"
	.if (. - gText_Rom_55B31B) != 0x23
	.error "gText_Rom_55B31B must retain its original byte length"
	.endif
	.globl gText_Rom_55B333
	.set gText_Rom_55B333, gText_Rom_55B31B + 0x18
	.globl gText_Rom_55B339
	.set gText_Rom_55B339, gText_Rom_55B31B + 0x1e

	@ src/data/items.h:3906 items_line_3906
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B33E
gText_Rom_55B33E: @ 0x0855B33E
	.string "ピカチュウの すがたが\nプリントされた びんせん\nポケモンに もたせる$"
	.if (. - gText_Rom_55B33E) != 0x24
	.error "gText_Rom_55B33E must retain its original byte length"
	.endif
	.globl gText_Rom_55B357
	.set gText_Rom_55B357, gText_Rom_55B33E + 0x19
	.globl gText_Rom_55B35D
	.set gText_Rom_55B35D, gText_Rom_55B33E + 0x1f

	@ src/data/items.h:3924 items_line_3924
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B362
gText_Rom_55B362: @ 0x0855B362
	.string "コイルの すがたが\nプリントされた びんせん\nポケモンに もたせる$"
	.if (. - gText_Rom_55B362) != 0x22
	.error "gText_Rom_55B362 must retain its original byte length"
	.endif
	.globl gText_Rom_55B379
	.set gText_Rom_55B379, gText_Rom_55B362 + 0x17
	.globl gText_Rom_55B37F
	.set gText_Rom_55B37F, gText_Rom_55B362 + 0x1d

	@ src/data/items.h:3942 items_line_3942
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B384
gText_Rom_55B384: @ 0x0855B384
	.string "ナマケロの すがたが\nプリントされた びんせん\nポケモンに もたせる$"
	.if (. - gText_Rom_55B384) != 0x23
	.error "gText_Rom_55B384 must retain its original byte length"
	.endif
	.globl gText_Rom_55B39C
	.set gText_Rom_55B39C, gText_Rom_55B384 + 0x18
	.globl gText_Rom_55B3A2
	.set gText_Rom_55B3A2, gText_Rom_55B384 + 0x1e

	@ src/data/items.h:3960 items_line_3960
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B3A7
gText_Rom_55B3A7: @ 0x0855B3A7
	.string "ホエルコの すがたが\nプリントされた びんせん\nポケモンに もたせる$"
	.if (. - gText_Rom_55B3A7) != 0x23
	.error "gText_Rom_55B3A7 must retain its original byte length"
	.endif
	.globl gText_Rom_55B3BF
	.set gText_Rom_55B3BF, gText_Rom_55B3A7 + 0x18
	.globl gText_Rom_55B3C5
	.set gText_Rom_55B3C5, gText_Rom_55B3A7 + 0x1e

	@ src/data/items.h:72 sBeadMailDesc
	.globl gText_Rom_55B3CA
gText_Rom_55B3CA: @ 0x0855B3CA
	.string "もたせた ポケモンの\nにがおえがでる びんせん$"
	.if (. - gText_Rom_55B3CA) > 0x18
	.error "gText_Rom_55B3CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B3CA) < 0x18
	.space 0x18 - (. - gText_Rom_55B3CA)
	.endif

	@ src/data/items.h:3993 items_line_3993
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B3E2
gText_Rom_55B3E2: @ 0x0855B3E2
	.string "ヨマワルの すがたが\nプリントされた びんせん\nポケモンに もたせる$"
	.if (. - gText_Rom_55B3E2) != 0x23
	.error "gText_Rom_55B3E2 must retain its original byte length"
	.endif
	.globl gText_Rom_55B3FA
	.set gText_Rom_55B3FA, gText_Rom_55B3E2 + 0x18
	.globl gText_Rom_55B400
	.set gText_Rom_55B400, gText_Rom_55B3E2 + 0x1e

	@ src/data/items.h:4011 items_line_4011
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B405
gText_Rom_55B405: @ 0x0855B405
	.string "キレイハナの すがたが\nプリントされた びんせん\nポケモンに もたせる$"
	.if (. - gText_Rom_55B405) != 0x24
	.error "gText_Rom_55B405 must retain its original byte length"
	.endif
	.globl gText_Rom_55B41E
	.set gText_Rom_55B41E, gText_Rom_55B405 + 0x19
	.globl gText_Rom_55B424
	.set gText_Rom_55B424, gText_Rom_55B405 + 0x1f

	@ src/data/items.h:72 sBeadMailDesc
	.globl gText_Rom_55B429
gText_Rom_55B429: @ 0x0855B429
	.string "もたせた ポケモンの\nにがおえがでる びんせん$"
	.if (. - gText_Rom_55B429) > 0x18
	.error "gText_Rom_55B429 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B429) < 0x18
	.space 0x18 - (. - gText_Rom_55B429)
	.endif

	@ src/data/items.h:4044 items_line_4044
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B441
gText_Rom_55B441: @ 0x0855B441
	.string "ごうかな もようが\nプリントされた びんせん\nポケモンに もたせる$"
	.if (. - gText_Rom_55B441) != 0x22
	.error "gText_Rom_55B441 must retain its original byte length"
	.endif
	.globl gText_Rom_55B458
	.set gText_Rom_55B458, gText_Rom_55B441 + 0x17
	.globl gText_Rom_55B45E
	.set gText_Rom_55B45E, gText_Rom_55B441 + 0x1d

	@ src/data/items.h:4062 items_line_4062
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B463
gText_Rom_55B463: @ 0x0855B463
	.string "3ひきの ポケモンが\nプリントされた びんせん\nポケモンに もたせる$"
	.if (. - gText_Rom_55B463) != 0x23
	.error "gText_Rom_55B463 must retain its original byte length"
	.endif
	.globl gText_Rom_55B47B
	.set gText_Rom_55B47B, gText_Rom_55B463 + 0x18
	.globl gText_Rom_55B481
	.set gText_Rom_55B481, gText_Rom_55B463 + 0x1e

	@ src/data/items.h:10884 items_line_10884
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B486
gText_Rom_55B486: @ 0x0855B486
	.string "もたせると じぶんで\nまひ じょうたいを\nかいふくする$"
	.if (. - gText_Rom_55B486) != 0x1c
	.error "gText_Rom_55B486 must retain its original byte length"
	.endif
	.globl gText_Rom_55B491
	.set gText_Rom_55B491, gText_Rom_55B486 + 0xb

	@ src/data/items.h:10904 items_line_10904
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B4A2
gText_Rom_55B4A2: @ 0x0855B4A2
	.string "もたせると じぶんで\nねむり じょうたいを\nかいふくする$"
	.if (. - gText_Rom_55B4A2) != 0x1d
	.error "gText_Rom_55B4A2 must retain its original byte length"
	.endif
	.globl gText_Rom_55B4AD
	.set gText_Rom_55B4AD, gText_Rom_55B4A2 + 0xb

	@ src/data/items.h:10924 items_line_10924
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B4BF
gText_Rom_55B4BF: @ 0x0855B4BF
	.string "もたせると じぶんで\nどく じょうたいを\nかいふくする$"
	.if (. - gText_Rom_55B4BF) != 0x1c
	.error "gText_Rom_55B4BF must retain its original byte length"
	.endif
	.globl gText_Rom_55B4CA
	.set gText_Rom_55B4CA, gText_Rom_55B4BF + 0xb

	@ src/data/items.h:10944 items_line_10944
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B4DB
gText_Rom_55B4DB: @ 0x0855B4DB
	.string "もたせると じぶんで\nやけど じょうたいを\nかいふくする$"
	.if (. - gText_Rom_55B4DB) != 0x1d
	.error "gText_Rom_55B4DB must retain its original byte length"
	.endif
	.globl gText_Rom_55B4E6
	.set gText_Rom_55B4E6, gText_Rom_55B4DB + 0xb

	@ src/data/items.h:10964 items_line_10964
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55B4F8
gText_Rom_55B4F8: @ 0x0855B4F8
	.string "もたせると じぶんで\nこおり じょうたいを\nかいふくする$"
	.if (. - gText_Rom_55B4F8) != 0x1d
	.error "gText_Rom_55B4F8 must retain its original byte length"
	.endif
	.globl gText_Rom_55B503
	.set gText_Rom_55B503, gText_Rom_55B4F8 + 0xb

	@ src/data/items.h:10985 items_line_10985
	.globl gText_Rom_55B515
gText_Rom_55B515: @ 0x0855B515
	.string "もたせると じぶんで\nわざポイントを\n10 かいふくする$"
	.if (. - gText_Rom_55B515) > 0x1d
	.error "gText_Rom_55B515 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B515) < 0x1d
	.space 0x1d - (. - gText_Rom_55B515)
	.endif

	@ src/data/items.h:11006 items_line_11006
	.globl gText_Rom_55B532
gText_Rom_55B532: @ 0x0855B532
	.string "もたせると じぶんで\nたいりょくを\n10 かいふくする$"
	.if (. - gText_Rom_55B532) > 0x1c
	.error "gText_Rom_55B532 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B532) < 0x1c
	.space 0x1c - (. - gText_Rom_55B532)
	.endif

	@ src/data/items.h:11026 items_line_11026
	.globl gText_Rom_55B54E
gText_Rom_55B54E: @ 0x0855B54E
	.string "もたせると じぶんで\nこんらん じょうたいを\nかいふくする$"
	.if (. - gText_Rom_55B54E) > 0x1e
	.error "gText_Rom_55B54E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B54E) < 0x1e
	.space 0x1e - (. - gText_Rom_55B54E)
	.endif
	.incbin "baserom.gba", 0x55b56c, 0x1e

	@ src/data/items.h:11075 items_line_11075
	.globl gText_Rom_55B58A
gText_Rom_55B58A: @ 0x0855B58A
	.string "もたせると じぶんで\nたいりょくを\n30 かいふくする$"
	.if (. - gText_Rom_55B58A) > 0x1c
	.error "gText_Rom_55B58A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B58A) < 0x1c
	.space 0x1c - (. - gText_Rom_55B58A)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gText_Rom_55B5A6
gText_Rom_55B5A6: @ 0x0855B5A6
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある$"
	.if (. - gText_Rom_55B5A6) > 0x24
	.error "gText_Rom_55B5A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B5A6) < 0x24
	.space 0x24 - (. - gText_Rom_55B5A6)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gText_Rom_55B5CA
gText_Rom_55B5CA: @ 0x0855B5CA
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある$"
	.if (. - gText_Rom_55B5CA) > 0x24
	.error "gText_Rom_55B5CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B5CA) < 0x24
	.space 0x24 - (. - gText_Rom_55B5CA)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gText_Rom_55B5EE
gText_Rom_55B5EE: @ 0x0855B5EE
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある$"
	.if (. - gText_Rom_55B5EE) > 0x24
	.error "gText_Rom_55B5EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B5EE) < 0x24
	.space 0x24 - (. - gText_Rom_55B5EE)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gText_Rom_55B612
gText_Rom_55B612: @ 0x0855B612
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある$"
	.if (. - gText_Rom_55B612) > 0x24
	.error "gText_Rom_55B612 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B612) < 0x24
	.space 0x24 - (. - gText_Rom_55B612)
	.endif

	@ src/data/items.h:138 sFigyBerryDesc
	.globl gText_Rom_55B636
gText_Rom_55B636: @ 0x0855B636
	.string "もたせると たいりょくを\nかいふく できるが\nこんらんする ことがある$"
	.if (. - gText_Rom_55B636) > 0x24
	.error "gText_Rom_55B636 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B636) < 0x24
	.space 0x24 - (. - gText_Rom_55B636)
	.endif

	@ src/data/items.h:11175 items_line_11175
	.globl gText_Rom_55B65A
gText_Rom_55B65A: @ 0x0855B65A
	.string "ポロックの ざいりょう\nつちのなかに うめると\nズリが そだつ$"
	.if (. - gText_Rom_55B65A) > 0x20
	.error "gText_Rom_55B65A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B65A) < 0x20
	.space 0x20 - (. - gText_Rom_55B65A)
	.endif

	@ src/data/items.h:11192 items_line_11192
	.globl gText_Rom_55B67A
gText_Rom_55B67A: @ 0x0855B67A
	.string "ポロックの ざいりょう\nつちのなかに うめると\nブリーが そだつ$"
	.if (. - gText_Rom_55B67A) > 0x21
	.error "gText_Rom_55B67A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B67A) < 0x21
	.space 0x21 - (. - gText_Rom_55B67A)
	.endif

	@ src/data/items.h:11209 items_line_11209
	.globl gText_Rom_55B69B
gText_Rom_55B69B: @ 0x0855B69B
	.string "ポロックの ざいりょう\nつちのなかに うめると\nナナが そだつ$"
	.if (. - gText_Rom_55B69B) > 0x20
	.error "gText_Rom_55B69B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B69B) < 0x20
	.space 0x20 - (. - gText_Rom_55B69B)
	.endif

	@ src/data/items.h:11226 items_line_11226
	.globl gText_Rom_55B6BB
gText_Rom_55B6BB: @ 0x0855B6BB
	.string "ポロックの ざいりょう\nつちのなかに うめると\nセシナが そだつ$"
	.if (. - gText_Rom_55B6BB) > 0x21
	.error "gText_Rom_55B6BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B6BB) < 0x21
	.space 0x21 - (. - gText_Rom_55B6BB)
	.endif

	@ src/data/items.h:11243 items_line_11243
	.globl gText_Rom_55B6DC
gText_Rom_55B6DC: @ 0x0855B6DC
	.string "ポロックの ざいりょう\nつちのなかに うめると\nパイルが そだつ$"
	.if (. - gText_Rom_55B6DC) > 0x21
	.error "gText_Rom_55B6DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B6DC) < 0x21
	.space 0x21 - (. - gText_Rom_55B6DC)
	.endif

	@ src/data/items.h:11260 items_line_11260
	.globl gText_Rom_55B6FD
gText_Rom_55B6FD: @ 0x0855B6FD
	.string "ポケモンが ちょっと\nなつくが HPの\nきそポイントが さがる$"
	.if (. - gText_Rom_55B6FD) > 0x20
	.error "gText_Rom_55B6FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B6FD) < 0x20
	.space 0x20 - (. - gText_Rom_55B6FD)
	.endif

	@ src/data/items.h:11278 items_line_11278
	.globl gText_Rom_55B71D
gText_Rom_55B71D: @ 0x0855B71D
	.string "ポケモンが ちょっと\nなつくが こうげきの\nきそポイントが さがる$"
	.if (. - gText_Rom_55B71D) > 0x22
	.error "gText_Rom_55B71D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B71D) < 0x22
	.space 0x22 - (. - gText_Rom_55B71D)
	.endif

	@ src/data/items.h:11296 items_line_11296
	.globl gText_Rom_55B73F
gText_Rom_55B73F: @ 0x0855B73F
	.string "ポケモンが ちょっと\nなつくが ぼうぎょの\nきそポイントが さがる$"
	.if (. - gText_Rom_55B73F) > 0x22
	.error "gText_Rom_55B73F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B73F) < 0x22
	.space 0x22 - (. - gText_Rom_55B73F)
	.endif

	@ src/data/items.h:11314 items_line_11314
	.globl gText_Rom_55B761
gText_Rom_55B761: @ 0x0855B761
	.string "ポケモンが ちょっと\nなつくが とくこうの\nきそポイントが さがる$"
	.if (. - gText_Rom_55B761) > 0x22
	.error "gText_Rom_55B761 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B761) < 0x22
	.space 0x22 - (. - gText_Rom_55B761)
	.endif

	@ src/data/items.h:11332 items_line_11332
	.globl gText_Rom_55B783
gText_Rom_55B783: @ 0x0855B783
	.string "ポケモンが ちょっと\nなつくが とくぼうの\nきそポイントが さがる$"
	.if (. - gText_Rom_55B783) > 0x22
	.error "gText_Rom_55B783 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B783) < 0x22
	.space 0x22 - (. - gText_Rom_55B783)
	.endif

	@ src/data/items.h:11350 items_line_11350
	.globl gText_Rom_55B7A5
gText_Rom_55B7A5: @ 0x0855B7A5
	.string "ポケモンが ちょっと\nなつくが すばやさの\nきそポイントが さがる$"
	.if (. - gText_Rom_55B7A5) > 0x22
	.error "gText_Rom_55B7A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B7A5) < 0x22
	.space 0x22 - (. - gText_Rom_55B7A5)
	.endif

	@ src/data/items.h:11368 items_line_11368
	.globl gText_Rom_55B7C7
gText_Rom_55B7C7: @ 0x0855B7C7
	.string "ポロックの ざいりょう\nつちのなかに うめると\nモコシが そだつ$"
	.if (. - gText_Rom_55B7C7) > 0x21
	.error "gText_Rom_55B7C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B7C7) < 0x21
	.space 0x21 - (. - gText_Rom_55B7C7)
	.endif

	@ src/data/items.h:11385 items_line_11385
	.globl gText_Rom_55B7E8
gText_Rom_55B7E8: @ 0x0855B7E8
	.string "ポロックの ざいりょう\nつちのなかに うめると\nゴスが そだつ$"
	.if (. - gText_Rom_55B7E8) > 0x20
	.error "gText_Rom_55B7E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B7E8) < 0x20
	.space 0x20 - (. - gText_Rom_55B7E8)
	.endif

	@ src/data/items.h:11402 items_line_11402
	.globl gText_Rom_55B808
gText_Rom_55B808: @ 0x0855B808
	.string "ポロックの ざいりょう\nつちのなかに うめると\nラブタが そだつ$"
	.if (. - gText_Rom_55B808) > 0x21
	.error "gText_Rom_55B808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B808) < 0x21
	.space 0x21 - (. - gText_Rom_55B808)
	.endif

	@ src/data/items.h:11419 items_line_11419
	.globl gText_Rom_55B829
gText_Rom_55B829: @ 0x0855B829
	.string "ポロックの ざいりょう\nつちのなかに うめると\nノメルが そだつ$"
	.if (. - gText_Rom_55B829) > 0x21
	.error "gText_Rom_55B829 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B829) < 0x21
	.space 0x21 - (. - gText_Rom_55B829)
	.endif

	@ src/data/items.h:11436 items_line_11436
	.globl gText_Rom_55B84A
gText_Rom_55B84A: @ 0x0855B84A
	.string "ポロックの ざいりょう\nつちのなかに うめると\nノワキが そだつ$"
	.if (. - gText_Rom_55B84A) > 0x21
	.error "gText_Rom_55B84A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B84A) < 0x21
	.space 0x21 - (. - gText_Rom_55B84A)
	.endif

	@ src/data/items.h:11453 items_line_11453
	.globl gText_Rom_55B86B
gText_Rom_55B86B: @ 0x0855B86B
	.string "ポロックの ざいりょう\nつちのなかに うめると\nシーヤが そだつ$"
	.if (. - gText_Rom_55B86B) > 0x21
	.error "gText_Rom_55B86B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B86B) < 0x21
	.space 0x21 - (. - gText_Rom_55B86B)
	.endif

	@ src/data/items.h:11470 items_line_11470
	.globl gText_Rom_55B88C
gText_Rom_55B88C: @ 0x0855B88C
	.string "ポロックの ざいりょう\nつちのなかに うめると\nカイスが そだつ$"
	.if (. - gText_Rom_55B88C) > 0x21
	.error "gText_Rom_55B88C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B88C) < 0x21
	.space 0x21 - (. - gText_Rom_55B88C)
	.endif

	@ src/data/items.h:11487 items_line_11487
	.globl gText_Rom_55B8AD
gText_Rom_55B8AD: @ 0x0855B8AD
	.string "ポロックの ざいりょう\nつちのなかに うめると\nドリが そだつ$"
	.if (. - gText_Rom_55B8AD) > 0x20
	.error "gText_Rom_55B8AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B8AD) < 0x20
	.space 0x20 - (. - gText_Rom_55B8AD)
	.endif

	@ src/data/items.h:11504 items_line_11504
	.globl gText_Rom_55B8CD
gText_Rom_55B8CD: @ 0x0855B8CD
	.string "ポロックの ざいりょう\nつちのなかに うめると\nベリブが そだつ$"
	.if (. - gText_Rom_55B8CD) > 0x21
	.error "gText_Rom_55B8CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B8CD) < 0x21
	.space 0x21 - (. - gText_Rom_55B8CD)
	.endif

	@ src/data/items.h:11865 items_line_11865
	.globl gText_Rom_55B8EE
gText_Rom_55B8EE: @ 0x0855B8EE
	.string "もたせると ピンチのとき\nこうげきりょくが あがる$"
	.if (. - gText_Rom_55B8EE) > 0x1a
	.error "gText_Rom_55B8EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B8EE) < 0x1a
	.space 0x1a - (. - gText_Rom_55B8EE)
	.endif

	@ src/data/items.h:11883 items_line_11883
	.globl gText_Rom_55B908
gText_Rom_55B908: @ 0x0855B908
	.string "もたせると ピンチのとき\nぼうぎょりょくが あがる$"
	.if (. - gText_Rom_55B908) > 0x1a
	.error "gText_Rom_55B908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B908) < 0x1a
	.space 0x1a - (. - gText_Rom_55B908)
	.endif

	@ src/data/items.h:11901 items_line_11901
	.globl gText_Rom_55B922
gText_Rom_55B922: @ 0x0855B922
	.string "もたせると ピンチのとき\nすばやさが あがる$"
	.if (. - gText_Rom_55B922) > 0x17
	.error "gText_Rom_55B922 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B922) < 0x17
	.space 0x17 - (. - gText_Rom_55B922)
	.endif

	@ src/data/items.h:11919 items_line_11919
	.globl gText_Rom_55B939
gText_Rom_55B939: @ 0x0855B939
	.string "もたせると ピンチのとき\nとくこうが あがる$"
	.if (. - gText_Rom_55B939) > 0x17
	.error "gText_Rom_55B939 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B939) < 0x17
	.space 0x17 - (. - gText_Rom_55B939)
	.endif

	@ src/data/items.h:11937 items_line_11937
	.globl gText_Rom_55B950
gText_Rom_55B950: @ 0x0855B950
	.string "もたせると ピンチのとき\nとくぼうが あがる$"
	.if (. - gText_Rom_55B950) > 0x17
	.error "gText_Rom_55B950 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B950) < 0x17
	.space 0x17 - (. - gText_Rom_55B950)
	.endif

	@ src/data/items.h:11955 items_line_11955
	.globl gText_Rom_55B967
gText_Rom_55B967: @ 0x0855B967
	.string "もたせると ピンチのとき\nてきの きゅうしょに\nあたり やすくなる$"
	.if (. - gText_Rom_55B967) > 0x22
	.error "gText_Rom_55B967 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B967) < 0x22
	.space 0x22 - (. - gText_Rom_55B967)
	.endif

	@ src/data/items.h:11974 items_line_11974
	.globl gText_Rom_55B989
gText_Rom_55B989: @ 0x0855B989
	.string "もたせると ピンチのとき\nのうりょくの どれか\n1つが ぐーんと あがる$"
	.if (. - gText_Rom_55B989) > 0x25
	.error "gText_Rom_55B989 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B989) < 0x25
	.space 0x25 - (. - gText_Rom_55B989)
	.endif

	@ src/data/items.h:12119 items_line_12119
	.globl gText_Rom_55B9AE
gText_Rom_55B9AE: @ 0x0855B9AE
	.string "ポロックの ざいりょう\nつちのなかに うめると\nなぞな みが そだつ$"
	.if (. - gText_Rom_55B9AE) > 0x23
	.error "gText_Rom_55B9AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B9AE) < 0x23
	.space 0x23 - (. - gText_Rom_55B9AE)
	.endif

	@ src/data/items.h:9609 items_line_9609
	.globl gText_Rom_55B9D1
gText_Rom_55B9D1: @ 0x0855B9D1
	.string "もたせると ひかりが\nあいてを まどわして\nめいちゅうりつを さげる$"
	.if (. - gText_Rom_55B9D1) > 0x23
	.error "gText_Rom_55B9D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B9D1) < 0x23
	.space 0x23 - (. - gText_Rom_55B9D1)
	.endif

	@ src/data/items.h:9633 items_line_9633
	.globl gText_Rom_55B9F4
gText_Rom_55B9F4: @ 0x0855B9F4
	.string "ポケモンに もたせると\nさがった のうりょくを\nもとにもどす$"
	.if (. - gText_Rom_55B9F4) > 0x1f
	.error "gText_Rom_55B9F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55B9F4) < 0x1f
	.space 0x1f - (. - gText_Rom_55B9F4)
	.endif
	.incbin "baserom.gba", 0x55ba13, 0x20

	@ src/data/items.h:9660 items_line_9660
	.globl gText_Rom_55BA33
gText_Rom_55BA33: @ 0x0855BA33
	.string "もたせた ポケモンが\nけいけんちを\nわけて もらえる$"
	.if (. - gText_Rom_55BA33) > 0x1b
	.error "gText_Rom_55BA33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BA33) < 0x1b
	.space 0x1b - (. - gText_Rom_55BA33)
	.endif

	@ src/data/items.h:9686 items_line_9686
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55BA4E
gText_Rom_55BA4E: @ 0x0855BA4E
	.string "ポケモンに もたせると\nせんせい こうげきが\nたまに できる$"
	.if (. - gText_Rom_55BA4E) != 0x1f
	.error "gText_Rom_55BA4E must retain its original byte length"
	.endif
	.globl gText_Rom_55BA69
	.set gText_Rom_55BA69, gText_Rom_55BA4E + 0x1b
	.incbin "baserom.gba", 0x55ba6d, 0x42

	@ src/data/items.h:9190 items_line_9190
	.globl gText_Rom_55BAAF
gText_Rom_55BAAF: @ 0x0855BAAF
	.string "こうげきの いりょくが\nあがるが おなじ\nわざしか だせなくなる$"
	.if (. - gText_Rom_55BAAF) > 0x21
	.error "gText_Rom_55BAAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BAAF) < 0x21
	.space 0x21 - (. - gText_Rom_55BAAF)
	.endif

	@ src/data/items.h:134 sKingsRockDesc
	.globl gText_Rom_55BAD0
gText_Rom_55BAD0: @ 0x0855BAD0
	.string "ポケモンに もたせると\nダメージを うけた\nあいてが たまに ひるむ$"
	.if (. - gText_Rom_55BAD0) > 0x23
	.error "gText_Rom_55BAD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BAD0) < 0x23
	.space 0x23 - (. - gText_Rom_55BAD0)
	.endif

	@ src/data/items.h:9058 items_line_9058
	.globl gText_Rom_55BAF3
gText_Rom_55BAF3: @ 0x0855BAF3
	.string "ポケモンに もたせると\nむしタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55BAF3) > 0x20
	.error "gText_Rom_55BAF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BAF3) < 0x20
	.space 0x20 - (. - gText_Rom_55BAF3)
	.endif

	@ src/data/items.h:126 sLuckIncenseDesc
	.globl gText_Rom_55BB13
gText_Rom_55BB13: @ 0x0855BB13
	.string "もたせた ポケモンが\nせんとうに でると\nおかねが 2ばいもらえる$"
	.if (. - gText_Rom_55BB13) > 0x22
	.error "gText_Rom_55BB13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BB13) < 0x22
	.space 0x22 - (. - gText_Rom_55BB13)
	.endif
	.incbin "baserom.gba", 0x55bb35, 0x47

	@ src/data/items.h:8332 items_line_8332
	.globl gText_Rom_55BB7C
gText_Rom_55BB7C: @ 0x0855BB7C
	.string "するどく ひかる キバ\nパールルに もたせると\nとくこうが あがる$"
	.if (. - gText_Rom_55BB7C) > 0x22
	.error "gText_Rom_55BB7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BB7C) < 0x22
	.space 0x22 - (. - gText_Rom_55BB7C)
	.endif

	@ src/data/items.h:8312 items_line_8312
	.globl gText_Rom_55BB9E
gText_Rom_55BB9E: @ 0x0855BB9E
	.string "にぶく ひかる ウロコ\nパールルに もたせると\nとくぼうが あがる$"
	.if (. - gText_Rom_55BB9E) > 0x22
	.error "gText_Rom_55BB9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BB9E) < 0x22
	.space 0x22 - (. - gText_Rom_55BB9E)
	.endif

	@ src/data/items.h:9823 items_line_9823
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55BBC0
gText_Rom_55BBC0: @ 0x0855BBC0
	.string "そうぐうした やせいの\nポケモンから かならず\nにげられる$"
	.if (. - gText_Rom_55BBC0) != 0x1e
	.error "gText_Rom_55BBC0 must retain its original byte length"
	.endif
	.globl gText_Rom_55BBDA
	.set gText_Rom_55BBDA, gText_Rom_55BBC0 + 0x1a

	@ src/data/items.h:4671 items_line_4671
	.globl gText_Rom_55BBDE
gText_Rom_55BBDE: @ 0x0855BBDE
	.string "もたせた ポケモンが\nしんか しなくなる\nふしぎな いし$"
	.if (. - gText_Rom_55BBDE) > 0x1d
	.error "gText_Rom_55BBDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BBDE) < 0x1d
	.space 0x1d - (. - gText_Rom_55BBDE)
	.endif

	@ src/data/items.h:9848 items_line_9848
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55BBFB
gText_Rom_55BBFB: @ 0x0855BBFB
	.string "ポケモンに もたせると\nたまに ひんしを\nふせぐことが できる$"
	.if (. - gText_Rom_55BBFB) != 0x20
	.error "gText_Rom_55BBFB must retain its original byte length"
	.endif
	.globl gText_Rom_55BC17
	.set gText_Rom_55BC17, gText_Rom_55BBFB + 0x1c

	@ src/data/items.h:9866 items_line_9866
	.globl gText_Rom_55BC1B
gText_Rom_55BC1B: @ 0x0855BC1B
	.string "もたせた ポケモンの\nけいけんちが いつもより\nおおめに もらえる$"
	.if (. - gText_Rom_55BC1B) > 0x22
	.error "gText_Rom_55BC1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BC1B) < 0x22
	.space 0x22 - (. - gText_Rom_55BC1B)
	.endif

	@ src/data/items.h:9891 items_line_9891
	.globl gText_Rom_55BC3D
gText_Rom_55BC3D: @ 0x0855BC3D
	.string "ポケモンに もたせると\nきゅうしょに\nあたり やすくなる$"
	.if (. - gText_Rom_55BC3D) > 0x1d
	.error "gText_Rom_55BC3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BC3D) < 0x1d
	.space 0x1d - (. - gText_Rom_55BC3D)
	.endif

	@ src/data/items.h:9162 items_line_9162
	.globl gText_Rom_55BC5A
gText_Rom_55BC5A: @ 0x0855BC5A
	.string "ポケモンに もたせると\nはがねタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55BC5A) > 0x21
	.error "gText_Rom_55BC5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BC5A) < 0x21
	.space 0x21 - (. - gText_Rom_55BC5A)
	.endif

	@ src/data/items.h:9917 items_line_9917
	.globl gText_Rom_55BC7B
gText_Rom_55BC7B: @ 0x0855BC7B
	.string "もたせると たいりょくが\nせんとうの あいだ\nすこしずつ かいふくする$"
	.if (. - gText_Rom_55BC7B) > 0x24
	.error "gText_Rom_55BC7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BC7B) < 0x24
	.space 0x24 - (. - gText_Rom_55BC7B)
	.endif

	@ src/data/items.h:4348 items_line_4348
	.globl gText_Rom_55BC9F
gText_Rom_55BC9F: @ 0x0855BC9F
	.string "ドラゴンタイプの\nポケモンが もっている\nふしぎな ウロコ$"
	.if (. - gText_Rom_55BC9F) > 0x1e
	.error "gText_Rom_55BC9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BC9F) < 0x1e
	.space 0x1e - (. - gText_Rom_55BC9F)
	.endif
	.incbin "baserom.gba", 0x55bcbd, 0x23

	@ src/data/items.h:9001 items_line_9001
	.globl gText_Rom_55BCE0
gText_Rom_55BCE0: @ 0x0855BCE0
	.string "ポケモンに もたせると\nじめんタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55BCE0) > 0x21
	.error "gText_Rom_55BCE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BCE0) < 0x21
	.space 0x21 - (. - gText_Rom_55BCE0)
	.endif
	.incbin "baserom.gba", 0x55bd01, 0x40

	@ src/data/items.h:9136 items_line_9136
	.globl gText_Rom_55BD41
gText_Rom_55BD41: @ 0x0855BD41
	.string "ポケモンに もたせると\nあくタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55BD41) > 0x20
	.error "gText_Rom_55BD41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BD41) < 0x20
	.space 0x20 - (. - gText_Rom_55BD41)
	.endif

	@ src/data/items.h:8960 items_line_8960
	.globl gText_Rom_55BD61
gText_Rom_55BD61: @ 0x0855BD61
	.string "ポケモンに もたせると\nかくとうタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55BD61) > 0x22
	.error "gText_Rom_55BD61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BD61) < 0x22
	.space 0x22 - (. - gText_Rom_55BD61)
	.endif

	@ src/data/items.h:8903 items_line_8903
	.globl gText_Rom_55BD83
gText_Rom_55BD83: @ 0x0855BD83
	.string "ポケモンに もたせると\nでんきタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55BD83) > 0x21
	.error "gText_Rom_55BD83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BD83) < 0x21
	.space 0x21 - (. - gText_Rom_55BD83)
	.endif

	@ src/data/items.h:8883 items_line_8883
	.globl gText_Rom_55BDA4
gText_Rom_55BDA4: @ 0x0855BDA4
	.string "ポケモンに もたせると\nみずタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55BDA4) > 0x20
	.error "gText_Rom_55BDA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BDA4) < 0x20
	.space 0x20 - (. - gText_Rom_55BDA4)
	.endif

	@ src/data/items.h:9021 items_line_9021
	.globl gText_Rom_55BDC4
gText_Rom_55BDC4: @ 0x0855BDC4
	.string "ポケモンに もたせると\nひこうタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55BDC4) > 0x21
	.error "gText_Rom_55BDC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BDC4) < 0x21
	.space 0x21 - (. - gText_Rom_55BDC4)
	.endif

	@ src/data/items.h:8980 items_line_8980
	.globl gText_Rom_55BDE5
gText_Rom_55BDE5: @ 0x0855BDE5
	.string "ポケモンに もたせると\nどくタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55BDE5) > 0x20
	.error "gText_Rom_55BDE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BDE5) < 0x20
	.space 0x20 - (. - gText_Rom_55BDE5)
	.endif

	@ src/data/items.h:8940 items_line_8940
	.globl gText_Rom_55BE05
gText_Rom_55BE05: @ 0x0855BE05
	.string "ポケモンに もたせると\nこおりタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55BE05) > 0x21
	.error "gText_Rom_55BE05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BE05) < 0x21
	.space 0x21 - (. - gText_Rom_55BE05)
	.endif

	@ src/data/items.h:9095 items_line_9095
	.globl gText_Rom_55BE26
gText_Rom_55BE26: @ 0x0855BE26
	.string "ポケモンに もたせると\nゴーストタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55BE26) > 0x22
	.error "gText_Rom_55BE26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BE26) < 0x22
	.space 0x22 - (. - gText_Rom_55BE26)
	.endif
	.incbin "baserom.gba", 0x55be48, 0x22

	@ src/data/items.h:8863 items_line_8863
	.globl gText_Rom_55BE6A
gText_Rom_55BE6A: @ 0x0855BE6A
	.string "ポケモンに もたせると\nほのおタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55BE6A) > 0x21
	.error "gText_Rom_55BE6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BE6A) < 0x21
	.space 0x21 - (. - gText_Rom_55BE6A)
	.endif

	@ src/data/items.h:9115 items_line_9115
	.globl gText_Rom_55BE8B
gText_Rom_55BE8B: @ 0x0855BE8B
	.string "ポケモンに もたせると\nドラゴンタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55BE8B) > 0x22
	.error "gText_Rom_55BE8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BE8B) < 0x22
	.space 0x22 - (. - gText_Rom_55BE8B)
	.endif

	@ src/data/items.h:8837 items_line_8837
	.globl gText_Rom_55BEAD
gText_Rom_55BEAD: @ 0x0855BEAD
	.string "ポケモンに もたせると\nノーマルタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55BEAD) > 0x22
	.error "gText_Rom_55BEAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BEAD) < 0x22
	.space 0x22 - (. - gText_Rom_55BEAD)
	.endif

	@ src/data/items.h:4366 items_line_4366
	.globl gText_Rom_55BECF
gText_Rom_55BECF: @ 0x0855BECF
	.string "ふしぎな はこ\nシルフ カンパニーせい$"
	.if (. - gText_Rom_55BECF) > 0x14
	.error "gText_Rom_55BECF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BECF) < 0x14
	.space 0x14 - (. - gText_Rom_55BECF)
	.endif

	@ src/data/items.h:9942 items_line_9942
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55BEE3
gText_Rom_55BEE3: @ 0x0855BEE3
	.string "もたせると てきに\nダメージを あたえたとき\nたいりょくが かいふく$"
	.if (. - gText_Rom_55BEE3) != 0x23
	.error "gText_Rom_55BEE3 must retain its original byte length"
	.endif
	.globl gText_Rom_55BF01
	.set gText_Rom_55BF01, gText_Rom_55BEE3 + 0x1e
	.incbin "baserom.gba", 0x55bf06, 0x6a

	@ src/data/items.h:8278 items_line_8278
	.globl gText_Rom_55BF70
gText_Rom_55BF70: @ 0x0855BF70
	.string "メタモンに もたせると\nぼうぎょが あがる$"
	.if (. - gText_Rom_55BF70) > 0x16
	.error "gText_Rom_55BF70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BF70) < 0x16
	.space 0x16 - (. - gText_Rom_55BF70)
	.endif

	@ src/data/items.h:8241 items_line_8241
	.globl gText_Rom_55BF86
gText_Rom_55BF86: @ 0x0855BF86
	.string "カラカラや ガラガラに\nもたせると こうげきの\nいりょくが あがる$"
	.if (. - gText_Rom_55BF86) > 0x22
	.error "gText_Rom_55BF86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BF86) < 0x22
	.space 0x22 - (. - gText_Rom_55BF86)
	.endif

	@ src/data/items.h:8223 items_line_8223
	.globl gText_Rom_55BFA8
gText_Rom_55BFA8: @ 0x0855BFA8
	.string "カモネギに もたせると\nきゅうしょに\nあたりやすくなる$"
	.if (. - gText_Rom_55BFA8) > 0x1c
	.error "gText_Rom_55BFA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55BFA8) < 0x1c
	.space 0x1c - (. - gText_Rom_55BFA8)
	.endif

	@ src/data/items.h:8595 items_line_8595
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55BFC4
gText_Rom_55BFC4: @ 0x0855BFC4
	.string "もたせて コンテストに\nさんかすると いつもより\nかっこよく みられる$"
	.if (. - gText_Rom_55BFC4) != 0x24
	.error "gText_Rom_55BFC4 must retain its original byte length"
	.endif
	.globl gText_Rom_55BFE4
	.set gText_Rom_55BFE4, gText_Rom_55BFC4 + 0x20

	@ src/data/items.h:8613 items_line_8613
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55BFE8
gText_Rom_55BFE8: @ 0x0855BFE8
	.string "もたせて コンテストに\nさんかすると いつもより\nうつくしく みられる$"
	.if (. - gText_Rom_55BFE8) != 0x24
	.error "gText_Rom_55BFE8 must retain its original byte length"
	.endif
	.globl gText_Rom_55C008
	.set gText_Rom_55C008, gText_Rom_55BFE8 + 0x20

	@ src/data/items.h:8631 items_line_8631
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C00C
gText_Rom_55C00C: @ 0x0855C00C
	.string "もたせて コンテストに\nさんかすると いつもより\nかわいく みられる$"
	.if (. - gText_Rom_55C00C) != 0x23
	.error "gText_Rom_55C00C must retain its original byte length"
	.endif
	.globl gText_Rom_55C02B
	.set gText_Rom_55C02B, gText_Rom_55C00C + 0x1f

	@ src/data/items.h:8649 items_line_8649
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C02F
gText_Rom_55C02F: @ 0x0855C02F
	.string "もたせて コンテストに\nさんかすると いつもより\nかしこく みられる$"
	.if (. - gText_Rom_55C02F) != 0x23
	.error "gText_Rom_55C02F must retain its original byte length"
	.endif
	.globl gText_Rom_55C04E
	.set gText_Rom_55C04E, gText_Rom_55C02F + 0x1f

	@ src/data/items.h:8667 items_line_8667
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C052
gText_Rom_55C052: @ 0x0855C052
	.string "もたせて コンテストに\nさんかすると いつもより\nたくましく みられる$"
	.if (. - gText_Rom_55C052) != 0x24
	.error "gText_Rom_55C052 must retain its original byte length"
	.endif
	.globl gText_Rom_55C072
	.set gText_Rom_55C072, gText_Rom_55C052 + 0x20

	@ src/data/items.h:13801 items_line_13801
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C076
gText_Rom_55C076: @ 0x0855C076
	.string "2ばい いじょうの\nはやさで いどう できる\nおりたたみの じてんしゃ$"
	.if (. - gText_Rom_55C076) != 0x24
	.error "gText_Rom_55C076 must retain its original byte length"
	.endif
	.globl gText_Rom_55C094
	.set gText_Rom_55C094, gText_Rom_55C076 + 0x1e

	@ src/data/items.h:13985 items_line_13985
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C09A
gText_Rom_55C09A: @ 0x0855C09A
	.string "てにいれた コインを\n9999まい まで\nもつことが できる$"
	.if (. - gText_Rom_55C09A) != 0x1f
	.error "gText_Rom_55C09A must retain its original byte length"
	.endif
	.globl gText_Rom_55C0B5
	.set gText_Rom_55C0B5, gText_Rom_55C09A + 0x1b

	@ src/data/items.h:13886 items_line_13886
	.globl gText_Rom_55C0B9
gText_Rom_55C0B9: @ 0x0855C0B9
	.string "みえない どうぐに\nはんのうして\nおとで おしえて くれる$"
	.if (. - gText_Rom_55C0B9) > 0x1e
	.error "gText_Rom_55C0B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C0B9) < 0x1e
	.space 0x1e - (. - gText_Rom_55C0B9)
	.endif

	@ src/data/items.h:13835 items_line_13835
	.globl gText_Rom_55C0D7
gText_Rom_55C0D7: @ 0x0855C0D7
	.string "ポケモンを つるどうぐ\nみずべで つかうと\nポケモンが つれる$"
	.if (. - gText_Rom_55C0D7) > 0x20
	.error "gText_Rom_55C0D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C0D7) < 0x20
	.space 0x20 - (. - gText_Rom_55C0D7)
	.endif

	@ src/data/items.h:13852 items_line_13852
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C0F7
gText_Rom_55C0F7: @ 0x0855C0F7
	.string "ポケモンを つるどうぐ\nなかなかの つりざおと\nいわれている$"
	.if (. - gText_Rom_55C0F7) != 0x1f
	.error "gText_Rom_55C0F7 must retain its original byte length"
	.endif
	.globl gText_Rom_55C112
	.set gText_Rom_55C112, gText_Rom_55C0F7 + 0x1b

	@ src/data/items.h:13869 items_line_13869
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C116
gText_Rom_55C116: @ 0x0855C116
	.string "ポケモンを つるどうぐ\nさいこうの つりざおと\nいわれている$"
	.if (. - gText_Rom_55C116) != 0x1f
	.error "gText_Rom_55C116 must retain its original byte length"
	.endif
	.globl gText_Rom_55C131
	.set gText_Rom_55C131, gText_Rom_55C116 + 0x1b

	@ src/data/items.h:14131 items_line_14131
	.globl gText_Rom_55C135
gText_Rom_55C135: @ 0x0855C135
	.string "れんらくせんに\nのるとき ひつよう$"
	.if (. - gText_Rom_55C135) > 0x12
	.error "gText_Rom_55C135 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C135) < 0x12
	.space 0x12 - (. - gText_Rom_55C135)
	.endif

	@ src/data/items.h:14409 items_line_14409
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C147
gText_Rom_55C147: @ 0x0855C147
	.string "ポケモンコンテストに\nさんかする ことができる$"
	.if (. - gText_Rom_55C147) != 0x18
	.error "gText_Rom_55C147 must retain its original byte length"
	.endif
	.globl gText_Rom_55C15B
	.set gText_Rom_55C15B, gText_Rom_55C147 + 0x14

	@ src/data/items.h:14017 items_line_14017
	.globl gText_Rom_55C15F
gText_Rom_55C15F: @ 0x0855C15F
	.string "みずを かける どうぐ\nつちに うめた きのみを\nすくすく そだてる$"
	.if (. - gText_Rom_55C15F) > 0x23
	.error "gText_Rom_55C15F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C15F) < 0x23
	.space 0x23 - (. - gText_Rom_55C15F)
	.endif

	@ src/data/items.h:14226 items_line_14226
	.globl gText_Rom_55C182
gText_Rom_55C182: @ 0x0855C182
	.string "デボンで つくられた\nなにかの パーツが\nはいっている にもつ$"
	.if (. - gText_Rom_55C182) > 0x20
	.error "gText_Rom_55C182 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C182) < 0x20
	.space 0x20 - (. - gText_Rom_55C182)
	.endif

	@ src/data/items.h:14065 items_line_14065
	.globl gText_Rom_55C1A2
gText_Rom_55C1A2: @ 0x0855C1A2
	.string "つもった かざんばいを\nあつめるための ふくろ$"
	.if (. - gText_Rom_55C1A2) > 0x18
	.error "gText_Rom_55C1A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C1A2) < 0x18
	.space 0x18 - (. - gText_Rom_55C1A2)
	.endif

	@ src/data/items.h:14275 items_line_14275
	.globl gText_Rom_55C1BA
gText_Rom_55C1BA: @ 0x0855C1BA
	.string "キンセツの ちかにある\nニューキンセツに\nはいる ための カギ$"
	.if (. - gText_Rom_55C1BA) > 0x20
	.error "gText_Rom_55C1BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C1BA) < 0x20
	.space 0x20 - (. - gText_Rom_55C1BA)
	.endif

	@ src/data/items.h:13818 items_line_13818
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C1DA
gText_Rom_55C1DA: @ 0x0855C1DA
	.string "ジャンプや ウイリーの\nアクションが できる\nおりたたみの じてんしゃ$"
	.if (. - gText_Rom_55C1DA) != 0x24
	.error "gText_Rom_55C1DA must retain its original byte length"
	.endif
	.globl gText_Rom_55C1F8
	.set gText_Rom_55C1F8, gText_Rom_55C1DA + 0x1e

	@ src/data/items.h:14049 items_line_14049
	.globl gText_Rom_55C1FE
gText_Rom_55C1FE: @ 0x0855C1FE
	.string "きのみブレンダーで\nつくった ポロックを\nほぞんする いれもの$"
	.if (. - gText_Rom_55C1FE) > 0x20
	.error "gText_Rom_55C1FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C1FE) < 0x20
	.space 0x20 - (. - gText_Rom_55C1FE)
	.endif

	@ src/data/items.h:14210 items_line_14210
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C21E
gText_Rom_55C21E: @ 0x0855C21E
	.string "デボンしゃちょう から\nあずかった てがみ$"
	.if (. - gText_Rom_55C21E) != 0x16
	.error "gText_Rom_55C21E must retain its original byte length"
	.endif
	.globl gText_Rom_55C230
	.set gText_Rom_55C230, gText_Rom_55C21E + 0x12

	@ src/data/items.h:14146 items_line_14146
	.globl gText_Rom_55C234
gText_Rom_55C234: @ 0x0855C234
	.string "みなみのことうへ いく\nふねの チケット$"
	.if (. - gText_Rom_55C234) > 0x15
	.error "gText_Rom_55C234 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C234) < 0x15
	.space 0x15 - (. - gText_Rom_55C234)
	.endif

	@ src/data/items.h:5564 items_line_5564
	.globl gText_Rom_55C249
gText_Rom_55C249: @ 0x0855C249
	.string "おおむかしの ちからが\nこめられている という\nあかく かがやく たま$"
	.if (. - gText_Rom_55C249) > 0x24
	.error "gText_Rom_55C249 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C249) < 0x24
	.space 0x24 - (. - gText_Rom_55C249)
	.endif

	@ src/data/items.h:5581 items_line_5581
	.globl gText_Rom_55C26D
gText_Rom_55C26D: @ 0x0855C26D
	.string "おおむかしの ちからが\nこめられている という\nあおく かがやく たま$"
	.if (. - gText_Rom_55C26D) > 0x24
	.error "gText_Rom_55C26D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C26D) < 0x24
	.space 0x24 - (. - gText_Rom_55C26D)
	.endif

	@ src/data/items.h:14291 items_line_14291
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C291
gText_Rom_55C291: @ 0x0855C291
	.string "すてられぶねの なかで\nみつけた どうぐ$"
	.if (. - gText_Rom_55C291) != 0x15
	.error "gText_Rom_55C291 must retain its original byte length"
	.endif
	.globl gText_Rom_55C2A2
	.set gText_Rom_55C2A2, gText_Rom_55C291 + 0x11

	@ src/data/items.h:14243 items_line_14243
	.globl gText_Rom_55C2A6
gText_Rom_55C2A6: @ 0x0855C2A6
	.string "さばくの すなあらしから\nめを まもってくれる\nすてきな ゴーグル$"
	.if (. - gText_Rom_55C2A6) > 0x22
	.error "gText_Rom_55C2A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C2A6) < 0x22
	.space 0x22 - (. - gText_Rom_55C2A6)
	.endif

	@ src/data/items.h:14377 items_line_14377
	.globl gText_Rom_55C2C8
gText_Rom_55C2C8: @ 0x0855C2C8
	.string "りゅうせいのたきに\nおちていた いんせき$"
	.if (. - gText_Rom_55C2C8) > 0x15
	.error "gText_Rom_55C2C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C2C8) < 0x15
	.space 0x15 - (. - gText_Rom_55C2C8)
	.endif

	@ src/data/items.h:146 sKeyToRoomDesc
	.globl gText_Rom_55C2DD
gText_Rom_55C2DD: @ 0x0855C2DD
	.string "すてられぶねの へやに\nはいる ための カギ$"
	.if (. - gText_Rom_55C2DD) > 0x17
	.error "gText_Rom_55C2DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C2DD) < 0x17
	.space 0x17 - (. - gText_Rom_55C2DD)
	.endif

	@ src/data/items.h:146 sKeyToRoomDesc
	.globl gText_Rom_55C2F4
gText_Rom_55C2F4: @ 0x0855C2F4
	.string "すてられぶねの へやに\nはいる ための カギ$"
	.if (. - gText_Rom_55C2F4) > 0x17
	.error "gText_Rom_55C2F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C2F4) < 0x17
	.space 0x17 - (. - gText_Rom_55C2F4)
	.endif

	@ src/data/items.h:146 sKeyToRoomDesc
	.globl gText_Rom_55C30B
gText_Rom_55C30B: @ 0x0855C30B
	.string "すてられぶねの へやに\nはいる ための カギ$"
	.if (. - gText_Rom_55C30B) > 0x17
	.error "gText_Rom_55C30B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C30B) < 0x17
	.space 0x17 - (. - gText_Rom_55C30B)
	.endif

	@ src/data/items.h:146 sKeyToRoomDesc
	.globl gText_Rom_55C322
gText_Rom_55C322: @ 0x0855C322
	.string "すてられぶねの へやに\nはいる ための カギ$"
	.if (. - gText_Rom_55C322) > 0x17
	.error "gText_Rom_55C322 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C322) < 0x17
	.space 0x17 - (. - gText_Rom_55C322)
	.endif

	@ src/data/items.h:14306 items_line_14306
	.globl gText_Rom_55C339
gText_Rom_55C339: @ 0x0855C339
	.string "すてられぶねの そうこに\nはいる ための カギ$"
	.if (. - gText_Rom_55C339) > 0x18
	.error "gText_Rom_55C339 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C339) < 0x18
	.space 0x18 - (. - gText_Rom_55C339)
	.endif

	@ src/data/items.h:64 sRootFossilDesc
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C351
gText_Rom_55C351: @ 0x0855C351
	.string "おおむかし かいていで\nくらしていた ポケモンの\nカセキと いわれている$"
	.if (. - gText_Rom_55C351) != 0x25
	.error "gText_Rom_55C351 must retain its original byte length"
	.endif
	.globl gText_Rom_55C372
	.set gText_Rom_55C372, gText_Rom_55C351 + 0x21

	@ src/data/items.h:64 sRootFossilDesc
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C376
gText_Rom_55C376: @ 0x0855C376
	.string "おおむかし かいていで\nくらしていた ポケモンの\nカセキと いわれている$"
	.if (. - gText_Rom_55C376) != 0x25
	.error "gText_Rom_55C376 must retain its original byte length"
	.endif
	.globl gText_Rom_55C397
	.set gText_Rom_55C397, gText_Rom_55C376 + 0x21

	@ src/data/items.h:14259 items_line_14259
	.globl gText_Rom_55C39B
gText_Rom_55C39B: @ 0x0855C39B
	.string "みえない ポケモンに\nはんのうして おとをだす\nデボンの とくせいひん$"
	.if (. - gText_Rom_55C39B) > 0x24
	.error "gText_Rom_55C39B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C39B) < 0x24
	.space 0x24 - (. - gText_Rom_55C39B)
	.endif

	@ src/data/items.h:12138 items_line_12138
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C3BF
gText_Rom_55C3BF: @ 0x0855C3BF
	.string "てきに だいダメージを\nあたえるが こうげきを\nうけると ひるんでしまう$"
	.if (. - gText_Rom_55C3BF) != 0x25
	.error "gText_Rom_55C3BF must retain its original byte length"
	.endif
	.globl gText_Rom_55C3E0
	.set gText_Rom_55C3E0, gText_Rom_55C3BF + 0x21

	@ src/data/items.h:12152 items_line_12152
	.globl gText_Rom_55C3E4
gText_Rom_55C3E4: @ 0x0855C3E4
	.string "ながく するどい ツメで\nてきを ひっかけて\nこうげきする$"
	.if (. - gText_Rom_55C3E4) > 0x1e
	.error "gText_Rom_55C3E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C3E4) < 0x1e
	.space 0x1e - (. - gText_Rom_55C3E4)
	.endif

	@ src/data/items.h:12166 items_line_12166
	.globl gText_Rom_55C402
gText_Rom_55C402: @ 0x0855C402
	.string "ちょうおんぱ こうげきで\nてきを こんらんさせる\nことがある$"
	.if (. - gText_Rom_55C402) > 0x1f
	.error "gText_Rom_55C402 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C402) < 0x1f
	.space 0x1f - (. - gText_Rom_55C402)
	.endif

	@ src/data/items.h:12180 items_line_12180
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C421
gText_Rom_55C421: @ 0x0855C421
	.string "せいしんを しゅうちゅう\nさせて とくこうと\nとくぼうを あげる$"
	.if (. - gText_Rom_55C421) != 0x21
	.error "gText_Rom_55C421 must retain its original byte length"
	.endif
	.globl gText_Rom_55C43E
	.set gText_Rom_55C43E, gText_Rom_55C421 + 0x1d

	@ src/data/items.h:12194 items_line_12194
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C442
gText_Rom_55C442: @ 0x0855C442
	.string "ほえて てきを にがす\nてきが にげると\nせんとうは おわる$"
	.if (. - gText_Rom_55C442) != 0x1f
	.error "gText_Rom_55C442 must retain its original byte length"
	.endif
	.globl gText_Rom_55C45D
	.set gText_Rom_55C45D, gText_Rom_55C442 + 0x1b

	@ src/data/items.h:12208 items_line_12208
	.globl gText_Rom_55C461
gText_Rom_55C461: @ 0x0855C461
	.string "じょじょに ダメージが\nふえる もうどくを\nてきに あたえる$"
	.if (. - gText_Rom_55C461) > 0x1f
	.error "gText_Rom_55C461 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C461) < 0x1f
	.space 0x1f - (. - gText_Rom_55C461)
	.endif

	@ src/data/items.h:12228 items_line_12228
	.globl gText_Rom_55C480
gText_Rom_55C480: @ 0x0855C480
	.string "あられを ふらして\nこおりタイプ いがいに\nダメージを あたえる$"
	.if (. - gText_Rom_55C480) > 0x21
	.error "gText_Rom_55C480 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C480) < 0x21
	.space 0x21 - (. - gText_Rom_55C480)
	.endif

	@ src/data/items.h:12243 items_line_12243
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C4A1
gText_Rom_55C4A1: @ 0x0855C4A1
	.string "からだを きたえて\nこうげきと ぼうぎょの\nちからを あげる$"
	.if (. - gText_Rom_55C4A1) != 0x1f
	.error "gText_Rom_55C4A1 must retain its original byte length"
	.endif
	.globl gText_Rom_55C4BC
	.set gText_Rom_55C4BC, gText_Rom_55C4A1 + 0x1b

	@ src/data/items.h:12257 items_line_12257
	.globl gText_Rom_55C4C0
gText_Rom_55C4C0: @ 0x0855C4C0
	.string "タネを 2ー5かい\nれんぞくで はっしゃして\nてきを こうげきする$"
	.if (. - gText_Rom_55C4C0) > 0x22
	.error "gText_Rom_55C4C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C4C0) < 0x22
	.space 0x22 - (. - gText_Rom_55C4C0)
	.endif

	@ src/data/items.h:12271 items_line_12271
	.globl gText_Rom_55C4E2
gText_Rom_55C4E2: @ 0x0855C4E2
	.string "ポケモンによって てきに\nあたえる ダメージの\nりょうが へんかする$"
	.if (. - gText_Rom_55C4E2) > 0x23
	.error "gText_Rom_55C4E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C4E2) < 0x23
	.space 0x23 - (. - gText_Rom_55C4E2)
	.endif

	@ src/data/items.h:12285 items_line_12285
	.globl gText_Rom_55C505
gText_Rom_55C505: @ 0x0855C505
	.string "5ターンの あいだ\nほのおタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55C505) > 0x1f
	.error "gText_Rom_55C505 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C505) < 0x1f
	.space 0x1f - (. - gText_Rom_55C505)
	.endif

	@ src/data/items.h:12299 items_line_12299
	.globl gText_Rom_55C524
gText_Rom_55C524: @ 0x0855C524
	.string "あいてを おこらせて\nこうげきわざ しか\nだせない ように する$"
	.if (. - gText_Rom_55C524) > 0x21
	.error "gText_Rom_55C524 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C524) < 0x21
	.space 0x21 - (. - gText_Rom_55C524)
	.endif
	.incbin "baserom.gba", 0x55c545, 0x45

	@ src/data/items.h:12351 items_line_12351
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C58A
gText_Rom_55C58A: @ 0x0855C58A
	.string "ダメージは おおきいが\nつかうと つぎのターン\nうごけなく なってしまう$"
	.if (. - gText_Rom_55C58A) != 0x25
	.error "gText_Rom_55C58A must retain its original byte length"
	.endif
	.globl gText_Rom_55C5AB
	.set gText_Rom_55C5AB, gText_Rom_55C58A + 0x21

	@ src/data/items.h:12365 items_line_12365
	.globl gText_Rom_55C5AF
gText_Rom_55C5AF: @ 0x0855C5AF
	.string "ひかりのかべを つくり\nとくこうの ダメージを\nよわめる$"
	.if (. - gText_Rom_55C5AF) > 0x1d
	.error "gText_Rom_55C5AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C5AF) < 0x1d
	.space 0x1d - (. - gText_Rom_55C5AF)
	.endif

	@ src/data/items.h:12379 items_line_12379
	.globl gText_Rom_55C5CC
gText_Rom_55C5CC: @ 0x0855C5CC
	.string "そのターンの こうげきを\nうけないが れんぞくして\nだすと しっぱいしやすい$"
	.if (. - gText_Rom_55C5CC) > 0x27
	.error "gText_Rom_55C5CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C5CC) < 0x27
	.space 0x27 - (. - gText_Rom_55C5CC)
	.endif

	@ src/data/items.h:12393 items_line_12393
	.globl gText_Rom_55C5F3
gText_Rom_55C5F3: @ 0x0855C5F3
	.string "5ターンの あいだ\nみずタイプの\nわざのいりょくが あがる$"
	.if (. - gText_Rom_55C5F3) > 0x1e
	.error "gText_Rom_55C5F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C5F3) < 0x1e
	.space 0x1e - (. - gText_Rom_55C5F3)
	.endif

	@ src/data/items.h:12407 items_line_12407
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C611
gText_Rom_55C611: @ 0x0855C611
	.string "あたえた ダメージの\nはんぶんの たいりょくを\nかいふく できる$"
	.if (. - gText_Rom_55C611) != 0x21
	.error "gText_Rom_55C611 must retain its original byte length"
	.endif
	.globl gText_Rom_55C62E
	.set gText_Rom_55C62E, gText_Rom_55C611 + 0x1d

	@ src/data/items.h:12421 items_line_12421
	.globl gText_Rom_55C632
gText_Rom_55C632: @ 0x0855C632
	.string "ふしぎな ちからに\nまもられて とくしゅ\nじょうたいに ならない$"
	.if (. - gText_Rom_55C632) > 0x21
	.error "gText_Rom_55C632 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C632) < 0x21
	.space 0x21 - (. - gText_Rom_55C632)
	.endif

	@ src/data/items.h:12435 items_line_12435
	.globl gText_Rom_55C653
gText_Rom_55C653: @ 0x0855C653
	.string "ポケモンが なついて\nいないほど あたえる\nダメージが あがる$"
	.if (. - gText_Rom_55C653) > 0x20
	.error "gText_Rom_55C653 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C653) < 0x20
	.space 0x20 - (. - gText_Rom_55C653)
	.endif

	@ src/data/items.h:12449 items_line_12449
	.globl gText_Rom_55C673
gText_Rom_55C673: @ 0x0855C673
	.string "1ターンめで ひかりを\nきゅうしゅうして つぎの\nターンに こうげきする$"
	.if (. - gText_Rom_55C673) > 0x25
	.error "gText_Rom_55C673 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C673) < 0x25
	.space 0x25 - (. - gText_Rom_55C673)
	.endif

	@ src/data/items.h:12463 items_line_12463
	.globl gText_Rom_55C698
gText_Rom_55C698: @ 0x0855C698
	.string "かたいシッポで こうげき\nてきの ぼうぎょを\nさげる ことがある$"
	.if (. - gText_Rom_55C698) > 0x21
	.error "gText_Rom_55C698 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C698) < 0x21
	.space 0x21 - (. - gText_Rom_55C698)
	.endif

	@ src/data/items.h:12477 items_line_12477
	.globl gText_Rom_55C6B9
gText_Rom_55C6B9: @ 0x0855C6B9
	.string "でんげきを あびせる\nあたった てきを\nまひさせる ことがある$"
	.if (. - gText_Rom_55C6B9) > 0x20
	.error "gText_Rom_55C6B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C6B9) < 0x20
	.space 0x20 - (. - gText_Rom_55C6B9)
	.endif

	@ src/data/items.h:12491 items_line_12491
	.globl gText_Rom_55C6D9
gText_Rom_55C6D9: @ 0x0855C6D9
	.string "かみなりを おとす\nあたった てきを\nまひさせる ことがある$"
	.if (. - gText_Rom_55C6D9) > 0x1f
	.error "gText_Rom_55C6D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C6D9) < 0x1f
	.space 0x1f - (. - gText_Rom_55C6D9)
	.endif

	@ src/data/items.h:12505 items_line_12505
	.globl gText_Rom_55C6F8
gText_Rom_55C6F8: @ 0x0855C6F8
	.string "じめんを つよく ゆらす\nとんでいる てきいがいに\nだいダメージを あたえる$"
	.if (. - gText_Rom_55C6F8) > 0x27
	.error "gText_Rom_55C6F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C6F8) < 0x27
	.space 0x27 - (. - gText_Rom_55C6F8)
	.endif

	@ src/data/items.h:12519 items_line_12519
	.globl gText_Rom_55C71F
gText_Rom_55C71F: @ 0x0855C71F
	.string "ポケモンが なついて\nいるほど あたえる\nダメージが あがる$"
	.if (. - gText_Rom_55C71F) > 0x1f
	.error "gText_Rom_55C71F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C71F) < 0x1f
	.space 0x1f - (. - gText_Rom_55C71F)
	.endif

	@ src/data/items.h:12533 items_line_12533
	.globl gText_Rom_55C73E
gText_Rom_55C73E: @ 0x0855C73E
	.string "1ターンめで じめんに\nもぐり つぎのターンに\nてきを こうげきする$"
	.if (. - gText_Rom_55C73E) > 0x23
	.error "gText_Rom_55C73E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C73E) < 0x23
	.space 0x23 - (. - gText_Rom_55C73E)
	.endif

	@ src/data/items.h:12547 items_line_12547
	.globl gText_Rom_55C761
gText_Rom_55C761: @ 0x0855C761
	.string "つよい ねんりきを だす\nてきの とくぼうを\nさげる ことがある$"
	.if (. - gText_Rom_55C761) > 0x21
	.error "gText_Rom_55C761 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C761) < 0x21
	.space 0x21 - (. - gText_Rom_55C761)
	.endif

	@ src/data/items.h:12561 items_line_12561
	.globl gText_Rom_55C782
gText_Rom_55C782: @ 0x0855C782
	.string "くろいかたまりを なげる\nてきの とくぼうを\nさげる ことがある$"
	.if (. - gText_Rom_55C782) > 0x21
	.error "gText_Rom_55C782 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C782) < 0x21
	.space 0x21 - (. - gText_Rom_55C782)
	.endif
	.incbin "baserom.gba", 0x55c7a3, 0x1f

	@ src/data/easy_chat/easy_chat_group_actions.h:454 easy_chat_group_actions_line_454
	.globl gText_Rom_55C7C2
gText_Rom_55C7C2: @ 0x0855C7C2
	.string "られる$"
	.if (. - gText_Rom_55C7C2) > 0x4
	.error "gText_Rom_55C7C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C7C2) < 0x4
	.space 0x4 - (. - gText_Rom_55C7C2)
	.endif

	@ src/data/items.h:12589 items_line_12589
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C7C6
gText_Rom_55C7C6: @ 0x0855C7C6
	.string "ぶんしんを つくって\nてきを まどわせて\nかいひりつを あげる$"
	.if (. - gText_Rom_55C7C6) != 0x20
	.error "gText_Rom_55C7C6 must retain its original byte length"
	.endif
	.globl gText_Rom_55C7E2
	.set gText_Rom_55C7E2, gText_Rom_55C7C6 + 0x1c

	@ src/data/items.h:12603 items_line_12603
	.globl gText_Rom_55C7E6
gText_Rom_55C7E6: @ 0x0855C7E6
	.string "ひかりのかべを つくり\nぶつり こうげきの\nダメージを よわめる$"
	.if (. - gText_Rom_55C7E6) > 0x21
	.error "gText_Rom_55C7E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C7E6) < 0x21
	.space 0x21 - (. - gText_Rom_55C7E6)
	.endif
	.incbin "baserom.gba", 0x55c807, 0x22

	@ src/data/items.h:12631 items_line_12631
	.globl gText_Rom_55C829
gText_Rom_55C829: @ 0x0855C829
	.string "ほのおを まきちらす\nあたった てきを\nやけどさせる ことがある$"
	.if (. - gText_Rom_55C829) > 0x21
	.error "gText_Rom_55C829 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C829) < 0x21
	.space 0x21 - (. - gText_Rom_55C829)
	.endif

	@ src/data/items.h:12645 items_line_12645
	.globl gText_Rom_55C84A
gText_Rom_55C84A: @ 0x0855C84A
	.string "ヘドロを なげつける\nあたった てきに どくを\nあたえることが ある$"
	.if (. - gText_Rom_55C84A) > 0x23
	.error "gText_Rom_55C84A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C84A) < 0x23
	.space 0x23 - (. - gText_Rom_55C84A)
	.endif

	@ src/data/items.h:12659 items_line_12659
	.globl gText_Rom_55C86D
gText_Rom_55C86D: @ 0x0855C86D
	.string "すなあらしを おこして\nまいターン てきに\nダメージを あたえる$"
	.if (. - gText_Rom_55C86D) > 0x21
	.error "gText_Rom_55C86D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C86D) < 0x21
	.space 0x21 - (. - gText_Rom_55C86D)
	.endif

	@ src/data/items.h:12673 items_line_12673
	.globl gText_Rom_55C88E
gText_Rom_55C88E: @ 0x0855C88E
	.string "だいの もじで すべてを\nやきつくす こうげき\nやけどさせる ことがある$"
	.if (. - gText_Rom_55C88E) > 0x25
	.error "gText_Rom_55C88E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C88E) < 0x25
	.space 0x25 - (. - gText_Rom_55C88E)
	.endif

	@ src/data/items.h:12687 items_line_12687
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C8B3
gText_Rom_55C8B3: @ 0x0855C8B3
	.string "いわで てきの うごきを\nふうじて こうげき\nすばやさを さげられる$"
	.if (. - gText_Rom_55C8B3) != 0x23
	.error "gText_Rom_55C8B3 must retain its original byte length"
	.endif
	.globl gText_Rom_55C8D2
	.set gText_Rom_55C8D2, gText_Rom_55C8B3 + 0x1f
	.incbin "baserom.gba", 0x55c8d6, 0x21

	@ src/data/items.h:12715 items_line_12715
	.globl gText_Rom_55C8F7
gText_Rom_55C8F7: @ 0x0855C8F7
	.string "てきが おなじわざを\nれんぞくで だせない\nようにする$"
	.if (. - gText_Rom_55C8F7) > 0x1c
	.error "gText_Rom_55C8F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C8F7) < 0x1c
	.space 0x1c - (. - gText_Rom_55C8F7)
	.endif

	@ src/data/items.h:12729 items_line_12729
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C913
gText_Rom_55C913: @ 0x0855C913
	.string "どく まひ やけどのとき\nこうげきの ちからを\nあげる ことが できる$"
	.if (. - gText_Rom_55C913) != 0x24
	.error "gText_Rom_55C913 must retain its original byte length"
	.endif
	.globl gText_Rom_55C933
	.set gText_Rom_55C933, gText_Rom_55C913 + 0x20

	@ src/data/items.h:12743 items_line_12743
	.globl gText_Rom_55C937
gText_Rom_55C937: @ 0x0855C937
	.string "たたかう ばしょに より\nてきに あたえる\nついか こうかが かわる$"
	.if (. - gText_Rom_55C937) > 0x23
	.error "gText_Rom_55C937 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C937) < 0x23
	.space 0x23 - (. - gText_Rom_55C937)
	.endif

	@ src/data/items.h:12757 items_line_12757
	.globl gText_Rom_55C95A
gText_Rom_55C95A: @ 0x0855C95A
	.string "2ターンねむり からだの\nいじょうと たいりょくを\nぜんかいふく する$"
	.if (. - gText_Rom_55C95A) > 0x24
	.error "gText_Rom_55C95A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C95A) < 0x24
	.space 0x24 - (. - gText_Rom_55C95A)
	.endif

	@ src/data/items.h:12771 items_line_12771
	.globl gText_Rom_55C97E
gText_Rom_55C97E: @ 0x0855C97E
	.string "オスなら メスに\nメスなら オスに\nわざが だしにくくなる$"
	.if (. - gText_Rom_55C97E) > 0x1e
	.error "gText_Rom_55C97E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C97E) < 0x1e
	.space 0x1e - (. - gText_Rom_55C97E)
	.endif

	@ src/data/items.h:12785 items_line_12785
	.globl gText_Rom_55C99C
gText_Rom_55C99C: @ 0x0855C99C
	.string "こうげきちゅうに すきを\nみて てきが もっている\nどうぐを ぬすむ$"
	.if (. - gText_Rom_55C99C) > 0x23
	.error "gText_Rom_55C99C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C99C) < 0x23
	.space 0x23 - (. - gText_Rom_55C99C)
	.endif

	@ src/data/items.h:12799 items_line_12799
	.globl gText_Rom_55C9BF
gText_Rom_55C9BF: @ 0x0855C9BF
	.string "かたいつばさを おおきく\nひろげて そのまま\nてきに たいあたりする$"
	.if (. - gText_Rom_55C9BF) > 0x23
	.error "gText_Rom_55C9BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55C9BF) < 0x23
	.space 0x23 - (. - gText_Rom_55C9BF)
	.endif

	@ src/data/items.h:12813 items_line_12813
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55C9E2
gText_Rom_55C9E2: @ 0x0855C9E2
	.string "わざを だした ターンに\nじぶんと てきの\nとくせいを いれかえる$"
	.if (. - gText_Rom_55C9E2) != 0x22
	.error "gText_Rom_55C9E2 must retain its original byte length"
	.endif
	.globl gText_Rom_55C9FE
	.set gText_Rom_55C9FE, gText_Rom_55C9E2 + 0x1c
	.globl gText_Rom_55CA00
	.set gText_Rom_55CA00, gText_Rom_55C9E2 + 0x1e

	@ src/data/items.h:12827 items_line_12827
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55CA04
gText_Rom_55CA04: @ 0x0855CA04
	.string "てきが つかおうとした\nわざを うばって\nじぶんに つかう$"
	.if (. - gText_Rom_55CA04) != 0x1e
	.error "gText_Rom_55CA04 must retain its original byte length"
	.endif
	.globl gText_Rom_55CA1E
	.set gText_Rom_55CA1E, gText_Rom_55CA04 + 0x1a

	@ src/data/items.h:12841 items_line_12841
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55CA22
gText_Rom_55CA22: @ 0x0855CA22
	.string "フルパワーで こうげき\nできるが とくこうが\nガクッと さがってしまう$"
	.if (. - gText_Rom_55CA22) != 0x24
	.error "gText_Rom_55CA22 must retain its original byte length"
	.endif
	.globl gText_Rom_55CA42
	.set gText_Rom_55CA42, gText_Rom_55CA22 + 0x20

	@ src/data/items.h:13405 items_line_13405
	.globl gText_Rom_55CA46
gText_Rom_55CA46: @ 0x0855CA46
	.string "カマや ツメなどの\nするどいもので てきを\nきりつけて こうげきする$"
	.if (. - gText_Rom_55CA46) > 0x23
	.error "gText_Rom_55CA46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CA46) < 0x23
	.space 0x23 - (. - gText_Rom_55CA46)
	.endif

	@ src/data/items.h:13419 items_line_13419
	.globl gText_Rom_55CA69
gText_Rom_55CA69: @ 0x0855CA69
	.string "1ターンめで そらへとび\nつぎの ターンに てきを\nこうげきする$"
	.if (. - gText_Rom_55CA69) > 0x21
	.error "gText_Rom_55CA69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CA69) < 0x21
	.space 0x21 - (. - gText_Rom_55CA69)
	.endif

	@ src/data/items.h:13433 items_line_13433
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55CA8A
gText_Rom_55CA8A: @ 0x0855CA8A
	.string "みずに なみを おこし\nそれを ものすごい\nちからで たたきつける$"
	.if (. - gText_Rom_55CA8A) != 0x22
	.error "gText_Rom_55CA8A must retain its original byte length"
	.endif
	.globl gText_Rom_55CAA5
	.set gText_Rom_55CAA5, gText_Rom_55CA8A + 0x1b

	@ src/data/items.h:13447 items_line_13447
	.globl gText_Rom_55CAAC
gText_Rom_55CAAC: @ 0x0855CAAC
	.string "ぜんしんに ものすごい\nちからを ためこみ\nてきを こうげきする$"
	.if (. - gText_Rom_55CAAC) > 0x21
	.error "gText_Rom_55CAAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CAAC) < 0x21
	.space 0x21 - (. - gText_Rom_55CAAC)
	.endif

	@ src/data/items.h:13461 items_line_13461
	.globl gText_Rom_55CACD
gText_Rom_55CACD: @ 0x0855CACD
	.string "つよい ひかりで めを\nくらませて てきの\nめいちゅうりつを さげる$"
	.if (. - gText_Rom_55CACD) > 0x23
	.error "gText_Rom_55CACD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CACD) < 0x23
	.space 0x23 - (. - gText_Rom_55CACD)
	.endif

	@ src/data/items.h:13475 items_line_13475
	.globl gText_Rom_55CAF0
gText_Rom_55CAF0: @ 0x0855CAF0
	.string "いわをもくだく ちからで\nてきの ぼうぎょを\nさげる ことがある$"
	.if (. - gText_Rom_55CAF0) > 0x21
	.error "gText_Rom_55CAF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CAF0) < 0x21
	.space 0x21 - (. - gText_Rom_55CAF0)
	.endif

	@ src/data/items.h:13489 items_line_13489
	.globl gText_Rom_55CB11
gText_Rom_55CB11: @ 0x0855CB11
	.string "たきを さかのぼるような\nいきおいで てきに\nとっしんする$"
	.if (. - gText_Rom_55CB11) > 0x1e
	.error "gText_Rom_55CB11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CB11) < 0x1e
	.space 0x1e - (. - gText_Rom_55CB11)
	.endif
	.incbin "baserom.gba", 0x55cb2f, 0x23

	@ src/data/items.h:14424 items_line_14424
	.globl gText_Rom_55CB52
gText_Rom_55CB52: @ 0x0855CB52
	.string "ショップの てんいんから\nたのまれた おとどけもの\nオーキドはかせに わたす$"
	.if (. - gText_Rom_55CB52) > 0x27
	.error "gText_Rom_55CB52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CB52) < 0x27
	.space 0x27 - (. - gText_Rom_55CB52)
	.endif

	@ src/data/items.h:14080 items_line_14080
	.globl gText_Rom_55CB79
gText_Rom_55CB79: @ 0x0855CB79
	.string "きれいな ねいろの ふえ\nねている ポケモンが\nきくと とびおきる$"
	.if (. - gText_Rom_55CB79) > 0x22
	.error "gText_Rom_55CB79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CB79) < 0x22
	.space 0x22 - (. - gText_Rom_55CB79)
	.endif

