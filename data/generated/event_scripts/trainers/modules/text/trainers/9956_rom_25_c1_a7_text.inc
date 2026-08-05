	@ data/text/trainers.inc:1058 Route111_Text_TyronDefeat (+1 aliases)
	.globl gText_Rom_25C1A7
gText_Rom_25C1A7: @ 0x0825C1A7
	.string "ちょっと! ぼくの ポケモン\nちゃんと みてくれてた!?$"
	.if (. - gText_Rom_25C1A7) > 0x1d
	.error "gText_Rom_25C1A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C1A7) < 0x1d
	.space 0x1d - (. - gText_Rom_25C1A7)
	.endif
