	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_2515C4
gText_Rom_2515C4: @ 0x082515C4
	.string "{0xFD}{0x02}さんと　ポケモンたちの\nつぎの　チャレンジに　きたい　しましょう！\pいじょう\n『ポケモン　ニュース』　でした！$"
	.if (. - gText_Rom_2515C4) > 0x3a
	.error "gText_Rom_2515C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2515C4) < 0x3a
	.space 0x3a - (. - gText_Rom_2515C4)
	.endif
