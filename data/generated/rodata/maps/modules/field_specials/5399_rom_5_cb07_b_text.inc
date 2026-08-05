	@ asm/field_specials.s:4112 sub_08139BD4 (+2 aliases)
	.globl gText_Rom_5CB07B
gText_Rom_5CB07B: @ 0x085CB07B
	.string "2かい$"
	.if (. - gText_Rom_5CB07B) > 0x4
	.error "gText_Rom_5CB07B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB07B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB07B)
	.endif
