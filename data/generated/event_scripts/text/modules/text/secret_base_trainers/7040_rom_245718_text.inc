	@ data/text/secret_base_trainers.inc:112 SecretBase_Text_Trainer3AcceptBattle
	.globl gText_Rom_245718
gText_Rom_245718: @ 0x08245718
	.string "かんたんには おわらせ ないよ!$"
	.if (. - gText_Rom_245718) > 0x11
	.error "gText_Rom_245718 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245718) < 0x11
	.space 0x11 - (. - gText_Rom_245718)
	.endif
