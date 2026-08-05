	@ data/maps/Route110/scripts.inc:838 Route110_Text_TwoRoads
	.globl gText_Rom_1E9B41
gText_Rom_1E9B41: @ 0x081E9B41
	.string "うえと した 2つの どうろ……\pにんげんと ポケモン\nそれぞれの どうろ だと おもえば\lこれもあり なのかも しれんのう$"
	.if (. - gText_Rom_1E9B41) > 0x3f
	.error "gText_Rom_1E9B41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9B41) < 0x3f
	.space 0x3f - (. - gText_Rom_1E9B41)
	.endif
