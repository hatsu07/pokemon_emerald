	@ src/strings.c:1007 gText_Swap (+1 aliases)
	.globl gText_Rom_5DC121
gText_Rom_5DC121: @ 0x085DC121
	.string "てばなす$"
	.if (. - gText_Rom_5DC121) > 0x5
	.error "gText_Rom_5DC121 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC121) < 0x5
	.space 0x5 - (. - gText_Rom_5DC121)
	.endif
