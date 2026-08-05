	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:183 SootopolisCity_MysteryEventsHouse_1F_Text_HopeToSeeGoodMatch
	.globl gText_Rom_210081
gText_Rom_210081: @ 0x08210081
	.string "よい しょうぶを きたい しておるぞ!$"
	.if (. - gText_Rom_210081) > 0x14
	.error "gText_Rom_210081 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210081) < 0x14
	.space 0x14 - (. - gText_Rom_210081)
	.endif
	@ Replaced baserom.gba range: offset=0x210095, size=0x3
	.byte 0xFD, 0x02, 0xFF
