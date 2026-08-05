	@ data/text/secret_base_trainers.inc:175 SecretBase_Text_Trainer9PostBattle
	.globl gText_Rom_245A24
gText_Rom_245A24: @ 0x08245A24
	.string "わたしの センス どうだった?\nもっと センスを みがくわよー$"
	.if (. - gText_Rom_245A24) > 0x20
	.error "gText_Rom_245A24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245A24) < 0x20
	.space 0x20 - (. - gText_Rom_245A24)
	.endif
