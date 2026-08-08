	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:73 AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons (+2 aliases)
	.globl gText_Rom_21AFEF
gText_Rom_21AFEF: @ 0x0821AFEF
	.string "ナツ『あら ポケモン 2ひき いないの?\nじゃあ しょうぶは おあずけね!"
	.byte EOS
	.if (. - gText_Rom_21AFEF) > 0x26
	.error "gText_Rom_21AFEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AFEF) < 0x26
	.space 0x26 - (. - gText_Rom_21AFEF)
	.endif
