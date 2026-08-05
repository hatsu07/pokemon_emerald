	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB097
gText_Rom_5CB097: @ 0x085CB097
	.string "9かい$"
	.if (. - gText_Rom_5CB097) > 0x4
	.error "gText_Rom_5CB097 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB097) < 0x4
	.space 0x4 - (. - gText_Rom_5CB097)
	.endif
