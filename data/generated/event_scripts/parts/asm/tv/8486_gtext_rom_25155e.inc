	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_25155E
gText_Rom_25155E: @ 0x0825155E
	.string "{0xFD}{0x02}と　{0xFD}{0x03}の\n2ひきの　ポケモンたち！\pきろく　こうしん\nおめでとう　ございました！！$"
	.if (. - gText_Rom_25155E) > 0x2d
	.error "gText_Rom_25155E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25155E) < 0x2d
	.space 0x2d - (. - gText_Rom_25155E)
	.endif
