	@ data/maps/MeteorFalls_1F_2R/scripts.inc:69 MeteorFalls_1F_2R_Text_NicolasDefeat (+2 aliases)
	.globl gText_Rom_213293
gText_Rom_213293: @ 0x08213293
	.string "くっ!\nこれほど つよいとは……!$"
	.if (. - gText_Rom_213293) > 0x12
	.error "gText_Rom_213293 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213293) < 0x12
	.space 0x12 - (. - gText_Rom_213293)
	.endif
