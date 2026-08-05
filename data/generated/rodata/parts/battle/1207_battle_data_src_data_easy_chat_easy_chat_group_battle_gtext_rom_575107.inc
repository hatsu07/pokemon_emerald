	@ src/data/easy_chat/easy_chat_group_battle.h:250 easy_chat_group_battle_line_250
	.globl gText_Rom_575107
gText_Rom_575107: @ 0x08575107
	.string "ファイト$"
	.if (. - gText_Rom_575107) > 0x5
	.error "gText_Rom_575107 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575107) < 0x5
	.space 0x5 - (. - gText_Rom_575107)
	.endif
