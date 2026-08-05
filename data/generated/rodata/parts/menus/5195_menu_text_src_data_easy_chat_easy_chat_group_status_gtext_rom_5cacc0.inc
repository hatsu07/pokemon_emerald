	@ src/data/easy_chat/easy_chat_group_status.h:148 easy_chat_group_status_line_148
	.globl gText_Rom_5CACC0
gText_Rom_5CACC0: @ 0x085CACC0
	.string "かわいい$"
	.if (. - gText_Rom_5CACC0) > 0x5
	.error "gText_Rom_5CACC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACC0) < 0x5
	.space 0x5 - (. - gText_Rom_5CACC0)
	.endif
	@ Decoded text from ROM range: offset=0x5CACC5, size=0x7
	.string "かしこそうな$"
