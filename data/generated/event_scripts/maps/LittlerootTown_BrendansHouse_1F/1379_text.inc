	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:402 PlayersHouse_1F_Text_BetterGetBackToGym
	.globl gText_Rom_1EFE5D
gText_Rom_1EFE5D: @ 0x081EFE5D
	.string "では わたしは\nトウカの ジムに もどるよ\pママ\nいえのこと たのんだよ$"
	.if (. - gText_Rom_1EFE5D) > 0x25
	.error "gText_Rom_1EFE5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFE5D) < 0x25
	.space 0x25 - (. - gText_Rom_1EFE5D)
	.endif
