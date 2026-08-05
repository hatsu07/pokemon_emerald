	@ data/text/lottery_corner.inc:42 LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched
	.globl gText_Rom_263357
gText_Rom_263357: @ 0x08263357
	.string "ざんねんでした\nすべて はずれの ようです$"
	.if (. - gText_Rom_263357) > 0x16
	.error "gText_Rom_263357 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263357) < 0x16
	.space 0x16 - (. - gText_Rom_263357)
	.endif
