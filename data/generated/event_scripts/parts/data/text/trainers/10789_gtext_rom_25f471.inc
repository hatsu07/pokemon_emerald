	@ data/text/trainers.inc:2267 Route121_Text_WalterDefeat (+1 aliases)
	.globl gText_Rom_25F471
gText_Rom_25F471: @ 0x0825F471
	.string "おみごと ですな$"
	.if (. - gText_Rom_25F471) > 0x9
	.error "gText_Rom_25F471 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F471) < 0x9
	.space 0x9 - (. - gText_Rom_25F471)
	.endif
