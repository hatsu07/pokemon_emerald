	@ data/maps/MossdeepCity_Gym/scripts.inc:510 MossdeepCity_Gym_Text_GymStatue
	.globl gText_Rom_20C153
gText_Rom_20C153: @ 0x0820C153
	.string "トクサネシティ ポケモンジム{EOS}"
	.if (. - gText_Rom_20C153) > 0xf
	.error "gText_Rom_20C153 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C153) < 0xf
	.space 0xf - (. - gText_Rom_20C153)
	.endif
