	@ data/text/trainers.inc:1292 Route114_Text_LennyPostBattle
	.globl gText_Rom_25CB0F
gText_Rom_25CB0F: @ 0x0825CB0F
	.string "こどものころ こだま って\nむこうの やまにいる モノマネさんが\lやっほー! って いってると おもってた$"
	.if (. - gText_Rom_25CB0F) > 0x36
	.error "gText_Rom_25CB0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CB0F) < 0x36
	.space 0x36 - (. - gText_Rom_25CB0F)
	.endif
