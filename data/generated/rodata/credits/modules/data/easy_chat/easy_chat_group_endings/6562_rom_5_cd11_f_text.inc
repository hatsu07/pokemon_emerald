	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_5CD11F
gText_Rom_5CD11F: @ 0x085CD11F
	.string "します$"
	.if (. - gText_Rom_5CD11F) > 0x4
	.error "gText_Rom_5CD11F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD11F) < 0x4
	.space 0x4 - (. - gText_Rom_5CD11F)
	.endif
