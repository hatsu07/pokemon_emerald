	@ data/maps/MossdeepCity_Gym/scripts.inc:501 MossdeepCity_Gym_Text_RegisteredTateAndLiza
	.globl gText_Rom_20C058
gText_Rom_20C058: @ 0x0820C058
	.string "ジムリーダー フウとランを\nポケナビに とうろく した!$"
	.if (. - gText_Rom_20C058) > 0x1d
	.error "gText_Rom_20C058 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C058) < 0x1d
	.space 0x1d - (. - gText_Rom_20C058)
	.endif
