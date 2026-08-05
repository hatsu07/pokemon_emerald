	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gText_Rom_24DA62
gText_Rom_24DA62: @ 0x0824DA62
	.string "なるほど　{0xFD}{0x02}さんの\nまわりで　さいきん　おきている　ことが\lてに　とるように　わかりますね$"
	.if (. - gText_Rom_24DA62) > 0x2f
	.error "gText_Rom_24DA62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DA62) < 0x2f
	.space 0x2f - (. - gText_Rom_24DA62)
	.endif
