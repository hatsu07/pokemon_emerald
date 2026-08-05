	@ src/data/easy_chat/easy_chat_group_actions.h:364 easy_chat_group_actions_line_364
	.globl gText_Rom_5771DE
gText_Rom_5771DE: @ 0x085771DE
	.string "はなす$"
	.if (. - gText_Rom_5771DE) > 0x4
	.error "gText_Rom_5771DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771DE) < 0x4
	.space 0x4 - (. - gText_Rom_5771DE)
	.endif
