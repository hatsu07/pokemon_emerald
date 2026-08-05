	@ data/text/trainers.inc:2054 Route119_Text_YasuDefeat (+1 aliases)
	.globl gText_Rom_25EB78
gText_Rom_25EB78: @ 0x0825EB78
	.string "まいった……!$"
	.if (. - gText_Rom_25EB78) > 0x8
	.error "gText_Rom_25EB78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EB78) < 0x8
	.space 0x8 - (. - gText_Rom_25EB78)
	.endif
