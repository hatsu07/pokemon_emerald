	@ src/data/easy_chat/easy_chat_group_status.h:130 easy_chat_group_status_line_130
	.globl gText_Rom_574954
gText_Rom_574954: @ 0x08574954
	.string "かっこいい$"
	.if (. - gText_Rom_574954) > 0x6
	.error "gText_Rom_574954 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574954) < 0x6
	.space 0x6 - (. - gText_Rom_574954)
	.endif
