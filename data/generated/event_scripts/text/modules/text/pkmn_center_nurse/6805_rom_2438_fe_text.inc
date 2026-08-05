	@ data/text/pkmn_center_nurse.inc:52 gText_WeHopeToSeeYouAgain2
	.globl gText_Rom_2438FE
gText_Rom_2438FE: @ 0x082438FE
	.string "また いつでも おこしください!$"
	.if (. - gText_Rom_2438FE) > 0x11
	.error "gText_Rom_2438FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2438FE) < 0x11
	.space 0x11 - (. - gText_Rom_2438FE)
	.endif
