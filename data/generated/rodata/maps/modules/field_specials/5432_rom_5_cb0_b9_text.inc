	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB0B9
gText_Rom_5CB0B9: @ 0x085CB0B9
	.string "おくじょう$"
	.if (. - gText_Rom_5CB0B9) > 0x6
	.error "gText_Rom_5CB0B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0B9) < 0x6
	.space 0x6 - (. - gText_Rom_5CB0B9)
	.endif
