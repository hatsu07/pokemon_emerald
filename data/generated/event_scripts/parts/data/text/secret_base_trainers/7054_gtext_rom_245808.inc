	@ data/text/secret_base_trainers.inc:133 SecretBase_Text_Trainer8DeclineBattle
	.globl gText_Rom_245808
gText_Rom_245808: @ 0x08245808
	.string "いつでも しょうぶ まってるわ!$"
	.if (. - gText_Rom_245808) > 0x11
	.error "gText_Rom_245808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245808) < 0x11
	.space 0x11 - (. - gText_Rom_245808)
	.endif
