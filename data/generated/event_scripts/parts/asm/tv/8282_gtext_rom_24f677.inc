	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F677
gText_Rom_24F677: @ 0x0824F677
	.string "こんかいの　トレーナーは\nげんざい　ひみつきちに\lいらっしゃる　{0xFD}{0x02}さん　です！\p{0xFD}{0x02}さんは\nポケモン　ずかんを　{0xFD}{0x03}ひき\lとうろく　されていますねー！$"
	.if (. - gText_Rom_24F677) > 0x4d
	.error "gText_Rom_24F677 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F677) < 0x4d
	.space 0x4d - (. - gText_Rom_24F677)
	.endif
