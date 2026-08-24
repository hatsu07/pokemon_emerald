	.globl gText_Rom_5C983E

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_5C983E
gText_Rom_5C983E: @ 0x085C983E
	.string "からい{EOS}"
	.if (. - gText_Rom_5C983E) > 0x4
	.error "gText_Rom_5C983E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C983E) < 0x4
	.space 0x4 - (. - gText_Rom_5C983E)
	.endif

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_5C9842
gText_Rom_5C9842: @ 0x085C9842
	.string "しぶい{EOS}"
	.if (. - gText_Rom_5C9842) > 0x4
	.error "gText_Rom_5C9842 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9842) < 0x4
	.space 0x4 - (. - gText_Rom_5C9842)
	.endif

	@ src/berry_blender.c:919 berry_blender_line_919 (+3 aliases)
	.globl gText_Rom_5C9846
gText_Rom_5C9846: @ 0x085C9846
	.string "あまい{EOS}"
	.if (. - gText_Rom_5C9846) > 0x4
	.error "gText_Rom_5C9846 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9846) < 0x4
	.space 0x4 - (. - gText_Rom_5C9846)
	.endif

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_5C984A
gText_Rom_5C984A: @ 0x085C984A
	.string "にがい{EOS}"
	.if (. - gText_Rom_5C984A) > 0x4
	.error "gText_Rom_5C984A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C984A) < 0x4
	.space 0x4 - (. - gText_Rom_5C984A)
	.endif

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_5C984E
gText_Rom_5C984E: @ 0x085C984E
	.string "すっぱい{EOS}"
	.if (. - gText_Rom_5C984E) > 0x5
	.error "gText_Rom_5C984E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C984E) < 0x5
	.space 0x5 - (. - gText_Rom_5C984E)
	.endif
