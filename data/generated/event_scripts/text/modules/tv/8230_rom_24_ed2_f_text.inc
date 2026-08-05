	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+5 aliases)
	.globl gText_Rom_24ED2F
gText_Rom_24ED2F: @ 0x0824ED2F
	.string "おねえさん『{0xFD}{0x02}さんの\n{0xFD}{0x03}は　だいじな　マスターボールを\pつかって　やっと　つかまえた\nおもいでの　ポケモン　なんだって！\pおにいさん『えー！　すごいねー！\pおねえさん『{0xFD}{0x02}さん　ほんとうに\n{0xFD}{0x03}を　つかまえ　たかったんだね！$"
	.if (. - gText_Rom_24ED2F) > 0x73
	.error "gText_Rom_24ED2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ED2F) < 0x73
	.space 0x73 - (. - gText_Rom_24ED2F)
	.endif
