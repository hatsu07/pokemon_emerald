	@ data/text/trainers.inc:614 Route109_Text_RickyPostBattle
	.globl gText_Rom_25AF3E
gText_Rom_25AF3E: @ 0x0825AF3E
	.string "おなかも へってきた……\nうきわが おっきな ドーナッツに みえるよ$"
	.if (. - gText_Rom_25AF3E) > 0x23
	.error "gText_Rom_25AF3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AF3E) < 0x23
	.space 0x23 - (. - gText_Rom_25AF3E)
	.endif
