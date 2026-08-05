	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:239 LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests
	.globl gText_Rom_20668E
gText_Rom_20668E: @ 0x0820668E
	.string "どうです みて ください!\nこの すばらしい さくひん たちを!\pどれも おたがいに\nひけをとらない すばらしさ!\pこの えの おかげで びじゅつかんに\nこられる かたも ふえたんです!\pほんとうに ありがとう {PLAYER}さん!\nわたしの ゆめが かないました!$"
	.if (. - gText_Rom_20668E) > 0x81
	.error "gText_Rom_20668E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20668E) < 0x81
	.space 0x81 - (. - gText_Rom_20668E)
	.endif
