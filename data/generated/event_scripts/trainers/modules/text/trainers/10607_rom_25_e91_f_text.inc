	@ data/text/trainers.inc:2000 Route119_Text_JacksonRegister
	.globl gText_Rom_25E91F
gText_Rom_25E91F: @ 0x0825E91F
	.string "ちしきぶそくと わらわずに\nこんど また あいてを してやってくれよな$"
	.if (. - gText_Rom_25E91F) > 0x24
	.error "gText_Rom_25E91F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E91F) < 0x24
	.space 0x24 - (. - gText_Rom_25E91F)
	.endif
