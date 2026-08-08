	@ data/text/trainers.inc:1802 Route117_Text_AnnaRematchDefeat (+1 aliases)
	.globl gText_Rom_25E122
gText_Rom_25E122: @ 0x0825E122
	.string "ミホ『ちょうしが でなかったのよ$"
	.if (. - gText_Rom_25E122) > 0x11
	.error "gText_Rom_25E122 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E122) < 0x11
	.space 0x11 - (. - gText_Rom_25E122)
	.endif
