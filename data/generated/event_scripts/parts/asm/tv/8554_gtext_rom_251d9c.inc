	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251D9C
gText_Rom_251D9C: @ 0x08251D9C
	.string "たたいてます！\pだいぶ　ストレスが\nたまっている　のでしょうか？$"
	.if (. - gText_Rom_251D9C) > 0x21
	.error "gText_Rom_251D9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251D9C) < 0x21
	.space 0x21 - (. - gText_Rom_251D9C)
	.endif
