	@ src/data/moves_info.h:2818 moves_info_line_2818
	.globl gText_Rom_2EB054
gText_Rom_2EB054: @ 0x082EB054
	.string "くろいきり$"
	.if (. - gText_Rom_2EB054) > 0x6
	.error "gText_Rom_2EB054 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB054) < 0x6
	.space 0x6 - (. - gText_Rom_2EB054)
	.endif
	.incbin "baserom.gba", 0x2eb05a, 0x2

