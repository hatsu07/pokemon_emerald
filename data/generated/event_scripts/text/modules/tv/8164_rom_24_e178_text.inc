	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E178
gText_Rom_24E178: @ 0x0824E178
	.string "『せいめい　はんだん』の\nじかんが　やって　まいりました\pあなたの　つけた　ニックネームから\nポケモンの　ことを\lうらなって　さしあげます\pすこしでも　アドバイスに\nなれば　よいと　おもいますな\pきょうは　{0xFD}{0x02}さんの　ポケモン\n{0xFD}{0x03}の　「{0xFD}{0x04}」の\lニックネームを　うらなって　みますかな\pふむふむ……\pうーむ\nこの　ニックネームは……$"
	.if (. - gText_Rom_24E178) > 0xa8
	.error "gText_Rom_24E178 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E178) < 0xa8
	.space 0xa8 - (. - gText_Rom_24E178)
	.endif
