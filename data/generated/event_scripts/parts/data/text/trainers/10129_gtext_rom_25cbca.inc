	@ data/text/trainers.inc:1307 Route114_Text_ShaneDefeat (+1 aliases)
	.globl gText_Rom_25CBCA
gText_Rom_25CBCA: @ 0x0825CBCA
	.string "つよすぎるーっ!$"
	.if (. - gText_Rom_25CBCA) > 0x9
	.error "gText_Rom_25CBCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CBCA) < 0x9
	.space 0x9 - (. - gText_Rom_25CBCA)
	.endif
