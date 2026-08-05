	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:168 SootopolisCity_MysteryEventsHouse_1F_Text_DoorAppearsToBeLocked
	.globl gText_Rom_20E0BA
gText_Rom_20E0BA: @ 0x0820E0BA
	.string "とびらには かぎが かかって いるようだ!$"
	.if (. - gText_Rom_20E0BA) > 0x16
	.error "gText_Rom_20E0BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E0BA) < 0x16
	.space 0x16 - (. - gText_Rom_20E0BA)
	.endif
