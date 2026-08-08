	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:125 SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot
	.globl gText_Rom_20FB14
gText_Rom_20FB14: @ 0x0820FB14
	.string "おおきい タネボー もってないの?\nそれは ざんねん……\pこんど おおきい タネボー みせてね$"
	.if (. - gText_Rom_20FB14) > 0x30
	.error "gText_Rom_20FB14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FB14) < 0x30
	.space 0x30 - (. - gText_Rom_20FB14)
	.endif
