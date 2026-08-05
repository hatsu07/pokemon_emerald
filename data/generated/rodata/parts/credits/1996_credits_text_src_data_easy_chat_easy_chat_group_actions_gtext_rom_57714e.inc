	@ src/data/easy_chat/easy_chat_group_actions.h:142 easy_chat_group_actions_line_142
	.globl gText_Rom_57714E
gText_Rom_57714E: @ 0x0857714E
	.string "きいて$"
	.if (. - gText_Rom_57714E) > 0x4
	.error "gText_Rom_57714E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57714E) < 0x4
	.space 0x4 - (. - gText_Rom_57714E)
	.endif
	@ Decoded text from ROM range: offset=0x577152, size=0x3
	.string "きく$"
