	@ data/maps/SootopolisCity/scripts.inc:1504 SootopolisCity_Text_NeverBeenToSkyPillar
	.globl gText_Rom_1E36BF
gText_Rom_1E36BF: @ 0x081E36BF
	.string "ダイゴ『そらのはしら……\nボクも まだ いったことが ないけど\lいったい どこに あるんだろうね$"
	.if (. - gText_Rom_1E36BF) > 0x31
	.error "gText_Rom_1E36BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E36BF) < 0x31
	.space 0x31 - (. - gText_Rom_1E36BF)
	.endif
