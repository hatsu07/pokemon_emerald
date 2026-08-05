	@ data/text/trainers.inc:2147 Route120_Text_LorenzoDefeat (+1 aliases)
	.globl gText_Rom_25EF24
gText_Rom_25EF24: @ 0x0825EF24
	.string "そんなに つよい ポケモンと いっしょなら\nそうなんの おそれは ないな!$"
	.if (. - gText_Rom_25EF24) > 0x26
	.error "gText_Rom_25EF24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EF24) < 0x26
	.space 0x26 - (. - gText_Rom_25EF24)
	.endif
