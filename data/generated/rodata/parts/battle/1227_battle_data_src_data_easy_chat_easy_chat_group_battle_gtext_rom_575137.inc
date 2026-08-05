	@ src/data/easy_chat/easy_chat_group_battle.h:316 easy_chat_group_battle_line_316
	.globl gText_Rom_575137
gText_Rom_575137: @ 0x08575137
	.string "みとめない$"
	.if (. - gText_Rom_575137) > 0x6
	.error "gText_Rom_575137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575137) < 0x6
	.space 0x6 - (. - gText_Rom_575137)
	.endif
