	@ asm/naming_screen.s:3629 sub_080E3E7C
	.globl gText_Rom_5C940A
gText_Rom_5C940A: @ 0x085C940A
	.string "♂$"
	.if (. - gText_Rom_5C940A) > 0x2
	.error "gText_Rom_5C940A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C940A) < 0x2
	.space 0x2 - (. - gText_Rom_5C940A)
	.endif

	@ asm/naming_screen.s:3641 sub_080E3E7C
	.globl gText_Rom_5C940C
gText_Rom_5C940C: @ 0x085C940C
	.string "♀$"
	.if (. - gText_Rom_5C940C) > 0x2
	.error "gText_Rom_5C940C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C940C) < 0x2
	.space 0x2 - (. - gText_Rom_5C940C)
	.endif
