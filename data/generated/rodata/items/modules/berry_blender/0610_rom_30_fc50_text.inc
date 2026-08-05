	@ src/berry_blender.c:316 sText_234Players
	.globl gText_Rom_30FC50
gText_Rom_30FC50: @ 0x0830FC50
	.string "ふたり\nさんにん\nよにん$"
	.if (. - gText_Rom_30FC50) > 0xd
	.error "gText_Rom_30FC50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC50) < 0xd
	.space 0xd - (. - gText_Rom_30FC50)
	.endif
	.space 0x3, 0x00
