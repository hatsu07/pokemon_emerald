	@ data/maps/SootopolisCity/scripts.inc:1396 SootopolisCity_Text_WhatIsThatGreenPokemon
	.globl gText_Rom_1E2D00
gText_Rom_1E2D00: @ 0x081E2D00
	.string "なに? なに? なに?\nあの みどりの ポケモン なにー!?$"
	.if (. - gText_Rom_1E2D00) > 0x1f
	.error "gText_Rom_1E2D00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2D00) < 0x1f
	.space 0x1f - (. - gText_Rom_1E2D00)
	.endif
