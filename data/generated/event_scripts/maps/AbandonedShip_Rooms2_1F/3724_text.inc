	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:94 AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat (+1 aliases)
	.globl gText_Rom_21B13A
gText_Rom_21B13A: @ 0x0821B13A
	.string "ナツ『また まけちゃった……"
	.byte EOS
	.if (. - gText_Rom_21B13A) > 0xf
	.error "gText_Rom_21B13A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B13A) < 0xf
	.space 0xf - (. - gText_Rom_21B13A)
	.endif
