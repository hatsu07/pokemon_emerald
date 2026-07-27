	@ src/berry_blender.c:310 sText_TheLevelIs (+1 aliases)
	.globl gText_Rom_2C1D77
gText_Rom_2C1D77: @ 0x082C1D77
	.string "レベル$"
	.if (. - gText_Rom_2C1D77) > 0x4
	.error "gText_Rom_2C1D77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D77) < 0x4
	.space 0x4 - (. - gText_Rom_2C1D77)
	.endif
	.incbin "baserom.gba", 0x2c1d7b, 0x1

