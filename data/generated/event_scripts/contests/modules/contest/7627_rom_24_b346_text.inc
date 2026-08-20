	@ asm/contest.s:2878 sub_080D8334
	.globl gText_Rom_24B346
gText_Rom_24B346: @ 0x0824B346
	.string "{0xFD}{0x02}は\n{0xFD}{0x03}で　アピール！{EOS}"
	.if (. - gText_Rom_24B346) > 0xe
	.error "gText_Rom_24B346 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B346) < 0xe
	.space 0xe - (. - gText_Rom_24B346)
	.endif
