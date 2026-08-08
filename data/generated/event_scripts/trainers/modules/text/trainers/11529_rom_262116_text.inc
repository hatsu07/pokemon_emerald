	@ data/text/trainers.inc:3368 Route134_Text_AlexDefeat (+1 aliases)
	.globl gText_Rom_262116
gText_Rom_262116: @ 0x08262116
	.string "また バテた……$"
	.if (. - gText_Rom_262116) > 0x9
	.error "gText_Rom_262116 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262116) < 0x9
	.space 0x9 - (. - gText_Rom_262116)
	.endif
