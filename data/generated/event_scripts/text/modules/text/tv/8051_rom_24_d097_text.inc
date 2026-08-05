	@ data/text/tv.inc:1099 SlateportCity_PokemonFanClub_Text_WhatAttractedYouAboutMon
	.globl gText_Rom_24D097
gText_Rom_24D097: @ 0x0824D097
	.string "きみの かわいがってる {STR_VAR_1}!\pきみは {STR_VAR_1}の どこに\nひかれたの?$"
	.if (. - gText_Rom_24D097) > 0x23
	.error "gText_Rom_24D097 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D097) < 0x23
	.space 0x23 - (. - gText_Rom_24D097)
	.endif
