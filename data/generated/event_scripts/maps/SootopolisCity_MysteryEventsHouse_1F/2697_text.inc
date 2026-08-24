	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:190 SootopolisCity_MysteryEventsHouse_B1F_Text_MatchEndedUpDraw
	.globl gText_Rom_210098
gText_Rom_210098: @ 0x08210098
	.string "しょうぶは ひきわけに おわった!{EOS}"
	.if (. - gText_Rom_210098) > 0x12
	.error "gText_Rom_210098 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210098) < 0x12
	.space 0x12 - (. - gText_Rom_210098)
	.endif
	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:193 SootopolisCity_MysteryEventsHouse_1F_Text_BrilliantStandoff
	.globl gText_Rom_2100AA
gText_Rom_2100AA: @ 0x082100AA
	.string "ひきわけ じゃったか!\pおたがい いっぽも ゆずらぬ\nすばらしい しょうぶ じゃったぞ!{EOS}"
	.if (. - gText_Rom_2100AA) > 0x2d
	.error "gText_Rom_2100AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2100AA) < 0x2d
	.space 0x2d - (. - gText_Rom_2100AA)
	.endif
	@ analyzed canonical ROM range 0x082100D7-0x082100D9
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_082100D7: @ 0x082100D7
	.string "{STR_VAR_1}{EOS}"
