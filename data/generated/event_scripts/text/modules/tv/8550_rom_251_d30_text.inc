	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251D30
gText_Rom_251D30: @ 0x08251D30
	.string "……おや？\pとつぜん　バッグの　なかみを\nガサガサと　いじりだしましたよ！\pそして　{0xFD}{0x03}を\nとりだしたー！\p{0xFD}{0x03}を　もって\nスマイル！　スマイル！！\pテレビの　コマーシャル　みたいだー！$"
	.if (. - gText_Rom_251D30) > 0x5e
	.error "gText_Rom_251D30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251D30) < 0x5e
	.space 0x5e - (. - gText_Rom_251D30)
	.endif
