	@ src/data/moves_info.h:7142 moves_info_line_7142
	.globl gText_Rom_2EB5BC
gText_Rom_2EB5BC: @ 0x082EB5BC
	.string "リフレッシュ$"
	.if (. - gText_Rom_2EB5BC) > 0x7
	.error "gText_Rom_2EB5BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5BC) < 0x7
	.space 0x7 - (. - gText_Rom_2EB5BC)
	.endif
	.incbin "baserom.gba", 0x2eb5c3, 0x1

