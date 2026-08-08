	@ data/maps/MossdeepCity/scripts.inc:324 MossdeepCity_Text_SpaceCenterLaunchingRockets
	.globl gText_Rom_1E1917
gText_Rom_1E1917: @ 0x081E1917
	.string "しまの うちゅうセンター では\nすんごい ロケット とばしとるのよ!$"
	.if (. - gText_Rom_1E1917) > 0x23
	.error "gText_Rom_1E1917 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1917) < 0x23
	.space 0x23 - (. - gText_Rom_1E1917)
	.endif
