	@ data/text/secret_base_trainers.inc:82 SecretBase_Text_Trainer2Defeated
	.globl gText_Rom_245550
gText_Rom_245550: @ 0x08245550
	.string "やられたー!\nだけど ポケモン しょうぶは たのしいー!$"
	.if (. - gText_Rom_245550) > 0x1d
	.error "gText_Rom_245550 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245550) < 0x1d
	.space 0x1d - (. - gText_Rom_245550)
	.endif
