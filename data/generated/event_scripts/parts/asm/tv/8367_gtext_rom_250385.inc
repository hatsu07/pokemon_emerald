	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_250385
gText_Rom_250385: @ 0x08250385
	.string "ふぇー！\pここに　「{0xFD}{0x03}」ですか！\nひみつきち　ぜんたいに　きいていますねー$"
	.if (. - gText_Rom_250385) > 0x27
	.error "gText_Rom_250385 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250385) < 0x27
	.space 0x27 - (. - gText_Rom_250385)
	.endif
