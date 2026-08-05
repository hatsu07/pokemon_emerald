	@ src/data/easy_chat/easy_chat_group_actions.h:196 easy_chat_group_actions_line_196
	.globl gText_Rom_57716E
gText_Rom_57716E: @ 0x0857716E
	.string "しって$"
	.if (. - gText_Rom_57716E) > 0x4
	.error "gText_Rom_57716E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57716E) < 0x4
	.space 0x4 - (. - gText_Rom_57716E)
	.endif
	@ Decoded text from ROM range: offset=0x577172, size=0x3
	.string "して$"
