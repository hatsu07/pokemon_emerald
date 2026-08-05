	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D765
gText_Rom_24D765: @ 0x0824D765
	.string "ところで　あんまり　かんけい　ないけど\n「{0xFD}{0x04}」って　いいことば　だよね\pじつは　おれも　「{0xFD}{0x04}」って\nことば　さいきん　よく　つかうんだよね$"
	.if (. - gText_Rom_24D765) > 0x48
	.error "gText_Rom_24D765 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D765) < 0x48
	.space 0x48 - (. - gText_Rom_24D765)
	.endif
