	@ src/strings.c:419 gText_PutAway
	.globl gText_Rom_5CA6B4
gText_Rom_5CA6B4: @ 0x085CA6B4
	.string "グッズを もどす$"
	.if (. - gText_Rom_5CA6B4) > 0x9
	.error "gText_Rom_5CA6B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6B4) < 0x9
	.space 0x9 - (. - gText_Rom_5CA6B4)
	.endif
