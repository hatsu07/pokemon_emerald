	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:58 AbandonedShip_Rooms_1F_Text_DemetriusIntro (+1 aliases)
	.globl gText_Rom_21AB98
gText_Rom_21AB98: @ 0x0821AB98
	.string "わーっ!\nみつかった…… って あれ?"
	.byte EOS
	.if (. - gText_Rom_21AB98) > 0x14
	.error "gText_Rom_21AB98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB98) < 0x14
	.space 0x14 - (. - gText_Rom_21AB98)
	.endif
