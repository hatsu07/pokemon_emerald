	@ data/text/event_ticket_2.inc:30 FarawayIsland_Entrance_Text_SailorReturn
	.globl gText_Rom_275DA5
gText_Rom_275DA5: @ 0x08275DA5
	.string "まったく ハギ せんちょうの\nきまぐれにも まいるよなあ……\pもう ミナモへ かえるのかい?$"
	.if (. - gText_Rom_275DA5) > 0x2f
	.error "gText_Rom_275DA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275DA5) < 0x2f
	.space 0x2f - (. - gText_Rom_275DA5)
	.endif
