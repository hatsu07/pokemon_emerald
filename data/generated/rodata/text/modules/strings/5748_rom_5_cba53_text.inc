	@ src/strings.c:576 gText_TheQuizColon
	.globl gText_Rom_5CBA53
gText_Rom_5CBA53: @ 0x085CBA53
	.string "クイズは{EOS}"
	.if (. - gText_Rom_5CBA53) > 0x5
	.error "gText_Rom_5CBA53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA53) < 0x5
	.space 0x5 - (. - gText_Rom_5CBA53)
	.endif
