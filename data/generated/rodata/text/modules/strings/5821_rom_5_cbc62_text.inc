	@ src/strings.c:610 gText_YouCannotQuitHere
	.globl gText_Rom_5CBC62
gText_Rom_5CBC62: @ 0x085CBC62
	.string "ここでは とちゅうで$"
	.if (. - gText_Rom_5CBC62) > 0xb
	.error "gText_Rom_5CBC62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC62) < 0xb
	.space 0xb - (. - gText_Rom_5CBC62)
	.endif
