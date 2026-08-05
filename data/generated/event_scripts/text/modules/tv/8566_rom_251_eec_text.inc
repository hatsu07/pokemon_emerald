	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251EEC
gText_Rom_251EEC: @ 0x08251EEC
	.string "おんぷマットに　のったー！\p……うーん\nふしぎな　きょくを　つくっちゃいました……$"
	.if (. - gText_Rom_251EEC) > 0x2a
	.error "gText_Rom_251EEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251EEC) < 0x2a
	.space 0x2a - (. - gText_Rom_251EEC)
	.endif
