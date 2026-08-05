	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CC34
gText_Rom_24CC34: @ 0x0824CC34
	.string "なんと　{0xFD}{0x02}の　へやで\n{0xFD}{0x03}れんしょう　という\lきろくを　うちたてたぞ！$"
	.if (. - gText_Rom_24CC34) > 0x25
	.error "gText_Rom_24CC34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CC34) < 0x25
	.space 0x25 - (. - gText_Rom_24CC34)
	.endif
