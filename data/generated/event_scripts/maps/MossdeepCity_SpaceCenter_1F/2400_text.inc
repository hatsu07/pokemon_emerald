	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:335 MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat (+1 aliases)
	.globl gText_Rom_20D4E8
gText_Rom_20D4E8: @ 0x0820D4E8
	.string "うーむ…… ひきょうな てを\nつかえば よかった……$"
	.if (. - gText_Rom_20D4E8) > 0x1b
	.error "gText_Rom_20D4E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D4E8) < 0x1b
	.space 0x1b - (. - gText_Rom_20D4E8)
	.endif
