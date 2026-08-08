	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:49 AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro (+1 aliases)
	.globl gText_Rom_21AB3F
gText_Rom_21AB3F: @ 0x0821AB3F
	.string "こんな ところまで なんども きて\nほんとに ものずきね キミって!"
	.byte EOS
	.if (. - gText_Rom_21AB3F) > 0x23
	.error "gText_Rom_21AB3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB3F) < 0x23
	.space 0x23 - (. - gText_Rom_21AB3F)
	.endif
