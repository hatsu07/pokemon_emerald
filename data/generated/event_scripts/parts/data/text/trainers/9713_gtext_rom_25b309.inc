	@ data/text/trainers.inc:716 Route109_Text_HaileyPostBattle
	.globl gText_Rom_25B309
gText_Rom_25B309: @ 0x0825B309
	.string "およげるように なったら\nポケモンも つよく なると おもう!$"
	.if (. - gText_Rom_25B309) > 0x20
	.error "gText_Rom_25B309 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B309) < 0x20
	.space 0x20 - (. - gText_Rom_25B309)
	.endif
