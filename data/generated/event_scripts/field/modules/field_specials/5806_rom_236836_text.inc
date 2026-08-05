	@ asm/field_specials.s:6023 sub_0813AAAC (+2 aliases)
	.globl gText_Rom_236836
gText_Rom_236836: @ 0x08236836
	.string "おおきな　ぬいぐるみ\nマットや　つくえの　うえに　おくもの"
	.byte EOS
	.if (. - gText_Rom_236836) > 0x1e
	.error "gText_Rom_236836 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236836) < 0x1e
	.space 0x1e - (. - gText_Rom_236836)
	.endif
