	@ data/maps/LavaridgeTown/scripts.inc:370 LavaridgeTown_Text_OhYouLikeHotSprings
	.globl gText_Rom_1E5D2A
gText_Rom_1E5D2A: @ 0x081E5D2A
	.string "おや あんた\nおんせんが すき なのかい?\pまだ わかいのに めずらしいねえ……$"
	.if (. - gText_Rom_1E5D2A) > 0x29
	.error "gText_Rom_1E5D2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5D2A) < 0x29
	.space 0x29 - (. - gText_Rom_1E5D2A)
	.endif
