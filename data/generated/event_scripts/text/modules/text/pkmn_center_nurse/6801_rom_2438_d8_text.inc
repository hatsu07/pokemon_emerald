	@ data/text/pkmn_center_nurse.inc:46 gText_IllTakeYourPkmn2
	.globl gText_Rom_2438D8
gText_Rom_2438D8: @ 0x082438D8
	.string "では おあずかりさせて いただきます!$"
	.if (. - gText_Rom_2438D8) > 0x14
	.error "gText_Rom_2438D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2438D8) < 0x14
	.space 0x14 - (. - gText_Rom_2438D8)
	.endif
