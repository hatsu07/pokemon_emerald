	@ src/data/moves_info.h:504 moves_info_line_504
	.globl gText_Rom_5E847C
gText_Rom_5E847C: @ 0x085E847C
	.string "しめつける$"
	.if (. - gText_Rom_5E847C) > 0x6
	.error "gText_Rom_5E847C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E847C) < 0x6
	.space 0x6 - (. - gText_Rom_5E847C)
	.endif
	.incbin "baserom.gba", 0x5e8482, 0x2b

