	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_252177
gText_Rom_252177: @ 0x08252177
	.string "すべりだいの　はしごを　のぼりました！\p……そして\pすべったー！\pとっても　たのしそうだ！$"
	.if (. - gText_Rom_252177) > 0x2e
	.error "gText_Rom_252177 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252177) < 0x2e
	.space 0x2e - (. - gText_Rom_252177)
	.endif
