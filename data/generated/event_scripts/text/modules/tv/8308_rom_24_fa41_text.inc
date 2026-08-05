	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gText_Rom_24FA41
gText_Rom_24FA41: @ 0x0824FA41
	.string "ろうじん『{0xFD}{0x04}くん！\n{0xFD}{0x02}　{0xFD}{0x03}　より\lすごい　こと　また　おしえて　おくれー$"
	.if (. - gText_Rom_24FA41) > 0x28
	.error "gText_Rom_24FA41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FA41) < 0x28
	.space 0x28 - (. - gText_Rom_24FA41)
	.endif
