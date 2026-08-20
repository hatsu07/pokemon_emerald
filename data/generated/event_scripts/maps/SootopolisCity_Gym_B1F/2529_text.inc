	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:57 SootopolisCity_Gym_B1F_Text_AndreaDefeat (+1 aliases)
	.globl gText_Rom_20EBD7
gText_Rom_20EBD7: @ 0x0820EBD7
	.string "アダンさま ごめんね……{EOS}"
	.if (. - gText_Rom_20EBD7) > 0xd
	.error "gText_Rom_20EBD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EBD7) < 0xd
	.space 0xd - (. - gText_Rom_20EBD7)
	.endif
