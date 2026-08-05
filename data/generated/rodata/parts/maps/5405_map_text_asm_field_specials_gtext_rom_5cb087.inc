	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB087
gText_Rom_5CB087: @ 0x085CB087
	.string "5かい$"
	.if (. - gText_Rom_5CB087) > 0x4
	.error "gText_Rom_5CB087 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB087) < 0x4
	.space 0x4 - (. - gText_Rom_5CB087)
	.endif
