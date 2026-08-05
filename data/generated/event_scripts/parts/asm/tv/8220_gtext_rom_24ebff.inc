	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24EBFF
gText_Rom_24EBFF: @ 0x0824EBFF
	.string "こんにちはー！\p『きょうの　ポケモン』の\nじかんだよー！！\pおねえさん『こんにちは　みんな　げんき！\nきょうは　{0xFD}{0x02}さんの　ポケモン\l{0xFD}{0x03}の　しょうかいを　するよ！\pおにいさん『するぞー！$"
	.if (. - gText_Rom_24EBFF) > 0x5f
	.error "gText_Rom_24EBFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EBFF) < 0x5f
	.space 0x5f - (. - gText_Rom_24EBFF)
	.endif
