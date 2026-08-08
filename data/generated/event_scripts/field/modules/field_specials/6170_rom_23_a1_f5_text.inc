	@ asm/field_specials.s:6373 sub_0813AD6C (+2 aliases)
	.globl gText_Rom_23A1F5
gText_Rom_23A1F5: @ 0x0823A1F5
	.string "でんげき　パンチで\nてきを　まひさせる\nことが　ある"
	.byte EOS
	.if (. - gText_Rom_23A1F5) > 0x1b
	.error "gText_Rom_23A1F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A1F5) < 0x1b
	.space 0x1b - (. - gText_Rom_23A1F5)
	.endif
