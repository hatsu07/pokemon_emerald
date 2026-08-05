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
