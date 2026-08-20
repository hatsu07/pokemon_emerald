	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:212 SootopolisCity_Gym_1F_Text_GymStatue
	.globl gText_Rom_20E8E5
gText_Rom_20E8E5: @ 0x0820E8E5
	.string "ルネシティ ポケモンジム{EOS}"
	.if (. - gText_Rom_20E8E5) > 0xd
	.error "gText_Rom_20E8E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E8E5) < 0xd
	.space 0xd - (. - gText_Rom_20E8E5)
	.endif
