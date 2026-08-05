	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:194 SootopolisCity_Gym_1F_Text_ReceivedRainBadge
	.globl gText_Rom_20E729
gText_Rom_20E729: @ 0x0820E729
	.string "{PLAYER}は アダンから\nレインバッジを もらった!$"
	.if (. - gText_Rom_20E729) > 0x18
	.error "gText_Rom_20E729 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E729) < 0x18
	.space 0x18 - (. - gText_Rom_20E729)
	.endif
