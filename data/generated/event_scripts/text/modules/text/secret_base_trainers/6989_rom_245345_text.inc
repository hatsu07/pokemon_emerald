	@ data/text/secret_base_trainers.inc:40 SecretBase_Text_Trainer1AcceptBattle
	.globl gText_Rom_245345
gText_Rom_245345: @ 0x08245345
	.string "よしっ! ぼくの きちを まもるぞー!$"
	.if (. - gText_Rom_245345) > 0x14
	.error "gText_Rom_245345 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245345) < 0x14
	.space 0x14 - (. - gText_Rom_245345)
	.endif
