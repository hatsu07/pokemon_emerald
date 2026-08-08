	@ data/maps/Route119/scripts.inc:518 Route119_Text_BrendanDefeat (+1 aliases)
	.globl gText_Rom_1ED485
gText_Rom_1ED485: @ 0x081ED485
	.string "ふうん……\nけっこう つよく なってるんだな$"
	.if (. - gText_Rom_1ED485) > 0x17
	.error "gText_Rom_1ED485 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED485) < 0x17
	.space 0x17 - (. - gText_Rom_1ED485)
	.endif
