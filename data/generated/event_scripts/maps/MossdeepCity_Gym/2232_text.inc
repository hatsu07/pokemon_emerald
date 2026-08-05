	@ data/maps/MossdeepCity_Gym/scripts.inc:435 MossdeepCity_Gym_Text_SylviaDefeat (+1 aliases)
	.globl gText_Rom_20BC60
gText_Rom_20BC60: @ 0x0820BC60
	.string "あなたは\nおそろしい ことを……$"
	.if (. - gText_Rom_20BC60) > 0x11
	.error "gText_Rom_20BC60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BC60) < 0x11
	.space 0x11 - (. - gText_Rom_20BC60)
	.endif
