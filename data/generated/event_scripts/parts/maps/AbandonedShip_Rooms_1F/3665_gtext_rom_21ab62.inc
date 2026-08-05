	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:52 AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat (+1 aliases)
	.globl gText_Rom_21AB62
gText_Rom_21AB62: @ 0x0821AB62
	.string "ちょっと つよすぎない?"
	.byte EOS
	.if (. - gText_Rom_21AB62) > 0xd
	.error "gText_Rom_21AB62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB62) < 0xd
	.space 0xd - (. - gText_Rom_21AB62)
	.endif
