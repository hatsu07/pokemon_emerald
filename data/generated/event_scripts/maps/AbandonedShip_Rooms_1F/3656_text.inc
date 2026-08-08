	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:40 AbandonedShip_Rooms_1F_Text_ThaliaDefeat (+1 aliases)
	.globl gText_Rom_21AAD3
gText_Rom_21AAD3: @ 0x0821AAD3
	.string "ものずき だけじゃ なくて\nつよいのか……"
	.byte EOS
	.if (. - gText_Rom_21AAD3) > 0x16
	.error "gText_Rom_21AAD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AAD3) < 0x16
	.space 0x16 - (. - gText_Rom_21AAD3)
	.endif
