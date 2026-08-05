	@ data/text/secret_base_trainers.inc:43 SecretBase_Text_Trainer1DeclineBattle
	.globl gText_Rom_245359
gText_Rom_245359: @ 0x08245359
	.string "えっ この ばしょに きょうみが ないの?\nそっかー$"
	.if (. - gText_Rom_245359) > 0x1b
	.error "gText_Rom_245359 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245359) < 0x1b
	.space 0x1b - (. - gText_Rom_245359)
	.endif
