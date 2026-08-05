	@ src/data/easy_chat/easy_chat_group_battle.h:358 easy_chat_group_battle_line_358
	.globl gText_Rom_575158
gText_Rom_575158: @ 0x08575158
	.string "らくしょう$"
	.if (. - gText_Rom_575158) > 0x6
	.error "gText_Rom_575158 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575158) < 0x6
	.space 0x6 - (. - gText_Rom_575158)
	.endif
