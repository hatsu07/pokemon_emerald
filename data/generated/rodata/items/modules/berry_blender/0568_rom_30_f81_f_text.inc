	@ src/berry_blender.c:284 sText_BlendingResults
	.globl gText_Rom_30F81F
gText_Rom_30F81F: @ 0x0830F81F
	.string "まぜたけっか$"
	.if (. - gText_Rom_30F81F) > 0x7
	.error "gText_Rom_30F81F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F81F) < 0x7
	.space 0x7 - (. - gText_Rom_30F81F)
	.endif
	@ Decoded text from ROM range: offset=0x30F826, size=0x7
	.string "いれた　たね$"
