	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+12 aliases)
	.globl gText_Rom_24E093
gText_Rom_24E093: @ 0x0824E093
	.string "「{0xFD}{0x04}てん！」\pいい　てんすう　ですね\n{0xFD}{0x03}さんは　{0xFD}{0x02}さんを\lライバル　として　みていますね$"
	.if (. - gText_Rom_24E093) > 0x30
	.error "gText_Rom_24E093 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E093) < 0x30
	.space 0x30 - (. - gText_Rom_24E093)
	.endif
