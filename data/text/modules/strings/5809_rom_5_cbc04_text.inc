	@ src/strings.c:606 gText_FansQuestion
	.globl gText_FansQuestion
gText_FansQuestion: @ 0x085CBC04
	.string "ファンのしつもん{EOS}"
	.if (. - gText_FansQuestion) > 0x9
	.error "gText_FansQuestion may not grow beyond its original slot"
	.endif
	.if (. - gText_FansQuestion) < 0x9
	.space 0x9 - (. - gText_FansQuestion)
	.endif
