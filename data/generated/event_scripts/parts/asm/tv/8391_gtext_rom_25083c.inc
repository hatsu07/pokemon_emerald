	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gText_Rom_25083C
gText_Rom_25083C: @ 0x0825083C
	.string "「{0xFD}{0x02}」　「{0xFD}{0x03}」\n「{0xFD}{0x04}」　……を　おぼえていました$"
	.if (. - gText_Rom_25083C) > 0x1c
	.error "gText_Rom_25083C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25083C) < 0x1c
	.space 0x1c - (. - gText_Rom_25083C)
	.endif
