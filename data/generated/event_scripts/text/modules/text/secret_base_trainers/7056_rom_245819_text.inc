	@ data/text/secret_base_trainers.inc:136 SecretBase_Text_Trainer8Defeated
	.globl gText_Rom_245819
gText_Rom_245819: @ 0x08245819
	.string "えっ もしかして わたしの まけ?$"
	.if (. - gText_Rom_245819) > 0x12
	.error "gText_Rom_245819 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245819) < 0x12
	.space 0x12 - (. - gText_Rom_245819)
	.endif
