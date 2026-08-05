	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251BBB
gText_Rom_251BBB: @ 0x08251BBB
	.string "いすに　すわりましたー！\pとっても　うれしそうです\pすわりごこちが\nよかった　のでしょうか？$"
	.if (. - gText_Rom_251BBB) > 0x2f
	.error "gText_Rom_251BBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251BBB) < 0x2f
	.space 0x2f - (. - gText_Rom_251BBB)
	.endif
