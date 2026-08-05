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
