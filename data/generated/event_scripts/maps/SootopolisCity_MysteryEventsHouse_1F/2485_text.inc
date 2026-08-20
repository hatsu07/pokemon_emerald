	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:180 SootopolisCity_MysteryEventsHouse_1F_Text_SaveProgressBeforeBattle
	.globl gText_Rom_20E168
gText_Rom_20E168: @ 0x0820E168
	.string "じゃあ しょうぶの まえに\nレポートを かいて おいたほうが よいぞ{EOS}"
	.if (. - gText_Rom_20E168) > 0x23
	.error "gText_Rom_20E168 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E168) < 0x23
	.space 0x23 - (. - gText_Rom_20E168)
	.endif
