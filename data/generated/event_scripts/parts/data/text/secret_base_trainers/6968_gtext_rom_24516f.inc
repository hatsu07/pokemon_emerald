	@ data/text/secret_base_trainers.inc:10 SecretBase_Text_Trainer0Defeated
	.globl gText_Rom_24516F
gText_Rom_24516F: @ 0x0824516F
	.string "うわっ きみって つよいなー\nぼくが まけたこと ひみつに してね!$"
	.if (. - gText_Rom_24516F) > 0x23
	.error "gText_Rom_24516F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24516F) < 0x23
	.space 0x23 - (. - gText_Rom_24516F)
	.endif
