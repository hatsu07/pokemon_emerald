	@ src/data/easy_chat/easy_chat_group_endings.h:286 easy_chat_group_endings_line_286
	.globl gText_Rom_576463
gText_Rom_576463: @ 0x08576463
	.string "なんだね$"
	.if (. - gText_Rom_576463) > 0x5
	.error "gText_Rom_576463 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576463) < 0x5
	.space 0x5 - (. - gText_Rom_576463)
	.endif
