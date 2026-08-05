	@ src/strings.c:89 gText_DexSearchAlphaSTU
	.globl gText_Rom_5C916D
gText_Rom_5C916D: @ 0x085C916D
	.string "まみむめも$"
	.if (. - gText_Rom_5C916D) > 0x6
	.error "gText_Rom_5C916D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C916D) < 0x6
	.space 0x6 - (. - gText_Rom_5C916D)
	.endif
