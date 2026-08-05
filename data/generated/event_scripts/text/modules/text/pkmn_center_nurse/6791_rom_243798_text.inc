	@ data/text/pkmn_center_nurse.inc:13 gText_RestoredPkmnToFullHealth
	.globl gText_Rom_243798
gText_Rom_243798: @ 0x08243798
	.string "おまちどおさま!\pおあずかり した ポケモンは\nみんな げんきに なりましたよ!$"
	.if (. - gText_Rom_243798) > 0x29
	.error "gText_Rom_243798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243798) < 0x29
	.space 0x29 - (. - gText_Rom_243798)
	.endif
