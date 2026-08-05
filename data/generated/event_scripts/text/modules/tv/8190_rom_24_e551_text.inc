	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E551
gText_Rom_24E551: @ 0x0824E551
	.string "トレーナーの　{0xFD}{0x02}さんの\nなまえを　もってきて\p「{0xFD}{0x03}{0xFD}{0x04}」と　いうのも\nとても　よい　ニックネーム　ですなぁ$"
	.if (. - gText_Rom_24E551) > 0x38
	.error "gText_Rom_24E551 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E551) < 0x38
	.space 0x38 - (. - gText_Rom_24E551)
	.endif
