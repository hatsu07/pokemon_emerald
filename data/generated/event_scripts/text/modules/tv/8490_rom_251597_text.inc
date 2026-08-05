	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_251597
gText_Rom_251597: @ 0x08251597
	.string "そして　{0xFD}{0x02}の\n4ひきの　ポケモンたち！\pきろく　こうしん\nおめでとう　ございました！！$"
	.if (. - gText_Rom_251597) > 0x2d
	.error "gText_Rom_251597 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251597) < 0x2d
	.space 0x2d - (. - gText_Rom_251597)
	.endif
