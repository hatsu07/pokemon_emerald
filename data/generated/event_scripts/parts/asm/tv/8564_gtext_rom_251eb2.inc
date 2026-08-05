	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251EB2
gText_Rom_251EB2: @ 0x08251EB2
	.string "ポスターを　じーっと　みつめています！\pきに　いった　のでしょうか？\p……でも\nちょっと　めつきが　やばいですねー$"
	.if (. - gText_Rom_251EB2) > 0x3a
	.error "gText_Rom_251EB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251EB2) < 0x3a
	.space 0x3a - (. - gText_Rom_251EB2)
	.endif
