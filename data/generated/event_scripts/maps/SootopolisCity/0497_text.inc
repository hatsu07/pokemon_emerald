	@ data/maps/SootopolisCity/scripts.inc:1384 SootopolisCity_Text_CitySign
	.globl gText_Rom_1E2C31
gText_Rom_1E2C31: @ 0x081E2C31
	.string "ここは ルネ シティ\nれきしが ねむる しんぴの まち{EOS}"
	.if (. - gText_Rom_1E2C31) > 0x1c
	.error "gText_Rom_1E2C31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2C31) < 0x1c
	.space 0x1c - (. - gText_Rom_1E2C31)
	.endif
