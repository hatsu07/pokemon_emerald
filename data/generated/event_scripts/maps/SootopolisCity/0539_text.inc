	@ data/maps/SootopolisCity/scripts.inc:1447 SootopolisCity_Text_CityRegainedCalm
	.globl gText_Rom_1E304B
gText_Rom_1E304B: @ 0x081E304B
	.string "まちが また しずかに なった……{EOS}"
	.if (. - gText_Rom_1E304B) > 0x12
	.error "gText_Rom_1E304B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E304B) < 0x12
	.space 0x12 - (. - gText_Rom_1E304B)
	.endif
