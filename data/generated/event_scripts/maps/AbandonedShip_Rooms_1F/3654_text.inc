	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:37 AbandonedShip_Rooms_1F_Text_ThaliaIntro (+1 aliases)
	.globl gText_Rom_21AAB8
gText_Rom_21AAB8: @ 0x0821AAB8
	.string "あら こんな ところまで きて\nキミも ものずきね!"
	.byte EOS
	.if (. - gText_Rom_21AAB8) > 0x1b
	.error "gText_Rom_21AAB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AAB8) < 0x1b
	.space 0x1b - (. - gText_Rom_21AAB8)
	.endif
