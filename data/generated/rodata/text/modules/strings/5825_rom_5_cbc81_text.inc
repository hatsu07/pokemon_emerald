	@ src/strings.c:1166 gText_Quiz
	.globl gText_Rom_5CBC81
gText_Rom_5CBC81: @ 0x085CBC81
	.string "クイズ{EOS}"
	.if (. - gText_Rom_5CBC81) > 0x4
	.error "gText_Rom_5CBC81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC81) < 0x4
	.space 0x4 - (. - gText_Rom_5CBC81)
	.endif
