	@ data/maps/FortreeCity_Gym/scripts.inc:217 FortreeCity_Gym_Text_HumbertoPostBattle
	.globl gText_Rom_20482F
gText_Rom_20482F: @ 0x0820482F
	.string "ナギさまに みとれて\nボロまけ しないように\lちゅういするんだな!$"
	.if (. - gText_Rom_20482F) > 0x22
	.error "gText_Rom_20482F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20482F) < 0x22
	.space 0x22 - (. - gText_Rom_20482F)
	.endif
