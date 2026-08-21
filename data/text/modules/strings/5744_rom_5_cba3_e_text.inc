	@ src/strings.c:574 gText_SetTheQuizAnswer
	.globl gText_Rom_5CBA3E
gText_Rom_5CBA3E: @ 0x085CBA3E
	.string "クイズの こたえを つくろう!{EOS}"
	.if (. - gText_Rom_5CBA3E) > 0x10
	.error "gText_Rom_5CBA3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA3E) < 0x10
	.space 0x10 - (. - gText_Rom_5CBA3E)
	.endif
