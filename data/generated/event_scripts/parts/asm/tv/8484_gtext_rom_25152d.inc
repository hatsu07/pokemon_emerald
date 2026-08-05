	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_25152D
gText_Rom_25152D: @ 0x0825152D
	.string "{0xFD}{0x02}と　{0xFD}{0x03}と\n{0xFD}{0x04}の　3ひきの　ポケモンたち！\pきろく　こうしん\nおめでとう　ございました！！$"
	.if (. - gText_Rom_25152D) > 0x31
	.error "gText_Rom_25152D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25152D) < 0x31
	.space 0x31 - (. - gText_Rom_25152D)
	.endif
