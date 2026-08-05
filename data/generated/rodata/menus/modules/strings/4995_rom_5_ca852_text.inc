	@ src/strings.c:449 gText_ReturnDecorationToPC
	.globl gText_Rom_5CA852
gText_Rom_5CA852: @ 0x085CA852
	.string "このグッズを パソコンに もどしますか?$"
	.if (. - gText_Rom_5CA852) > 0x15
	.error "gText_Rom_5CA852 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA852) < 0x15
	.space 0x15 - (. - gText_Rom_5CA852)
	.endif
