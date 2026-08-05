	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_250AAD
gText_Rom_250AAD: @ 0x08250AAD
	.string "ファン『わざマシンの　つかい　かたが\nだいたんな　ところ！！$"
	.if (. - gText_Rom_250AAD) > 0x1f
	.error "gText_Rom_250AAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250AAD) < 0x1f
	.space 0x1f - (. - gText_Rom_250AAD)
	.endif
