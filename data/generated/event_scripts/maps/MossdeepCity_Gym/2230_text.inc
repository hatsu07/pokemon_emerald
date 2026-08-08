	@ data/maps/MossdeepCity_Gym/scripts.inc:432 MossdeepCity_Gym_Text_SylviaIntro (+1 aliases)
	.globl gText_Rom_20BC40
gText_Rom_20BC40: @ 0x0820BC40
	.string "いのちを けずって でも\nこの しょうぶ かってみせるわ……!$"
	.if (. - gText_Rom_20BC40) > 0x20
	.error "gText_Rom_20BC40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BC40) < 0x20
	.space 0x20 - (. - gText_Rom_20BC40)
	.endif
