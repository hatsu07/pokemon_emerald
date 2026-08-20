	@ data/maps/MossdeepCity_Gym/scripts.inc:513 MossdeepCity_Gym_Text_GymStatueCertified
	.globl gText_Rom_20C162
gText_Rom_20C162: @ 0x0820C162
	.string "トクサネシティ ポケモンジム\pフウ ラン にんてい トレーナー!\n{PLAYER}{EOS}"
	.if (. - gText_Rom_20C162) > 0x24
	.error "gText_Rom_20C162 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C162) < 0x24
	.space 0x24 - (. - gText_Rom_20C162)
	.endif
