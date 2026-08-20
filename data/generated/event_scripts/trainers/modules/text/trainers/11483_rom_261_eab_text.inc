	@ data/text/trainers.inc:3299 Route133_Text_DebraPostBattle
	.globl gText_Rom_261EAB
gText_Rom_261EAB: @ 0x08261EAB
	.string "ながされる だけの じんせい なんて……\nもう イヤっ!{EOS}"
	.if (. - gText_Rom_261EAB) > 0x1d
	.error "gText_Rom_261EAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261EAB) < 0x1d
	.space 0x1d - (. - gText_Rom_261EAB)
	.endif
