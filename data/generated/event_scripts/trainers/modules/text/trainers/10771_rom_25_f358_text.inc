	@ data/text/trainers.inc:2240 Route120_Text_CallieDefeat (+1 aliases)
	.globl gText_Rom_25F358
gText_Rom_25F358: @ 0x0825F358
	.string "いたいめに あったのは あたしのほうか$"
	.if (. - gText_Rom_25F358) > 0x14
	.error "gText_Rom_25F358 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F358) < 0x14
	.space 0x14 - (. - gText_Rom_25F358)
	.endif
