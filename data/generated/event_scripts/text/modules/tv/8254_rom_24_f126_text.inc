	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F126
gText_Rom_24F126: @ 0x0824F126
	.string "インタビュアー『わたしも　むかし\n{0xFD}{0x03}を　たくさん　かったことが\lあったん　ですけど\pあまって　しまって\nこうかい　したわ……\pそれからと　いうもの　ひつような\nぶんだけ　かうように　してるの……\pおっと！\pわたしの　ことを　はなしても\nしょうがない　ですね！$"
	.if (. - gText_Rom_24F126) > 0x83
	.error "gText_Rom_24F126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F126) < 0x83
	.space 0x83 - (. - gText_Rom_24F126)
	.endif
