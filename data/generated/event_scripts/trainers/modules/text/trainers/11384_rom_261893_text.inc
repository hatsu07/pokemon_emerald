	@ data/text/trainers.inc:3155 Route131_Text_SusieDefeat (+1 aliases)
	.globl gText_Rom_261893
gText_Rom_261893: @ 0x08261893
	.string "みかけに よらず\nつよいわねーっ!$"
	.if (. - gText_Rom_261893) > 0x12
	.error "gText_Rom_261893 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261893) < 0x12
	.space 0x12 - (. - gText_Rom_261893)
	.endif
