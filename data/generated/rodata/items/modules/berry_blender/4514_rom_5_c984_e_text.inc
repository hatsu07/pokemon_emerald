	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_5C984E
gText_Rom_5C984E: @ 0x085C984E
	.string "すっぱい$"
	.if (. - gText_Rom_5C984E) > 0x5
	.error "gText_Rom_5C984E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C984E) < 0x5
	.space 0x5 - (. - gText_Rom_5C984E)
	.endif
