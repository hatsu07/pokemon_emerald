	@ src/data/moves_info.h:1741 moves_info_line_1741
	.globl gText_Rom_5E9012
gText_Rom_5E9012: @ 0x085E9012
	.string "すいとる{EOS}"
	.if (. - gText_Rom_5E9012) > 0x5
	.error "gText_Rom_5E9012 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9012) < 0x5
	.space 0x5 - (. - gText_Rom_5E9012)
	.endif
	@ analyzed canonical ROM range 0x085E9017-0x085E9044
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0200, 0x0750, 0x0016, 0x2706, 0x2D41, 0x0E00
	.2byte 0x1102, 0x0336, 0x0E0B, 0xFE13, 0x0814, 0x030A, 0x002D
