	@ data/maps/MossdeepCity_Gym/scripts.inc:471 MossdeepCity_Gym_Text_MaceyDefeat (+1 aliases)
	.globl gText_Rom_20BDA2
gText_Rom_20BDA2: @ 0x0820BDA2
	.string "ちょっと! なんなの その つよさ!{EOS}"
	.if (. - gText_Rom_20BDA2) > 0x13
	.error "gText_Rom_20BDA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BDA2) < 0x13
	.space 0x13 - (. - gText_Rom_20BDA2)
	.endif
