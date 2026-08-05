	@ src/strings.c:34 gText_Select
	.globl gText_Rom_5C8E1D
gText_Rom_5C8E1D: @ 0x085C8E1D
	.string "セレクトボタン$"
	.if (. - gText_Rom_5C8E1D) > 0x8
	.error "gText_Rom_5C8E1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E1D) < 0x8
	.space 0x8 - (. - gText_Rom_5C8E1D)
	.endif
