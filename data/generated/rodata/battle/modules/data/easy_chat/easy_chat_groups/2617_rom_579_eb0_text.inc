	@ src/data/easy_chat/easy_chat_groups.h:134 easy_chat_groups_line_134
	.globl gText_Rom_579EB0
gText_Rom_579EB0: @ 0x08579EB0
	.string "あれこれ$"
	.if (. - gText_Rom_579EB0) > 0x5
	.error "gText_Rom_579EB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EB0) < 0x5
	.space 0x5 - (. - gText_Rom_579EB0)
	.endif
