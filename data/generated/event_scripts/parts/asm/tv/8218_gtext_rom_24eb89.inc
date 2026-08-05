	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+15 aliases)
	.globl gText_Rom_24EB89
gText_Rom_24EB89: @ 0x0824EB89
	.string "おねえさん『じゃあ　きを　とりなおして\nポケモンの　しょうかいを……\pえ？\nもう　じかんが　ない？\pもう！　ポケモンの　しょうかいが\nできなかった　じゃない！\pおにいさん『また　じかい　あおうぜ！\pおねえさん『かってに　しめるなー！！$"
	.if (. - gText_Rom_24EB89) > 0x76
	.error "gText_Rom_24EB89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EB89) < 0x76
	.space 0x76 - (. - gText_Rom_24EB89)
	.endif
