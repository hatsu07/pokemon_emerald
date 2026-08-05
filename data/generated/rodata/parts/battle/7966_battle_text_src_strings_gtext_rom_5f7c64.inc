	@ src/strings.c:1135 gText_MoveRelearnerPP
	.globl gText_Rom_5F7C64
gText_Rom_5F7C64: @ 0x085F7C64
	.string "PP/$"
	.if (. - gText_Rom_5F7C64) > 0x4
	.error "gText_Rom_5F7C64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C64) < 0x4
	.space 0x4 - (. - gText_Rom_5F7C64)
	.endif
