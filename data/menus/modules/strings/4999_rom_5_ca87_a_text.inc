	@ src/strings.c:451 gText_NoDecorationsInUse
	.globl gText_NoDecorationsInUse
gText_NoDecorationsInUse: @ 0x085CA87A
	.string "グッズは おかれて いません!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_NoDecorationsInUse) > 0x12
	.error "gText_NoDecorationsInUse may not grow beyond its original slot"
	.endif
	.if (. - gText_NoDecorationsInUse) < 0x12
	.space 0x12 - (. - gText_NoDecorationsInUse)
	.endif

