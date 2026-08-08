	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:109 AbandonedShip_Rooms2_1F_Text_JaniPostBattle
	.globl gText_Rom_21B1B8
gText_Rom_21B1B8: @ 0x0821B1B8
	.string "ふねの なかを はだしで あるくと\nちょっと きもちわるいなあ"
	.byte EOS
	.if (. - gText_Rom_21B1B8) > 0x20
	.error "gText_Rom_21B1B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B1B8) < 0x20
	.space 0x20 - (. - gText_Rom_21B1B8)
	.endif
