	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:183 SootopolisCity_MysteryEventsHouse_1F_Text_HopeToSeeGoodMatch
	.globl gText_Rom_20E18B
gText_Rom_20E18B: @ 0x0820E18B
	.string "よい しょうぶを きたい しておるぞ!$"
	.if (. - gText_Rom_20E18B) > 0x14
	.error "gText_Rom_20E18B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E18B) < 0x14
	.space 0x14 - (. - gText_Rom_20E18B)
	.endif
