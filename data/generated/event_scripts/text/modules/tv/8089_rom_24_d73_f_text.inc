	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D73F
gText_Rom_24D73F: @ 0x0824D73F
	.string "とくに「{0xFD}{0x04}」って　ところ！\p「{0xFD}{0x04}」っていう　ところが\nきにいったぞー！$"
	.if (. - gText_Rom_24D73F) > 0x26
	.error "gText_Rom_24D73F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D73F) < 0x26
	.space 0x26 - (. - gText_Rom_24D73F)
	.endif
