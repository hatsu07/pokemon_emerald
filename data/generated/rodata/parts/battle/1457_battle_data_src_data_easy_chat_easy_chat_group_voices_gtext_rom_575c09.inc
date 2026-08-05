	@ src/data/easy_chat/easy_chat_group_voices.h:52 easy_chat_group_voices_line_52 (+3 aliases)
	.globl gText_Rom_575C09
gText_Rom_575C09: @ 0x08575C09
	.string "ーーー$"
	.if (. - gText_Rom_575C09) > 0x4
	.error "gText_Rom_575C09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C09) < 0x4
	.space 0x4 - (. - gText_Rom_575C09)
	.endif
