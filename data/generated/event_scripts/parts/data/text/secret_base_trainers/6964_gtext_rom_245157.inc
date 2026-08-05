	@ data/text/secret_base_trainers.inc:4 SecretBase_Text_Trainer0AcceptBattle
	.globl gText_Rom_245157
gText_Rom_245157: @ 0x08245157
	.string "それじゃ いくよ!$"
	.if (. - gText_Rom_245157) > 0xa
	.error "gText_Rom_245157 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245157) < 0xa
	.space 0xa - (. - gText_Rom_245157)
	.endif
