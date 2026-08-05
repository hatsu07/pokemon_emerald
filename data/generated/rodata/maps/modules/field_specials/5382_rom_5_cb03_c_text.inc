	@ src/field_specials.c:178 sText_Daughter
	.globl gText_Rom_5CB03C
gText_Rom_5CB03C: @ 0x085CB03C
	.string "むすめ$"
	.if (. - gText_Rom_5CB03C) > 0x4
	.error "gText_Rom_5CB03C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB03C) < 0x4
	.space 0x4 - (. - gText_Rom_5CB03C)
	.endif

