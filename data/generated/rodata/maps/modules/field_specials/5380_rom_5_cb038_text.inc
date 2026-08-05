	@ src/field_specials.c:177 sText_Son
	.globl gText_Rom_5CB038
gText_Rom_5CB038: @ 0x085CB038
	.string "むすこ$"
	.if (. - gText_Rom_5CB038) > 0x4
	.error "gText_Rom_5CB038 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB038) < 0x4
	.space 0x4 - (. - gText_Rom_5CB038)
	.endif
