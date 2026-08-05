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
