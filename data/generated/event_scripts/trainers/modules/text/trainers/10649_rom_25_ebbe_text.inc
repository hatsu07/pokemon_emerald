	@ data/text/trainers.inc:2063 Route119_Text_TakashiDefeat (+1 aliases)
	.globl gText_Rom_25EBBE
gText_Rom_25EBBE: @ 0x0825EBBE
	.string "つよいな きみーっ!$"
	.if (. - gText_Rom_25EBBE) > 0xb
	.error "gText_Rom_25EBBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EBBE) < 0xb
	.space 0xb - (. - gText_Rom_25EBBE)
	.endif
