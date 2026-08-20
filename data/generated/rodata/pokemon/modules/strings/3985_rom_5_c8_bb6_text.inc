	@ src/strings.c:970 gText_DexNational
	.globl gText_Rom_5C8BB6
gText_Rom_5C8BB6: @ 0x085C8BB6
	.string "ぜんこく{EOS}"
	.if (. - gText_Rom_5C8BB6) > 0x5
	.error "gText_Rom_5C8BB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8BB6) < 0x5
	.space 0x5 - (. - gText_Rom_5C8BB6)
	.endif
