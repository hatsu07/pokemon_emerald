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
	@ pret/pokeemerald-jp direct xref for 0x0853738A: scanline_effect.s: Sound_DrawChoices
	.globl gScanlineEffectData_0853738A
gScanlineEffectData_0853738A: @ 0x0853738A
	@ analyzed canonical ROM range 0x0853738A-0x08537392
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x9
	.byte 0xFC, 0x01, 0x06, 0xFC, 0x03, 0x07, 0x20, 0x29, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x08537393: scanline_effect.s: Sound_DrawChoices
	.globl gScanlineEffectData_08537393
gScanlineEffectData_08537393: @ 0x08537393
	@ analyzed canonical ROM range 0x08537393-0x0853739C
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0xA
	.byte 0xFC, 0x01, 0x06, 0xFC, 0x03, 0x07, 0x20, 0x15, 0x02, 0xFF

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
