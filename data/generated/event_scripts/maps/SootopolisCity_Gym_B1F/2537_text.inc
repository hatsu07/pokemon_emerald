	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:69 SootopolisCity_Gym_B1F_Text_CrissyPostBattle
	.globl gText_Rom_20EC47
gText_Rom_20EC47: @ 0x0820EC47
	.string "あなたなら アダンさまと たたかっても\nいちげきで やられなくて すむかもね{EOS}"
	.if (. - gText_Rom_20EC47) > 0x27
	.error "gText_Rom_20EC47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EC47) < 0x27
	.space 0x27 - (. - gText_Rom_20EC47)
	.endif
