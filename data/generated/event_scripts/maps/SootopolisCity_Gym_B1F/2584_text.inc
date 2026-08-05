	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:138 SootopolisCity_Gym_B1F_Text_BriannaDefeat (+1 aliases)
	.globl gText_Rom_20EF9B
gText_Rom_20EF9B: @ 0x0820EF9B
	.string "あら\nてかげん しすぎて しまいましたわ……$"
	.if (. - gText_Rom_20EF9B) > 0x17
	.error "gText_Rom_20EF9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EF9B) < 0x17
	.space 0x17 - (. - gText_Rom_20EF9B)
	.endif
