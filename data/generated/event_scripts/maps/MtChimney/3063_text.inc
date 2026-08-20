	@ data/maps/MtChimney/scripts.inc:644 MtChimney_Text_MeteoritesPackAmazingPower
	.globl gText_Rom_21544D
gText_Rom_21544D: @ 0x0821544D
	.string "いんせきには すごい パワーが あるのだ!{EOS}"
	.if (. - gText_Rom_21544D) > 0x16
	.error "gText_Rom_21544D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21544D) < 0x16
	.space 0x16 - (. - gText_Rom_21544D)
	.endif
