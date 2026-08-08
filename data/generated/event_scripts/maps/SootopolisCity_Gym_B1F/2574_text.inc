	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:123 SootopolisCity_Gym_B1F_Text_BethanyPostBattle
	.globl gText_Rom_20EECD
gText_Rom_20EECD: @ 0x0820EECD
	.string "まけた しょうぶも\nあっ というまに わすれたい……$"
	.if (. - gText_Rom_20EECD) > 0x1b
	.error "gText_Rom_20EECD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EECD) < 0x1b
	.space 0x1b - (. - gText_Rom_20EECD)
	.endif
