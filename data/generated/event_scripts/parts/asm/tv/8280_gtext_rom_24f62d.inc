	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F62D
gText_Rom_24F62D: @ 0x0824F62D
	.string "こんかいの　トレーナーは\nげんざい　{0xFD}{0x04}に\lいらっしゃる　{0xFD}{0x02}さん　です！\p{0xFD}{0x02}さんは\nポケモン　ずかんを　{0xFD}{0x03}ひき\lとうろく　されていますねー！$"
	.if (. - gText_Rom_24F62D) > 0x4a
	.error "gText_Rom_24F62D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F62D) < 0x4a
	.space 0x4a - (. - gText_Rom_24F62D)
	.endif
