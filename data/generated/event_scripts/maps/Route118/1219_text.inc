	@ data/maps/Route118/scripts.inc:279 Route118_Text_DontYouLikeToFish
	.globl gText_Rom_1ECC40
gText_Rom_1ECC40: @ 0x081ECC40
	.string "つりは きらい かい？$"
	.if (. - gText_Rom_1ECC40) > 0xc
	.error "gText_Rom_1ECC40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ECC40) < 0xc
	.space 0xc - (. - gText_Rom_1ECC40)
	.endif
