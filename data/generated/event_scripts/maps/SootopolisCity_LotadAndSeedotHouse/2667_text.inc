	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:134 SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot
	.globl gText_Rom_20FC30
gText_Rom_20FC30: @ 0x0820FC30
	.string "{STR_VAR_2}cm!!\nおお! こいつは でかい!\pあにきが みた でかい タネボーに\nまけない おおきさ かも!\pみせて くれて ありがとう\nおれいに これを あげるよ!$"
	.if (. - gText_Rom_20FC30) > 0x52
	.error "gText_Rom_20FC30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FC30) < 0x52
	.space 0x52 - (. - gText_Rom_20FC30)
	.endif
