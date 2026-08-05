	@ asm/field_specials.s:6023 sub_0813AAAC (+1 aliases)
	.globl gText_Rom_23677B
gText_Rom_23677B: @ 0x0823677B
	.string "ニャースの　ぬいぐるみ\nマットや　つくえの　うえに　おくもの"
	.byte EOS
	.if (. - gText_Rom_23677B) > 0x1f
	.error "gText_Rom_23677B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23677B) < 0x1f
	.space 0x1f - (. - gText_Rom_23677B)
	.endif
