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
