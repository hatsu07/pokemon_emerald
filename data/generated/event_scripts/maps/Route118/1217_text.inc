	@ data/maps/Route118/scripts.inc:275 Route118_Text_TryYourLuckFishing
	.globl gText_Rom_1ECC21
gText_Rom_1ECC21: @ 0x081ECC21
	.string "みずの ある ところなら\nどこでも つりを すると いいよ！$"
	.if (. - gText_Rom_1ECC21) > 0x1f
	.error "gText_Rom_1ECC21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ECC21) < 0x1f
	.space 0x1f - (. - gText_Rom_1ECC21)
	.endif
