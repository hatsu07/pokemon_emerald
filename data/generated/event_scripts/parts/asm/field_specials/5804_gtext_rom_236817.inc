	@ asm/field_specials.s:6023 sub_0813AAAC (+1 aliases)
	.globl gText_Rom_236817
gText_Rom_236817: @ 0x08236817
	.string "ワニノコの　ぬいぐるみ\nマットや　つくえの　うえに　おくもの"
	.byte EOS
	.if (. - gText_Rom_236817) > 0x1f
	.error "gText_Rom_236817 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236817) < 0x1f
	.space 0x1f - (. - gText_Rom_236817)
	.endif
