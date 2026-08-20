	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:116 SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1 (+1 aliases)
	.globl gText_Rom_20FAB4
gText_Rom_20FAB4: @ 0x0820FAB4
	.string "ありゃ?\nきみ もちもの いっぱいだね{EOS}"
	.if (. - gText_Rom_20FAB4) > 0x14
	.error "gText_Rom_20FAB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FAB4) < 0x14
	.space 0x14 - (. - gText_Rom_20FAB4)
	.endif
