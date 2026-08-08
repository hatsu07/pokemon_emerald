	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:61 AbandonedShip_Rooms_1F_Text_DemetriusDefeat (+1 aliases)
	.globl gText_Rom_21ABAC
gText_Rom_21ABAC: @ 0x0821ABAC
	.string "なんだ\nかあちゃん じゃ なかったのか"
	.byte EOS
	.if (. - gText_Rom_21ABAC) > 0x14
	.error "gText_Rom_21ABAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21ABAC) < 0x14
	.space 0x14 - (. - gText_Rom_21ABAC)
	.endif
