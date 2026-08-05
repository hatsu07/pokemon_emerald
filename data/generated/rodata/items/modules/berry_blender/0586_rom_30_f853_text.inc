	@ src/berry_blender.c:310 sText_TheLevelIs (+1 aliases)
	.globl gText_Rom_30F853
gText_Rom_30F853: @ 0x0830F853
	.string "レベル$"
	.if (. - gText_Rom_30F853) > 0x4
	.error "gText_Rom_30F853 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F853) < 0x4
	.space 0x4 - (. - gText_Rom_30F853)
	.endif
