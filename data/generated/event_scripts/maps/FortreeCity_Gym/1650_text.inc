	@ data/maps/FortreeCity_Gym/scripts.inc:200 FortreeCity_Gym_Text_AshleyDefeat (+1 aliases)
	.globl gText_Rom_2047B9
gText_Rom_2047B9: @ 0x082047B9
	.string "たおされ ちゃった……{EOS}"
	.if (. - gText_Rom_2047B9) > 0xc
	.error "gText_Rom_2047B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2047B9) < 0xc
	.space 0xc - (. - gText_Rom_2047B9)
	.endif
