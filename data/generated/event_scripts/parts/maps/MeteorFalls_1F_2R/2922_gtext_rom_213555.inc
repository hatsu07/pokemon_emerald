	@ data/maps/MeteorFalls_1F_2R/scripts.inc:128 MeteorFalls_1F_2R_Text_JayDefeat (+2 aliases)
	.globl gText_Rom_213555
gText_Rom_213555: @ 0x08213555
	.string "ハツ『おやおや\nまけましたよ じいさん$"
	.if (. - gText_Rom_213555) > 0x14
	.error "gText_Rom_213555 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213555) < 0x14
	.space 0x14 - (. - gText_Rom_213555)
	.endif
