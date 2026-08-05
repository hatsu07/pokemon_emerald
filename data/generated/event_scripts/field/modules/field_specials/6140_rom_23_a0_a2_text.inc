	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	.globl gText_Rom_23A0A2
gText_Rom_23A0A2: @ 0x0823A0A2
	.string "たおれこみ　こうげき\nてきを　まひ　させる\nことが　ある"
	.byte EOS
	.if (. - gText_Rom_23A0A2) > 0x1d
	.error "gText_Rom_23A0A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A0A2) < 0x1d
	.space 0x1d - (. - gText_Rom_23A0A2)
	.endif
