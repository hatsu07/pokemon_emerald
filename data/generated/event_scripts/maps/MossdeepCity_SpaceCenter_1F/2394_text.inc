	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:326 MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat (+1 aliases)
	.globl gText_Rom_20D497
gText_Rom_20D497: @ 0x0820D497
	.string "ねんりょうぎれ……$"
	.if (. - gText_Rom_20D497) > 0xa
	.error "gText_Rom_20D497 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D497) < 0xa
	.space 0xa - (. - gText_Rom_20D497)
	.endif
