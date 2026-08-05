	@ src/strings.c:217 gText_ShopBuy
	.globl gText_Rom_5C98BE
gText_Rom_5C98BE: @ 0x085C98BE
	.string "かいに きた$"
	.if (. - gText_Rom_5C98BE) > 0x7
	.error "gText_Rom_5C98BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C98BE) < 0x7
	.space 0x7 - (. - gText_Rom_5C98BE)
	.endif
