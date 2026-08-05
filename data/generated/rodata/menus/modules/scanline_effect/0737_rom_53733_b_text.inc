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
