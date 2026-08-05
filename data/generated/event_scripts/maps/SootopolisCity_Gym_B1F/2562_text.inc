	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:105 SootopolisCity_Gym_B1F_Text_OliviaPostBattle
	.globl gText_Rom_20EE1C
gText_Rom_20EE1C: @ 0x0820EE1C
	.string "あなた みどころ あると おもうの\nいっしょに ここで ポケモン きたえない?$"
	.if (. - gText_Rom_20EE1C) > 0x28
	.error "gText_Rom_20EE1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EE1C) < 0x28
	.space 0x28 - (. - gText_Rom_20EE1C)
	.endif
