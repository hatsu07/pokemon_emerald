	@ data/text/secret_base_trainers.inc:28 SecretBase_Text_Trainer5Defeated
	.globl gText_Rom_24526D
gText_Rom_24526D: @ 0x0824526D
	.string "うーん わたしの まけね…\nわたしが まけたのは ないしょの ひみつね!$"
	.if (. - gText_Rom_24526D) > 0x25
	.error "gText_Rom_24526D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24526D) < 0x25
	.space 0x25 - (. - gText_Rom_24526D)
	.endif
