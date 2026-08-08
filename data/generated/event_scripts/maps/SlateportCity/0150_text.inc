	@ data/maps/SlateportCity/scripts.inc:1315 SlateportCity_Text_MaybeThisTrainer
	.globl gText_Rom_1DD864
gText_Rom_1DD864: @ 0x081DD864
	.string "エニシダ『うーむ これは\nひょっとして ひょっとすると……$"
	.if (. - gText_Rom_1DD864) > 0x1e
	.error "gText_Rom_1DD864 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD864) < 0x1e
	.space 0x1e - (. - gText_Rom_1DD864)
	.endif
