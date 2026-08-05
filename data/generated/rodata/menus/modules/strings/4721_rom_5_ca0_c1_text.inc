	@ src/strings.c:315 gText_RestoreWhichMove
	.globl gText_Rom_5CA0C1
gText_Rom_5CA0C1: @ 0x085CA0C1
	.string "どれを かいふくする?$"
	.if (. - gText_Rom_5CA0C1) > 0xc
	.error "gText_Rom_5CA0C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0C1) < 0xc
	.space 0xc - (. - gText_Rom_5CA0C1)
	.endif
