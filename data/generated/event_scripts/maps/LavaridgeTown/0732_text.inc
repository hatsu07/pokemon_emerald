	@ data/maps/LavaridgeTown/scripts.inc:363 LavaridgeTown_Text_PokemonNippedBackside
	.globl gText_Rom_1E5CE8
gText_Rom_1E5CE8: @ 0x081E5CE8
	.string "こうして すなに うまっていると\nはあぁ……\pあたたかくって イイキモチ……\p……ん? イテテッ!\pしりを ポケモンに かまれた!$"
	.if (. - gText_Rom_1E5CE8) > 0x42
	.error "gText_Rom_1E5CE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5CE8) < 0x42
	.space 0x42 - (. - gText_Rom_1E5CE8)
	.endif
