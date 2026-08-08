	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:147 SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad
	.globl gText_Rom_20FCD2
gText_Rom_20FCD2: @ 0x0820FCD2
	.string "おお こいつは なかなか…… って\nこれ ハスボーじゃ ないよ!$"
	.if (. - gText_Rom_20FCD2) > 0x21
	.error "gText_Rom_20FCD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FCD2) < 0x21
	.space 0x21 - (. - gText_Rom_20FCD2)
	.endif
