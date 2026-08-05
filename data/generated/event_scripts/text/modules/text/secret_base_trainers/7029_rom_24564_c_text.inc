	@ data/text/secret_base_trainers.inc:97 SecretBase_Text_Trainer7DeclineBattle
	.globl gText_Rom_24564C
gText_Rom_24564C: @ 0x0824564C
	.string "そう それは ざんねん です…$"
	.if (. - gText_Rom_24564C) > 0x10
	.error "gText_Rom_24564C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24564C) < 0x10
	.space 0x10 - (. - gText_Rom_24564C)
	.endif
