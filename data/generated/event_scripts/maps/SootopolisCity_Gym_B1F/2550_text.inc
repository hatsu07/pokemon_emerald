	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:87 SootopolisCity_Gym_B1F_Text_ConniePostBattle
	.globl gText_Rom_20ED25
gText_Rom_20ED25: @ 0x0820ED25
	.string "いいこと おしえて あげるね\pアダンさまに あいたいのなら\nすべての ゆかを 1かいずつ\lあるいて いけば いいの$"
	.if (. - gText_Rom_20ED25) > 0x3a
	.error "gText_Rom_20ED25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ED25) < 0x3a
	.space 0x3a - (. - gText_Rom_20ED25)
	.endif
