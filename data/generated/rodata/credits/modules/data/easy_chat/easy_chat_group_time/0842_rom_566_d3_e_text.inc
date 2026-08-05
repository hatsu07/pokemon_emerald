	@ src/data/easy_chat/easy_chat_group_time.h:64 easy_chat_group_time_line_64
	.globl gText_Rom_566D3E
gText_Rom_566D3E: @ 0x08566D3E
	.string "おわり$"
	.if (. - gText_Rom_566D3E) > 0x4
	.error "gText_Rom_566D3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566D3E) < 0x4
	.space 0x4 - (. - gText_Rom_566D3E)
	.endif
