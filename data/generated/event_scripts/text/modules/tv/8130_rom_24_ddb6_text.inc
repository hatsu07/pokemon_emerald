	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24DDB6
gText_Rom_24DDB6: @ 0x0824DDB6
	.string "こんかい　いちばん　がんばっていた\n{0xFD}{0x02}さんが　かわいそうです……\p……{0xFD}{0x03}さん！\nつぎは　がんばって　ください！$"
	.if (. - gText_Rom_24DDB6) > 0x3a
	.error "gText_Rom_24DDB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DDB6) < 0x3a
	.space 0x3a - (. - gText_Rom_24DDB6)
	.endif
