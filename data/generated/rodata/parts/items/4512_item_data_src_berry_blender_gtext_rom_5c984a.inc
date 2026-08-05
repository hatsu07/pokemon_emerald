	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_5C984A
gText_Rom_5C984A: @ 0x085C984A
	.string "にがい$"
	.if (. - gText_Rom_5C984A) > 0x4
	.error "gText_Rom_5C984A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C984A) < 0x4
	.space 0x4 - (. - gText_Rom_5C984A)
	.endif
