	@ data/text/trainers.inc:2372 Route121_Text_MylesDefeat (+1 aliases)
	.globl gText_Rom_25F8C6
gText_Rom_25F8C6: @ 0x0825F8C6
	.string "すごーーい!$"
	.if (. - gText_Rom_25F8C6) > 0x7
	.error "gText_Rom_25F8C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F8C6) < 0x7
	.space 0x7 - (. - gText_Rom_25F8C6)
	.endif
