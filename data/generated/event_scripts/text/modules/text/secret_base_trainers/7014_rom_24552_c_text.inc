	@ data/text/secret_base_trainers.inc:76 SecretBase_Text_Trainer2AcceptBattle
	.globl gText_Rom_24552C
gText_Rom_24552C: @ 0x0824552C
	.string "そう こなくっちゃ!$"
	.if (. - gText_Rom_24552C) > 0xb
	.error "gText_Rom_24552C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24552C) < 0xb
	.space 0xb - (. - gText_Rom_24552C)
	.endif
