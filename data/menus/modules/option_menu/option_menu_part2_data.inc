	@ src/option_menu.c:81 gText_BattleStyleShift
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_BattleStyleShift
gText_BattleStyleShift: @ 0x0853739D
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}いれかえ{EOS}"
	.if (. - gText_BattleStyleShift) != 0xb
	.error "gText_BattleStyleShift must retain its original byte length"
	.endif

	@ src/option_menu.c:82 gText_BattleStyleSet
	.globl gText_BattleStyleSet
gText_BattleStyleSet: @ 0x085373A8
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}かちぬき{EOS}"
	.if (. - gText_BattleStyleSet) > 0xb
	.error "gText_BattleStyleSet may not grow beyond its original slot"
	.endif
	.if (. - gText_BattleStyleSet) < 0xb
	.space 0xb - (. - gText_BattleStyleSet)
	.endif

	@ src/option_menu.c:83 gText_SoundMono
	.globl gText_SoundMono
gText_SoundMono: @ 0x085373B3
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}モノラル{EOS}"
	.if (. - gText_SoundMono) > 0xb
	.error "gText_SoundMono may not grow beyond its original slot"
	.endif
	.if (. - gText_SoundMono) < 0xb
	.space 0xb - (. - gText_SoundMono)
	.endif

	@ src/option_menu.c:84 gText_SoundStereo
	.globl gText_SoundStereo
gText_SoundStereo: @ 0x085373BE
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}ステレオ{EOS}"
	.if (. - gText_SoundStereo) > 0xb
	.error "gText_SoundStereo may not grow beyond its original slot"
	.endif
	.if (. - gText_SoundStereo) < 0xb
	.space 0xb - (. - gText_SoundStereo)
	.endif

	@ src/option_menu.c:85 gText_FrameType
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_FrameType
gText_FrameType: @ 0x085373C9
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}タイプ{EOS}"
	.if (. - gText_FrameType) != 0xa
	.error "gText_FrameType must retain its original byte length"
	.endif

	@ src/option_menu.c:86 gText_FrameTypeNumber
	.globl gText_FrameTypeNumber
gText_FrameTypeNumber: @ 0x085373D3
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{EOS}"
	.if (. - gText_FrameTypeNumber) > 0x7
	.error "gText_FrameTypeNumber may not grow beyond its original slot"
	.endif
	.if (. - gText_FrameTypeNumber) < 0x7
	.space 0x7 - (. - gText_FrameTypeNumber)
	.endif

	@ src/option_menu.c:87 gText_ButtonTypeNormal
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ButtonTypeNormal
gText_ButtonTypeNormal: @ 0x085373DA
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}ノーマル{EOS}"
	.if (. - gText_ButtonTypeNormal) != 0xb
	.error "gText_ButtonTypeNormal must retain its original byte length"
	.endif

	@ src/option_menu.c:88 gText_ButtonTypeLR
	.globl gText_ButtonTypeLR
gText_ButtonTypeLR: @ 0x085373E5
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}LR{EOS}"
	.if (. - gText_ButtonTypeLR) > 0x9
	.error "gText_ButtonTypeLR may not grow beyond its original slot"
	.endif
	.if (. - gText_ButtonTypeLR) < 0x9
	.space 0x9 - (. - gText_ButtonTypeLR)
	.endif
