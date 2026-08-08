	@ asm/field_specials.s:6373 sub_0813AD6C (+2 aliases)
	.globl gText_Rom_23A1DA
gText_Rom_23A1DA: @ 0x0823A1DA
	.string "つめたい　パンチで\nてきを　こおらせる\nことが　ある"
	.byte EOS
	.if (. - gText_Rom_23A1DA) > 0x1b
	.error "gText_Rom_23A1DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A1DA) < 0x1b
	.space 0x1b - (. - gText_Rom_23A1DA)
	.endif
