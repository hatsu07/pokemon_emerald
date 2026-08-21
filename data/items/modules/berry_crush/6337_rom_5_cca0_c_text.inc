	@ asm/berry_crush.s:2305 sub_08021ABC
	.globl gText_Rom_5CCA0C
gText_Rom_5CCA0C: @ 0x085CCA0C
	.string "{0xFD}{0x02},{0xFD}{0x03}{EOS}"
	.if (. - gText_Rom_5CCA0C) > 0x6
	.error "gText_Rom_5CCA0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCA0C) < 0x6
	.space 0x6 - (. - gText_Rom_5CCA0C)
	.endif
