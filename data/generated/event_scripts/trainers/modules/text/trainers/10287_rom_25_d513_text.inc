	@ data/text/trainers.inc:1535 Route115_Text_HeleneDefeat (+1 aliases)
	.globl gText_Rom_25D513
gText_Rom_25D513: @ 0x0825D513
	.string "くやしすぎるわ!$"
	.if (. - gText_Rom_25D513) > 0x9
	.error "gText_Rom_25D513 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D513) < 0x9
	.space 0x9 - (. - gText_Rom_25D513)
	.endif
