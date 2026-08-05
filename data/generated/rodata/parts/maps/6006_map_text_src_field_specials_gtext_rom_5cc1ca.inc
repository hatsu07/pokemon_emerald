	@ src/field_specials.c:2585 field_specials_line_2585
	.globl gText_Rom_5CC1CA
gText_Rom_5CC1CA: @ 0x085CC1CA
	.string "おうじゃのしるし  64BP$"
	.if (. - gText_Rom_5CC1CA) > 0xf
	.error "gText_Rom_5CC1CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC1CA) < 0xf
	.space 0xf - (. - gText_Rom_5CC1CA)
	.endif
