	@ data/text/secret_base_trainers.inc:7 SecretBase_Text_Trainer0DeclineBattle
	.globl gText_Rom_245161
gText_Rom_245161: @ 0x08245161
	.string "えっ いまは むりなんだ…$"
	.if (. - gText_Rom_245161) > 0xe
	.error "gText_Rom_245161 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245161) < 0xe
	.space 0xe - (. - gText_Rom_245161)
	.endif
