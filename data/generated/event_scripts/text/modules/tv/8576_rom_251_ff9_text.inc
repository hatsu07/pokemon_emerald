	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251FF9
gText_Rom_251FF9: @ 0x08251FF9
	.string "レンガを　じーっと　みつめています！\pこの　レンガにあう　グッズの　ことでも\nかんがえている　のでしょうか？$"
	.if (. - gText_Rom_251FF9) > 0x37
	.error "gText_Rom_251FF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251FF9) < 0x37
	.space 0x37 - (. - gText_Rom_251FF9)
	.endif
