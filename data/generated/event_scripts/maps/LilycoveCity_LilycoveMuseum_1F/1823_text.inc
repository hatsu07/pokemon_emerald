	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:215 LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty
	.globl gText_Rom_20609D
gText_Rom_20609D: @ 0x0820609D
	.string "この おんなの ひと きれーい!\nママみたーい!{EOS}"
	.if (. - gText_Rom_20609D) > 0x19
	.error "gText_Rom_20609D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20609D) < 0x19
	.space 0x19 - (. - gText_Rom_20609D)
	.endif
