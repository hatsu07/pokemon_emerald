	@ asm/field_specials.s:5777 sub_0813A904
	.globl gText_Rom_5CB0C8
gText_Rom_5CB0C8: @ 0x085CB0C8
	.string "BP$"
	.if (. - gText_Rom_5CB0C8) > 0x3
	.error "gText_Rom_5CB0C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0C8) < 0x3
	.space 0x3 - (. - gText_Rom_5CB0C8)
	.endif
