	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:116 SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1 (+1 aliases)
	.globl gText_Rom_20FC93
gText_Rom_20FC93: @ 0x0820FC93
	.string "ありゃ?\nきみ もちもの いっぱいだね$"
	.if (. - gText_Rom_20FC93) > 0x14
	.error "gText_Rom_20FC93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FC93) < 0x14
	.space 0x14 - (. - gText_Rom_20FC93)
	.endif
