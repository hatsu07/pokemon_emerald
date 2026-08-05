	@ asm/field_specials.s:4112 sub_08139BD4 (+2 aliases)
	.globl gText_Rom_5CB077
gText_Rom_5CB077: @ 0x085CB077
	.string "1かい$"
	.if (. - gText_Rom_5CB077) > 0x4
	.error "gText_Rom_5CB077 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB077) < 0x4
	.space 0x4 - (. - gText_Rom_5CB077)
	.endif
