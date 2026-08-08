	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:369 MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat (+1 aliases)
	.globl gText_Rom_20DC40
gText_Rom_20DC40: @ 0x0820DC40
	.string "オレは まけたが しかし！$"
	.if (. - gText_Rom_20DC40) > 0xe
	.error "gText_Rom_20DC40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DC40) < 0xe
	.space 0xe - (. - gText_Rom_20DC40)
	.endif
