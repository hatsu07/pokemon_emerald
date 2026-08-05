	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB09B
gText_Rom_5CB09B: @ 0x085CB09B
	.string "10かい$"
	.if (. - gText_Rom_5CB09B) > 0x5
	.error "gText_Rom_5CB09B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB09B) < 0x5
	.space 0x5 - (. - gText_Rom_5CB09B)
	.endif
