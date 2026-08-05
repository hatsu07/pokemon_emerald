	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+12 aliases)
	.globl gText_Rom_24E05F
gText_Rom_24E05F: @ 0x0824E05F
	.string "「{0xFD}{0x04}てん！」\pすごい　こうとくてん　ですね\n{0xFD}{0x03}さんは　{0xFD}{0x02}さんを\lとっても　そんけい　していますね$"
	.if (. - gText_Rom_24E05F) > 0x34
	.error "gText_Rom_24E05F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E05F) < 0x34
	.space 0x34 - (. - gText_Rom_24E05F)
	.endif
