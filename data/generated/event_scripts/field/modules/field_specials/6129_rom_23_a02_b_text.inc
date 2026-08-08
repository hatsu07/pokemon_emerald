	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	.globl gText_Rom_23A02B
gText_Rom_23A02B: @ 0x0823A02B
	.string "いんりょくを　りよう\nレベル　ぶんの\nダメージを　あたえる"
	.byte EOS
	.if (. - gText_Rom_23A02B) > 0x1e
	.error "gText_Rom_23A02B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A02B) < 0x1e
	.space 0x1e - (. - gText_Rom_23A02B)
	.endif
