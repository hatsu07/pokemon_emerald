	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:60 SootopolisCity_Gym_B1F_Text_AndreaPostBattle
	.globl gText_Rom_20EBE4
gText_Rom_20EBE4: @ 0x0820EBE4
	.string "すべての ゆかに ヒビを いれると\nなにかが おこるわよ{EOS}"
	.if (. - gText_Rom_20EBE4) > 0x1d
	.error "gText_Rom_20EBE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EBE4) < 0x1d
	.space 0x1d - (. - gText_Rom_20EBE4)
	.endif
