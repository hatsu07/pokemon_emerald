	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gText_Rom_25086F
gText_Rom_25086F: @ 0x0825086F
	.string "「{0xFD}{0x03}」\n……を　おぼえていました$"
	.if (. - gText_Rom_25086F) > 0x12
	.error "gText_Rom_25086F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25086F) < 0x12
	.space 0x12 - (. - gText_Rom_25086F)
	.endif
