	@ src/strings.c:1166 gText_Quiz
	.globl gText_Quiz
gText_Quiz: @ 0x085CBC81
	.string "クイズ{EOS}"
	.if (. - gText_Quiz) > 0x4
	.error "gText_Quiz may not grow beyond its original slot"
	.endif
	.if (. - gText_Quiz) < 0x4
	.space 0x4 - (. - gText_Quiz)
	.endif
