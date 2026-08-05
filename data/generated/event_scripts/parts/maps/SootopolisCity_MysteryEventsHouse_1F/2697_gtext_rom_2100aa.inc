	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:193 SootopolisCity_MysteryEventsHouse_1F_Text_BrilliantStandoff
	.globl gText_Rom_2100AA
gText_Rom_2100AA: @ 0x082100AA
	.string "ひきわけ じゃったか!\pおたがい いっぽも ゆずらぬ\nすばらしい しょうぶ じゃったぞ!$"
	.if (. - gText_Rom_2100AA) > 0x2d
	.error "gText_Rom_2100AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2100AA) < 0x2d
	.space 0x2d - (. - gText_Rom_2100AA)
	.endif
	@ Replaced baserom.gba range: offset=0x2100D7, size=0x3
	.byte 0xFD, 0x02, 0xFF
