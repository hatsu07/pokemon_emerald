	@ src/data/easy_chat/easy_chat_groups.h:155 easy_chat_groups_line_155
	.globl gText_Rom_579EC0
gText_Rom_579EC0: @ 0x08579EC0
	.string "わざ1$"
	.if (. - gText_Rom_579EC0) > 0x4
	.error "gText_Rom_579EC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EC0) < 0x4
	.space 0x4 - (. - gText_Rom_579EC0)
	.endif
