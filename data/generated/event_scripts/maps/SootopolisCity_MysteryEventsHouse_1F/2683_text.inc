	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:168 SootopolisCity_MysteryEventsHouse_1F_Text_DoorAppearsToBeLocked
	.globl gText_Rom_20FFB0
gText_Rom_20FFB0: @ 0x0820FFB0
	.string "とびらには かぎが かかって いるようだ!{EOS}"
	.if (. - gText_Rom_20FFB0) > 0x16
	.error "gText_Rom_20FFB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FFB0) < 0x16
	.space 0x16 - (. - gText_Rom_20FFB0)
	.endif
