	@ src/strings.c:421 gText_Color161Shadow161
	.globl gText_Rom_5CA6C6
gText_Rom_5CA6C6: @ 0x085CA6C6
	.string "{COLOR 161}{SHADOW 161}$"
	.if (. - gText_Rom_5CA6C6) > 0x7
	.error "gText_Rom_5CA6C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6C6) < 0x7
	.space 0x7 - (. - gText_Rom_5CA6C6)
	.endif
