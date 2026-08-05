	@ src/berry_blender.c:919 berry_blender_line_919 (+3 aliases)
	.globl gText_Rom_30FC1A
gText_Rom_30FC1A: @ 0x0830FC1A
	.string "あまい$"
	.if (. - gText_Rom_30FC1A) > 0x4
	.error "gText_Rom_30FC1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC1A) < 0x4
	.space 0x4 - (. - gText_Rom_30FC1A)
	.endif
	.space 0x1, 0x00
