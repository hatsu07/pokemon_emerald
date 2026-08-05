	@ src/data/easy_chat/easy_chat_group_battle.h:82 easy_chat_group_battle_line_82
	.globl gText_Rom_575089
gText_Rom_575089: @ 0x08575089
	.string "きあい$"
	.if (. - gText_Rom_575089) > 0x4
	.error "gText_Rom_575089 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575089) < 0x4
	.space 0x4 - (. - gText_Rom_575089)
	.endif
