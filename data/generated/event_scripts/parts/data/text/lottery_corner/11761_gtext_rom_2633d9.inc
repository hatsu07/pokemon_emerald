	@ data/text/lottery_corner.inc:61 LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched
	.globl gText_Rom_2633D9
gText_Rom_2633D9: @ 0x082633D9
	.string "なんと 5ケタ すべて\nあって いました!!\pとくとうです!!\n{STR_VAR_1}を さしあげます!!$"
	.if (. - gText_Rom_2633D9) > 0x2d
	.error "gText_Rom_2633D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2633D9) < 0x2d
	.space 0x2d - (. - gText_Rom_2633D9)
	.endif
