	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:61 AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons (+2 aliases)
	.globl gText_Rom_21AF73
gText_Rom_21AF73: @ 0x0821AF73
	.string "フミ『ポケモン 2ひき いないんだね\nそれだと ぼくたちには かてないよ!"
	.byte EOS
	.if (. - gText_Rom_21AF73) > 0x26
	.error "gText_Rom_21AF73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AF73) < 0x26
	.space 0x26 - (. - gText_Rom_21AF73)
	.endif
