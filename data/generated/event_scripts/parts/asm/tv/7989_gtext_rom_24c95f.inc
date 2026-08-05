	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gText_Rom_24C95F
gText_Rom_24C95F: @ 0x0824C95F
	.string "さいごに　{0xFD}{0x02}が\nつかった　{0xFD}{0x03}も\lすべて　「{0xFD}{0x04}」　なんです！$"
	.if (. - gText_Rom_24C95F) > 0x21
	.error "gText_Rom_24C95F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C95F) < 0x21
	.space 0x21 - (. - gText_Rom_24C95F)
	.endif
