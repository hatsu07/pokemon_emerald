	@ data/text/trainers.inc:722 Route109_Text_ElijahDefeated (+1 aliases)
	.globl gText_Rom_25B347
gText_Rom_25B347: @ 0x0825B347
	.string "まけても カッコ いいだろ?$"
	.if (. - gText_Rom_25B347) > 0xf
	.error "gText_Rom_25B347 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B347) < 0xf
	.space 0xf - (. - gText_Rom_25B347)
	.endif
