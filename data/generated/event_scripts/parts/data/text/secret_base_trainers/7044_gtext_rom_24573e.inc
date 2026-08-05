	@ data/text/secret_base_trainers.inc:118 SecretBase_Text_Trainer3Defeated
	.globl gText_Rom_24573E
gText_Rom_24573E: @ 0x0824573E
	.string "おわっちゃった……$"
	.if (. - gText_Rom_24573E) > 0xa
	.error "gText_Rom_24573E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24573E) < 0xa
	.space 0xa - (. - gText_Rom_24573E)
	.endif
