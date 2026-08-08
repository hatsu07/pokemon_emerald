	@ asm/field_specials.s:6023 sub_0813AAAC (+1 aliases)
	.globl gText_Rom_23679A
gText_Rom_23679A: @ 0x0823679A
	.string "ピッピの　ぬいぐるみ\nマットや　つくえの　うえに　おくもの"
	.byte EOS
	.if (. - gText_Rom_23679A) > 0x1e
	.error "gText_Rom_23679A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23679A) < 0x1e
	.space 0x1e - (. - gText_Rom_23679A)
	.endif
