	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	.globl gText_Rom_23A0BF
gText_Rom_23A0BF: @ 0x0823A0BF
	.string "いわで　こうげき\nてきを　ひるませる\nことが　ある"
	.byte EOS
	.if (. - gText_Rom_23A0BF) > 0x1a
	.error "gText_Rom_23A0BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A0BF) < 0x1a
	.space 0x1a - (. - gText_Rom_23A0BF)
	.endif
