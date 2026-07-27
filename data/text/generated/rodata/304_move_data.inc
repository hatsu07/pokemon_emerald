	@ src/data/moves_info.h:48 moves_info_line_48
	.globl gText_Rom_6CBDA9
gText_Rom_6CBDA9: @ 0x086CBDA9
	.string "はたく$"
	.if (. - gText_Rom_6CBDA9) > 0x4
	.error "gText_Rom_6CBDA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_6CBDA9) < 0x4
	.space 0x4 - (. - gText_Rom_6CBDA9)
	.endif
	.incbin "baserom.gba", 0x6cbdad, 0x15279

	@ src/data/easy_chat/easy_chat_group_voices.h:298 easy_chat_group_voices_line_298
	.globl gText_Rom_6E1026
gText_Rom_6E1026: @ 0x086E1026
	.string "ほほほ$"
	.if (. - gText_Rom_6E1026) > 0x4
	.error "gText_Rom_6E1026 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_6E1026) < 0x4
	.space 0x4 - (. - gText_Rom_6E1026)
	.endif
	.incbin "baserom.gba", 0x6e102a, 0x4b0a8

