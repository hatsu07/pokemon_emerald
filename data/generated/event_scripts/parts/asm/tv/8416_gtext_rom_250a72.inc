	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_250A72
gText_Rom_250A72: @ 0x08250A72
	.string "ファン『ポケモンに　つける　ニックネームが\nおちゃめな　ところ！！$"
	.if (. - gText_Rom_250A72) > 0x22
	.error "gText_Rom_250A72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250A72) < 0x22
	.space 0x22 - (. - gText_Rom_250A72)
	.endif
