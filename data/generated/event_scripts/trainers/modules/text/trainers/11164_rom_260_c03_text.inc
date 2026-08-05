	@ data/text/trainers.inc:2828 Route126_Text_NikkiDefeat (+1 aliases)
	.globl gText_Rom_260C03
gText_Rom_260C03: @ 0x08260C03
	.string "アワと なって きえていく……\nぶくぶくぶく……$"
	.if (. - gText_Rom_260C03) > 0x19
	.error "gText_Rom_260C03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260C03) < 0x19
	.space 0x19 - (. - gText_Rom_260C03)
	.endif
