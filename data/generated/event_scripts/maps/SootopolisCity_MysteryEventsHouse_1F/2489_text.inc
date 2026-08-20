	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:193 SootopolisCity_MysteryEventsHouse_1F_Text_BrilliantStandoff
	.globl gText_Rom_20E19F
gText_Rom_20E19F: @ 0x0820E19F
	.string "ひきわけ じゃったか!\pおたがい いっぽも ゆずらぬ\nすばらしい しょうぶ じゃったぞ!{EOS}"
	.if (. - gText_Rom_20E19F) > 0x2d
	.error "gText_Rom_20E19F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E19F) < 0x2d
	.space 0x2d - (. - gText_Rom_20E19F)
	.endif
