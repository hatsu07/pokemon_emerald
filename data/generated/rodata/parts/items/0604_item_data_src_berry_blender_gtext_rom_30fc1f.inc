	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC1F
gText_Rom_30FC1F: @ 0x0830FC1F
	.string "にがい$"
	.if (. - gText_Rom_30FC1F) > 0x4
	.error "gText_Rom_30FC1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC1F) < 0x4
	.space 0x4 - (. - gText_Rom_30FC1F)
	.endif
	.space 0x1, 0x00
