	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5ECD8C
gText_Rom_5ECD8C: @ 0x085ECD8C
	.string "しまう$"
	.if (. - gText_Rom_5ECD8C) > 0x4
	.error "gText_Rom_5ECD8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECD8C) < 0x4
	.space 0x4 - (. - gText_Rom_5ECD8C)
	.endif
	.space 0x14, 0x00

