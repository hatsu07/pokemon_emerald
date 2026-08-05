	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gText_Rom_24FA69
gText_Rom_24FA69: @ 0x0824FA69
	.string "ろうじん『{0xFD}{0x04}ちゃん！\n{0xFD}{0x02}　{0xFD}{0x03}　より\lすごい　こと　また　おしえて　おくれー$"
	.if (. - gText_Rom_24FA69) > 0x29
	.error "gText_Rom_24FA69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FA69) < 0x29
	.space 0x29 - (. - gText_Rom_24FA69)
	.endif
