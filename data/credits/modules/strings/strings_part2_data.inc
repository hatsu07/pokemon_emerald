	@ src/strings.c:970 gText_DexNational
	.globl gText_DexNational
gText_DexNational: @ 0x085C8BB6
	.string "ぜんこく{EOS}"
	.if (. - gText_DexNational) > 0x5
	.error "gText_DexNational may not grow beyond its original slot"
	.endif
	.if (. - gText_DexNational) < 0x5
	.space 0x5 - (. - gText_DexNational)
	.endif
