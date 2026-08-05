	@ src/strings.c:219 gText_ShopQuit
	.globl gText_Rom_5C98CC
gText_Rom_5C98CC: @ 0x085C98CC
	.string "なんでもないです$"
	.if (. - gText_Rom_5C98CC) > 0x9
	.error "gText_Rom_5C98CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C98CC) < 0x9
	.space 0x9 - (. - gText_Rom_5C98CC)
	.endif
