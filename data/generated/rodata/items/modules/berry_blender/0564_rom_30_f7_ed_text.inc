	@ src/berry_blender.c:282 sText_HasNoBerriesToPut
	.globl gText_Rom_30F7ED
gText_Rom_30F7ED: @ 0x0830F7ED
	.string "は きのみブレンダーに\nいれる きのみがないようです$"
	.if (. - gText_Rom_30F7ED) > 0x1b
	.error "gText_Rom_30F7ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F7ED) < 0x1b
	.space 0x1b - (. - gText_Rom_30F7ED)
	.endif
