	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+5 aliases)
	.globl gText_Rom_24EEC6
gText_Rom_24EEC6: @ 0x0824EEC6
	.string "わたしも　こんど　ポケモンを　つかまえたら\n「{0xFD}{0x03}」って　つけて　みようかな？\pおにいさん『え？　じゃあ　ぼくも\n「{0xFD}{0x03}」って　つけよー！$"
	.if (. - gText_Rom_24EEC6) > 0x46
	.error "gText_Rom_24EEC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EEC6) < 0x46
	.space 0x46 - (. - gText_Rom_24EEC6)
	.endif
