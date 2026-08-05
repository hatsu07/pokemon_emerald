	@ src/data/easy_chat/easy_chat_group_battle.h:328 easy_chat_group_battle_line_328
	.globl gText_Rom_575142
gText_Rom_575142: @ 0x08575142
	.string "むてき$"
	.if (. - gText_Rom_575142) > 0x4
	.error "gText_Rom_575142 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575142) < 0x4
	.space 0x4 - (. - gText_Rom_575142)
	.endif
