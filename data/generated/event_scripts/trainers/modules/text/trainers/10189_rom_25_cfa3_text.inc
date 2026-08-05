	@ data/text/trainers.inc:1397 Route114_Text_IvyDefeat (+1 aliases)
	.globl gText_Rom_25CFA3
gText_Rom_25CFA3: @ 0x0825CFA3
	.string "イヨ『すごい たたかいかた!$"
	.if (. - gText_Rom_25CFA3) > 0xf
	.error "gText_Rom_25CFA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CFA3) < 0xf
	.space 0xf - (. - gText_Rom_25CFA3)
	.endif
