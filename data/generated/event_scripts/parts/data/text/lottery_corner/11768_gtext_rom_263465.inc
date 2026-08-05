	@ data/text/lottery_corner.inc:17 LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain (+1 aliases)
	.globl gText_Rom_263465
gText_Rom_263465: @ 0x08263465
	.string "それでは また おこし ください$"
	.if (. - gText_Rom_263465) > 0x11
	.error "gText_Rom_263465 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263465) < 0x11
	.space 0x11 - (. - gText_Rom_263465)
	.endif
