	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_24FEBF
gText_Rom_24FEBF: @ 0x0824FEBF
	.string "『{0xFD}{0x02}さん　レア　{0xFD}{0x03}を\n　つかまえるーーー！！』\p……はい！\nこちら　{0xFD}{0x04}　です！\pさきほど　{0xFD}{0x02}さんが\nレア　{0xFD}{0x03}を　つかまえる　ことに\lせいこう　しました！$"
	.if (. - gText_Rom_24FEBF) > 0x52
	.error "gText_Rom_24FEBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FEBF) < 0x52
	.space 0x52 - (. - gText_Rom_24FEBF)
	.endif
