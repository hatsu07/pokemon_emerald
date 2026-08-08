	@ data/text/trainers.inc:1745 Route117_Text_MariaDefeat (+2 aliases)
	.globl gText_Rom_25DE21
gText_Rom_25DE21: @ 0x0825DE21
	.string "れんしゅうが たりなかったかな?$"
	.if (. - gText_Rom_25DE21) > 0x11
	.error "gText_Rom_25DE21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DE21) < 0x11
	.space 0x11 - (. - gText_Rom_25DE21)
	.endif
