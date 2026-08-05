	@ data/maps/AbandonedShip_Corridors_1F/scripts.inc:13 AbandonedShip_Corridors_1F_Text_CharlieIntro (+1 aliases)
	.globl gText_Rom_21A99D
gText_Rom_21A99D: @ 0x0821A99D
	.string "ふねの なかでも\nうきわ もっていたら おかしい?"
	.byte EOS
	.if (. - gText_Rom_21A99D) > 0x1a
	.error "gText_Rom_21A99D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A99D) < 0x1a
	.space 0x1a - (. - gText_Rom_21A99D)
	.endif
