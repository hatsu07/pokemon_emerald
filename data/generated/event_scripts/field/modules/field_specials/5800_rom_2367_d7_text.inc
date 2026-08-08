	@ asm/field_specials.s:6023 sub_0813AAAC (+1 aliases)
	.globl gText_Rom_2367D7
gText_Rom_2367D7: @ 0x082367D7
	.string "ヒノアラシの　ぬいぐるみ\nマットや　つくえの　うえに　おくもの"
	.byte EOS
	.if (. - gText_Rom_2367D7) > 0x20
	.error "gText_Rom_2367D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2367D7) < 0x20
	.space 0x20 - (. - gText_Rom_2367D7)
	.endif
