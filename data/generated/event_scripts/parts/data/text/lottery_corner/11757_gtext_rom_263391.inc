	@ data/text/lottery_corner.inc:51 LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched
	.globl gText_Rom_263391
gText_Rom_263391: @ 0x08263391
	.string "3ケタ あって いましたので\n2とう です!\l{STR_VAR_1}を さしあげます!!$"
	.if (. - gText_Rom_263391) > 0x24
	.error "gText_Rom_263391 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263391) < 0x24
	.space 0x24 - (. - gText_Rom_263391)
	.endif
