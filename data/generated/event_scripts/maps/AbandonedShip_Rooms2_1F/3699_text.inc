	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:58 AbandonedShip_Rooms2_1F_Text_DanPostBattle
	.globl gText_Rom_21AF4B
gText_Rom_21AF4B: @ 0x0821AF4B
	.string "フミ『おたから みつからないんだよね……\nもう だれかが もっていったのかな?"
	.byte EOS
	.if (. - gText_Rom_21AF4B) > 0x28
	.error "gText_Rom_21AF4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AF4B) < 0x28
	.space 0x28 - (. - gText_Rom_21AF4B)
	.endif
