	@ data/text/lottery_corner.inc:56 LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched
	.globl gText_Rom_2633B5
gText_Rom_2633B5: @ 0x082633B5
	.string "4ケタ あって いましたので\n1とう です!\l{STR_VAR_1}を さしあげます!!$"
	.if (. - gText_Rom_2633B5) > 0x24
	.error "gText_Rom_2633B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2633B5) < 0x24
	.space 0x24 - (. - gText_Rom_2633B5)
	.endif
