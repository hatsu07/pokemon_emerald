	@ src/berry_blender.c:290 sText_RPM
	.globl gText_Rom_30F843
gText_Rom_30F843: @ 0x0830F843
	.string "rpm$"
	.if (. - gText_Rom_30F843) > 0x4
	.error "gText_Rom_30F843 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F843) < 0x4
	.space 0x4 - (. - gText_Rom_30F843)
	.endif
