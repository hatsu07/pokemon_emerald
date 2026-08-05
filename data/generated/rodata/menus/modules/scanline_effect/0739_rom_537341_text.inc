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
