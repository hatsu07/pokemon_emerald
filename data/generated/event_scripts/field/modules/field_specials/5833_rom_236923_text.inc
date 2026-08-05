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
