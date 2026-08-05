	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+12 aliases)
	.globl gText_Rom_24E0F9
gText_Rom_24E0F9: @ 0x0824E0F9
	.string "「{0xFD}{0x04}てん！」\pひどい　てんすう　ですね\n{0xFD}{0x03}さんは　{0xFD}{0x02}さんを\lしたっぱ　として　みていますね$"
	.if (. - gText_Rom_24E0F9) > 0x31
	.error "gText_Rom_24E0F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E0F9) < 0x31
	.space 0x31 - (. - gText_Rom_24E0F9)
	.endif
