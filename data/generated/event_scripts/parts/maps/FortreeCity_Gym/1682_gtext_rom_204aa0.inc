	@ data/maps/FortreeCity_Gym/scripts.inc:279 FortreeCity_Gym_Text_GymStatue
	.globl gText_Rom_204AA0
gText_Rom_204AA0: @ 0x08204AA0
	.string "ヒワマキシティ ポケモンジム$"
	.if (. - gText_Rom_204AA0) > 0xf
	.error "gText_Rom_204AA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204AA0) < 0xf
	.space 0xf - (. - gText_Rom_204AA0)
	.endif
