	@ src/berry_blender.c:288 sText_Sec (+1 aliases)
	.globl gText_Rom_30F837
gText_Rom_30F837: @ 0x0830F837
	.string "びょう$"
	.if (. - gText_Rom_30F837) > 0x4
	.error "gText_Rom_30F837 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F837) < 0x4
	.space 0x4 - (. - gText_Rom_30F837)
	.endif
