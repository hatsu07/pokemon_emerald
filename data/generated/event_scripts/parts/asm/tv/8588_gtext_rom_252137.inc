	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_252137
gText_Rom_252137: @ 0x08252137
	.string "やぶれるドアに　むかって　とつげきー！\pわらっています……$"
	.if (. - gText_Rom_252137) > 0x1e
	.error "gText_Rom_252137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252137) < 0x1e
	.space 0x1e - (. - gText_Rom_252137)
	.endif
