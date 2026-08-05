	@ src/berry_blender.c:919 berry_blender_line_919 (+3 aliases)
	.globl gText_Rom_5C9846
gText_Rom_5C9846: @ 0x085C9846
	.string "あまい$"
	.if (. - gText_Rom_5C9846) > 0x4
	.error "gText_Rom_5C9846 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9846) < 0x4
	.space 0x4 - (. - gText_Rom_5C9846)
	.endif
