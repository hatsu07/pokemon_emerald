	@ src/data/easy_chat/easy_chat_group_battle.h:364 easy_chat_group_battle_line_364
	.globl gText_Rom_57515E
gText_Rom_57515E: @ 0x0857515E
	.string "リーダー$"
	.if (. - gText_Rom_57515E) > 0x5
	.error "gText_Rom_57515E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57515E) < 0x5
	.space 0x5 - (. - gText_Rom_57515E)
	.endif
