	@ src/strings.c:436 gText_PlaceItHere
	.globl gText_Rom_5CA745
gText_Rom_5CA745: @ 0x085CA745
	.string "ここに おきますか?$"
	.if (. - gText_Rom_5CA745) > 0xb
	.error "gText_Rom_5CA745 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA745) < 0xb
	.space 0xb - (. - gText_Rom_5CA745)
	.endif
