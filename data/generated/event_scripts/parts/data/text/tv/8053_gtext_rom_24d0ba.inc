	@ data/text/tv.inc:1102 SlateportCity_PokemonFanClub_Text_WhatDoPokemonMeanToYou
	.globl gText_Rom_24D0BA
gText_Rom_24D0BA: @ 0x0824D0BA
	.string "うーん なるほどね\pじゃあ つぎは ちょっと\nむずかしい しつもんを するね!\pじゃあ……\pきみに とって ポケモンって\nひとことで いうと なんだと おもう?$"
	.if (. - gText_Rom_24D0BA) > 0x51
	.error "gText_Rom_24D0BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D0BA) < 0x51
	.space 0x51 - (. - gText_Rom_24D0BA)
	.endif
