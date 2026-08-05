	@ src/data/easy_chat/easy_chat_group_actions.h:358 easy_chat_group_actions_line_358
	.globl gText_Rom_5771DA
gText_Rom_5771DA: @ 0x085771DA
	.string "はなし$"
	.if (. - gText_Rom_5771DA) > 0x4
	.error "gText_Rom_5771DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771DA) < 0x4
	.space 0x4 - (. - gText_Rom_5771DA)
	.endif
