	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_24FFDA
gText_Rom_24FFDA: @ 0x0824FFDA
	.string "『{0xFD}{0x02}さん　レア　{0xFD}{0x03}を\n　とりにがすーーー！！』\p……はい！\nこちら　{0xFD}{0x04}です！\pさきほど　{0xFD}{0x02}さんが\nレア　{0xFD}{0x03}を　つかまえることに\lしっぱい　しました！$"
	.if (. - gText_Rom_24FFDA) > 0x50
	.error "gText_Rom_24FFDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FFDA) < 0x50
	.space 0x50 - (. - gText_Rom_24FFDA)
	.endif
