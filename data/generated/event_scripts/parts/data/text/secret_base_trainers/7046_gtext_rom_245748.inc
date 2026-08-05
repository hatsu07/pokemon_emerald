	@ data/text/secret_base_trainers.inc:121 SecretBase_Text_Trainer3PostBattle
	.globl gText_Rom_245748
gText_Rom_245748: @ 0x08245748
	.string "きみの ひみつきちは どこなんだい!\nこんど あそびに いこうかなー$"
	.if (. - gText_Rom_245748) > 0x23
	.error "gText_Rom_245748 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245748) < 0x23
	.space 0x23 - (. - gText_Rom_245748)
	.endif
