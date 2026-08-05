	@ data/text/trainers.inc:2249 Route120_Text_LeonelDefeat (+1 aliases)
	.globl gText_Rom_25F3AD
gText_Rom_25F3AD: @ 0x0825F3AD
	.string "きみの こだわり みせてもらったよ!$"
	.if (. - gText_Rom_25F3AD) > 0x13
	.error "gText_Rom_25F3AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F3AD) < 0x13
	.space 0x13 - (. - gText_Rom_25F3AD)
	.endif
