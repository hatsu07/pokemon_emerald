	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:372 MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro
	.globl gText_Rom_20DC4E
gText_Rom_20DC4E: @ 0x0820DC4E
	.string "あんしん するのは まだ はやい\nつぎは オレが あいてだ！{EOS}"
	.if (. - gText_Rom_20DC4E) > 0x1f
	.error "gText_Rom_20DC4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DC4E) < 0x1f
	.space 0x1f - (. - gText_Rom_20DC4E)
	.endif
