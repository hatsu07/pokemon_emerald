	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+31 aliases)
	.globl gText_Rom_252308
gText_Rom_252308: @ 0x08252308
	.string "{0xFD}{0x03}この　ポロックを\nじょうずに　つかっていました！$"
	.if (. - gText_Rom_252308) > 0x1b
	.error "gText_Rom_252308 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252308) < 0x1b
	.space 0x1b - (. - gText_Rom_252308)
	.endif
