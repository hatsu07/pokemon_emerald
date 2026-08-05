	@ src/data/easy_chat/easy_chat_group_battle.h:70 easy_chat_group_battle_line_70
	.globl gText_Rom_57507F
gText_Rom_57507F: @ 0x0857507F
	.string "かてる$"
	.if (. - gText_Rom_57507F) > 0x4
	.error "gText_Rom_57507F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57507F) < 0x4
	.space 0x4 - (. - gText_Rom_57507F)
	.endif
