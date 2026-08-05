	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F7E6
gText_Rom_24F7E6: @ 0x0824F7E6
	.string "バトルフロンティアでの\nバトルポイントは　げんざい\l{0xFD}{0x02}　BP　あつめていますねー！$"
	.if (. - gText_Rom_24F7E6) > 0x2b
	.error "gText_Rom_24F7E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F7E6) < 0x2b
	.space 0x2b - (. - gText_Rom_24F7E6)
	.endif
