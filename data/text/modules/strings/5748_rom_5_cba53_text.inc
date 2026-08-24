	@ src/strings.c:576 gText_TheQuizColon
	.globl gText_TheQuizColon
gText_TheQuizColon: @ 0x085CBA53
	.string "クイズは{EOS}"
	.if (. - gText_TheQuizColon) > 0x5
	.error "gText_TheQuizColon may not grow beyond its original slot"
	.endif
	.if (. - gText_TheQuizColon) < 0x5
	.space 0x5 - (. - gText_TheQuizColon)
	.endif
