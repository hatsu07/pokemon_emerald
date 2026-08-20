	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:109 SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad
	.globl gText_Rom_20FA50
gText_Rom_20FA50: @ 0x0820FA50
	.string "{STR_VAR_2}cm!!\nおお! こいつは でかい!\pおとうとが みた でかい ハスボーに\nまけない おおきさ かも!\pみせて くれて ありがとう\nおれいに これを あげるよ!{EOS}"
	.if (. - gText_Rom_20FA50) > 0x53
	.error "gText_Rom_20FA50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FA50) < 0x53
	.space 0x53 - (. - gText_Rom_20FA50)
	.endif
