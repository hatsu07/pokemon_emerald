	@ data/maps/Route116/scripts.inc:438 Route116_Text_NotWhatImLookingFor
	.globl gText_Rom_1EC2E9
gText_Rom_1EC2E9: @ 0x081EC2E9
	.string "うーむ……\nこれは くろいメガネ だね\lぼくが さがしているのと ちがうなあ……{EOS}"
	.if (. - gText_Rom_1EC2E9) > 0x29
	.error "gText_Rom_1EC2E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC2E9) < 0x29
	.space 0x29 - (. - gText_Rom_1EC2E9)
	.endif
