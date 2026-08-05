	@ data/maps/FortreeCity/scripts.inc:140 FortreeCity_Text_UsedDevonScopePokemonFled
	.globl gText_Rom_1E00E1
gText_Rom_1E00E1: @ 0x081E00E1
	.string "{PLAYER}は\nデボンスコープを つかった!\pとうめいに なっていた\nポケモンの すがたが まるわかりだ!\pポケモンは\nおどろいて にげだした!$"
	.if (. - gText_Rom_1E00E1) > 0x45
	.error "gText_Rom_1E00E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E00E1) < 0x45
	.space 0x45 - (. - gText_Rom_1E00E1)
	.endif
