	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E5CD
gText_Rom_24E5CD: @ 0x0824E5CD
	.string "「{0xFD}{0x02}{0xFD}{0x04}」と　いうのも\nよい　ニックネーム　ですなぁ$"
	.if (. - gText_Rom_24E5CD) > 0x1c
	.error "gText_Rom_24E5CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E5CD) < 0x1c
	.space 0x1c - (. - gText_Rom_24E5CD)
	.endif
