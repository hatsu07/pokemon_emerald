	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB08B
gText_Rom_5CB08B: @ 0x085CB08B
	.string "6かい$"
	.if (. - gText_Rom_5CB08B) > 0x4
	.error "gText_Rom_5CB08B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB08B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB08B)
	.endif
