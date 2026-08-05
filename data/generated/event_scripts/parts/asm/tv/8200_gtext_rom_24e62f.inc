	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E62F
gText_Rom_24E62F: @ 0x0824E62F
	.string "うむ　それにしても　「{0xFD}{0x02}」は\nなかなか　よい　ニックネーム　ですな\pこれからも　「{0xFD}{0x02}」の　ことを\nたいせつに　して　ほしい　ものですなぁ\pそれでは　また\nごえんが　あれば$"
	.if (. - gText_Rom_24E62F) > 0x58
	.error "gText_Rom_24E62F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E62F) < 0x58
	.space 0x58 - (. - gText_Rom_24E62F)
	.endif
