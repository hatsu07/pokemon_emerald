	@ src/data/easy_chat/easy_chat_group_actions.h:400 easy_chat_group_actions_line_400
	.globl gText_Rom_5771F5
gText_Rom_5771F5: @ 0x085771F5
	.string "みせて$"
	.if (. - gText_Rom_5771F5) > 0x4
	.error "gText_Rom_5771F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771F5) < 0x4
	.space 0x4 - (. - gText_Rom_5771F5)
	.endif
	@ Decoded text from ROM range: offset=0x5771F9, size=0x6
	.string "みて$"
	.string "みる$"
