	@ src/data/easy_chat/easy_chat_group_time.h:184 easy_chat_group_time_line_184 (+1 aliases)
	.globl gText_Rom_577CC5
gText_Rom_577CC5: @ 0x08577CC5
	.string "どようび$"
	.if (. - gText_Rom_577CC5) > 0x5
	.error "gText_Rom_577CC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CC5) < 0x5
	.space 0x5 - (. - gText_Rom_577CC5)
	.endif
	@ Decoded text from ROM range: offset=0x577CCA, size=0x3
	.string "なつ$"
