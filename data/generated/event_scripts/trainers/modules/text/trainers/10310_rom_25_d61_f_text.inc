	@ data/text/trainers.inc:1565 Route116_Text_ClarkPostBattle
	.globl gText_Rom_25D61F
gText_Rom_25D61F: @ 0x0825D61F
	.string "トンネルなど なくても かまわん\nやまおとこは やまが みち なのだ!$"
	.if (. - gText_Rom_25D61F) > 0x24
	.error "gText_Rom_25D61F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D61F) < 0x24
	.space 0x24 - (. - gText_Rom_25D61F)
	.endif
