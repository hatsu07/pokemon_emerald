	@ src/data/easy_chat/easy_chat_group_status.h:136 easy_chat_group_status_line_136 (+2 aliases)
	.globl gText_Rom_57495A
gText_Rom_57495A: @ 0x0857495A
	.string "かっこよさ$"
	.if (. - gText_Rom_57495A) > 0x6
	.error "gText_Rom_57495A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57495A) < 0x6
	.space 0x6 - (. - gText_Rom_57495A)
	.endif
