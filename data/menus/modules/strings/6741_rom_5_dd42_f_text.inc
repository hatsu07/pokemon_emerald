	@ src/strings.c:895 gText_Prev
	.globl gText_Prev
gText_Prev: @ 0x085DD42F
	.string "ぜんかい{EOS}"
	.if (. - gText_Prev) > 0x5
	.error "gText_Prev may not grow beyond its original slot"
	.endif
	.if (. - gText_Prev) < 0x5
	.space 0x5 - (. - gText_Prev)
	.endif

