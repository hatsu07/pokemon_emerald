	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:375 MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat (+1 aliases)
	.globl gText_Rom_20DC6D
gText_Rom_20DC6D: @ 0x0820DC6D
	.string "オレも まけたが だけど！{EOS}"
	.if (. - gText_Rom_20DC6D) > 0xe
	.error "gText_Rom_20DC6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DC6D) < 0xe
	.space 0xe - (. - gText_Rom_20DC6D)
	.endif
