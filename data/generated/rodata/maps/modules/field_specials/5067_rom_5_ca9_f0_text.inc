	@ asm/field_specials.s:8549 sub_0813BE68
	.globl gText_Rom_5CA9F0
gText_Rom_5CA9F0: @ 0x085CA9F0
	.string "ナギ{EOS}"
	.if (. - gText_Rom_5CA9F0) > 0x3
	.error "gText_Rom_5CA9F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9F0) < 0x3
	.space 0x3 - (. - gText_Rom_5CA9F0)
	.endif
