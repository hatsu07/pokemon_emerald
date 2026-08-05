	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gText_Rom_2507FC
gText_Rom_2507FC: @ 0x082507FC
	.string "{0xFD}{0x03}に　たいして\n「{0xFD}{0x04}」を　やってしまいました……\pうーん……　{0xFD}{0x02}さん！\nこれは　いけませんね……$"
	.if (. - gText_Rom_2507FC) > 0x34
	.error "gText_Rom_2507FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2507FC) < 0x34
	.space 0x34 - (. - gText_Rom_2507FC)
	.endif
