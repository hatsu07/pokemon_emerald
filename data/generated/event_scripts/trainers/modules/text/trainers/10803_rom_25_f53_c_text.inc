	@ data/text/trainers.inc:2288 Route121_Text_TammyDefeat (+1 aliases)
	.globl gText_Rom_25F53C
gText_Rom_25F53C: @ 0x0825F53C
	.string "あたし まけたのね……$"
	.if (. - gText_Rom_25F53C) > 0xc
	.error "gText_Rom_25F53C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F53C) < 0xc
	.space 0xc - (. - gText_Rom_25F53C)
	.endif
