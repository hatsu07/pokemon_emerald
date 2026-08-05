	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F0D7
gText_Rom_24F0D7: @ 0x0824F0D7
	.string "インタビュアー『{0xFD}{0x03}を！！\n{0xFD}{0x04}こも！？\p……そんなに　かうひとが\nいるなんて　しらなかったわ\pわたし　なんか　せいぜい　1こか　2こしか\nかわないから……$"
	.if (. - gText_Rom_24F0D7) > 0x4f
	.error "gText_Rom_24F0D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F0D7) < 0x4f
	.space 0x4f - (. - gText_Rom_24F0D7)
	.endif
