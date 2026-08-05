	@ asm/contest.s:10884 ContestDebugDoPrint
	.globl gText_Rom_5C9401
gText_Rom_5C9401: @ 0x085C9401
	.string "ー$"
	.if (. - gText_Rom_5C9401) > 0x2
	.error "gText_Rom_5C9401 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9401) < 0x2
	.space 0x2 - (. - gText_Rom_5C9401)
	.endif
