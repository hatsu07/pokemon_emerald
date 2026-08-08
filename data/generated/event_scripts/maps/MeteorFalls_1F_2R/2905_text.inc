	@ data/maps/MeteorFalls_1F_2R/scripts.inc:128 MeteorFalls_1F_2R_Text_JayDefeat (+2 aliases)
	.globl gText_Rom_2133EB
gText_Rom_2133EB: @ 0x082133EB
	.string "ハツ『おやおや\nまけましたよ じいさん$"
	.if (. - gText_Rom_2133EB) > 0x14
	.error "gText_Rom_2133EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2133EB) < 0x14
	.space 0x14 - (. - gText_Rom_2133EB)
	.endif
