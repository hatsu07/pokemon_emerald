	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:63 Route110_TrickHousePuzzle1_Text_RobinDefeat (+1 aliases)
	.globl gText_Rom_23E027
gText_Rom_23E027: @ 0x0823E027
	.string "きを とられていたら\nまけちゃったわ!"
	.byte EOS
	.if (. - gText_Rom_23E027) > 0x14
	.error "gText_Rom_23E027 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E027) < 0x14
	.space 0x14 - (. - gText_Rom_23E027)
	.endif
