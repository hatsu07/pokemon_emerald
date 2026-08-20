	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:411 MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand
	.globl gText_Rom_20DE92
gText_Rom_20DE92: @ 0x0820DE92
	.string "わたしは ただ……\nりくちを ふやしたい だけなのに……{EOS}"
	.if (. - gText_Rom_20DE92) > 0x1d
	.error "gText_Rom_20DE92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DE92) < 0x1d
	.space 0x1d - (. - gText_Rom_20DE92)
	.endif
