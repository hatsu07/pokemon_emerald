	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E33E
gText_Rom_24E33E: @ 0x0824E33E
	.string "しょうらい　おおものに　なる\nとても　よい　ニックネーム　ですなぁ！\pしょうらいが　とても\nたのしみな　ポケモン　ですな$"
	.if (. - gText_Rom_24E33E) > 0x3d
	.error "gText_Rom_24E33E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E33E) < 0x3d
	.space 0x3d - (. - gText_Rom_24E33E)
	.endif
