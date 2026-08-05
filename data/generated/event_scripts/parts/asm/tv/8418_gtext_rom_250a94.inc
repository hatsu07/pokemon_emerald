	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_250A94
gText_Rom_250A94: @ 0x08250A94
	.string "ファン『ひみつきちの　センスが\nいい　ところ！！$"
	.if (. - gText_Rom_250A94) > 0x19
	.error "gText_Rom_250A94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250A94) < 0x19
	.space 0x19 - (. - gText_Rom_250A94)
	.endif
