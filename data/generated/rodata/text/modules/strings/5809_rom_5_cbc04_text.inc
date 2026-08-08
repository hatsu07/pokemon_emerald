	@ src/strings.c:606 gText_FansQuestion
	.globl gText_Rom_5CBC04
gText_Rom_5CBC04: @ 0x085CBC04
	.string "ファンのしつもん$"
	.if (. - gText_Rom_5CBC04) > 0x9
	.error "gText_Rom_5CBC04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC04) < 0x9
	.space 0x9 - (. - gText_Rom_5CBC04)
	.endif
