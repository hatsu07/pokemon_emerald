	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_25035A
gText_Rom_25035A: @ 0x0825035A
	.string "ふぇー！\p「{0xFD}{0x03}」と\n「{0xFD}{0x04}」の　くみあわせ！\pゆめの　がったいに　なっていますねー$"
	.if (. - gText_Rom_25035A) > 0x2b
	.error "gText_Rom_25035A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25035A) < 0x2b
	.space 0x2b - (. - gText_Rom_25035A)
	.endif
