	@ src/berry_blender.c:275 berry_blender_line_275 (+1 aliases)
	.globl gText_Rom_575778
gText_Rom_575778: @ 0x08575778
	.string "おばさん$"
	.if (. - gText_Rom_575778) > 0x5
	.error "gText_Rom_575778 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575778) < 0x5
	.space 0x5 - (. - gText_Rom_575778)
	.endif
