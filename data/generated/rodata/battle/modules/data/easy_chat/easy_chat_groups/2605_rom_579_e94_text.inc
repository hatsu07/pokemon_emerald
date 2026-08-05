	@ src/data/easy_chat/easy_chat_groups.h:92 easy_chat_groups_line_92
	.globl gText_Rom_579E94
gText_Rom_579E94: @ 0x08579E94
	.string "きもち$"
	.if (. - gText_Rom_579E94) > 0x4
	.error "gText_Rom_579E94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E94) < 0x4
	.space 0x4 - (. - gText_Rom_579E94)
	.endif
