	@ src/strings.c:456 gText_BagIsFull
	.globl gText_Rom_5CA9B3
gText_Rom_5CA9B3: @ 0x085CA9B3
	.string "バッグが いっぱいです!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA9B3) > 0xf
	.error "gText_Rom_5CA9B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9B3) < 0xf
	.space 0xf - (. - gText_Rom_5CA9B3)
	.endif
