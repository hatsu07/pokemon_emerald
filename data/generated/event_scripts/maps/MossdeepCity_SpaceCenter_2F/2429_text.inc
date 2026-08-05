	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:357 MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace
	.globl gText_Rom_20DBD3
gText_Rom_20DBD3: @ 0x0820DBD3
	.string "マグマだんも……\nうちゅうに いきたいの かな?$"
	.if (. - gText_Rom_20DBD3) > 0x19
	.error "gText_Rom_20DBD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DBD3) < 0x19
	.space 0x19 - (. - gText_Rom_20DBD3)
	.endif
