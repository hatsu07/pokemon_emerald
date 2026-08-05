	@ data/text/trainers.inc:527 Route108_Text_TaraDefeated (+1 aliases)
	.globl gText_Rom_25AC43
gText_Rom_25AC43: @ 0x0825AC43
	.string "いやん まけたわーっ!$"
	.if (. - gText_Rom_25AC43) > 0xc
	.error "gText_Rom_25AC43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AC43) < 0xc
	.space 0xc - (. - gText_Rom_25AC43)
	.endif
