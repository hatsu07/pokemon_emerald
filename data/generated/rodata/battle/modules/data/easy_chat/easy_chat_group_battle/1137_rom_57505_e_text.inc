	@ src/data/easy_chat/easy_chat_group_battle.h:22 easy_chat_group_battle_line_22
	.globl gText_Rom_57505E
gText_Rom_57505E: @ 0x0857505E
	.string "かくご$"
	.if (. - gText_Rom_57505E) > 0x4
	.error "gText_Rom_57505E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57505E) < 0x4
	.space 0x4 - (. - gText_Rom_57505E)
	.endif
