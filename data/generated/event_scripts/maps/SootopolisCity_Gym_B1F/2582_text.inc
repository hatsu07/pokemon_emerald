	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:135 SootopolisCity_Gym_B1F_Text_BriannaIntro (+1 aliases)
	.globl gText_Rom_20EF83
gText_Rom_20EF83: @ 0x0820EF83
	.string "うふふ……\nその ひっしな おかおが ステキよ$"
	.if (. - gText_Rom_20EF83) > 0x18
	.error "gText_Rom_20EF83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EF83) < 0x18
	.space 0x18 - (. - gText_Rom_20EF83)
	.endif
