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
