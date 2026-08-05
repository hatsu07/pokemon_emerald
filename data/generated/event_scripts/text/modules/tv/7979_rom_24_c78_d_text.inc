	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gText_Rom_24C78D
gText_Rom_24C78D: @ 0x0824C78D
	.string "{0xFD}{0x02}　の　「{0xFD}{0x03}」の\nしょうかいだー！\p「{0xFD}{0x03}」か……\pもう　ニックネーム　からして\n{0xFD}{0x04}が　にじみ　でているぜ！$"
	.if (. - gText_Rom_24C78D) > 0x3a
	.error "gText_Rom_24C78D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C78D) < 0x3a
	.space 0x3a - (. - gText_Rom_24C78D)
	.endif
