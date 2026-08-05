	@ data/text/secret_base_trainers.inc:64 SecretBase_Text_Trainer6Defeated
	.globl gText_Rom_245455
gText_Rom_245455: @ 0x08245455
	.string "うーん わたしも まだまだねー\nもっと  べんきょう しないと!$"
	.if (. - gText_Rom_245455) > 0x21
	.error "gText_Rom_245455 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245455) < 0x21
	.space 0x21 - (. - gText_Rom_245455)
	.endif
