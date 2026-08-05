	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	.globl gText_Rom_23A0D9
gText_Rom_23A0D9: @ 0x0823A0D9
	.string "ぶつりこうげきの\nダメージを\nばいにして　かえす"
	.byte EOS
	.if (. - gText_Rom_23A0D9) > 0x19
	.error "gText_Rom_23A0D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A0D9) < 0x19
	.space 0x19 - (. - gText_Rom_23A0D9)
	.endif
