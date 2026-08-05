	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251C54
gText_Rom_251C54: @ 0x08251C54
	.string "はちうえを　かんさつ　しています！\pいがいに　アダルトな　しゅみを\nもっていますね……$"
	.if (. - gText_Rom_251C54) > 0x2c
	.error "gText_Rom_251C54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251C54) < 0x2c
	.space 0x2c - (. - gText_Rom_251C54)
	.endif
