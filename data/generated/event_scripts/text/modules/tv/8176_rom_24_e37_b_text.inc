	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E37B
gText_Rom_24E37B: @ 0x0824E37B
	.string "とても　けんこうてきな　ポケモンに\nなる　よい　ニックネーム　ですなぁ！\pいつまでも　げんきで\nいて　くれる　でしょう$"
	.if (. - gText_Rom_24E37B) > 0x3c
	.error "gText_Rom_24E37B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E37B) < 0x3c
	.space 0x3c - (. - gText_Rom_24E37B)
	.endif
