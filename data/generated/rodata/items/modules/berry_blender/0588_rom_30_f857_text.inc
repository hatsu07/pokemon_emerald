	@ src/berry_blender.c:311 sText_TheFeelIs
	.globl gText_Rom_30F857
gText_Rom_30F857: @ 0x0830F857
	.string "で なめらかさは$"
	.if (. - gText_Rom_30F857) > 0x9
	.error "gText_Rom_30F857 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F857) < 0x9
	.space 0x9 - (. - gText_Rom_30F857)
	.endif
