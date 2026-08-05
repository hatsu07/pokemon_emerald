	@ asm/field_specials.s:6023 sub_0813AAAC (+4 aliases)
	.globl gText_Rom_2368E5
gText_Rom_2368E5: @ 0x082368E5
	.string "ポケモンに　もたせると　さがった\nのうりょくを　もとにもどす"
	.byte EOS
	.if (. - gText_Rom_2368E5) > 0x1f
	.error "gText_Rom_2368E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2368E5) < 0x1f
	.space 0x1f - (. - gText_Rom_2368E5)
	.endif
