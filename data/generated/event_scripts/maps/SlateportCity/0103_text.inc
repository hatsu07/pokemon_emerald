	@ data/maps/SlateportCity/scripts.inc:1188 SlateportCity_Text_FromHarborTryingToTakeSub
	.globl gText_Rom_1DD3C8
gText_Rom_1DD3C8: @ 0x081DD3C8
	.string "ふねのりばの なか!\pせんすいていが…… うばわれる……?{EOS}"
	.if (. - gText_Rom_1DD3C8) > 0x1e
	.error "gText_Rom_1DD3C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD3C8) < 0x1e
	.space 0x1e - (. - gText_Rom_1DD3C8)
	.endif
