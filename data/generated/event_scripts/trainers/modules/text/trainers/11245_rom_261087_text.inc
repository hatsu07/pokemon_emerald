	@ data/text/trainers.inc:2948 Route127_Text_KojiDefeat (+1 aliases)
	.globl gText_Rom_261087
gText_Rom_261087: @ 0x08261087
	.string "いってェ!\nツメの あいだに こいしが……$"
	.if (. - gText_Rom_261087) > 0x16
	.error "gText_Rom_261087 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261087) < 0x16
	.space 0x16 - (. - gText_Rom_261087)
	.endif
