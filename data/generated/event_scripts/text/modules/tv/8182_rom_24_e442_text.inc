	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E442
gText_Rom_24E442: @ 0x0824E442
	.string "この　「{0xFD}{0x02}」という　ニックネームは\n「{0xFD}{0x04}」の　もじを　ちゅうしん　として\lこれに　「{0xFD}{0x03}」が　つくことで\pどっしり　とした\nよい　ニックネームに　なっていますな$"
	.if (. - gText_Rom_24E442) > 0x53
	.error "gText_Rom_24E442 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E442) < 0x53
	.space 0x53 - (. - gText_Rom_24E442)
	.endif
