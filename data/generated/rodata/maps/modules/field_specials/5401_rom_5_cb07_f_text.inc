	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB07F
gText_Rom_5CB07F: @ 0x085CB07F
	.string "3かい$"
	.if (. - gText_Rom_5CB07F) > 0x4
	.error "gText_Rom_5CB07F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB07F) < 0x4
	.space 0x4 - (. - gText_Rom_5CB07F)
	.endif
