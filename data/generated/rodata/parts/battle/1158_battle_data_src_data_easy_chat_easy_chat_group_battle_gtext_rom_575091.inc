	@ src/data/easy_chat/easy_chat_group_battle.h:94 easy_chat_group_battle_line_94 (+1 aliases)
	.globl gText_Rom_575091
gText_Rom_575091: @ 0x08575091
	.string "きりふだ$"
	.if (. - gText_Rom_575091) > 0x5
	.error "gText_Rom_575091 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575091) < 0x5
	.space 0x5 - (. - gText_Rom_575091)
	.endif
