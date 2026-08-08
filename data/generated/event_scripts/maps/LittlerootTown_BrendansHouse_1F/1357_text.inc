	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:341 PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom
	.globl gText_Rom_1EFC2D
gText_Rom_1EFC2D: @ 0x081EFC2D
	.string "ママ『あら\nその バッジ パパから もらったの!?\pじゃあ ママも これ あげようかな$"
	.if (. - gText_Rom_1EFC2D) > 0x2c
	.error "gText_Rom_1EFC2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFC2D) < 0x2c
	.space 0x2c - (. - gText_Rom_1EFC2D)
	.endif
