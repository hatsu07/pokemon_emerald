	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251B8B
gText_Rom_251B8B: @ 0x08251B8B
	.string "……たちどまって　しまいました！\pぜんぜん　うごきません！\p……つかれちゃった　のでしょうか？$"
	.if (. - gText_Rom_251B8B) > 0x30
	.error "gText_Rom_251B8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251B8B) < 0x30
	.space 0x30 - (. - gText_Rom_251B8B)
	.endif
