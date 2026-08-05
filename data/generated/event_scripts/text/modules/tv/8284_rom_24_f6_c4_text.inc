	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F6C4
gText_Rom_24F6C4: @ 0x0824F6C4
	.string "こんかいの　トレーナーは\n{0xFD}{0x02}さん　です！\pげんざい　{0xFD}{0x02}さんは\nポケモン　ずかんを　{0xFD}{0x03}ひき\lとうろく　されていますねー！$"
	.if (. - gText_Rom_24F6C4) > 0x3f
	.error "gText_Rom_24F6C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F6C4) < 0x3f
	.space 0x3f - (. - gText_Rom_24F6C4)
	.endif
