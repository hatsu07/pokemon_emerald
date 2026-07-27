	@ src/data/moves_info.h:2252 moves_info_line_2252
	.globl gText_Rom_5CAABC
gText_Rom_5CAABC: @ 0x085CAABC
	.string "どくどく$"
	.if (. - gText_Rom_5CAABC) > 0x5
	.error "gText_Rom_5CAABC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAABC) < 0x5
	.space 0x5 - (. - gText_Rom_5CAABC)
	.endif

