	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:190 SootopolisCity_MysteryEventsHouse_B1F_Text_MatchEndedUpDraw
	.globl gText_Rom_210098
gText_Rom_210098: @ 0x08210098
	.string "しょうぶは ひきわけに おわった!$"
	.if (. - gText_Rom_210098) > 0x12
	.error "gText_Rom_210098 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210098) < 0x12
	.space 0x12 - (. - gText_Rom_210098)
	.endif
