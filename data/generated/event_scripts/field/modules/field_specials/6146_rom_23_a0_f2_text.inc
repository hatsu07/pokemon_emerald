	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	.globl gText_Rom_23A0F2
gText_Rom_23A0F2: @ 0x0823A0F2
	.string "よわい　でんげきを\nぶつけて　あいてを\nまひ　させる"
	.byte EOS
	.if (. - gText_Rom_23A0F2) > 0x1b
	.error "gText_Rom_23A0F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A0F2) < 0x1b
	.space 0x1b - (. - gText_Rom_23A0F2)
	.endif
