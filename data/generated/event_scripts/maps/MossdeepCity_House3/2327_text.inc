	@ data/maps/MossdeepCity_House3/scripts.inc:37 MossdeepCity_House3_Text_DontYouLikeToFish
	.globl gText_Rom_20C7E7
gText_Rom_20C7E7: @ 0x0820C7E7
	.string "あら?\nつりは きらい なのかね?{EOS}"
	.if (. - gText_Rom_20C7E7) > 0x12
	.error "gText_Rom_20C7E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C7E7) < 0x12
	.space 0x12 - (. - gText_Rom_20C7E7)
	.endif
