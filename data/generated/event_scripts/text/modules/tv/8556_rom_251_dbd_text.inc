	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251DBD
gText_Rom_251DBD: @ 0x08251DBD
	.string "だきついたー！\pなにか　いいことでも　あった　のでしょうか？$"
	.if (. - gText_Rom_251DBD) > 0x1f
	.error "gText_Rom_251DBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251DBD) < 0x1f
	.space 0x1f - (. - gText_Rom_251DBD)
	.endif
