	@ src/data/easy_chat/easy_chat_group_battle.h:262 easy_chat_group_battle_line_262
	.globl gText_Rom_575111
gText_Rom_575111: @ 0x08575111
	.string "ポイント$"
	.if (. - gText_Rom_575111) > 0x5
	.error "gText_Rom_575111 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575111) < 0x5
	.space 0x5 - (. - gText_Rom_575111)
	.endif
