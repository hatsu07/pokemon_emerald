	@ src/data/moves_info.h:4783 moves_info_line_4783
	.globl gText_Rom_2EB2C4
gText_Rom_2EB2C4: @ 0x082EB2C4
	.string "でんじほう$"
	.if (. - gText_Rom_2EB2C4) > 0x6
	.error "gText_Rom_2EB2C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2C4) < 0x6
	.space 0x6 - (. - gText_Rom_2EB2C4)
	.endif
	.incbin "baserom.gba", 0x2eb2ca, 0x2

