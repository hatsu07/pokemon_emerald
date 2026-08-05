	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:67 AbandonedShip_Rooms2_1F_Text_KiraDefeat (+1 aliases)
	.globl gText_Rom_21AFC0
gText_Rom_21AFC0: @ 0x0821AFC0
	.string "ナツ『つよいんだ!"
	.byte EOS
	.if (. - gText_Rom_21AFC0) > 0xa
	.error "gText_Rom_21AFC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AFC0) < 0xa
	.space 0xa - (. - gText_Rom_21AFC0)
	.endif
