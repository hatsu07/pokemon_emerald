	@ src/data/easy_chat/easy_chat_group_actions.h:322 easy_chat_group_actions_line_322
	.globl gText_Rom_5771C1
gText_Rom_5771C1: @ 0x085771C1
	.string "のがし$"
	.if (. - gText_Rom_5771C1) > 0x4
	.error "gText_Rom_5771C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771C1) < 0x4
	.space 0x4 - (. - gText_Rom_5771C1)
	.endif
	@ Decoded text from ROM range: offset=0x5771C5, size=0x3
	.string "のむ$"
