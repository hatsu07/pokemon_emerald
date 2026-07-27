	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A98C5
gText_Rom_5A98C5: @ 0x085A98C5
	.string "ている$"
	.if (. - gText_Rom_5A98C5) > 0x4
	.error "gText_Rom_5A98C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A98C5) < 0x4
	.space 0x4 - (. - gText_Rom_5A98C5)
	.endif
	.incbin "baserom.gba", 0x5a98c9, 0xe

