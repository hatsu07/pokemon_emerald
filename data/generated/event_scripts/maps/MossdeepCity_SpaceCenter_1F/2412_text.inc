	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:353 MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat (+1 aliases)
	.globl gText_Rom_20D5C7
gText_Rom_20D5C7: @ 0x0820D5C7
	.string "あっ あっ あっ{EOS}"
	.if (. - gText_Rom_20D5C7) > 0x9
	.error "gText_Rom_20D5C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D5C7) < 0x9
	.space 0x9 - (. - gText_Rom_20D5C7)
	.endif
