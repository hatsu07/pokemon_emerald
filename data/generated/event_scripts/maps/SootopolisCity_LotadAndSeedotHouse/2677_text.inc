	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:150 SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad
	.globl gText_Rom_20FCF3
gText_Rom_20FCF3: @ 0x0820FCF3
	.string "おおきい ハスボー もってないの?\nそれは ざんねん……\pこんど おおきい ハスボー みせてね$"
	.if (. - gText_Rom_20FCF3) > 0x30
	.error "gText_Rom_20FCF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FCF3) < 0x30
	.space 0x30 - (. - gText_Rom_20FCF3)
	.endif
