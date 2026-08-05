	@ data/text/lottery_corner.inc:17 LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain (+1 aliases)
	.globl gText_Rom_26324A
gText_Rom_26324A: @ 0x0826324A
	.string "それでは また おこし ください$"
	.if (. - gText_Rom_26324A) > 0x11
	.error "gText_Rom_26324A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26324A) < 0x11
	.space 0x11 - (. - gText_Rom_26324A)
	.endif
