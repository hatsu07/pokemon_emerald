	@ asm/berry_crush.s:2452 sub_08021ABC
	.globl gText_Rom_5CCA18
gText_Rom_5CCA18: @ 0x085CCA18
	.string "{0xFD}{0x02},{0xFD}{0x03}$"
	.if (. - gText_Rom_5CCA18) > 0x6
	.error "gText_Rom_5CCA18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCA18) < 0x6
	.space 0x6 - (. - gText_Rom_5CCA18)
	.endif
