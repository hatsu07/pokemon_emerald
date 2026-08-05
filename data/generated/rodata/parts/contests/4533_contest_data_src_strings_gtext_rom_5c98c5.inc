	@ src/strings.c:218 gText_ShopSell
	.globl gText_Rom_5C98C5
gText_Rom_5C98C5: @ 0x085C98C5
	.string "うりに きた$"
	.if (. - gText_Rom_5C98C5) > 0x7
	.error "gText_Rom_5C98C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C98C5) < 0x7
	.space 0x7 - (. - gText_Rom_5C98C5)
	.endif
