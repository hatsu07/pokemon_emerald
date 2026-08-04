	@ src/main_menu.c:275 gText_ContinueMenuTime (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.

	.globl gUnknown_852D9F4
gUnknown_852D9F4: @ 0x0852D9F4
	.incbin "baserom.gba", 0x52d9f4, 0x9c4

	.include "data/wild_encounters/battle_pyramid_mons.inc"

gBattlePyramidWildMonHeaders::
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
	.4byte FieldEffectCmd_loadtiles
	.4byte FieldEffectCmd_loadfadedpal
	.4byte FieldEffectCmd_loadpal
	.4byte FieldEffectCmd_callnative
	.4byte FieldEffectCmd_end
	.4byte FieldEffectCmd_loadgfx_callnative
	.4byte FieldEffectCmd_loadtiles_callnative
	.4byte FieldEffectCmd_loadfadedpal_callnative
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
	.4byte PokecenterHealEffect_0
	.4byte PokecenterHealEffect_1
	.4byte PokecenterHealEffect_2
	.4byte PokecenterHealEffect_3
	.globl gUnknown_8537020
gUnknown_8537020: @ 0x08537020
	.4byte HallOfFameRecordEffect_0
	.4byte HallOfFameRecordEffect_1
	.4byte HallOfFameRecordEffect_2
	.4byte HallOfFameRecordEffect_3
	.globl gUnknown_8537030
gUnknown_8537030: @ 0x08537030
	.4byte PokeballGlowEffect_0
	.4byte PokeballGlowEffect_1
	.4byte PokeballGlowEffect_2
	.4byte PokeballGlowEffect_3
	.4byte PokeballGlowEffect_4
	.4byte PokeballGlowEffect_5
	.4byte PokeballGlowEffect_6
	.4byte PokeballGlowEffect_7
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
	.space 0x4, 0x00
	.globl gUnknown_8537074
gUnknown_8537074: @ 0x08537074
	.4byte sub_080B6324
	.4byte sub_080B63CC
	.4byte sub_080B63E8
	.4byte sub_080B645C
	.4byte sub_080B6514
	.4byte sub_080B6530
	.4byte sub_080B6570
	.globl gUnknown_8537090
gUnknown_8537090: @ 0x08537090
	.4byte sub_080B6618
	.4byte sub_080B6638
	.4byte sub_080B66A8
	.4byte sub_080B66CC
	.4byte sub_080B66DC
	.4byte sub_080B6700
	.globl gUnknown_85370A8
gUnknown_85370A8: @ 0x085370A8
	.4byte sub_080B686C
	.4byte sub_080B68E8
	.4byte sub_080B6928
	.4byte sub_080B6988
	.4byte sub_080B69C8
	.4byte sub_080B6A28
	.4byte sub_080B6A4C
	.globl gUnknown_85370C4
gUnknown_85370C4: @ 0x085370C4
	.4byte sub_080B6B28
	.4byte waterfall_1_do_anim_probably
	.4byte waterfall_2_wait_anim_finish_probably
	.4byte sub_080B6BA8
	.4byte sub_080B6BD0
	.globl gUnknown_85370D8
gUnknown_85370D8: @ 0x085370D8
	.4byte dive_1_lock
	.4byte dive_2_unknown
	.4byte dive_3_unknown
	.globl gUnknown_85370E4
gUnknown_85370E4: @ 0x085370E4
	.4byte sub_080B6DA4
	.4byte sub_080B6DDC
	.4byte sub_080B6E10
	.4byte sub_080B6E5C
	.4byte sub_080B6F50
	.4byte sub_080B6F6C
	.globl gUnknown_85370FC
gUnknown_85370FC: @ 0x085370FC
	.4byte sub_080B7044
	.4byte sub_080B7074
	.4byte sub_080B70C0
	.4byte sub_080B7114
	.globl gUnknown_853710C
gUnknown_853710C: @ 0x0853710C
	.4byte sub_080B7240
	.4byte sub_080B7270
	.4byte sub_080B72EC
	.4byte sub_080B7324
	.4byte sub_080B734C
	.globl gUnknown_8537120
gUnknown_8537120: @ 0x08537120
	.4byte EscapeRopeFieldEffect_Step0
	.4byte EscapeRopeFieldEffect_Step1
	.globl gUnknown_8537128
gUnknown_8537128: @ 0x08537128
	.incbin "baserom.gba", 0x537128, 0x8
	.globl gUnknown_8537130
gUnknown_8537130: @ 0x08537130
	.4byte sub_080B761C
	.4byte sub_080B7640
	.globl gUnknown_8537138
gUnknown_8537138: @ 0x08537138
	.4byte TeleportFieldEffectTask1
	.4byte TeleportFieldEffectTask2
	.4byte TeleportFieldEffectTask3
	.4byte TeleportFieldEffectTask4
	.globl gUnknown_8537148
gUnknown_8537148: @ 0x08537148
	.4byte sub_080B79D8
	.4byte sub_080B7A64
	.4byte sub_080B7B68
	.globl gUnknown_8537154
gUnknown_8537154: @ 0x08537154
	.4byte sub_080B7CDC
	.4byte sub_080B7D50
	.4byte sub_080B7DB8
	.4byte sub_080B7E44
	.4byte sub_080B7E74
	.4byte sub_080B7EC8
	.4byte overworld_bg_setup_2
	.globl gUnknown_8537170
gUnknown_8537170: @ 0x08537170
	.4byte sub_080B803C
	.4byte sub_080B8078
	.4byte sub_080B80E4
	.4byte sub_080B8134
	.4byte sub_080B8164
	.4byte sub_080B819C
	.4byte sub_080B81BC
	.globl gUnknown_853718C
gUnknown_853718C: @ 0x0853718C
	.4byte sub_080B850C
	.4byte sub_080B856C
	.4byte sub_080B85B8
	.4byte sub_080B8600
	.4byte sub_080B867C
	.globl gUnknown_85371A0
gUnknown_85371A0: @ 0x085371A0
	.incbin "baserom.gba", 0x5371a0, 0x54
	.globl gUnknown_85371F4
gUnknown_85371F4: @ 0x085371F4
	.incbin "baserom.gba", 0x5371f4, 0x8
	.globl gUnknown_85371FC
gUnknown_85371FC: @ 0x085371FC
	.4byte sub_080B8F5C
	.4byte sub_080B9010
	.4byte sub_080B907C
	.4byte sub_080B90D0
	.4byte sub_080B9148
	.4byte sub_080B9180
	.4byte sub_080B91B8
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
	.space 0x2, 0x00
	.globl gUnknown_8537350
gUnknown_8537350: @ 0x08537350
	.4byte gText_Rom_53731A
	.4byte gText_Rom_537323
	.4byte gText_Rom_53732D
	.4byte gText_Rom_537336
	.4byte gText_Rom_537345
	.4byte gText_Rom_53733B
	.4byte gText_Rom_537341
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
