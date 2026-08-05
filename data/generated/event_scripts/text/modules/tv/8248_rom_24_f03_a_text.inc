	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F03A
gText_Rom_24F03A: @ 0x0824F03A
	.string "インタビュアー『{0xFD}{0x03}を\n{0xFD}{0x04}こも　かうなんて　すごいですね！\pもしかしたら　{0xFD}{0x02}さんは\nこれから　とおくまで　いくための\lたびじたくを　していたのかも　しれませんね\pやっぱり　たびには　{0xFD}{0x03}ですね！$"
	.if (. - gText_Rom_24F03A) > 0x64
	.error "gText_Rom_24F03A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F03A) < 0x64
	.space 0x64 - (. - gText_Rom_24F03A)
	.endif
