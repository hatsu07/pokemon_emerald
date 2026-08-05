	@ src/strings.c:68 gText_ReturnToPokedex
	.globl gText_Rom_5C9066
gText_Rom_5C9066: @ 0x085C9066
	.string "ずかんに もどります$"
	.if (. - gText_Rom_5C9066) > 0xb
	.error "gText_Rom_5C9066 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9066) < 0xb
	.space 0xb - (. - gText_Rom_5C9066)
	.endif
