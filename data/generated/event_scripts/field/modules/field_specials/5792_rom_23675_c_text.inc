	@ asm/field_specials.s:6023 sub_0813AAAC (+1 aliases)
	.globl gText_Rom_23675C
gText_Rom_23675C: @ 0x0823675C
	.string "トゲピーの　ぬいぐるみ\nマットや　つくえの　うえに　おくもの"
	.byte EOS
	.if (. - gText_Rom_23675C) > 0x1f
	.error "gText_Rom_23675C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23675C) < 0x1f
	.space 0x1f - (. - gText_Rom_23675C)
	.endif
