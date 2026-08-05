	@ src/data/easy_chat/easy_chat_group_time.h:142 easy_chat_group_time_line_142
	.globl gText_Rom_577CA8
gText_Rom_577CA8: @ 0x08577CA8
	.string "スタート$"
	.if (. - gText_Rom_577CA8) > 0x5
	.error "gText_Rom_577CA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CA8) < 0x5
	.space 0x5 - (. - gText_Rom_577CA8)
	.endif
