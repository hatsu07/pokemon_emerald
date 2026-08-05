	@ src/data/easy_chat/easy_chat_group_battle.h:292 easy_chat_group_battle_line_292
	.globl gText_Rom_575127
gText_Rom_575127: @ 0x08575127
	.string "まけて$"
	.if (. - gText_Rom_575127) > 0x4
	.error "gText_Rom_575127 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575127) < 0x4
	.space 0x4 - (. - gText_Rom_575127)
	.endif
