	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:66 SootopolisCity_Gym_B1F_Text_CrissyDefeat (+1 aliases)
	.globl gText_Rom_20EC2B
gText_Rom_20EC2B: @ 0x0820EC2B
	.string "つよい じゃない!!\nかわいい みために だまされたわ$"
	.if (. - gText_Rom_20EC2B) > 0x1c
	.error "gText_Rom_20EC2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EC2B) < 0x1c
	.space 0x1c - (. - gText_Rom_20EC2B)
	.endif
