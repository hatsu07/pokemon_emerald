	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_5C9842
gText_Rom_5C9842: @ 0x085C9842
	.string "しぶい$"
	.if (. - gText_Rom_5C9842) > 0x4
	.error "gText_Rom_5C9842 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9842) < 0x4
	.space 0x4 - (. - gText_Rom_5C9842)
	.endif
