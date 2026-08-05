	@ asm/contest.s:11859 sub_080DCBC0
	.globl gText_Rom_24C0E6
gText_Rom_24C0E6: @ 0x0824C0E6
	.string "ビクビク$"
	.if (. - gText_Rom_24C0E6) > 0x5
	.error "gText_Rom_24C0E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0E6) < 0x5
	.space 0x5 - (. - gText_Rom_24C0E6)
	.endif
