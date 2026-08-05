	@ data/text/secret_base_trainers.inc:139 SecretBase_Text_Trainer8PostBattle
	.globl gText_Rom_24582B
gText_Rom_24582B: @ 0x0824582B
	.string "グッズあつめ まけないわよ!\nまた あそびに きてね!$"
	.if (. - gText_Rom_24582B) > 0x1c
	.error "gText_Rom_24582B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24582B) < 0x1c
	.space 0x1c - (. - gText_Rom_24582B)
	.endif
