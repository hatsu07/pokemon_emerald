	@ data/text/trainers.inc:1580 Route116_Text_JoseDefeat (+1 aliases)
	.globl gText_Rom_25D6BC
gText_Rom_25D6BC: @ 0x0825D6BC
	.string "まけた……!\nかてると おもったのに……!$"
	.if (. - gText_Rom_25D6BC) > 0x16
	.error "gText_Rom_25D6BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D6BC) < 0x16
	.space 0x16 - (. - gText_Rom_25D6BC)
	.endif
