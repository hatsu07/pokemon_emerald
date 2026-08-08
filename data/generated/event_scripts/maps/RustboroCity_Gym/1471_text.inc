	@ data/maps/RustboroCity_Gym/scripts.inc:234 RustboroCity_Gym_Text_GymStatueCertified
	.globl gText_Rom_2029BA
gText_Rom_2029BA: @ 0x082029BA
	.string "カナズミシティ ポケモンジム\pツツジ にんてい トレーナー!\n{PLAYER}$"
	.if (. - gText_Rom_2029BA) > 0x22
	.error "gText_Rom_2029BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2029BA) < 0x22
	.space 0x22 - (. - gText_Rom_2029BA)
	.endif
