	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:180 SootopolisCity_MysteryEventsHouse_1F_Text_SaveProgressBeforeBattle
	.globl gText_Rom_21005E
gText_Rom_21005E: @ 0x0821005E
	.string "じゃあ しょうぶの まえに\nレポートを かいて おいたほうが よいぞ{EOS}"
	.if (. - gText_Rom_21005E) > 0x23
	.error "gText_Rom_21005E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21005E) < 0x23
	.space 0x23 - (. - gText_Rom_21005E)
	.endif
