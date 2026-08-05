	@ asm/berry_blender.s:7981 Blender_PrintBlendingResults
	.globl gText_Rom_30F834
gText_Rom_30F834: @ 0x0830F834
	.string "ふん$"
	.if (. - gText_Rom_30F834) > 0x3
	.error "gText_Rom_30F834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F834) < 0x3
	.space 0x3 - (. - gText_Rom_30F834)
	.endif
