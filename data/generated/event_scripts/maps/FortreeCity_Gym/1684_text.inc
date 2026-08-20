	@ data/maps/FortreeCity_Gym/scripts.inc:282 FortreeCity_Gym_Text_GymStatueCertified
	.globl gText_Rom_204AAF
gText_Rom_204AAF: @ 0x08204AAF
	.string "ヒワマキシティ ポケモンジム\pナギ にんてい トレーナー!\n{PLAYER}{EOS}"
	.if (. - gText_Rom_204AAF) > 0x21
	.error "gText_Rom_204AAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204AAF) < 0x21
	.space 0x21 - (. - gText_Rom_204AAF)
	.endif
