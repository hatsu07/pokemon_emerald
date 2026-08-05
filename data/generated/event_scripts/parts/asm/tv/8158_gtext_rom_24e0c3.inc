	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+12 aliases)
	.globl gText_Rom_24E0C3
gText_Rom_24E0C3: @ 0x0824E0C3
	.string "「{0xFD}{0x04}てん！」\pちょっと　いまいち　ですね\n{0xFD}{0x03}さんは　{0xFD}{0x02}さんを\lじぶんの　こぶん　として　みていますね$"
	.if (. - gText_Rom_24E0C3) > 0x36
	.error "gText_Rom_24E0C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E0C3) < 0x36
	.space 0x36 - (. - gText_Rom_24E0C3)
	.endif
