	@ data/text/secret_base_trainers.inc:46 SecretBase_Text_Trainer1Defeated
	.globl gText_Rom_245374
gText_Rom_245374: @ 0x08245374
	.string "もう ダメだ!\nこうさーん!$"
	.if (. - gText_Rom_245374) > 0xf
	.error "gText_Rom_245374 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245374) < 0xf
	.space 0xf - (. - gText_Rom_245374)
	.endif
