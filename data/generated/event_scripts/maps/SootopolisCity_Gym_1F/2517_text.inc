	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:215 SootopolisCity_Gym_1F_Text_GymStatueCertified
	.globl gText_Rom_20E8F2
gText_Rom_20E8F2: @ 0x0820E8F2
	.string "ルネシティ ポケモンジム\pアダン にんてい トレーナー!\n{PLAYER}$"
	.if (. - gText_Rom_20E8F2) > 0x20
	.error "gText_Rom_20E8F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E8F2) < 0x20
	.space 0x20 - (. - gText_Rom_20E8F2)
	.endif
