	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E269
gText_Rom_24E269: @ 0x0824E269
	.string "{0xFD}{0x02}さん　との　あいしょうが\nとても　よい　ニックネーム　ですなぁ！\pいきの　ぴったり　あった\nよい　コンビに　なると　おもいますよ$"
	.if (. - gText_Rom_24E269) > 0x43
	.error "gText_Rom_24E269 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E269) < 0x43
	.space 0x43 - (. - gText_Rom_24E269)
	.endif
