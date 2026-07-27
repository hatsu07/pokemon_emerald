	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A9EBF
gText_Rom_5A9EBF: @ 0x085A9EBF
	.string "ている$"
	.if (. - gText_Rom_5A9EBF) > 0x4
	.error "gText_Rom_5A9EBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9EBF) < 0x4
	.space 0x4 - (. - gText_Rom_5A9EBF)
	.endif
	.incbin "baserom.gba", 0x5a9ec3, 0x26

