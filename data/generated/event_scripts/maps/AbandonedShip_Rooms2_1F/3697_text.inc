	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:55 AbandonedShip_Rooms2_1F_Text_DanDefeat (+1 aliases)
	.globl gText_Rom_21AF2D
gText_Rom_21AF2D: @ 0x0821AF2D
	.string "フミ『ぼくたち ふたりの ちからでも\nかてなかったのか……"
	.byte EOS
	.if (. - gText_Rom_21AF2D) > 0x1e
	.error "gText_Rom_21AF2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AF2D) < 0x1e
	.space 0x1e - (. - gText_Rom_21AF2D)
	.endif
