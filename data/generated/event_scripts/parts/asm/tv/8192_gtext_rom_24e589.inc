	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E589
gText_Rom_24E589: @ 0x0824E589
	.string "もしくは　「{0xFD}{0x03}{0xFD}{0x04}」と\nいうのも　よい　ニックネーム　ですな$"
	.if (. - gText_Rom_24E589) > 0x20
	.error "gText_Rom_24E589 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E589) < 0x20
	.space 0x20 - (. - gText_Rom_24E589)
	.endif
