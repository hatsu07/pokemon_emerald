	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:102 SootopolisCity_Gym_B1F_Text_OliviaDefeat (+1 aliases)
	.globl gText_Rom_20EE11
gText_Rom_20EE11: @ 0x0820EE11
	.string "たおされちゃった……{EOS}"
	.if (. - gText_Rom_20EE11) > 0xb
	.error "gText_Rom_20EE11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EE11) < 0xb
	.space 0xb - (. - gText_Rom_20EE11)
	.endif
