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
	@ asm/field_specials.s:6023 sub_0813AAAC (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_236904
gText_Rom_236904: @ 0x08236904
	.string "ポケモンに　もたせると　せんせい　こうげきが\nたまに　できる"
	.byte EOS
	.if (. - gText_Rom_236904) != 0x1f
	.error "gText_Rom_236904 must retain its original byte length"
	.endif
	.globl gText_Rom_23691F
	.set gText_Rom_23691F, gText_Rom_236904 + 0x1b
	@ asm/field_specials.s:6023 sub_0813AAAC (+4 aliases)
	.globl gText_Rom_236923
gText_Rom_236923: @ 0x08236923
	.string "もたせた　ポケモンが　メロメロに\nなったとき　なおして　くれる"
	.byte EOS
	.if (. - gText_Rom_236923) > 0x20
	.error "gText_Rom_236923 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236923) < 0x20
	.space 0x20 - (. - gText_Rom_236923)
	.endif
