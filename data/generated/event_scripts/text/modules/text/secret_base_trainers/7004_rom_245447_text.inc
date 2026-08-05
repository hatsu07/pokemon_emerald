	@ data/text/secret_base_trainers.inc:61 SecretBase_Text_Trainer6DeclineBattle
	.globl gText_Rom_245447
gText_Rom_245447: @ 0x08245447
	.string "それじゃ また こんどね!$"
	.if (. - gText_Rom_245447) > 0xe
	.error "gText_Rom_245447 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245447) < 0xe
	.space 0xe - (. - gText_Rom_245447)
	.endif
