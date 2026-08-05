	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E3FD
gText_Rom_24E3FD: @ 0x0824E3FD
	.string "とても　あいきょうの　ある\nポケモンになる　ニックネーム　ですなぁ！\pポケモンコンテスト　では\nとても　かつやく　できると　おもいますよ$"
	.if (. - gText_Rom_24E3FD) > 0x45
	.error "gText_Rom_24E3FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E3FD) < 0x45
	.space 0x45 - (. - gText_Rom_24E3FD)
	.endif
