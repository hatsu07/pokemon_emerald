	@ src/strings.c:451 gText_NoDecorationsInUse
	.globl gText_Rom_5CA87A
gText_Rom_5CA87A: @ 0x085CA87A
	.string "グッズは おかれて いません!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5CA87A) > 0x12
	.error "gText_Rom_5CA87A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA87A) < 0x12
	.space 0x12 - (. - gText_Rom_5CA87A)
	.endif

