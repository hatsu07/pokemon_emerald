	@ src/berry_blender.c:309 sText_Ranking
	.globl gText_Rom_30F84D
gText_Rom_30F84D: @ 0x0830F84D
	.string "ランキング$"
	.if (. - gText_Rom_30F84D) > 0x6
	.error "gText_Rom_30F84D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F84D) < 0x6
	.space 0x6 - (. - gText_Rom_30F84D)
	.endif
