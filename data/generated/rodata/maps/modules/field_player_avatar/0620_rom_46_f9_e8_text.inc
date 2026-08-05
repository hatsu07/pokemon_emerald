	@ asm/field_player_avatar.s:4692 Fishing10
	.globl gText_Rom_46F9E8
gText_Rom_46F9E8: @ 0x0846F9E8
	.string "ポケモンを　つりあげた！{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_46F9E8) > 0xf
	.error "gText_Rom_46F9E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_46F9E8) < 0xf
	.space 0xf - (. - gText_Rom_46F9E8)
	.endif
