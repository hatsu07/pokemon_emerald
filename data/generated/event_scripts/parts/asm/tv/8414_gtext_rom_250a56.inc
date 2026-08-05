	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_250A56
gText_Rom_250A56: @ 0x08250A56
	.string "ファン『アイテムの　かいかたが\nごうかいな　ところ！！$"
	.if (. - gText_Rom_250A56) > 0x1c
	.error "gText_Rom_250A56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250A56) < 0x1c
	.space 0x1c - (. - gText_Rom_250A56)
	.endif
