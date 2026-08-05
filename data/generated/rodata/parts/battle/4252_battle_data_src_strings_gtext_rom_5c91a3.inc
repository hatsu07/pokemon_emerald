	@ src/strings.c:101 gText_DexSearchColorPink
	.globl gText_Rom_5C91A3
gText_Rom_5C91A3: @ 0x085C91A3
	.string "ピンク$"
	.if (. - gText_Rom_5C91A3) > 0x4
	.error "gText_Rom_5C91A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C91A3) < 0x4
	.space 0x4 - (. - gText_Rom_5C91A3)
	.endif
