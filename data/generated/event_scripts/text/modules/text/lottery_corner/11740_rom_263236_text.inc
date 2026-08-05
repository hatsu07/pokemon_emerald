	@ data/text/lottery_corner.inc:13 LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow
	.globl gText_Rom_263236
gText_Rom_263236: @ 0x08263236
	.string "また あした いこう\nおこし ください$"
	.if (. - gText_Rom_263236) > 0x14
	.error "gText_Rom_263236 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263236) < 0x14
	.space 0x14 - (. - gText_Rom_263236)
	.endif
