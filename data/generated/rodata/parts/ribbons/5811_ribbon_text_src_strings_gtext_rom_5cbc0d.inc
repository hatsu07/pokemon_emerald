	@ src/strings.c:607 gJPText_WhatIsTheQuizAnswer (+1 aliases)
	.globl gText_Rom_5CBC0D
gText_Rom_5CBC0D: @ 0x085CBC0D
	.string "クイズの こたえは？$"
	.if (. - gText_Rom_5CBC0D) > 0xb
	.error "gText_Rom_5CBC0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC0D) < 0xb
	.space 0xb - (. - gText_Rom_5CBC0D)
	.endif
