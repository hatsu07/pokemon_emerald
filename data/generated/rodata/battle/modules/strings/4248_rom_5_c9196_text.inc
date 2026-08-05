	@ src/strings.c:98 gText_DexSearchColorPurple
	.globl gText_Rom_5C9196
gText_Rom_5C9196: @ 0x085C9196
	.string "むらさき$"
	.if (. - gText_Rom_5C9196) > 0x5
	.error "gText_Rom_5C9196 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9196) < 0x5
	.space 0x5 - (. - gText_Rom_5C9196)
	.endif
