	@ src/strings.c:607 gJPText_WhatIsTheQuizAnswer (+1 aliases)
	.globl gText_Rom_5CBCA0
gText_Rom_5CBCA0: @ 0x085CBCA0
	.string "クイズの こたえは？$"
	.if (. - gText_Rom_5CBCA0) > 0xb
	.error "gText_Rom_5CBCA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCA0) < 0xb
	.space 0xb - (. - gText_Rom_5CBCA0)
	.endif
