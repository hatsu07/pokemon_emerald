	@ data/text/trainers.inc:3119 Route130_Text_KatieDefeat (+1 aliases)
	.globl gText_Rom_261716
gText_Rom_261716: @ 0x08261716
	.string "うみ ひろく\nポケモン せかい\lまた ひろし……{EOS}"
	.if (. - gText_Rom_261716) > 0x19
	.error "gText_Rom_261716 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261716) < 0x19
	.space 0x19 - (. - gText_Rom_261716)
	.endif
