	@ src/data/moves_info.h:2766 moves_info_line_2766
	.globl gText_Rom_2EB044
gText_Rom_2EB044: @ 0x082EB044
	.string "バリアー$"
	.if (. - gText_Rom_2EB044) > 0x5
	.error "gText_Rom_2EB044 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB044) < 0x5
	.space 0x5 - (. - gText_Rom_2EB044)
	.endif
	.incbin "baserom.gba", 0x2eb049, 0x3

