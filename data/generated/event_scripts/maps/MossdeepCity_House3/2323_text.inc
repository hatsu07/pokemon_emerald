	@ data/maps/MossdeepCity_House3/scripts.inc:31 MossdeepCity_House3_Text_SuperRodIsSuper
	.globl gText_Rom_20C7A1
gText_Rom_20C7A1: @ 0x0820C7A1
	.string "そうだろ そうだろ! すごいつりざおは\nほんとうに すごい からのお!$"
	.if (. - gText_Rom_20C7A1) > 0x24
	.error "gText_Rom_20C7A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C7A1) < 0x24
	.space 0x24 - (. - gText_Rom_20C7A1)
	.endif
