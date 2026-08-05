	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:174 SootopolisCity_MysteryEventsHouse_1F_Text_YouWontBattle
	.globl gText_Rom_20E104
gText_Rom_20E104: @ 0x0820E104
	.string "しょうぶ せんのか……\nしょうぶを みられなくて ガッカリ……$"
	.if (. - gText_Rom_20E104) > 0x20
	.error "gText_Rom_20E104 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E104) < 0x20
	.space 0x20 - (. - gText_Rom_20E104)
	.endif
