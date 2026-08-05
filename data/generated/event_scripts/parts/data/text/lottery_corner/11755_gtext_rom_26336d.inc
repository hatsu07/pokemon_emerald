	@ data/text/lottery_corner.inc:46 LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched
	.globl gText_Rom_26336D
gText_Rom_26336D: @ 0x0826336D
	.string "2ケタ あって いましたので\n3とう です!\l{STR_VAR_1}を さしあげます!!$"
	.if (. - gText_Rom_26336D) > 0x24
	.error "gText_Rom_26336D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26336D) < 0x24
	.space 0x24 - (. - gText_Rom_26336D)
	.endif
