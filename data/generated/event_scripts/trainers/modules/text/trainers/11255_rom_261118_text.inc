	@ data/text/trainers.inc:2963 Route127_Text_KojiPostRematch
	.globl gText_Rom_261118
gText_Rom_261118: @ 0x08261118
	.string "しばらく おまえの ズックと\nおれの はだし こうかん してみないか?$"
	.if (. - gText_Rom_261118) > 0x24
	.error "gText_Rom_261118 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261118) < 0x24
	.space 0x24 - (. - gText_Rom_261118)
	.endif
