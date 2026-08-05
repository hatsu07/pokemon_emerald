	@ data/text/secret_base_trainers.inc:31 SecretBase_Text_Trainer5PostBattle
	.globl gText_Rom_245292
gText_Rom_245292: @ 0x08245292
	.string "このちかくに くることが あったら\nまた あそびに よってね!$"
	.if (. - gText_Rom_245292) > 0x20
	.error "gText_Rom_245292 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245292) < 0x20
	.space 0x20 - (. - gText_Rom_245292)
	.endif
