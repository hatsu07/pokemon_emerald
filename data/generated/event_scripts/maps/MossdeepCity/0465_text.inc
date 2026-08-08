	@ data/maps/MossdeepCity/scripts.inc:321 MossdeepCity_Text_SpaceCenterReceivedLetter
	.globl gText_Rom_1E18C3
gText_Rom_1E18C3: @ 0x081E18C3
	.string "しまの うちゅうセンター では\nすんごい ロケット とばしとるけど……\pさいきん あそこに\nおかしなてがみ が とどいた とかで\lちょっとした さわぎに なっとるのよ$"
	.if (. - gText_Rom_1E18C3) > 0x54
	.error "gText_Rom_1E18C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E18C3) < 0x54
	.space 0x54 - (. - gText_Rom_1E18C3)
	.endif
