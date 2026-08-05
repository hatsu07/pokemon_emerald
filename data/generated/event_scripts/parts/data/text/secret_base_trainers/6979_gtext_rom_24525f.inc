	@ data/text/secret_base_trainers.inc:25 SecretBase_Text_Trainer5DeclineBattle
	.globl gText_Rom_24525F
gText_Rom_24525F: @ 0x0824525F
	.string "そう いまは むりなのね…$"
	.if (. - gText_Rom_24525F) > 0xe
	.error "gText_Rom_24525F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24525F) < 0xe
	.space 0xe - (. - gText_Rom_24525F)
	.endif
