	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_57648D
gText_Rom_57648D: @ 0x0857648D
	.string "ません$"
	.if (. - gText_Rom_57648D) > 0x4
	.error "gText_Rom_57648D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57648D) < 0x4
	.space 0x4 - (. - gText_Rom_57648D)
	.endif
