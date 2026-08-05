	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+5 aliases)
	.globl gText_Rom_24EE6B
gText_Rom_24EE6B: @ 0x0824EE6B
	.string "わたしの　しってるかぎり　{0xFD}{0x02}に\n「{0xFD}{0x03}」って　ニックネームを\lつけている　トレーナーなんて　いないよ！\pおにいさん『それだけ　ニックネームをつける\nセンスが　いいって　ことだよ！$"
	.if (. - gText_Rom_24EE6B) > 0x5b
	.error "gText_Rom_24EE6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EE6B) < 0x5b
	.space 0x5b - (. - gText_Rom_24EE6B)
	.endif
