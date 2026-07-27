	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A9DE0
gText_Rom_5A9DE0: @ 0x085A9DE0
	.string "ている$"
	.if (. - gText_Rom_5A9DE0) > 0x4
	.error "gText_Rom_5A9DE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9DE0) < 0x4
	.space 0x4 - (. - gText_Rom_5A9DE0)
	.endif

