	@ data/text/secret_base_trainers.inc:67 SecretBase_Text_Trainer6PostBattle
	.globl gText_Rom_245476
gText_Rom_245476: @ 0x08245476
	.string "しょうぶ してくれて どうも ありがとう!\nまた あしたも きてねー$"
	.if (. - gText_Rom_245476) > 0x23
	.error "gText_Rom_245476 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245476) < 0x23
	.space 0x23 - (. - gText_Rom_245476)
	.endif
