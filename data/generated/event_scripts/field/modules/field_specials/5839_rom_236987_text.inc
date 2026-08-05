	@ asm/field_specials.s:6023 sub_0813AAAC (+4 aliases)
	.globl gText_Rom_236987
gText_Rom_236987: @ 0x08236987
	.string "ポケモンに　もたせると　ダメージを　うけた\nあいてが　たまに　ひるむ"
	.byte EOS
	.if (. - gText_Rom_236987) > 0x23
	.error "gText_Rom_236987 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236987) < 0x23
	.space 0x23 - (. - gText_Rom_236987)
	.endif
