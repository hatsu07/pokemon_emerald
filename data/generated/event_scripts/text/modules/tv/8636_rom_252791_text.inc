	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252791
gText_Rom_252791: @ 0x08252791
	.string "かんきゃく『{0xFD}{0x03}の　アピールに\nもう　もえあがっちゃいました！$"
	.if (. - gText_Rom_252791) > 0x20
	.error "gText_Rom_252791 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252791) < 0x20
	.space 0x20 - (. - gText_Rom_252791)
	.endif
