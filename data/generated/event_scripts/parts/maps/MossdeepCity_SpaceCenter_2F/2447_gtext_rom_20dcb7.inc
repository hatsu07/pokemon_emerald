	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:384 MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle
	.globl gText_Rom_20DCB7
gText_Rom_20DCB7: @ 0x0820DCB7
	.string "3にんも いて このザマか！$"
	.if (. - gText_Rom_20DCB7) > 0xf
	.error "gText_Rom_20DCB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DCB7) < 0xf
	.space 0xf - (. - gText_Rom_20DCB7)
	.endif
