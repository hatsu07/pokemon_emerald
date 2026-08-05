	@ data/text/trainers.inc:617 Route109_Text_RickyRegister
	.globl gText_Rom_25AF61
gText_Rom_25AF61: @ 0x0825AF61
	.string "こんど のどが かわいて ないときに\nもういっかい しょうぶ してくれる?$"
	.if (. - gText_Rom_25AF61) > 0x26
	.error "gText_Rom_25AF61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AF61) < 0x26
	.space 0x26 - (. - gText_Rom_25AF61)
	.endif
