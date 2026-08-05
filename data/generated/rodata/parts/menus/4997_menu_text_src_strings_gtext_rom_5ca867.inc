	@ src/strings.c:450 gText_DecorationReturnedToPC
	.globl gText_Rom_5CA867
gText_Rom_5CA867: @ 0x085CA867
	.string "グッズを パソコンに もどしました!$"
	.if (. - gText_Rom_5CA867) > 0x13
	.error "gText_Rom_5CA867 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA867) < 0x13
	.space 0x13 - (. - gText_Rom_5CA867)
	.endif
