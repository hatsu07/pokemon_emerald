	@ data/text/trainers.inc:2399 Route123_Text_WendyDefeat (+1 aliases)
	.globl gText_Rom_25F9AD
gText_Rom_25F9AD: @ 0x0825F9AD
	.string "すばらしいわ……!$"
	.if (. - gText_Rom_25F9AD) > 0xa
	.error "gText_Rom_25F9AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F9AD) < 0xa
	.space 0xa - (. - gText_Rom_25F9AD)
	.endif
