	@ data/maps/RustboroCity_Gym/scripts.inc:231 RustboroCity_Gym_Text_GymStatue
	.globl gText_Rom_2029AB
gText_Rom_2029AB: @ 0x082029AB
	.string "カナズミシティ ポケモンジム{EOS}"
	.if (. - gText_Rom_2029AB) > 0xf
	.error "gText_Rom_2029AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2029AB) < 0xf
	.space 0xf - (. - gText_Rom_2029AB)
	.endif
