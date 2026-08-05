	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_5C983E
gText_Rom_5C983E: @ 0x085C983E
	.string "からい$"
	.if (. - gText_Rom_5C983E) > 0x4
	.error "gText_Rom_5C983E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C983E) < 0x4
	.space 0x4 - (. - gText_Rom_5C983E)
	.endif
