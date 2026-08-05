	@ src/berry_blender.c:281 sText_YourPokeblockCaseIsFull
	.globl gText_Rom_30F7D8
gText_Rom_30F7D8: @ 0x0830F7D8
	.string "ポロックケースが いっぱいの ようです\p$"
	.if (. - gText_Rom_30F7D8) > 0x15
	.error "gText_Rom_30F7D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F7D8) < 0x15
	.space 0x15 - (. - gText_Rom_30F7D8)
	.endif
