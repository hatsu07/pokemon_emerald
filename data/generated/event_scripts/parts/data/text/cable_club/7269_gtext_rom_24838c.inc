	@ data/text/cable_club.inc:215 MossdeepCity_GameCorner_1F_Text_EnterWhichPokemon
	.globl gText_Rom_24838C
gText_Rom_24838C: @ 0x0824838C
	.string "どの ポケモンを\nさんか させるのかな?$"
	.if (. - gText_Rom_24838C) > 0x15
	.error "gText_Rom_24838C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24838C) < 0x15
	.space 0x15 - (. - gText_Rom_24838C)
	.endif
