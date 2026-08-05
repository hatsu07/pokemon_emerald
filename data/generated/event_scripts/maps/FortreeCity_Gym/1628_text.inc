	@ data/maps/FortreeCity_Gym/scripts.inc:148 FortreeCity_Gym_Text_GymGuidePostVictory
	.globl gText_Rom_204609
gText_Rom_204609: @ 0x08204609
	.string "えんやっと きみは はばたいたッ!$"
	.if (. - gText_Rom_204609) > 0x12
	.error "gText_Rom_204609 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204609) < 0x12
	.space 0x12 - (. - gText_Rom_204609)
	.endif
