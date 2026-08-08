	@ asm/field_specials.s:6023 sub_0813AAAC (+1 aliases)
	.globl gText_Rom_2367B8
gText_Rom_2367B8: @ 0x082367B8
	.string "メタモンの　ぬいぐるみ\nマットや　つくえの　うえに　おくもの"
	.byte EOS
	.if (. - gText_Rom_2367B8) > 0x1f
	.error "gText_Rom_2367B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2367B8) < 0x1f
	.space 0x1f - (. - gText_Rom_2367B8)
	.endif
