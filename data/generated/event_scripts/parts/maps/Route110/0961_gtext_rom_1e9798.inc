	@ data/maps/Route110/scripts.inc:753 Route110_Text_AquaActionsBringSmiles
	.globl gText_Rom_1E9798
gText_Rom_1E9798: @ 0x081E9798
	.string "アクアだんの かつどうは\nきっと みんなを えがおに するだろう$"
	.if (. - gText_Rom_1E9798) > 0x21
	.error "gText_Rom_1E9798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9798) < 0x21
	.space 0x21 - (. - gText_Rom_1E9798)
	.endif
