	@ src/data/easy_chat/easy_chat_group_misc.h:40 easy_chat_group_misc_line_40
	.globl gText_Rom_577F35
gText_Rom_577F35: @ 0x08577F35
	.string "あんな$"
	.if (. - gText_Rom_577F35) > 0x4
	.error "gText_Rom_577F35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F35) < 0x4
	.space 0x4 - (. - gText_Rom_577F35)
	.endif
	@ Decoded text from ROM range: offset=0x577F39, size=0x9
	.string "うえ$"
	.string "おく$"
	.string "こう$"
