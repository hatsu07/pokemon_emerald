	@ src/data/easy_chat/easy_chat_group_battle.h:16 easy_chat_group_battle_line_16
	.globl gText_Rom_575059
gText_Rom_575059: @ 0x08575059
	.string "いちばん$"
	.if (. - gText_Rom_575059) > 0x5
	.error "gText_Rom_575059 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575059) < 0x5
	.space 0x5 - (. - gText_Rom_575059)
	.endif
