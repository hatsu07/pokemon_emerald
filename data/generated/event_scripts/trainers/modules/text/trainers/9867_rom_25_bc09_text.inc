	@ data/text/trainers.inc:932 Route111_Text_BeckyDefeat (+1 aliases)
	.globl gText_Rom_25BC09
gText_Rom_25BC09: @ 0x0825BC09
	.string "いまいち だわ……$"
	.if (. - gText_Rom_25BC09) > 0xa
	.error "gText_Rom_25BC09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BC09) < 0xa
	.space 0xa - (. - gText_Rom_25BC09)
	.endif
