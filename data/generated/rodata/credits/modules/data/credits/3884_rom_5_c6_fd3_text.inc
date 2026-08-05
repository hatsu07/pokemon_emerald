	@ src/data/credits.h:147 sCreditsText_KenjiTominaga
	.globl gText_Rom_5C6FD3
gText_Rom_5C6FD3: @ 0x085C6FD3
	.string "とみなが けんじ$"
	.if (. - gText_Rom_5C6FD3) > 0x9
	.error "gText_Rom_5C6FD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FD3) < 0x9
	.space 0x9 - (. - gText_Rom_5C6FD3)
	.endif
