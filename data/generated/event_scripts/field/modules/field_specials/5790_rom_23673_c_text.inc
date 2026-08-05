	@ asm/field_specials.s:6023 sub_0813AAAC (+1 aliases)
	.globl gText_Rom_23673C
gText_Rom_23673C: @ 0x0823673C
	.string "ムチュールの　ぬいぐるみ\nマットや　つくえの　うえに　おくもの"
	.byte EOS
	.if (. - gText_Rom_23673C) > 0x20
	.error "gText_Rom_23673C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23673C) < 0x20
	.space 0x20 - (. - gText_Rom_23673C)
	.endif
