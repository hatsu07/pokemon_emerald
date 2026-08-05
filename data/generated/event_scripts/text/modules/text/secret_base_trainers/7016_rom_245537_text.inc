	@ data/text/secret_base_trainers.inc:79 SecretBase_Text_Trainer2DeclineBattle
	.globl gText_Rom_245537
gText_Rom_245537: @ 0x08245537
	.string "よういが できたら\nいつでも こえを かけてね!$"
	.if (. - gText_Rom_245537) > 0x19
	.error "gText_Rom_245537 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245537) < 0x19
	.space 0x19 - (. - gText_Rom_245537)
	.endif
