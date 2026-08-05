	@ data/text/trainers.inc:2381 Route121_Text_PatDefeat (+1 aliases)
	.globl gText_Rom_25F90B
gText_Rom_25F90B: @ 0x0825F90B
	.string "すごいなァ!$"
	.if (. - gText_Rom_25F90B) > 0x7
	.error "gText_Rom_25F90B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F90B) < 0x7
	.space 0x7 - (. - gText_Rom_25F90B)
	.endif
