	@ asm/field_poison.s:225 Task_WhiteOut
	.globl gText_Rom_5CC30F
gText_Rom_5CC30F: @ 0x085CC30F
	.string "{0xFD}{0x02}は\nちからつきた\p$"
	.if (. - gText_Rom_5CC30F) > 0xc
	.error "gText_Rom_5CC30F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC30F) < 0xc
	.space 0xc - (. - gText_Rom_5CC30F)
	.endif
