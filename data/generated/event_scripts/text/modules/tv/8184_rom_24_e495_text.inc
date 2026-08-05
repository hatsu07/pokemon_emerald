	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E495
gText_Rom_24E495: @ 0x0824E495
	.string "この　「{0xFD}{0x02}」という　ニックネームは\nとても　かたちの　よい\lニックネーム　ですなぁ\pニックネームに　「{0xFD}{0x03}」と　「{0xFD}{0x04}」が\nはいって　いるのが　とても　よい！$"
	.if (. - gText_Rom_24E495) > 0x51
	.error "gText_Rom_24E495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E495) < 0x51
	.space 0x51 - (. - gText_Rom_24E495)
	.endif
