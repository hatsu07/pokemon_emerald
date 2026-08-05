	@ src/strings.c:392 gText_ContestMoves (+1 aliases)
	.globl gText_Rom_5CA3FF
gText_Rom_5CA3FF: @ 0x085CA3FF
	.string "コンテストわざ$"
	.if (. - gText_Rom_5CA3FF) > 0x8
	.error "gText_Rom_5CA3FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3FF) < 0x8
	.space 0x8 - (. - gText_Rom_5CA3FF)
	.endif
