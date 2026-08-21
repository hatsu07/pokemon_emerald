	@ src/data/moves_info.h:1109 moves_info_line_1109 (+1 aliases)
	.globl gText_Rom_5C8FD6
gText_Rom_5C8FD6: @ 0x085C8FD6
	.string "なきごえ{EOS}"
	.if (. - gText_Rom_5C8FD6) > 0x5
	.error "gText_Rom_5C8FD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FD6) < 0x5
	.space 0x5 - (. - gText_Rom_5C8FD6)
	.endif
