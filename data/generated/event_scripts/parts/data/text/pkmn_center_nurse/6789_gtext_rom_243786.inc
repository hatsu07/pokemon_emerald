	@ data/text/pkmn_center_nurse.inc:9 gText_IllTakeYourPkmn
	.globl gText_Rom_243786
gText_Rom_243786: @ 0x08243786
	.string "それでは\nおあずかり いたします!$"
	.if (. - gText_Rom_243786) > 0x12
	.error "gText_Rom_243786 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243786) < 0x12
	.space 0x12 - (. - gText_Rom_243786)
	.endif
