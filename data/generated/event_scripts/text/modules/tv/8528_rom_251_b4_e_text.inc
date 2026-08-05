	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251B4E
gText_Rom_251B4E: @ 0x08251B4E
	.string "……たちどまって　しまいました！\pぜんぜん　うごきません！\p{0xFD}{0x02}さんの　ひみつきちが\nきに　いらなかった　のでしょうか？$"
	.if (. - gText_Rom_251B4E) > 0x3d
	.error "gText_Rom_251B4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251B4E) < 0x3d
	.space 0x3d - (. - gText_Rom_251B4E)
	.endif
