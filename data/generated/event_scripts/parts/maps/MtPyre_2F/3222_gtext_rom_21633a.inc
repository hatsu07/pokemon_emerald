	@ data/maps/MtPyre_2F/scripts.inc:55 MtPyre_2F_Text_MarkIntro (+1 aliases)
	.globl gText_Rom_21633A
gText_Rom_21633A: @ 0x0821633A
	.string "おまえも ポケモン さがしに きたのか?\nあとから きた くせに なまいきだ!$"
	.if (. - gText_Rom_21633A) > 0x28
	.error "gText_Rom_21633A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21633A) < 0x28
	.space 0x28 - (. - gText_Rom_21633A)
	.endif
