	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC24
gText_Rom_30FC24: @ 0x0830FC24
	.string "すっぱい$"
	.if (. - gText_Rom_30FC24) > 0x5
	.error "gText_Rom_30FC24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC24) < 0x5
	.space 0x5 - (. - gText_Rom_30FC24)
	.endif
