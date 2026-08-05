	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+29 aliases)
	.globl gText_Rom_251756
gText_Rom_251756: @ 0x08251756
	.string "{0xFD}{0x02}さんは　やせい　ポケモンと\nいちにちで　{0xFD}{0x03}　かい　たたかいました！\p{0xFD}{0x02}さんの　ポケモンたちは\nいぜんと　くらべものに　ならないほど\lつよくなった　らしく……\pだれかと　ポケモンしょうぶが　したくて\nたまらない　そうですよ！$"
	.if (. - gText_Rom_251756) > 0x74
	.error "gText_Rom_251756 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251756) < 0x74
	.space 0x74 - (. - gText_Rom_251756)
	.endif
