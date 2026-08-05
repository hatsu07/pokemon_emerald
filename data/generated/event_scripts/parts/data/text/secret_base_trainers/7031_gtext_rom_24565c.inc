	@ data/text/secret_base_trainers.inc:100 SecretBase_Text_Trainer7Defeated
	.globl gText_Rom_24565C
gText_Rom_24565C: @ 0x0824565C
	.string "まいりました……$"
	.if (. - gText_Rom_24565C) > 0x9
	.error "gText_Rom_24565C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24565C) < 0x9
	.space 0x9 - (. - gText_Rom_24565C)
	.endif
