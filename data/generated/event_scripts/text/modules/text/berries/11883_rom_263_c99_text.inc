	@ data/text/berries.inc:131 Route123_BerryMastersHouse_Text_Ah
	.globl gText_Rom_263C99
gText_Rom_263C99: @ 0x08263C99
	.string "ほう……$"
	.if (. - gText_Rom_263C99) > 0x5
	.error "gText_Rom_263C99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263C99) < 0x5
	.space 0x5 - (. - gText_Rom_263C99)
	.endif
